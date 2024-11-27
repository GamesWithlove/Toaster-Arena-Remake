// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGPathfindingElement.h"

#include "PCGContext.h"
#include "PCGComponent.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSplineData.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"
#include "SpatialAlgo/PCGAStar.h"

#include "Components/SplineComponent.h"
#include "Engine/HitResult.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PCGPathfindingElement"

namespace PCGPathfindingElement
{
	namespace Constants
	{
		const FName StartLocationsInputPinLabel = TEXT("Start");
		const FName GoalLocationsInputPinLabel = TEXT("Goal");
		static const TCHAR* CompletePathTag = TEXT("CompletePath");
		static const TCHAR* PartialPathTag = TEXT("PartialPath");
	}

	namespace Helpers
	{
		TArray<FSplinePoint> ConvertPathToSplinePoints(const TArrayView<const FPCGPoint> Path, const EPCGPathfindingSplineMode SplineMode)
		{
			ESplinePointType::Type SplineCurveMode = ESplinePointType::Type::Constant;
			switch (SplineMode)
			{
				case EPCGPathfindingSplineMode::Curve:
					SplineCurveMode = ESplinePointType::Curve;
					break;
				case EPCGPathfindingSplineMode::Linear:
					SplineCurveMode = ESplinePointType::Linear;
				default:
					break;
			}

			TArray<FSplinePoint> SplinePoints;
			SplinePoints.Reserve(Path.Num());

			int Index = 0;
			Algo::Transform(Path, SplinePoints, [&Index, SplineCurveMode](const FPCGPoint& Point)
			{
				return FSplinePoint(
						Index++, // Spline points must be indexed in ascending order
						Point.Transform.GetLocation(),
						FVector::ZeroVector,
						FVector::ZeroVector,
						FRotator::ZeroRotator,
						FVector::OneVector,
						SplineCurveMode);
			});

			return SplinePoints;
		}
	}
} // namespace PCGPathfindingElement

UPCGPathfindingSettings::UPCGPathfindingSettings()
{
	StartLocationAttribute.SetPointProperty(EPCGPointProperties::Position);
	GoalLocationAttribute.SetPointProperty(EPCGPointProperties::Position);

	// In most cases, we're not going to be interested in checking for occlusion by the landscape itself, as we'll be pathfinding on the landscape.
	PathTraceParams.SelectLandscapeHits = EPCGWorldQuerySelectLandscapeHits::Exclude;
}

TArray<FPCGPinProperties> UPCGPathfindingSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> Properties;
	Properties.Emplace_GetRef(PCGPinConstants::DefaultInputLabel, EPCGDataType::Point).SetRequiredPin();

	if (bStartLocationsAsInput)
	{
		Properties.Emplace_GetRef(PCGPathfindingElement::Constants::StartLocationsInputPinLabel, EPCGDataType::PointOrParam, /*bInAllowMultipleConnections=*/false, /*bAllowMultipleData=*/false).SetRequiredPin();
	}

	if (bGoalLocationsAsInput)
	{
		Properties.Emplace_GetRef(PCGPathfindingElement::Constants::GoalLocationsInputPinLabel, EPCGDataType::PointOrParam, /*bInAllowMultipleConnections=*/false, /*bAllowMultipleData=*/false).SetRequiredPin();
	}

	return Properties;
}

TArray<FPCGPinProperties> UPCGPathfindingSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> Properties;
	if (bOutputAsSpline)
	{
		Properties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Spline);
	}
	else
	{
		Properties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Point);
	}

	return Properties;
}

FPCGElementPtr UPCGPathfindingSettings::CreateElement() const
{
	return MakeShared<FPCGPathfindingElement>();
}

#if WITH_EDITOR
EPCGChangeType UPCGPathfindingSettings::GetChangeTypeForProperty(const FName& InPropertyName) const
{
	EPCGChangeType LocalChangeType = EPCGChangeType::Cosmetic;

	if (InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGPathfindingSettings, bOutputAsSpline)
		|| InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGPathfindingSettings, bStartLocationsAsInput)
		|| InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGPathfindingSettings, bGoalLocationsAsInput))
	{
		LocalChangeType |= EPCGChangeType::Structural;
	}

	return Super::GetChangeTypeForProperty(InPropertyName) | LocalChangeType;
}
#endif // WITH_EDITOR

bool FPCGPathfindingElement::IsCacheable(const UPCGSettings* InSettings) const
{
	const UPCGPathfindingSettings* Settings = Cast<const UPCGPathfindingSettings>(InSettings);
	return !Settings || !Settings->bUsePathTraces;
}

bool FPCGPathfindingElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGPathfindingElement::PrepareData);

	ContextType* Context = static_cast<ContextType*>(InContext);
	check(Context);

	const UPCGPathfindingSettings* Settings = Context->GetInputSettings<UPCGPathfindingSettings>();
	check(Settings);

	const TArray<FPCGTaggedData> PointInputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);

	if (PointInputs.IsEmpty())
	{
		return true;
	}

	const EPCGTimeSliceInitResult ExecResult = Context->InitializePerExecutionState([&PointInputs, Settings](const ContextType* SlicedContext, ExecStateType& OutState)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGClusterElement::PrepareData::InitializePerExecutionState);

		if (PointInputs.IsEmpty())
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		OutState.Settings = PCGSpatialAlgo::AStar::FSearchSettings
		{
			.SearchDistance = Settings->SearchDistance,
			.HeuristicWeight = Settings->HeuristicWeight,
			.bAcceptPartialPath = Settings->bAcceptPartialPath,
			.bCopyOriginatingPoints = Settings->bCopyOriginatingPoints
		};

		auto GetLocationsFromInput = [SlicedContext, Settings](FName Pin) -> const UPCGData*
		{
			const TArray<FPCGTaggedData> LocationsInputData = SlicedContext->InputData.GetInputsByPin(Pin);
			if (LocationsInputData.IsEmpty())
			{
				return nullptr;
			}

			if (LocationsInputData.Num() > 1)
			{
				PCGLog::InputOutput::LogFirstInputOnlyWarning(Pin, SlicedContext);
			}

			return LocationsInputData[0].Data;
		};

		auto PopulateArray = [SlicedContext](const UPCGData* Data, const FPCGAttributePropertyInputSelector& InSelector, TArray<FPCGPoint>& OutPointArray)
		{
			const FPCGAttributePropertyInputSelector Selector = InSelector.CopyAndFixLast(Data);
			const TUniquePtr<const IPCGAttributeAccessor> Accessor = PCGAttributeAccessorHelpers::CreateConstAccessor(Data, Selector);
			const TUniquePtr<const IPCGAttributeAccessorKeys> Keys = PCGAttributeAccessorHelpers::CreateConstKeys(Data, Selector);
			if (!Accessor || !Keys)
			{
				PCGLog::Metadata::LogFailToCreateAccessorError(Selector, SlicedContext);
				return;
			}

			if (const UPCGPointData* PointData = Cast<UPCGPointData>(Data))
			{
				OutPointArray = PointData->GetPointsCopy();
			}
			else
			{
				OutPointArray.SetNum(Keys->GetNum());
			}

			// For Points with $Position as the selection, nothing is needed. For all other conditions, set the position based on the selected attribute/property.
			if (OutPointArray.IsEmpty() || (Selector.GetSelection() == EPCGAttributePropertySelection::PointProperty && Selector.GetPointProperty() != EPCGPointProperties::Position))
			{
				return;
			}

			TArray<FVector> Locations;
			Locations.SetNumUninitialized(Keys->GetNum());
			Accessor->GetRange(TArrayView<FVector>(Locations), 0, *Keys, EPCGAttributeAccessorFlags::AllowBroadcastAndConstructible);

			check(Locations.Num() == OutPointArray.Num());
			for (int i = 0; i < OutPointArray.Num(); ++i)
			{
				OutPointArray[i].Transform.SetLocation(Locations[i]);
				OutPointArray[i].Seed = PCGHelpers::ComputeSeedFromPosition(Locations[i]);
			}
		};

		if (Settings->bStartLocationsAsInput)
		{
			if (const UPCGData* Data = GetLocationsFromInput(PCGPathfindingElement::Constants::StartLocationsInputPinLabel))
			{
				PopulateArray(Data, Settings->StartLocationAttribute, OutState.StartPoints);
			}
		}
		else
		{
			OutState.StartPoints = {FPCGPoint(FTransform(Settings->Start), /*InDensity=*/1, PCGHelpers::ComputeSeedFromPosition(Settings->Start))};
		}

		if (OutState.StartPoints.IsEmpty())
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		if (Settings->bGoalLocationsAsInput)
		{
			if (const UPCGData* Data = GetLocationsFromInput(PCGPathfindingElement::Constants::GoalLocationsInputPinLabel))
			{
				PopulateArray(Data, Settings->GoalLocationAttribute, OutState.GoalPoints);
			}
		}
		else
		{
			OutState.GoalPoints = {FPCGPoint(FTransform(Settings->Goal), /*InDensity=*/1, PCGHelpers::ComputeSeedFromPosition(Settings->Goal))};
		}

		if (OutState.GoalPoints.IsEmpty())
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		if (OutState.StartPoints.Num() != OutState.GoalPoints.Num() && OutState.StartPoints.Num() != 1 && OutState.GoalPoints.Num() != 1)
		{
			PCGLog::InputOutput::LogInvalidCardinalityError(PCGPathfindingElement::Constants::StartLocationsInputPinLabel, PCGPathfindingElement::Constants::GoalLocationsInputPinLabel, SlicedContext);
			return EPCGTimeSliceInitResult::AbortExecution;
		}

		return EPCGTimeSliceInitResult::Success;
	});

	if (ExecResult != EPCGTimeSliceInitResult::Success)
	{
		return true;
	}

	Context->InitializePerIterationStates(PointInputs.Num(), [&PointInputs, Settings, Context](IterStateType& OutState, const ExecStateType& ExecutionState, const uint32 IterationIndex)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGClusterElement::PrepareData::InitializePerIterationStates);

		const UPCGPointData* PointData = Cast<UPCGPointData>(PointInputs[IterationIndex].Data);
		if (!PointData || PointData->IsEmpty())
		{
			return EPCGTimeSliceInitResult::NoOperation;
		}

		OutState.SearchState.OriginatingPointData = PointData;

		// Build cost attribute accessor if required
		TSharedPtr<const IPCGAttributeAccessor> CostAccessor = nullptr;

		if (Settings->CostFunctionMode != EPCGPathfindingCostFunctionMode::Distance)
		{
			const FPCGAttributePropertyInputSelector Selector = Settings->CostAttribute.CopyAndFixLast(PointData);
			CostAccessor = MakeShareable(PCGAttributeAccessorHelpers::CreateConstAccessor(PointData, Selector).Release());

			FPCGAttributeAccessorKeysPoints Keys(PointData->GetPoints());

			if (!CostAccessor)
			{
				PCGLog::Metadata::LogFailToCreateAccessorError(Selector, Context);
			}
			else if (!PCG::Private::IsBroadcastableOrConstructible(CostAccessor->GetUnderlyingType(), PCG::Private::MetadataTypes<double>::Id))
			{
				PCGLog::Metadata::LogFailToGetAttributeError<double>(Selector, CostAccessor.Get(), Context);
				CostAccessor = nullptr;
			}
		}

		TFunction<bool(const FVector&, const FVector&)> LineTraceTest = [](const FVector&, const FVector&) -> bool { return true; };

		if (Settings->bUsePathTraces)
		{
			if (UWorld* World = Context->SourceComponent.Get() ? Context->SourceComponent->GetWorld() : nullptr)
			{
				FPCGWorldRaycastQueryParams PathTraceParams = Settings->PathTraceParams;
				PathTraceParams.Initialize();

				TWeakObjectPtr<UPCGComponent> OriginatingComponent = Context->SourceComponent;
				FCollisionObjectQueryParams ObjectQueryParams(PathTraceParams.CollisionChannel);
				FCollisionQueryParams Params;
				Params.bTraceComplex = PathTraceParams.bTraceComplex;

				LineTraceTest = [World, ObjectQueryParams = MoveTemp(ObjectQueryParams), Params = MoveTemp(Params), OriginatingComponent, PathTraceParams = MoveTemp(PathTraceParams)](const FVector& StartPosition, const FVector& EndPosition) -> bool
				{
					TArray<FHitResult> OutHits;
					if (World->LineTraceMultiByObjectType(OutHits, StartPosition, EndPosition, ObjectQueryParams, Params))
					{
						TOptional<FHitResult> HitResult = PCGWorldQueryHelpers::FilterRayHitResults(&PathTraceParams, OriginatingComponent, OutHits);
						return !HitResult.IsSet();
					}
					else
					{
						return true;
					}
				};
			}
		}

		if (CostAccessor)
		{
			if (Settings->CostFunctionMode == EPCGPathfindingCostFunctionMode::FitnessScore)
			{
				const double MaxFitnessPenaltyFactor = FMath::Max(Settings->MaximumFitnessPenaltyFactor, 1.0);

				OutState.SearchState.CostFunction = [FitnessAccessor = CostAccessor, MaxFitnessPenaltyFactor, PathTraceTest = MoveTemp(LineTraceTest)](const double PreviousNodeCost, const FPCGPoint* PreviousNodePoint, const double DistanceToCurrentSquared, const FPCGPoint* CurrentNodePoint)
				{
					if (!PathTraceTest(PreviousNodePoint->Transform.GetLocation(), CurrentNodePoint->Transform.GetLocation()))
					{
						return std::numeric_limits<double>::max();
					}

					double FitnessScore = 1.0;
					FPCGAttributeAccessorKeysPoints Key(*CurrentNodePoint);

					FitnessAccessor->Get(FitnessScore, Key, EPCGAttributeAccessorFlags::AllowBroadcastAndConstructible);
					FitnessScore = FMath::Clamp(FitnessScore, 0.0, 1.0);

					return PreviousNodeCost + (1.0 - FitnessScore) * MaxFitnessPenaltyFactor * FMath::Sqrt(DistanceToCurrentSquared);
				};
			}
			else if (Settings->CostFunctionMode == EPCGPathfindingCostFunctionMode::CostMultiplier)
			{
				OutState.SearchState.CostFunction = [MultiplierAccessor = CostAccessor, PathTraceTest = MoveTemp(LineTraceTest)](const double PreviousNodeCost, const FPCGPoint* PreviousNodePoint, const double DistanceToCurrentSquared, const FPCGPoint* CurrentNodePoint)
				{
					if (!PathTraceTest(PreviousNodePoint->Transform.GetLocation(), CurrentNodePoint->Transform.GetLocation()))
					{
						return std::numeric_limits<double>::max();
					}

					double Multiplier = 1.0;
					const FPCGAttributeAccessorKeysPoints Key(*CurrentNodePoint);

					MultiplierAccessor->Get(Multiplier, Key, EPCGAttributeAccessorFlags::AllowBroadcastAndConstructible);
					Multiplier = FMath::Max(Multiplier, 1.0);

					return PreviousNodeCost + Multiplier * FMath::Sqrt(DistanceToCurrentSquared);
				};
			}
			else
			{
				checkNoEntry();
			}
		}
		else if (Settings->bUsePathTraces)
		{
			// Use distance but with line trace
			OutState.SearchState.CostFunction = [PathTraceTest = MoveTemp(LineTraceTest)](const double PreviousNodeCost, const FPCGPoint* PreviousNodePoint, const double DistanceToCurrentSquared, const FPCGPoint* CurrentNodePoint)
			{
				if (!PathTraceTest(PreviousNodePoint->Transform.GetLocation(), CurrentNodePoint->Transform.GetLocation()))
				{
					return std::numeric_limits<double>::max();
				}
				else
				{
					return PCGSpatialAlgo::AStar::Cost::CalculateCost_EuclideanDistance(PreviousNodeCost, PreviousNodePoint, DistanceToCurrentSquared, CurrentNodePoint);
				}
			};
		}

		return EPCGTimeSliceInitResult::Success;
	});

	return true;
}

bool FPCGPathfindingElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGPathfindingElement::Execute);

	ContextType* TimeSlicedContext = static_cast<ContextType*>(InContext);
	check(TimeSlicedContext);

	if (!TimeSlicedContext->DataIsPreparedForExecution() || TimeSlicedContext->GetExecutionStateResult() == EPCGTimeSliceInitResult::NoOperation)
	{
		return true;
	}

	const UPCGPathfindingSettings* Settings = TimeSlicedContext->GetInputSettings<UPCGPathfindingSettings>();
	check(Settings);

	return ExecuteSlice(TimeSlicedContext, [Settings](ContextType* Context, const ExecStateType& ExecutionState, IterStateType& IterationState, const uint32 IterIndex)
	{
		if (Context->GetIterationStateResult(IterIndex) == EPCGTimeSliceInitResult::NoOperation)
		{
			return true;
		}

		while (IterationState.PathIterationIndex < ExecutionState.StartPoints.Num())
		{
			using PCGSpatialAlgo::AStar::ESearchResult;
			TArray<FPCGPoint> FinalPath;

			// Initialize the next iteration.
			if (IterationState.PathIterationIndex != IterationState.LastPathIterationIndex)
			{
				PCGSpatialAlgo::AStar::Initialize(&ExecutionState.StartPoints[IterationState.PathIterationIndex], IterationState.SearchState);
				IterationState.LastPathIterationIndex = IterationState.PathIterationIndex;
			}

			ESearchResult SearchResult;
			do
			{
				SearchResult = ExecuteSearchIteration(ExecutionState.Settings, IterationState.SearchState, ExecutionState.GoalPoints, FinalPath);

				if (SearchResult == ESearchResult::Processing && Context->ShouldStop())
				{
					return false;
				}
			}
			while (SearchResult == ESearchResult::Processing);

			if (SearchResult == ESearchResult::Invalid)
			{
				PCGLog::LogErrorOnGraph(LOCTEXT("InvalidSearch", "The search could not be completed. Check for invalid search settings or input."));
				return true;
			}

			// No path was found and partial paths were not enabled.
			if (FinalPath.IsEmpty())
			{
				check(!ExecutionState.Settings.bAcceptPartialPath && SearchResult != ESearchResult::Partial);
				return true;
			}

			FPCGTaggedData& OutputData = Context->OutputData.TaggedData.Emplace_GetRef();

			// Output the path as either a spline or points.
			if (Settings->bOutputAsSpline)
			{
				const TArray<FSplinePoint> SplinePoints = PCGPathfindingElement::Helpers::ConvertPathToSplinePoints(FinalPath, Settings->SplineMode);
				UPCGSplineData* SplineData = FPCGContext::NewObject_AnyThread<UPCGSplineData>(Context);
				SplineData->Initialize(SplinePoints, /*bInClosedLoop=*/false, FTransform::Identity);
				OutputData.Data = SplineData;
			}
			else
			{
				UPCGPointData* OutputPointData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
				if (ExecutionState.Settings.bCopyOriginatingPoints)
				{
					OutputPointData->InitializeFromData(IterationState.SearchState.OriginatingPointData);
				}

				OutputPointData->GetMutablePoints() = std::move(FinalPath);
				OutputData.Data = OutputPointData;
			}

			if (ExecutionState.Settings.bAcceptPartialPath)
			{
				OutputData.Tags.Emplace(SearchResult == ESearchResult::Complete ? PCGPathfindingElement::Constants::CompletePathTag : PCGPathfindingElement::Constants::PartialPathTag);
			}

			++IterationState.PathIterationIndex;

			if (Context->ShouldStop())
			{
				return false;
			}
		}

		return true;
	});
}

#undef LOCTEXT_NAMESPACE