// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGCopyPoints.h"

#include "PCGContext.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGDataBinding.h"
#include "Compute/DataInterfaces/Elements/PCGCopyPointsDataInterface.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSpatialData.h"
#include "Graph/PCGGPUGraphCompilationContext.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"

#include "RHIShaderPlatform.h"
#include "ShaderCompilerCore.h"
#include "Async/ParallelFor.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCopyPoints)

#define LOCTEXT_NAMESPACE "PCGCopyPointsElement"

#if WITH_EDITOR
FText UPCGCopyPointsSettings::GetNodeTooltipText() const
{
	return LOCTEXT("NodeTooltip", "For each point pair from the source and the target, create a copy, inheriting properties & attributes depending on the node settings.");
}
#endif

FString UPCGCopyPointsSettings::GetCookedKernelSource(const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable) const
{
	FString TemplateFile;
	ensure(LoadShaderSourceFile(TEXT("/Plugin/PCG/Private/Elements/PCGCopyPoints.usf"), EShaderPlatform::SP_PCD3D_SM5, &TemplateFile, nullptr));
	return TemplateFile;
}

bool UPCGCopyPointsSettings::ComputeOutputPinDataDesc(const UPCGPin* OutputPin, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutDesc) const
{
	check(OutputPin);
	check(Binding);

	// First inspect data coming from CPU. Will return description if this node is a CPU node or in a different compute graph.
	if (Binding->ComputeCPUOutputPinDataDesc(OutputPin, OutDesc))
	{
		return true;
	}

	const UPCGNode* Node = CastChecked<UPCGNode>(GetOuter());
	const UPCGPin* SourcePin = Node->GetInputPin(PCGCopyPointsConstants::SourcePointsLabel);
	const UPCGPin* TargetPin = Node->GetInputPin(PCGCopyPointsConstants::TargetPointsLabel);

	FPCGDataCollectionDesc PinDesc;

	if (ensure(SourcePin && TargetPin))
	{
		const FPCGDataCollectionDesc SourcePinDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(SourcePin, Binding);
		const FPCGDataCollectionDesc TargetPinDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(TargetPin, Binding);

		const int32 NumSources = SourcePinDesc.DataDescs.Num();
		const int32 NumTargets = TargetPinDesc.DataDescs.Num();
		const int32 NumIterations = bCopyEachSourceOnEveryTarget ? NumSources * NumTargets : FMath::Max(NumSources, NumTargets);

		if (NumSources > 0 && NumTargets > 0 && (bCopyEachSourceOnEveryTarget || NumSources == NumTargets || NumSources == 1 || NumTargets == 1))
		{
			for (int32 I = 0; I < NumIterations; ++I)
			{
				const int32 SourceIndex = bCopyEachSourceOnEveryTarget ? (I / NumTargets) : FMath::Min(I, NumSources - 1);
				const int32 TargetIndex = bCopyEachSourceOnEveryTarget ? (I % NumTargets) : FMath::Min(I, NumTargets - 1);

				const FPCGDataDesc& SourceDesc = SourcePinDesc.DataDescs[SourceIndex];
				const FPCGDataDesc& TargetDesc = TargetPinDesc.DataDescs[TargetIndex];

				FPCGDataDesc& ResultDataDesc = PinDesc.DataDescs.Emplace_GetRef(EPCGDataType::Point, SourceDesc.ElementCount * TargetDesc.ElementCount);

				if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::SourceFirst)
				{
					ResultDataDesc.AttributeDescs = SourceDesc.AttributeDescs;

					for (const FPCGKernelAttributeDesc& AttrDesc : TargetDesc.AttributeDescs)
					{
						ResultDataDesc.AttributeDescs.AddUnique(AttrDesc);
					}
				}
				else if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::TargetFirst)
				{
					ResultDataDesc.AttributeDescs = TargetDesc.AttributeDescs;

					for (const FPCGKernelAttributeDesc& AttrDesc : SourceDesc.AttributeDescs)
					{
						ResultDataDesc.AttributeDescs.AddUnique(AttrDesc);
					}
				}
				else if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::SourceOnly)
				{
					ResultDataDesc.AttributeDescs = SourceDesc.AttributeDescs;
				}
				else if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::TargetOnly)
				{
					ResultDataDesc.AttributeDescs = TargetDesc.AttributeDescs;
				}
			}
		}
	}

	OutDesc = PinDesc;
	return true;
}

