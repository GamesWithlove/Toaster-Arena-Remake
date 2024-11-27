// Copyright Epic Games, Inc. All Rights Reserved.

#include "Metadata/PCGObjectPropertyOverride.h"

#include "PCGContext.h"
#include "PCGData.h"
#include "PCGModule.h"
#include "PCGParamData.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"

#include "GameFramework/Actor.h"

#define LOCTEXT_NAMESPACE "PCGObjectPropertyOverride"

namespace PCGObjectPropertyOverrideHelpers
{
	FPCGPinProperties CreateObjectPropertiesOverridePin(FName Label, const FText& Tooltip)
	{
		FPCGPinProperties ObjectOverridePinProperties(Label, EPCGDataType::Param, /*bAllowMultipleConnections=*/false, /*bAllowMultipleData=*/false, Tooltip);
		ObjectOverridePinProperties.SetAdvancedPin();
		return ObjectOverridePinProperties;
	}

	void ApplyOverrides(const TArray<FPCGObjectPropertyOverrideDescription>& InObjectPropertyOverrideDescriptions, const TArray<TPair<UObject*, int32>>& TargetObjectToOverrideIndices, FName OverridesPinLabel, int32 InInputDataIndex, FPCGContext* Context)
	{
		if (!Context || TargetObjectToOverrideIndices.IsEmpty())
		{
			return;
		}

		const TArray<FPCGTaggedData> OverrideInputs = Context->InputData.GetInputsByPin(OverridesPinLabel);

		int32 InputIndex = InInputDataIndex;

		if (OverrideInputs.Num() == 0)
		{
			return;
		}
		else if (OverrideInputs.Num() == 1)
		{
			InputIndex = 0;
		}
		else if (OverrideInputs.Num() > 1 && !OverrideInputs.IsValidIndex(InputIndex))
		{
			PCGLog::LogWarningOnGraph(FText::Format(LOCTEXT("InconsistentDataCount", "The data provided on pin '{0}' does not have a consistent size with the input index '{1}'. Will use the first one."), FText::FromName(OverridesPinLabel), FText::AsNumber(InInputDataIndex)), Context);
			InputIndex = 0;
		}

		const UPCGData* OverrideData = OverrideInputs[InputIndex].Data;
		if (!OverrideData)
		{
			PCGLog::LogErrorOnGraph(LOCTEXT("InvalidActorOverrideData", "Invalid input data for Object Property Overrides pin."), Context);
			return;
		}

		for (const TPair<UObject*, int32>& TargetObjectAndIndex : TargetObjectToOverrideIndices)
		{
			UObject* TargetObject = TargetObjectAndIndex.Key;
			int32 InputKeyIndex = TargetObjectAndIndex.Value;

			FPCGObjectOverrides ObjectOverrides(TargetObject);
			ObjectOverrides.Initialize(InObjectPropertyOverrideDescriptions, TargetObject, OverrideData, Context);
			if (!ObjectOverrides.Apply(InputKeyIndex)) // Use the First Entry of the param data for override (similar to what is done in Parameter Overrides in FPCGContext)
			{
				PCGLog::LogErrorOnGraph(FText::Format(LOCTEXT("ApplyOverrideFailed", "Failed to apply property overrides to object '%s'."), FText::FromName(TargetObject->GetClass()->GetFName())), Context);
			}
		}
	}

	void ApplyOverridesFromParams(const TArray<FPCGObjectPropertyOverrideDescription>& InObjectPropertyOverrideDescriptions, UObject* TargetObject, FName OverridesPinLabel, FPCGContext* Context)
	{
		ApplyOverrides(InObjectPropertyOverrideDescriptions,
			{ TPair<UObject*, int32>(TargetObject, /*Entry index=*/0) },
			OverridesPinLabel,
			/*InInputDataIndex=*/0,
			Context);
	}
}

void FPCGObjectSingleOverride::Initialize(const FPCGAttributePropertySelector& InputSelector, const FString& OutputProperty, const UStruct* TemplateClass, const UPCGData* SourceData, FPCGContext* Context)
{
	InputKeys = PCGAttributeAccessorHelpers::CreateConstKeys(SourceData, InputSelector);
	ObjectOverrideInputAccessor = PCGAttributeAccessorHelpers::CreateConstAccessor(SourceData, InputSelector);

	if (!ObjectOverrideInputAccessor.IsValid())
	{
		PCGLog::LogWarningOnGraph(FText::Format(NSLOCTEXT("PCGObjectPropertyOverride", "OverrideInputInvalid", "ObjectOverride for input '{0}' is invalid or unsupported. Check the attribute or property selection."), InputSelector.GetDisplayText()), Context);
		return;
	}

	const FPCGAttributePropertySelector OutputSelector = FPCGAttributePropertySelector::CreateSelectorFromString(OutputProperty);
	// TODO: Move implementation into a new helper: PCGAttributeAccessorHelpers::CreatePropertyAccessor(const FPCGAttributePropertySelector& Selector, UStruct* Class)
	const TArray<FString>& ExtraNames = OutputSelector.GetExtraNames();
	if (ExtraNames.IsEmpty())
	{
		ObjectOverrideOutputAccessor = PCGAttributeAccessorHelpers::CreatePropertyAccessor(FName(OutputProperty), TemplateClass);
	}
	else
	{
		TArray<FName> PropertyNames;
		PropertyNames.Reserve(ExtraNames.Num() + 1);
		PropertyNames.Add(OutputSelector.GetAttributeName());
		for (const FString& Name : ExtraNames)
		{
			PropertyNames.Add(FName(Name));
		}

		ObjectOverrideOutputAccessor = PCGAttributeAccessorHelpers::CreatePropertyChainAccessor(PropertyNames, TemplateClass);
	}

	if (!ObjectOverrideOutputAccessor.IsValid())
	{
		PCGLog::LogWarningOnGraph(FText::Format(NSLOCTEXT("PCGObjectPropertyOverride", "OverrideOutputInvalid", "ObjectOverride for object property '{0}' is invalid or unsupported. Check the attribute or property selection."), FText::FromString(OutputProperty)), Context);
		return;
	}

	if (!PCG::Private::IsBroadcastableOrConstructible(ObjectOverrideInputAccessor->GetUnderlyingType(), ObjectOverrideOutputAccessor->GetUnderlyingType()))
	{
		PCGLog::LogWarningOnGraph(
			FText::Format(
				NSLOCTEXT("PCGObjectPropertyOverride", "TypesIncompatible", "ObjectOverride cannot set input '{0}' to output '{1}'. Cannot convert type '{2}' to type '{3}'. Will be skipped."),
				InputSelector.GetDisplayText(),
				FText::FromString(OutputProperty),
				PCG::Private::GetTypeNameText(ObjectOverrideInputAccessor->GetUnderlyingType()),
				PCG::Private::GetTypeNameText(ObjectOverrideOutputAccessor->GetUnderlyingType())),
			Context);

		ObjectOverrideInputAccessor.Reset();
		ObjectOverrideOutputAccessor.Reset();
		return;
	}

	auto CreateGetterSetter = [this](auto Dummy)
	{
		using Type = decltype(Dummy);

		ObjectOverrideFunction = &FPCGObjectSingleOverride::ApplyImpl<Type>;
	};

	PCGMetadataAttribute::CallbackWithRightType(ObjectOverrideOutputAccessor->GetUnderlyingType(), CreateGetterSetter);
}

bool FPCGObjectSingleOverride::IsValid() const
{
	return InputKeys.IsValid() && ObjectOverrideInputAccessor.IsValid() && ObjectOverrideOutputAccessor.IsValid() && ObjectOverrideFunction;
}

bool FPCGObjectSingleOverride::Apply(int32 InputKeyIndex, IPCGAttributeAccessorKeys& OutputKey)
{
	return Invoke(ObjectOverrideFunction, this, InputKeyIndex, OutputKey);
}

#undef LOCTEXT_NAMESPACE
