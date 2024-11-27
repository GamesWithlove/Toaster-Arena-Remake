// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGApplyOnActor.h"

#include "PCGContext.h"
#include "PCGEdge.h"
#include "PCGModule.h"
#include "PCGNode.h"
#include "PCGPin.h"
#include "Helpers/PCGHelpers.h"

#include "GameFramework/Actor.h"
#include "UObject/FortniteMainBranchObjectVersion.h"

#define LOCTEXT_NAMESPACE "PCGApplyOnActorElement"

namespace PCGApplyOnActorConstants
{
	const FText DependencyTooltip = LOCTEXT("DependencyPinTooltip", "Data passed to this pin will be used to order execution but will otherwise not contribute to the results of this node.");
	const FName ObjectPropertyOverridesLabel = TEXT("Property Overrides");
	const FText ObjectPropertyOverridesTooltip = LOCTEXT("ObjectOverrideToolTip", "Provide property overrides for the target object. The attribute name must match the InputSource name in the object property override description.");
}

#if WITH_EDITOR
void UPCGApplyOnActorSettings::ApplyDeprecationBeforeUpdatePins(UPCGNode* InOutNode, TArray<TObjectPtr<UPCGPin>>& InputPins, TArray<TObjectPtr<UPCGPin>>& OutputPins)
{
	if(GetLinkerCustomVersion(FFortniteMainBranchObjectVersion::GUID) < FFortniteMainBranchObjectVersion::PCGApplyOnActorNodeMoveTargetActorEdgeToInput && ensure(InOutNode))
	{
		// Find in the input pins if we have edge(s) on the "TargetActor" pin
		TObjectPtr<UPCGPin>* TargetActorPinPtr = InputPins.FindByPredicate([](const TObjectPtr<UPCGPin>& InputPin) { return InputPin && InputPin->Properties.Label == TEXT("TargetActor"); });

		if (TargetActorPinPtr && (*TargetActorPinPtr)->EdgeCount() > 0)
		{
			TObjectPtr<UPCGPin> TargetActorPin = *TargetActorPinPtr;

			// Create input pin if needed (should be all the time)
			TObjectPtr<UPCGPin> InputPin = nullptr;
			TObjectPtr<UPCGPin>* PreExistingInputPin = InputPins.FindByPredicate([](const TObjectPtr<UPCGPin>& InputPin) { return InputPin && InputPin->Properties.Label == PCGPinConstants::DefaultInputLabel; });

			if (!PreExistingInputPin)
			{
				InputPin = NewObject<UPCGPin>(InOutNode);
				InputPin->Node = InOutNode;
				InputPin->Properties = FPCGPinProperties(PCGPinConstants::DefaultInputLabel, EPCGDataType::Any, /*bAllowMultipleConnections=*/true, /*bAllowMultipleData=*/true);
				InputPins.Insert(InputPin, 0);
			}
			else
			{
				InputPin = *PreExistingInputPin;
			}

			TArray<UPCGPin*> UpstreamPins;
			for (const UPCGEdge* Connection : TargetActorPin->Edges)
			{
				UpstreamPins.Add(Connection->InputPin);
			}

			for (UPCGPin* UpstreamPin : UpstreamPins)
			{
				UpstreamPin->BreakEdgeTo(TargetActorPin);
				UpstreamPin->AddEdgeTo(InputPin);
			}
		}
	}

	Super::ApplyDeprecationBeforeUpdatePins(InOutNode, InputPins, OutputPins);
}
#endif // WITH_EDITOR

TArray<FPCGPinProperties> UPCGApplyOnActorSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultInputLabel, EPCGDataType::Any, /*bAllowMultipleConnections=*/true, /*bAllowMultipleData=*/true);
	PinProperties.Emplace(PCGApplyOnActorConstants::ObjectPropertyOverridesLabel, EPCGDataType::Any, /*bAllowMultipleConnections=*/true, /*bAllowMultipleData=*/true, PCGApplyOnActorConstants::ObjectPropertyOverridesTooltip);
	PinProperties.Emplace(PCGPinConstants::DefaultDependencyOnlyLabel, EPCGDataType::Any, /*bAllowMultipleConnections=*/true, /*bAllowMultipleData=*/true, PCGApplyOnActorConstants::DependencyTooltip);
	return PinProperties;
}

TArray<FPCGPinProperties> UPCGApplyOnActorSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Any);

	return PinProperties;
}

FPCGElementPtr UPCGApplyOnActorSettings::CreateElement() const
{
	return MakeShared<FPCGApplyOnObjectElement>();
}

bool FPCGApplyOnObjectElement::PrepareDataInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGApplyOnActorElement::PrepareData);
	check(Context);

	const UPCGApplyOnActorSettings* Settings = Context->GetInputSettings<UPCGApplyOnActorSettings>();
	check(Settings);

	FPCGLoadObjectsFromPathContext* ThisContext = static_cast<FPCGLoadObjectsFromPathContext*>(Context);
	return ThisContext->InitializeAndRequestLoad(PCGPinConstants::DefaultInputLabel,
		Settings->ObjectReferenceAttribute,
		{},
		/*bPersistAllData=*/false,
		Settings->bSilenceErrorOnEmptyObjectPath,
		Settings->bSynchronousLoad);
}

bool FPCGApplyOnObjectElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGApplyOnActorElement::Execute);

	check(Context);
	FPCGLoadObjectsFromPathContext* ThisContext = static_cast<FPCGLoadObjectsFromPathContext*>(Context);

	const UPCGApplyOnActorSettings* Settings = Context->GetInputSettings<UPCGApplyOnActorSettings>();
	check(Settings);

	TArray<TPair<UObject*, int32>> TargetObjectsAndIndices;

	int CurrentPathIndex = 0;
	while (CurrentPathIndex < ThisContext->PathsToObjectsAndDataIndex.Num())
	{
		TargetObjectsAndIndices.Reset();

		int InputIndex = ThisContext->PathsToObjectsAndDataIndex[CurrentPathIndex].Get<1>();
		while (CurrentPathIndex < ThisContext->PathsToObjectsAndDataIndex.Num() && InputIndex == ThisContext->PathsToObjectsAndDataIndex[CurrentPathIndex].Get<1>())
		{
			TargetObjectsAndIndices.Emplace(ThisContext->PathsToObjectsAndDataIndex[CurrentPathIndex].Get<0>().ResolveObject(), ThisContext->PathsToObjectsAndDataIndex[CurrentPathIndex].Get<2>());
			++CurrentPathIndex;
		}

		PCGObjectPropertyOverrideHelpers::ApplyOverrides(Settings->PropertyOverrideDescriptions, TargetObjectsAndIndices, PCGApplyOnActorConstants::ObjectPropertyOverridesLabel, InputIndex, Context);

		for (const TPair<UObject*, int32>& TargetObjectAndIndex : TargetObjectsAndIndices)
		{
			UObject* TargetObject = TargetObjectAndIndex.Key;
			if (!TargetObject)
			{
				continue;
			}

			for (UFunction* Function : PCGHelpers::FindUserFunctions(TargetObject->GetClass(), Settings->PostProcessFunctionNames, { UPCGFunctionPrototypes::GetPrototypeWithNoParams() }, Context))
			{
				TargetObject->ProcessEvent(Function, nullptr);
			}
		}
	}

	// Since we have only one output pin, there's no need to update the pins here.
	Context->OutputData.TaggedData = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);

	return true;
}

#undef LOCTEXT_NAMESPACE