int UPCGCopyPointsSettings::ComputeKernelThreadCount(const UPCGDataBinding* Binding) const
{
	const UPCGNode* Node = CastChecked<UPCGNode>(GetOuter());
	const UPCGPin* OutPin = Node->GetOutputPin(PCGPinConstants::DefaultOutputLabel);

	int ThreadCount = 0;

	FPCGDataCollectionDesc OutputPinDesc;
	if (ensure(ComputeOutputPinDataDesc(OutPin, Binding, OutputPinDesc)))
	{
		for (const FPCGDataDesc& DataDesc : OutputPinDesc.DataDescs)
		{
			ThreadCount += DataDesc.ElementCount;
		}
	}

	return ThreadCount;
}

#if WITH_EDITOR
void UPCGCopyPointsSettings::CreateAdditionalInputDataInterfaces(FPCGGPUCompilationContext& InOutContext, UObject* InObjectOuter, TArray<TObjectPtr<UComputeDataInterface>>& OutDataInterfaces) const
{
	Super::CreateAdditionalInputDataInterfaces(InOutContext, InObjectOuter, OutDataInterfaces);

	TObjectPtr<UPCGCopyPointsDataInterface> NodeDI = InOutContext.NewObject_AnyThread<UPCGCopyPointsDataInterface>(InObjectOuter);
	NodeDI->Settings = this;
	OutDataInterfaces.Add(NodeDI);
}
#endif

TArray<FPCGPinProperties> UPCGCopyPointsSettings::InputPinProperties() const
{
	// Note: If executing on the GPU, we need to prevent multiple connections on inputs, since it is not supported at this time.
	// Also note: Since the ShouldExecuteOnGPU() is already tied to structural changes, we don't need to implement any logic for this in GetChangeTypeForProperty()
	const bool bAllowMultipleConnections = !ShouldExecuteOnGPU();

	TArray<FPCGPinProperties> PinProperties;
	FPCGPinProperties& SourcePinProperty = PinProperties.Emplace_GetRef(PCGCopyPointsConstants::SourcePointsLabel, EPCGDataType::Point, bAllowMultipleConnections);
	SourcePinProperty.SetRequiredPin();

	FPCGPinProperties& TargetPinProperty = PinProperties.Emplace_GetRef(PCGCopyPointsConstants::TargetPointsLabel, EPCGDataType::Point, bAllowMultipleConnections);
	TargetPinProperty.SetRequiredPin();

	return PinProperties;
}

FPCGElementPtr UPCGCopyPointsSettings::CreateElement() const
{
	return MakeShared<FPCGCopyPointsElement>();
}

bool FPCGCopyPointsElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCopyPointsElement::Execute);

	const UPCGCopyPointsSettings* Settings = Context->GetInputSettings<UPCGCopyPointsSettings>();
	check(Settings && !Settings->ShouldExecuteOnGPU());

	const EPCGCopyPointsInheritanceMode RotationInheritance = Settings->RotationInheritance;
	const EPCGCopyPointsInheritanceMode ScaleInheritance = Settings->ScaleInheritance;
	const EPCGCopyPointsInheritanceMode ColorInheritance = Settings->ColorInheritance;
	const EPCGCopyPointsInheritanceMode SeedInheritance = Settings->SeedInheritance;
	const EPCGCopyPointsMetadataInheritanceMode AttributeInheritance = Settings->AttributeInheritance;

	const TArray<FPCGTaggedData> Sources = Context->InputData.GetInputsByPin(PCGCopyPointsConstants::SourcePointsLabel);
	const TArray<FPCGTaggedData> Targets = Context->InputData.GetInputsByPin(PCGCopyPointsConstants::TargetPointsLabel);

	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	const int32 NumSources = Sources.Num();
	const int32 NumTargets = Targets.Num();

	if (NumSources == 0 || NumTargets == 0)
	{
		// Nothing to do
		return true;
	}

	int32 NumIterations = 0;
	if (Settings->bCopyEachSourceOnEveryTarget)
	{
		NumIterations = NumSources * NumTargets;
	}
	else
	{
		if (NumSources != NumTargets && NumSources != 1 && NumTargets != 1)
		{
			PCGLog::LogErrorOnGraph(FText::Format(LOCTEXT("NumDataMismatch", "Num Sources ({0}) mismatches with Num Targets ({1}). Only supports N:N, 1:N and N:1 operation."), NumSources, NumTargets), Context);
			Outputs = Sources;
			return true;
		}

		NumIterations = FMath::Max(NumSources, NumTargets);
	}

	for (int32 i = 0; i < NumIterations; ++i)
	{
		const int32 SourceIndex = Settings->bCopyEachSourceOnEveryTarget ? (i / NumTargets) : FMath::Min(i, Sources.Num() - 1);
		const int32 TargetIndex = Settings->bCopyEachSourceOnEveryTarget ? (i % NumTargets) : FMath::Min(i, Targets.Num() - 1);

		const FPCGTaggedData& Source = Sources[SourceIndex];
		const FPCGTaggedData& Target = Targets[TargetIndex];

		FPCGTaggedData& Output = Outputs.Add_GetRef(Source);
		if (!Source.Data || !Target.Data) 
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data"));
			return true;
		}

		const UPCGSpatialData* SourceSpatialData = Cast<UPCGSpatialData>(Source.Data);
		const UPCGSpatialData* TargetSpatialData = Cast<UPCGSpatialData>(Target.Data);

		if (!SourceSpatialData || !TargetSpatialData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("CouldNotObtainSpatialData", "Unable to get Spatial Data from input"));
			return true;
		}

		const UPCGPointData* SourcePointData = SourceSpatialData->ToPointData(Context);
		const UPCGPointData* TargetPointData = TargetSpatialData->ToPointData(Context);

		if (!SourcePointData || !TargetPointData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("CouldNotGetPointData", "Unable to get Point Data from input"));
			return true;
		}

		const UPCGMetadata* SourcePointMetadata = SourcePointData->Metadata;
		const UPCGMetadata* TargetPointMetadata = TargetPointData->Metadata;

		const TArray<FPCGPoint>& SourcePoints = SourcePointData->GetPoints();
		const TArray<FPCGPoint>& TargetPoints = TargetPointData->GetPoints();


		UPCGPointData* OutPointData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
		TArray<FPCGPoint>& OutPoints = OutPointData->GetMutablePoints();
		Output.Data = OutPointData;

		// Make sure that output contains both collection of tags from source and target
		if (Settings->TagInheritance == EPCGCopyPointsTagInheritanceMode::Target)
		{
			Output.Tags = Target.Tags;
		}
		else if (Settings->TagInheritance == EPCGCopyPointsTagInheritanceMode::Both)
		{
			Output.Tags.Append(Target.Tags);
		}

		// RootMetadata will be parent to the ouptut metadata, while NonRootMetadata will carry attributes from the input not selected for inheritance
		// Note that this is a preference, as we can and should pick more efficiently in the trivial cases
		const UPCGMetadata* RootMetadata = nullptr;
		const UPCGMetadata* NonRootMetadata = nullptr;

		const bool bSourceHasMetadata = (SourcePointMetadata->GetAttributeCount() > 0 && SourcePointMetadata->GetItemCountForChild() > 0);
		const bool bTargetHasMetadata = (TargetPointMetadata->GetAttributeCount() > 0 && TargetPointMetadata->GetItemCountForChild() > 0);

		bool bInheritMetadataFromSource = true;
		bool bProcessMetadata = (bSourceHasMetadata || bTargetHasMetadata);

		if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::SourceOnly)
		{
			bInheritMetadataFromSource = true;
			bProcessMetadata = bSourceHasMetadata;
			RootMetadata = SourcePointMetadata;
			NonRootMetadata = nullptr;

			OutPointData->InitializeFromData(SourcePointData);
		}
		else if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::TargetOnly)
		{
			bInheritMetadataFromSource = false;
			bProcessMetadata = bTargetHasMetadata;
			RootMetadata = TargetPointMetadata;
			NonRootMetadata = nullptr;

			OutPointData->InitializeFromData(TargetPointData);
		}
		else if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::SourceFirst || AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::TargetFirst)
		{
			if (AttributeInheritance == EPCGCopyPointsMetadataInheritanceMode::SourceFirst)
			{
				bInheritMetadataFromSource = bSourceHasMetadata || !bTargetHasMetadata;
			}
			else // TargetFirst
			{
				bInheritMetadataFromSource = !bTargetHasMetadata && bSourceHasMetadata;
			}

			RootMetadata = bInheritMetadataFromSource ? SourcePointMetadata : TargetPointMetadata;
			NonRootMetadata = bInheritMetadataFromSource ? TargetPointMetadata : SourcePointMetadata;
			OutPointData->InitializeFromData(bInheritMetadataFromSource ? SourcePointData : TargetPointData);
		}
		else // None
		{
			OutPointData->InitializeFromData(SourcePointData, nullptr, /*bInheritMetadata=*/false, /*bInheritAttributes=*/false);

			bProcessMetadata = false;
			RootMetadata = NonRootMetadata = nullptr;
		}

		// Always use the target actor from the target, irrespective of the source
		OutPointData->TargetActor = TargetPointData->TargetActor;

		UPCGMetadata* OutMetadata = OutPointData->Metadata;
		check(OutMetadata);

		TArray<FPCGMetadataAttributeBase*> AttributesToSet;
		TArray<const FPCGMetadataAttributeBase*> NonRootAttributes;
		TArray<TTuple<int64, int64>> AllMetadataEntries;
		TArray<TArray<TTuple<PCGMetadataEntryKey, PCGMetadataValueKey>>> AttributeValuesToSet;

		if (bProcessMetadata)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCopyPointsElement::Execute::SetupMetadata);
			if (NonRootMetadata)
			{
				// Prepare the attributes from the non-root that we'll need to use to copy values over
				TArray<FName> AttributeNames;
				TArray<EPCGMetadataTypes> AttributeTypes;
				NonRootMetadata->GetAttributes(AttributeNames, AttributeTypes);

				for (const FName& AttributeName : AttributeNames)
				{
					if (!OutMetadata->HasAttribute(AttributeName))
					{
						const FPCGMetadataAttributeBase* Attribute = NonRootMetadata->GetConstAttribute(AttributeName);
						if (FPCGMetadataAttributeBase* NewAttribute = OutMetadata->CopyAttribute(Attribute, AttributeName, /*bKeepRoot=*/false, /*bCopyEntries=*/false, /*bCopyValues=*/true))
						{
							AttributesToSet.Add(NewAttribute);
							NonRootAttributes.Add(Attribute);
						}
					}
				}

				// Considering writing to the attribute value requires a lock, we'll gather the value keys to write
				// and do it on a 1-thread-per-attribute basis at the end
				AttributeValuesToSet.SetNum(AttributesToSet.Num());

				for (TArray<TTuple<PCGMetadataEntryKey, PCGMetadataValueKey>>& AttributeValues : AttributeValuesToSet)
				{
					AttributeValues.SetNumUninitialized(SourcePoints.Num() * TargetPoints.Num());
				}
			}

			// Preallocate the metadata entries array if we're going to use it
			AllMetadataEntries.SetNumUninitialized(SourcePoints.Num() * TargetPoints.Num());
		}

		// Use implicit capture, since we capture a lot
		FPCGAsync::AsyncPointProcessing(Context, SourcePoints.Num() * TargetPoints.Num(), OutPoints, [&](int32 Index, FPCGPoint& OutPoint)
		{
			const FPCGPoint& SourcePoint = SourcePoints[Index / TargetPoints.Num()];
			const FPCGPoint& TargetPoint = TargetPoints[Index % TargetPoints.Num()];

			OutPoint = SourcePoint;

			// Set the position, rotation and scale as relative by default.
			OutPoint.Transform = SourcePoint.Transform * TargetPoint.Transform;

			// Set Rotation, Scale, and Color based on inheritance mode
			if (RotationInheritance == EPCGCopyPointsInheritanceMode::Source)
			{
				OutPoint.Transform.SetRotation(SourcePoint.Transform.GetRotation());
			}
			else if (RotationInheritance == EPCGCopyPointsInheritanceMode::Target)
			{
				OutPoint.Transform.SetRotation(TargetPoint.Transform.GetRotation());
			}

			if (ScaleInheritance == EPCGCopyPointsInheritanceMode::Source)
			{ 
				OutPoint.Transform.SetScale3D(SourcePoint.Transform.GetScale3D());
			}
			else if (ScaleInheritance == EPCGCopyPointsInheritanceMode::Target)
			{
				OutPoint.Transform.SetScale3D(TargetPoint.Transform.GetScale3D());
			}

			if (ColorInheritance == EPCGCopyPointsInheritanceMode::Relative)
			{
				OutPoint.Color = SourcePoint.Color * TargetPoint.Color;
			}
			else if (ColorInheritance == EPCGCopyPointsInheritanceMode::Source)
			{ 
				OutPoint.Color = SourcePoint.Color;
			}
			else // if (ColorInheritance == EPCGCopyPointsInheritanceMode::Target)
			{ 
				OutPoint.Color = TargetPoint.Color;
			}

			// Set seed based on inheritance mode
			if (SeedInheritance == EPCGCopyPointsInheritanceMode::Relative)
			{
				OutPoint.Seed = PCGHelpers::ComputeSeed(SourcePoint.Seed, TargetPoint.Seed);
			}
			else if (SeedInheritance == EPCGCopyPointsInheritanceMode::Target)
			{
				OutPoint.Seed = TargetPoint.Seed;
			}

			if (bProcessMetadata)
			{
				const FPCGPoint* RootPoint = (bInheritMetadataFromSource ? &SourcePoint : &TargetPoint);

				OutPoint.MetadataEntry = OutMetadata->AddEntryPlaceholder();
				AllMetadataEntries[Index] = TTuple<int64, int64>(OutPoint.MetadataEntry, RootPoint->MetadataEntry);

				if (NonRootMetadata)
				{
					const FPCGPoint* NonRootPoint = (bInheritMetadataFromSource ? &TargetPoint : &SourcePoint);

					// Copy EntryToValue key mappings from NonRootAttributes - no need to do it if the non-root uses the default values
					if (NonRootPoint->MetadataEntry != PCGInvalidEntryKey)
					{
						for (int32 AttributeIndex = 0; AttributeIndex < NonRootAttributes.Num(); ++AttributeIndex)
						{
							AttributeValuesToSet[AttributeIndex][Index] = TTuple<PCGMetadataEntryKey, PCGMetadataValueKey>(OutPoint.MetadataEntry, NonRootAttributes[AttributeIndex]->GetValueKey(NonRootPoint->MetadataEntry));
						}
					}
					else
					{
						for (int32 AttributeIndex = 0; AttributeIndex < NonRootAttributes.Num(); ++AttributeIndex)
						{
							AttributeValuesToSet[AttributeIndex][Index] = TTuple<PCGMetadataEntryKey, PCGMetadataValueKey>(OutPoint.MetadataEntry, PCGDefaultValueKey);
						}
					}
				}
			}
			else
			{
				// Reset the metadata entry if we have no metadata.
				OutPoint.MetadataEntry = PCGInvalidEntryKey;
			}

			return true;
		});

		if (bProcessMetadata)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCopyPointsElement::Execute::SetMetadata);
			check(AttributesToSet.Num() == AttributeValuesToSet.Num());
			if (AttributesToSet.Num() > 0)
			{
				int32 AttributeOffset = 0;
				const int32 DefaultAttributePerDispatch = 128;
				int32 AttributePerDispatch = DefaultAttributePerDispatch;
				if (Context->AsyncState.NumAvailableTasks > 0)
				{
					AttributePerDispatch = FMath::Min(Context->AsyncState.NumAvailableTasks, AttributePerDispatch);
				}

				while (AttributeOffset < AttributesToSet.Num())
				{
					const int32 AttributeCountInCurrentDispatch = FMath::Min(AttributePerDispatch, AttributesToSet.Num() - AttributeOffset);
					ParallelFor(AttributeCountInCurrentDispatch, [AttributeOffset, &AttributesToSet, &AttributeValuesToSet](int32 WorkerIndex)
					{
						FPCGMetadataAttributeBase* Attribute = AttributesToSet[AttributeOffset + WorkerIndex];
						const TArray<TTuple<PCGMetadataEntryKey, PCGMetadataValueKey>>& Values = AttributeValuesToSet[AttributeOffset + WorkerIndex];
						check(Attribute);
						Attribute->SetValuesFromValueKeys(Values, /*bResetValueOnDefaultValueKey*/false); // no need for the reset here, our points will not have any prior value for these attributes
					});

					AttributeOffset += AttributeCountInCurrentDispatch;
				}
			}

			OutMetadata->AddDelayedEntries(AllMetadataEntries);
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE
