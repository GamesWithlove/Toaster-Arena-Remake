// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGUserParameterGet.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGGraph.h"
#include "PCGParamData.h"
#include "PCGPin.h"
#include "PCGSubgraph.h"
#include "Data/PCGUserParametersData.h"
#include "Helpers/PCGDynamicTrackingHelpers.h"
#include "Helpers/PCGPropertyHelpers.h"
#include "Metadata/PCGAttributePropertySelector.h"

#include "StructUtils/PropertyBag.h"
#include "StructUtils/StructView.h"

#define LOCTEXT_NAMESPACE "PCGUserParameterGetElement"

namespace PCGUserParameterGetSettings
{
	/**
	* Utility function to get the first valid instanced property bag
	* We define valid as if the ParameterOverrides from a GraphInstance and UserParameters from the graph owner of the node have the same property bag.
	* By construction, it should be always the case, but we want to prevent cases where graph instances depend on other graph instances, that has changed their graph
	* but didn't propagate the changes.
	* If the property bags aren't the same, we are traversing the graph instance hierarchy to find the first graph/graph instance that matches.
	*/
	TArray<FConstStructView, TInlineAllocator<16>> GetValidLayouts(FPCGContext& InContext)
	{
		TArray<FConstStructView, TInlineAllocator<16>> Layouts;
		const UPCGGraphInterface* GraphInterface = nullptr;

		// First we will read from the input if we find an input for this graph, set by the subgraph element, then use it.
		TArray<FPCGTaggedData> UserParameterData = InContext.InputData.GetTaggedTypedInputs<UPCGUserParametersData>(PCGBaseSubgraphConstants::UserParameterTagData);
		if (!UserParameterData.IsEmpty())
		{
#if WITH_EDITOR
			// Safe guard to make sure we always have one and only one data of this type.
			ensure(UserParameterData.Num() == 1);
#endif // WITH_EDITOR
			if (const UPCGUserParametersData* OverrideParametersData = CastChecked<UPCGUserParametersData>(UserParameterData[0].Data, ECastCheckedType::NullAllowed))
			{
				Layouts.Emplace(OverrideParametersData->UserParameters);

				const UPCGUserParametersData* UpstreamData = OverrideParametersData->UpstreamData.Get();
				while (UpstreamData)
				{
					Layouts.Emplace(UpstreamData->UserParameters);
					UpstreamData = UpstreamData->UpstreamData.Get();
				}
			}
			else
			{
				PCGE_LOG_C(Error, LogOnly, &InContext, LOCTEXT("InvalidUserParameterData", "Internal error, PCG User Parameters Data is null"));
				return {};
			}
		}

		// We gather the outer graph of this node, to make sure it matches our interface.
		const UPCGGraph* GraphFromNode = Cast<UPCGGraph>(InContext.Node->GetOuter());
		check(GraphFromNode);
		FConstStructView GraphFromNodeParameters = GraphFromNode->GetUserParametersStruct() ? GraphFromNode->GetUserParametersStruct()->GetValue() : FConstStructView{};

		// If we don't have a graph instance, we just use the user parameters from the node graph owner.
		const UPCGComponent* SourceComponent = InContext.SourceComponent.Get();
		const UPCGGraphInstance* GraphInstance = SourceComponent ? SourceComponent->GetGraphInstance() : nullptr;

		// If there is no user parameters, just use the one from the graph.
		// Go down the graph instance chain and take all layouts. Revert back to original graph node params if none were found
		bool bAddedNonTrivialLayout = false;

		while (GraphInstance)
		{
			FConstStructView GraphParameters = GraphInstance->GetUserParametersStruct() ? GraphInstance->GetUserParametersStruct()->GetValue() : FConstStructView{};
			if (GraphParameters.IsValid())
			{
				bAddedNonTrivialLayout = true;
				Layouts.Add(GraphParameters);
			}

			GraphInstance = Cast<UPCGGraphInstance>(GraphInstance->Graph);
		}

		if (!bAddedNonTrivialLayout && GraphFromNodeParameters.IsValid())
		{
			Layouts.Add(GraphFromNodeParameters);
		}

		return Layouts;
	}
}

UPCGUserParameterGetSettings::UPCGUserParameterGetSettings(const FObjectInitializer& ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	bExposeToLibrary = false;
#endif
}

TArray<FPCGPinProperties> UPCGUserParameterGetSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PropertyName, EPCGDataType::Param);

	return PinProperties;
}

void UPCGUserParameterGetSettings::UpdatePropertyName(FName InNewName)
{
	if (PropertyName != InNewName)
	{
		Modify();
		PropertyName = InNewName;
	}
}

FPCGElementPtr UPCGUserParameterGetSettings::CreateElement() const
{
	return MakeShared<FPCGUserParameterGetElement>();
}

TArray<FPCGPinProperties> UPCGGenericUserParameterGetSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Param);

	return PinProperties;
}

FString UPCGGenericUserParameterGetSettings::GetAdditionalTitleInformation() const
{
	return PropertyPath;
}

FPCGElementPtr UPCGGenericUserParameterGetSettings::CreateElement() const
{
	return MakeShared<FPCGUserParameterGetElement>();
}

bool FPCGUserParameterGetElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGUserParameterGetElement::Execute);

	check(Context);
	const UPCGUserParameterGetSettings* Settings = Context->GetInputSettings<UPCGUserParameterGetSettings>();
	const UPCGGenericUserParameterGetSettings* GenericSettings = Context->GetInputSettings<UPCGGenericUserParameterGetSettings>();
	check(Settings || GenericSettings);

	bool bForceQuiet = (GenericSettings && GenericSettings->bQuiet);

	TArray<FConstStructView, TInlineAllocator<16>> ValidLayouts = PCGUserParameterGetSettings::GetValidLayouts(*Context);

	// Remove layouts we're not interested in, as per settings
	if (ValidLayouts.Num() > 1)
	{
		if (GenericSettings)
		{
			if (GenericSettings->Source == EPCGUserParameterSource::Current)
			{
				ValidLayouts.SetNum(1);
			}
			else if (GenericSettings->Source == EPCGUserParameterSource::Upstream)
			{
				ValidLayouts.RemoveAt(0);
			}
			else if (GenericSettings->Source == EPCGUserParameterSource::Root)
			{
				ValidLayouts.RemoveAtSwap(0);
				ValidLayouts.SetNum(1);
			}
		}
		else
		{
			// Not a generic get settings -> default to taking the current layout only
			ValidLayouts.SetNum(1);
		}
	}

	for(int CurrentLayoutIndex = 0; CurrentLayoutIndex < ValidLayouts.Num(); ++CurrentLayoutIndex)
	{
		const bool bIsLastIteration = (CurrentLayoutIndex == ValidLayouts.Num() - 1);
		FConstStructView Parameters = ValidLayouts[CurrentLayoutIndex];
		const UScriptStruct* PropertyBag = Parameters.GetScriptStruct();

		PCGPropertyHelpers::FExtractorParameters ExtractorParameters;

		if (Settings)
		{
			ExtractorParameters = PCGPropertyHelpers::FExtractorParameters(Parameters.GetMemory(),
				PropertyBag,
				FPCGAttributePropertySelector::CreateAttributeSelector(Settings->PropertyName),
				Settings->PropertyName,
				Settings->bForceObjectAndStructExtraction,
				/*bPropertyNeedsToBeVisible=*/false);
		}
		else if (GenericSettings)
		{
			ExtractorParameters = PCGPropertyHelpers::FExtractorParameters(Parameters.GetMemory(),
				PropertyBag,
				GenericSettings->PropertyPath,
				GenericSettings->OutputAttributeName,
				GenericSettings->bForceObjectAndStructExtraction,
				/*bPropertyNeedsToBeVisible=*/false);
		}

		// Don't care for object traversed in non-editor build, since it is only useful for tracking.
		TSet<FSoftObjectPath>* ObjectTraversedPtr = nullptr;
#if WITH_EDITOR
		TSet<FSoftObjectPath> ObjectTraversed;
		ObjectTraversedPtr = &ObjectTraversed;
#endif // WITH_EDITOR

		if (UPCGParamData* ParamData = PCGPropertyHelpers::ExtractPropertyAsAttributeSet(ExtractorParameters, Context, ObjectTraversedPtr, /*bQuiet=*/bForceQuiet || !bIsLastIteration))
		{
			Context->OutputData.TaggedData.Emplace_GetRef().Data = ParamData;
		}
		else if (!bIsLastIteration)
		{
			continue;
		}
		else // Final iteration, should break & report errors
		{
			if (!ExtractorParameters.PropertySelectors.IsEmpty())
			{
				PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("InvalidProperty", "Could not find the property '{0}' in the user parameters"), ExtractorParameters.PropertySelectors[0].GetDisplayText()));
			}
			else
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidNamelessProperty", "Could not find nameless property in the user parameters"));
			}
		}

		// Register dynamic tracking
#if WITH_EDITOR
		if (!ObjectTraversed.IsEmpty())
		{
			FPCGDynamicTrackingHelper DynamicTracking;
			DynamicTracking.EnableAndInitialize(Context, ObjectTraversed.Num());
			for (FSoftObjectPath& Path : ObjectTraversed)
			{
				DynamicTracking.AddToTracking(FPCGSelectionKey::CreateFromPath(std::move(Path)), /*bCulled=*/false);
			}

			DynamicTracking.Finalize(Context);
		}
#endif // WITH_EDITOR

		break;
	}
	
	return true;
}

#undef LOCTEXT_NAMESPACE