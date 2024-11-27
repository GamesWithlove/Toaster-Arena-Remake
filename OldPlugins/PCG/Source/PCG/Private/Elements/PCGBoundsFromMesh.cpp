// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGBoundsFromMesh.h"

#include "PCGContext.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Elements/Metadata/PCGMetadataElementCommon.h"
#include "Helpers/PCGAsync.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"

#include "Algo/Transform.h"
#include "Engine/StaticMesh.h"

#define LOCTEXT_NAMESPACE "PCGBoundsFromMeshElement"

namespace PCGBoundsFromMeshSettings
{
	const FName AttributeLabel = TEXT("Attribute");
	const FText AttributeTooltip = LOCTEXT("AttributeTooltip", "Optional Attribute Set to select the mesh from. Not used if not connected.");
}

#if WITH_EDITOR
FName UPCGBoundsFromMeshSettings::GetDefaultNodeName() const
{
	return FName(TEXT("BoundsFromMesh"));
}

FText UPCGBoundsFromMeshSettings::GetDefaultNodeTitle() const
{
	return LOCTEXT("NodeTitle", "Bounds From Mesh");
}

FText UPCGBoundsFromMeshSettings::GetNodeTooltipText() const
{
	return LOCTEXT("NodeTooltip", "Sets bounds min/max from mesh(es).");
}

bool UPCGBoundsFromMeshSettings::IsPinUsedByNodeExecution(const UPCGPin* InPin) const
{
	return !InPin || (InPin->Properties.Label != PCGBoundsFromMeshSettings::AttributeLabel) || InPin->IsConnected();
}
#endif //WITH_EDITOR

TArray<FPCGPinProperties> UPCGBoundsFromMeshSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	FPCGPinProperties& InputPinProperty = PinProperties.Emplace_GetRef(PCGPinConstants::DefaultInputLabel, EPCGDataType::Point);
	InputPinProperty.SetRequiredPin();

	PinProperties.Emplace(PCGBoundsFromMeshSettings::AttributeLabel, EPCGDataType::Param, /*bInAllowMultipleConnections=*/false, /*bAllowMultipleData=*/false, PCGBoundsFromMeshSettings::AttributeTooltip);

	return PinProperties;
}

TArray<FPCGPinProperties> UPCGBoundsFromMeshSettings::OutputPinProperties() const
{
	return Super::DefaultPointOutputPinProperties();
}

// Creates the Element to be used for ExecuteInternal.
FPCGElementPtr UPCGBoundsFromMeshSettings::CreateElement() const
{
	return MakeShared<FPCGBoundsFromMeshElement>();
}

bool FPCGBoundsFromMeshElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGBoundsFromMeshElement::PrepareData);

	check(InContext);
	FPCGBoundsFromMeshContext* Context = static_cast<FPCGBoundsFromMeshContext*>(InContext);

	const UPCGBoundsFromMeshSettings* Settings = Context->GetInputSettings<UPCGBoundsFromMeshSettings>();
	check(Settings);

	if (!Context->bPrepareDone)
	{
		// Some background info:
		// Two common use cases:
		// 1. Input is a point data, and an attribute set is used to provide the mesh to take bounds from.
		// 2. Input is a point data, with a mesh attribute.
		TArray<FPCGTaggedData> SourceAttributeInputs = Context->InputData.GetInputsByPin(PCGBoundsFromMeshSettings::AttributeLabel);
		const UPCGParamData* SourceAttributeSet = (!SourceAttributeInputs.IsEmpty() ? Cast<UPCGParamData>(SourceAttributeInputs[0].Data) : nullptr);

		if (SourceAttributeSet)
		{
			// In this case, we don't need to partition anything, we'll have a single mesh entry.
			FPCGAttributePropertyInputSelector MeshAttributeSelector = Settings->MeshAttribute.CopyAndFixLast(SourceAttributeSet);
			TUniquePtr<const IPCGAttributeAccessor> InputAccessor = PCGAttributeAccessorHelpers::CreateConstAccessor(SourceAttributeSet, MeshAttributeSelector);
			TUniquePtr<const IPCGAttributeAccessorKeys> InputKeys = PCGAttributeAccessorHelpers::CreateConstKeys(SourceAttributeSet, MeshAttributeSelector);

			// Warn if the attribute set has multiple entries, because we'll use only the first value.
			if (SourceAttributeSet->ConstMetadata()->GetLocalItemCount() > 1)
			{
				PCGE_LOG(Warning, GraphAndLog, LOCTEXT("AttributeSetHasMultipleEntries", "Input attribute set has multiple entries - only the first one will be used."));
			}

			if (!InputAccessor.IsValid() || !InputKeys.IsValid())
			{
				if (!Settings->bSilenceAttributeNotFoundErrors)
				{
					PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("AttributeDoesNotExistOnAttributeSet", "Input attribute/property '{0}' does not exist on attribute set, skipped."), MeshAttributeSelector.GetDisplayText()));
				}
			}
			else
			{
				if (InputAccessor->Get<FSoftObjectPath>(Context->SingleMesh, 0, *InputKeys, EPCGAttributeAccessorFlags::AllowConstructible))
				{
					if (!Context->SingleMesh.IsNull())
					{
						Context->MeshesToLoad.Add(Context->SingleMesh);
					}
				}
				else if (!Settings->bSilenceAttributeNotFoundErrors)
				{
					PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("AttributeOfTheWrongTypeOnAttributeSet", "Input attribute/property '{0}' on attribute set does not match the expected type, skipped"), MeshAttributeSelector.GetDisplayText()));
				}
			}

			Context->bPrepareDone = true;
		}
		else
		{
			// In this case, we'll visit all points, gather the unique meshes and assign to each point a given mesh index
			TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);

			while (Context->CurrentPrepareIndex < Inputs.Num())
			{
				const FPCGTaggedData& Input = Inputs[Context->CurrentPrepareIndex];
				const UPCGPointData* PointData = Cast<UPCGPointData>(Input.Data);

				if (!PointData)
				{
					++Context->CurrentPrepareIndex;
					continue;
				}

				FPCGAttributePropertyInputSelector MeshAttributeSelector = Settings->MeshAttribute.CopyAndFixLast(PointData);

				FPCGBoundsFromMeshContext::InputMeshesData InputMeshData;
				InputMeshData.InputIndex = Context->CurrentPrepareIndex++;

				// Retrieve meshes
				TUniquePtr<const IPCGAttributeAccessor> InputAccessor = PCGAttributeAccessorHelpers::CreateConstAccessor(PointData, MeshAttributeSelector);
				TUniquePtr<const IPCGAttributeAccessorKeys> InputKeys = PCGAttributeAccessorHelpers::CreateConstKeys(PointData, MeshAttributeSelector);

				if (!InputAccessor.IsValid() || !InputKeys.IsValid())
				{
					if (!Settings->bSilenceAttributeNotFoundErrors)
					{
						PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("AttributeDoesNotExistOnInput", "Input attribute/property '{0}' does not exist on input {1}, skipped"), MeshAttributeSelector.GetDisplayText(), FText::AsNumber(Context->CurrentPrepareIndex - 1)));
					}

					continue;
				}

				InputMeshData.MeshValueIndex.Reserve(InputKeys->GetNum());
				auto GatherMeshPathsAndCreateMap = [this, Context, &InputMeshData](const TArrayView<FSoftObjectPath>& Meshes, int Start, int Range)
				{
					for (const FSoftObjectPath& Mesh : Meshes)
					{
						InputMeshData.MeshValueIndex.Add(Mesh.IsNull() ? INDEX_NONE : Context->MeshesToLoad.AddUnique(Mesh));
					}
				};

				if (!PCGMetadataElementCommon::ApplyOnAccessorRange<FSoftObjectPath>(*InputKeys, *InputAccessor, GatherMeshPathsAndCreateMap, EPCGAttributeAccessorFlags::AllowBroadcast | EPCGAttributeAccessorFlags::AllowConstructible))
				{
					if (!Settings->bSilenceAttributeNotFoundErrors)
					{
						PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("AttributeOfTheWrongTypeOnInput", "Input attribute/property '{0}' on input {1} does not match the expected type, skipped"), MeshAttributeSelector.GetDisplayText(), FText::AsNumber(Context->CurrentPrepareIndex - 1)));
					}
				}
				else
				{
					Context->PerInputData.Add(MoveTemp(InputMeshData));
				}

				if (Context->ShouldStop())
				{
					break;
				}
			}

			if (Context->CurrentPrepareIndex == Inputs.Num())
			{
				Context->bPrepareDone = true;
			}

			// Given partitioning can be expensive, check if we're out of time for this frame
			if (Context->ShouldStop())
			{
				return false;
			}
		}
	}

	if (Context->bPrepareDone && !Context->WasLoadRequested())
	{
		TArray<FSoftObjectPath> MeshesToLoad = Context->MeshesToLoad; // because of the move
		return Context->RequestResourceLoad(Context, MoveTemp(MeshesToLoad), !Settings->bSynchronousLoad);
	}

	return true;
}

bool FPCGBoundsFromMeshElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGBoundsFromMeshElement::Execute);

	check(InContext);
	FPCGBoundsFromMeshContext* Context = static_cast<FPCGBoundsFromMeshContext*>(InContext);

	const UPCGBoundsFromMeshSettings* Settings = Context->GetInputSettings<UPCGBoundsFromMeshSettings>();
	check(Settings);

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	if (!Context->bBoundsQueried)
	{
		for (int MeshIndex = 0; MeshIndex < Context->MeshesToLoad.Num(); ++MeshIndex)
		{
			const FSoftObjectPath& MeshPath = Context->MeshesToLoad[MeshIndex];
			TSoftObjectPtr<UStaticMesh> Mesh(MeshPath);

			if (Mesh.IsValid() && Mesh.Get())
			{
				Context->MeshToBoundsMap.Add(MeshIndex, Mesh->GetBoundingBox());
			}
		}

		Context->bBoundsQueried = true;
	}

	while (Context->CurrentExecuteIndex < Inputs.Num())
	{
		const FPCGTaggedData& Input = Inputs[Context->CurrentExecuteIndex++];
		FPCGTaggedData& Output = Outputs.Add_GetRef(Input);

		// If input is not a point data -> passthrough
		const UPCGPointData* PointData = Cast<UPCGPointData>(Input.Data);

		if (!PointData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data"));
			continue;
		}

		// Two cases here: either we have a single mesh and need to set its bounds to all points in the input
		// or we need to compare against our list of meshes
		if (Context->SingleMesh.IsValid())
		{
			TSoftObjectPtr<UStaticMesh> SingleMesh(Context->SingleMesh);

			if (!SingleMesh)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("LoadStaticMeshFailed", "Failed to load StaticMesh"));
				continue;
			}

			const FBox StaticMeshBounds = SingleMesh->GetBoundingBox();
			
			UPCGPointData* OutputData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
			OutputData->InitializeFromData(PointData);

			const TArray<FPCGPoint>& InputPoints = PointData->GetPoints();
			TArray<FPCGPoint>& OutputPoints = OutputData->GetMutablePoints();
			OutputPoints.SetNumUninitialized(InputPoints.Num());

			auto CopyAndSetBounds = [&InputPoints, &OutputPoints, &StaticMeshBounds](const int32 ReadIndex, const int32 WriteIndex)
			{
				const FPCGPoint& InputPoint = InputPoints[ReadIndex];
				FPCGPoint& OutputPoint = OutputPoints[WriteIndex];

				OutputPoint = InputPoint;
				OutputPoint.BoundsMin = StaticMeshBounds.Min;
				OutputPoint.BoundsMax = StaticMeshBounds.Max;
			};

			FPCGAsync::AsyncProcessingOneToOneEx(&Context->AsyncState, InputPoints.Num(), /*Initialize=*/[]() {}, CopyAndSetBounds, /*bEnableTimeSlicing=*/false);

			Output.Data = OutputData;
		}
		else
		{
			FPCGBoundsFromMeshContext::InputMeshesData* InputData = Context->PerInputData.FindByPredicate([Index = Context->CurrentExecuteIndex - 1](const FPCGBoundsFromMeshContext::InputMeshesData& InputData) { return InputData.InputIndex == Index; });
			if (InputData)
			{
				UPCGPointData* OutputData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
				OutputData->InitializeFromData(PointData);

				const TArray<FPCGPoint>& InputPoints = PointData->GetPoints();
				TArray<FPCGPoint>& OutputPoints = OutputData->GetMutablePoints();
				OutputPoints.SetNumUninitialized(InputPoints.Num());

				auto CopyAndSetBounds = [&InputPoints, &OutputPoints, Context, InputData](const int32 ReadIndex, const int32 WriteIndex)
				{
					const FPCGPoint& InputPoint = InputPoints[ReadIndex];
					FPCGPoint& OutputPoint = OutputPoints[WriteIndex];

					OutputPoint = InputPoint;
					if (FBox* MatchingBounds = Context->MeshToBoundsMap.Find(InputData->MeshValueIndex[ReadIndex]))
					{
						OutputPoint.BoundsMin = MatchingBounds->Min;
						OutputPoint.BoundsMax = MatchingBounds->Max;
					}
				};

				FPCGAsync::AsyncProcessingOneToOneEx(&Context->AsyncState, InputPoints.Num(), /*Initialize=*/[]() {}, CopyAndSetBounds, /*bEnableTimeSlicing=*/false);

				Output.Data = OutputData;
			}
			else
			{
				// The data didn't have the attribute or all meshes were unloadable -> passthrough
				continue;
			}
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE