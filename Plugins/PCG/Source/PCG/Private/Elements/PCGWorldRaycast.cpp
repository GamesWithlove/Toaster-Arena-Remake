// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGWorldRaycast.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGPoint.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGBlueprintHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Helpers/PCGWorldQueryHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"

#include "Engine/HitResult.h"
#include "Engine/World.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGWorldRaycast)

#define LOCTEXT_NAMESPACE "PCGWorldRaycastElement"

namespace PCGWorldRaycastElementConstants
{
	const FName OriginsInputLabel = TEXT("Origins");
	const FName EndPointsInputLabel = TEXT("End Points");
	const FName BoundingShapeLabel = TEXT("Bounding Shape");
}

UPCGWorldRaycastElementSettings::UPCGWorldRaycastElementSettings()
{
	OriginInputAttribute.SetPointProperty(EPCGPointProperties::Position);
	EndPointAttribute.SetPointProperty(EPCGPointProperties::Position);
	// Tracing rays along the normal is the common use case
	RayDirectionAttribute.Update("$Rotation.Up");
}

TArray<FPCGPinProperties> UPCGWorldRaycastElementSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;

	FPCGPinProperties& OriginPointsInputPin = PinProperties.Emplace_GetRef(PCGWorldRaycastElementConstants::OriginsInputLabel, EPCGDataType::PointOrParam);
	OriginPointsInputPin.SetRequiredPin();
#if WITH_EDITOR
	OriginPointsInputPin.Tooltip = LOCTEXT("OriginPointsInputPinTooltip", "Points acting as the point origin of each individual ray. Only point data from this pin may be forwarded.");
#endif // WITH_EDITOR

	if (RaycastMode == EPCGWorldRaycastMode::Segments)
	{
		FPCGPinProperties& EndPointsInputPin = PinProperties.Emplace_GetRef(PCGWorldRaycastElementConstants::EndPointsInputLabel, EPCGDataType::PointOrParam);
#if WITH_EDITOR
		EndPointsInputPin.Tooltip = LOCTEXT("EndPointsInputPinTooltip", "Points acting as the end point of each individual ray.");
#endif // WITH_EDITOR
	}

	FPCGPinProperties& BoundingShapeInputPin = PinProperties.Emplace_GetRef(PCGWorldRaycastElementConstants::BoundingShapeLabel, EPCGDataType::Spatial);
#if WITH_EDITOR
	BoundingShapeInputPin.Tooltip = LOCTEXT("BoundingShapeInputPinTooltip", "All projected points must be contained within this shape. If this input is omitted then bounds will be taken from the actor so that points are contained within actor bounds.");
#endif // WITH_EDITOR

	return PinProperties;
}

TArray<FPCGPinProperties> UPCGWorldRaycastElementSettings::OutputPinProperties() const
{
	return DefaultPointOutputPinProperties();
}

FPCGElementPtr UPCGWorldRaycastElementSettings::CreateElement() const
{
	return MakeShared<FPCGWorldRaycastElement>();
}

bool FPCGWorldRaycastElement::PrepareDataInternal(FPCGContext* InContext) const
{
	ContextType* Context = static_cast<ContextType*>(InContext);

	const UPCGWorldRaycastElementSettings* Settings = Context->GetInputSettings<UPCGWorldRaycastElementSettings>();
	check(Settings);

	const TArray<FPCGTaggedData> OriginsInputData = Context->InputData.GetInputsByPin(PCGWorldRaycastElementConstants::OriginsInputLabel);
	const TArray<FPCGTaggedData> EndPointsInputData = Context->InputData.GetInputsByPin(PCGWorldRaycastElementConstants::EndPointsInputLabel);

	const EPCGTimeSliceInitResult ExecutionInitResult = Context->InitializePerExecutionState([&OriginsInputData, &EndPointsInputData, Settings](ContextType* Context, ExecStateType& OutState)
	{
		// With no origins data, early out
		if (OriginsInputData.IsEmpty())
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		if (!Settings->bUnbounded)
		{
			bool bUnionWasCreated;
			const UPCGSpatialData* BoundingShape = PCGSettingsHelpers::ComputeBoundingShape(Context, PCGWorldRaycastElementConstants::BoundingShapeLabel, bUnionWasCreated);
			OutState.Bounds = BoundingShape ? BoundingShape->GetBounds() : FBox(EForceInit::ForceInit);
			if (!OutState.Bounds.IsValid)
			{
				// The bounding shape bounds is invalid, such as an empty intersection, so no operation will need to be performed.
				return EPCGTimeSliceInitResult::NoOperation;
			}
		}

		if (Settings->RaycastMode == EPCGWorldRaycastMode::Segments && EndPointsInputData.Num() != OriginsInputData.Num())
		{
			PCGLog::LogErrorOnGraph(LOCTEXT("InvalidEndPointDataCount", "End point input data count must match the Origins input data count."), Context);
			return EPCGTimeSliceInitResult::NoOperation;
		}

		OutState.CollisionQueryParams.bTraceComplex = Settings->WorldQueryParams.bTraceComplex;
		OutState.CollisionQueryParams.bReturnPhysicalMaterial = Settings->WorldQueryParams.bGetReferenceToPhysicalMaterial;
		OutState.CollisionQueryParams.bReturnFaceIndex = Settings->WorldQueryParams.bGetFaceIndex || Settings->WorldQueryParams.bGetUVCoords;
		OutState.CollisionObjectQueryParams = FCollisionObjectQueryParams(Settings->WorldQueryParams.CollisionChannel);

		return EPCGTimeSliceInitResult::Success;
	});

	if (ExecutionInitResult != EPCGTimeSliceInitResult::Success)
	{
		return true;
	}

	Context->InitializePerIterationStates(OriginsInputData.Num(), [Context, Settings, OriginsInputData, EndPointsInputData](IterStateType& OutState, const ExecStateType&, int32 Index)
	{
		const UPCGData* OriginsData = OriginsInputData[Index].Data;

		// Accept only point or param data
		if (!OriginsData || !OriginsData->ConstMetadata())
		{
			PCGLog::LogErrorOnGraph(FText::Format(LOCTEXT("NoDataFoundOnOriginsInput", "No valid data found on Origins input {0}"), Index), Context);
			return EPCGTimeSliceInitResult::NoOperation;
		}

		// Given a selector, will populate a given array view with attributes
		auto CacheArray = [Settings, Context]<typename Type>(const UPCGData* InData, const FPCGAttributePropertyInputSelector& InSelector, TArray<Type>& OutArray)
		{
			const FPCGAttributePropertyInputSelector Selector = InSelector.CopyAndFixLast(InData);

			TUniquePtr<const IPCGAttributeAccessor> Accessor = PCGAttributeAccessorHelpers::CreateConstAccessor(InData, Selector);
			TUniquePtr<const IPCGAttributeAccessorKeys> Keys = PCGAttributeAccessorHelpers::CreateConstKeys(InData, Selector);
			if (!Accessor.IsValid() || !Keys.IsValid())
			{
				PCGLog::LogWarningOnGraph(FText::Format(LOCTEXT("AttributeDoesNotExist", "Attribute/property '{0}' does not exist - skipped."), Selector.GetDisplayText()), Context);
				return false;
			}

			OutArray.Empty();
			OutArray.SetNumUninitialized(Keys->GetNum());

			if (!Accessor->GetRange<Type>(OutArray, 0, *Keys, EPCGAttributeAccessorFlags::AllowBroadcast | EPCGAttributeAccessorFlags::AllowConstructible))
			{
				PCGLog::LogErrorOnGraph(FText::Format(LOCTEXT("InvalidAttributeValues", "Could not get the range of values for attribute/property '{0}'."), Selector.GetDisplayText()), Context);
				return false;
			}

			return true;
		};

		// --- Find the ray origin ---
		if (!CacheArray(OriginsData, Settings->OriginInputAttribute, OutState.CachedRayOrigins))
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		// --- Find the ray direction vectors ---
		// Calculate the vectors from origin to end points
		if (Settings->RaycastMode == EPCGWorldRaycastMode::Segments)
		{
			TObjectPtr<const UPCGData> EndPointsData = EndPointsInputData[Index].Data;
			if (!EndPointsData)
			{
				PCGLog::LogErrorOnGraph(FText::Format(LOCTEXT("NoDataFoundOnEndPointsInput", "No valid data found on End Points input {0}"), Index), Context);
				return EPCGTimeSliceInitResult::NoOperation;
			}

			TArray<FVector> EndPoints;
			if (!CacheArray(EndPointsData, Settings->EndPointAttribute, EndPoints))
			{
				return EPCGTimeSliceInitResult::NoOperation;
			}

			// Support N:N, 1:N, N:1
			if (OutState.CachedRayOrigins.Num() != 1 && EndPoints.Num() != 1 && EndPoints.Num() != OutState.CachedRayOrigins.Num())
			{
				PCGLog::LogErrorOnGraph(LOCTEXT("InvalidEndPointCount", "The End Points input count must be 1 or directly match the Origins input count."), Context);
				return EPCGTimeSliceInitResult::NoOperation;
			}

			const int32 PointCount = FMath::Max(OutState.CachedRayOrigins.Num(), EndPoints.Num());

			OutState.CachedRayVectors.Empty();
			OutState.CachedRayVectors.Reserve(PointCount);

			// Find the ray vector from the origin to end points
			for (int PointIndex = 0; PointIndex < PointCount; ++PointIndex)
			{
				const FVector& Origin = OutState.CachedRayOrigins[OutState.CachedRayOrigins.Num() == 1 ? 0 : PointIndex];
				const FVector& EndPoint = EndPoints[EndPoints.Num() == 1 ? 0 : PointIndex];
				OutState.CachedRayVectors.Emplace((EndPoint - Origin));
			}
		}
		else if (Settings->bOverrideRayDirections) // Use a selector to determine the (non-normalized) directions
		{
			const FPCGAttributePropertyInputSelector DirectionSelector = Settings->RayDirectionAttribute.CopyAndFixLast(OriginsData);

			if (!CacheArray(OriginsData, DirectionSelector, OutState.CachedRayVectors))
			{
				return EPCGTimeSliceInitResult::NoOperation;
			}
		}
		else // Use the single property
		{
			OutState.CachedRayVectors.Empty();
			OutState.CachedRayVectors.Emplace(Settings->RayDirection);
		}

		// --- Find the ray length ---
		// If the ray is infinite or user-selected length, we need to normalize the vector
		if (Settings->RaycastMode == EPCGWorldRaycastMode::Infinite || Settings->RaycastMode == EPCGWorldRaycastMode::NormalizedWithLength)
		{
			// Normalize the directions and store locally in the state
			for (FVector& Ray : OutState.CachedRayVectors)
			{
				Ray.Normalize();
			}

			// If the length is infinite, it will be a fixed value at execution
			if (Settings->RaycastMode == EPCGWorldRaycastMode::Infinite)
			{
				return EPCGTimeSliceInitResult::Success;
			}

			// Account for user length property. Use a selector to determine the (non-normalized) directions
			if (Settings->bOverrideRayLengths)
			{
				const FPCGAttributePropertyInputSelector LengthSelector = Settings->RayLengthAttribute.CopyAndFixLast(OriginsData);

				if (!CacheArray(OriginsData, LengthSelector, OutState.CachedRayLengths))
				{
					return EPCGTimeSliceInitResult::NoOperation;
				}
			}
			else
			{
				OutState.CachedRayLengths.Empty();
				OutState.CachedRayLengths.Emplace(Settings->RayLength);
			}
		}

		return EPCGTimeSliceInitResult::Success;
	});

	return true;
}

bool FPCGWorldRaycastElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGWorldRaycastElement::Execute);

	ContextType* Context = static_cast<ContextType*>(InContext);

	if (!Context->DataIsPreparedForExecution())
	{
		return true;
	}

	return ExecuteSlice(Context, [](ContextType* Context, const ExecStateType& ExecState, IterStateType& IterState, const uint32 IterIndex)
	{
		if (Context->GetIterationStateResult(IterIndex) == EPCGTimeSliceInitResult::NoOperation)
		{
			return true;
		}

		const UPCGWorldRaycastElementSettings* Settings = Context->GetInputSettings<UPCGWorldRaycastElementSettings>();
		check(Settings);

		UWorld* World = Context->SourceComponent->GetWorld();
		check(World);

		const TArray<FPCGTaggedData> OriginInputs = Context->InputData.GetInputsByPin(PCGWorldRaycastElementConstants::OriginsInputLabel);
		const FPCGTaggedData& OriginInputData = OriginInputs[IterIndex];
		const UPCGPointData* OriginInputPointData = Cast<UPCGPointData>(OriginInputData.Data);
		const TArray<FPCGPoint>* OriginInputPoints = OriginInputPointData ? &OriginInputPointData->GetPoints() : nullptr;

		TArray<FPCGTaggedData>& OutputData = Context->OutputData.TaggedData;
		UPCGPointData* OutputPointData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
		// TODO: This should initialize from the End Points point data, if Origin point data doesn't exist
		OutputPointData->InitializeFromData(OriginInputPointData);
		FPCGTaggedData& Output = OutputData.Emplace_GetRef(OriginInputData);
		Output.Data = OutputPointData;

		UPCGMetadata* OutMetadata = OutputPointData->Metadata;

		TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
		// If all points will be kept, the size can be pre-allocated
		if (Settings->bKeepOriginalPointOnMiss)
		{
			OutputPoints.Reserve(IterState.CachedRayOrigins.Num());
		}

		FPCGWorldRaycastQueryParams WorldQueryParams = Settings->WorldQueryParams;
		WorldQueryParams.Initialize();


		if (!PCGWorldQueryHelpers::CreateRayHitAttributes(WorldQueryParams, OutMetadata))
		{
			PCGLog::LogWarningOnGraph(LOCTEXT("UnableToCreateAllAttributes", "One or more attributes were unable to be created."), Context);
		}

		bool bAttributeSuccess = true;

		const int32 PointCount = FMath::Max(IterState.CachedRayOrigins.Num(), IterState.CachedRayVectors.Num());
		for (int64 PointIndex = 0; PointIndex < PointCount; ++PointIndex)
		{
			const FVector& Origin = IterState.CachedRayOrigins[IterState.CachedRayOrigins.Num() == 1 ? 0 : PointIndex];
			const FVector& Direction = IterState.CachedRayVectors[IterState.CachedRayVectors.Num() == 1 ? 0 : PointIndex];
			double Magnitude = 1.0;

			if (Settings->RaycastMode == EPCGWorldRaycastMode::Infinite)
			{
				Magnitude = UE_LARGE_WORLD_MAX;
			}
			else if (Settings->RaycastMode == EPCGWorldRaycastMode::NormalizedWithLength)
			{
				Magnitude = IterState.CachedRayLengths[IterState.CachedRayLengths.Num() == 1 ? 0 : PointIndex];
			}

			FVector RayVector = Direction * Magnitude;
			// Discard point if the direction + magnitude vector is the ZeroVector
			if (RayVector.IsNearlyZero())
			{
				continue;
			}

			TArray<FHitResult> Hits;
			World->LineTraceMultiByObjectType(Hits, Origin, Origin + RayVector, ExecState.CollisionObjectQueryParams, ExecState.CollisionQueryParams);
			const TOptional<FHitResult>& HitResult = PCGWorldQueryHelpers::FilterRayHitResults(&WorldQueryParams, Context->SourceComponent, Hits);

			// If there's a hit, and it's within bounds, keep the point
			if (HitResult.IsSet() && (Settings->bUnbounded || PCGHelpers::IsInsideBounds(ExecState.Bounds, HitResult.GetValue().ImpactPoint)))
			{
				const FHitResult& Hit = HitResult.GetValue();
				// Copy the input point, if it exists
				FPCGPoint& OutPoint = OriginInputPoints
					? OutputPoints.Emplace_GetRef((*OriginInputPoints)[OriginInputPoints->Num() == 1 ? 0 : PointIndex])
					: OutputPoints.Emplace_GetRef();

				OutPoint.Transform = PCGWorldQueryHelpers::GetOrthonormalImpactTransform(Hit);
				OutPoint.Density = 1.f;
				UPCGBlueprintHelpers::SetSeedFromPosition(OutPoint);

				bAttributeSuccess &= PCGWorldQueryHelpers::ApplyRayHitMetadata(Hit, WorldQueryParams, Direction, OutputPoints.Last(), OutMetadata, World);
			}
			else if (Settings->bKeepOriginalPointOnMiss)
			{
				// Copy the original point if possible
				if (OriginInputPoints)
				{
					OutputPoints.Emplace_GetRef((*OriginInputPoints)[OriginInputPoints->Num() == 1 ? 0 : PointIndex]).Density = 0.f;
				}
				else
				{
					OutputPoints.Emplace(FTransform(Origin), /*InDensity=*/0.f, UPCGBlueprintHelpers::ComputeSeedFromPosition(Origin));
				}

				bAttributeSuccess &= PCGWorldQueryHelpers::ApplyRayMissMetadata(WorldQueryParams, OutputPoints.Last(), OutMetadata);
			}
		}

		if (!bAttributeSuccess)
		{
			PCGLog::LogWarningOnGraph(LOCTEXT("UnableToApplyAllAttributes", "One or more attributes were unable to be applied."), Context);
		}

		return true;
	});
}

#undef LOCTEXT_NAMESPACE