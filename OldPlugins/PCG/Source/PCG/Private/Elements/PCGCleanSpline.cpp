// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGCleanSpline.h"

#include "PCGContext.h"
#include "Data/PCGSplineData.h"

#define LOCTEXT_NAMESPACE "PCGCleanSplineElement"

namespace PCGCleanSplineHelpers
{
	bool VectorsAreCollinear(const FVector& FirstVector, const FVector& SecondVector, const double Threshold)
	{
		return FMath::Abs(FirstVector.GetSafeNormal() | SecondVector.GetSafeNormal()) >= Threshold;
	}

	bool ControlPointsAreColocated(const FSplinePoint& Point1, const FSplinePoint& Point2, const FTransform& SplineTransform, const double Threshold, const bool bUseLocalSpace = false)
	{
		const FVector Location1 = bUseLocalSpace ? Point1.Position : SplineTransform.TransformPosition(Point1.Position);
		const FVector Location2 = bUseLocalSpace ? Point2.Position : SplineTransform.TransformPosition(Point2.Position);
		return FVector::DistSquared(Location1, Location2) < Threshold * Threshold;
	}

	// Implementation note: Co-located points will have a vector dot product of zero, regardless of tangents, and will be thus collinear.
	bool ControlPointsAreCollinear(const FSplinePoint& Point1, const FSplinePoint& Point2, const FSplinePoint& Point3, const double Threshold)
	{
		const FVector Segment = Point3.Position - Point1.Position;

		/* Need to check all four tangents against the segment to guarantee collinearity. Note: This works for linear
		 * segments only. It is possible to find more control points on curves that would have no effect on the final
		 * result, but it would be extremely rare for a user to wind up in that situation. It would also provide little
		 * to no benefit to do so as well.
		 */
		return (
			VectorsAreCollinear(Point1.LeaveTangent, Segment, Threshold) &&
			VectorsAreCollinear(Point2.ArriveTangent, Segment, Threshold) &&
			VectorsAreCollinear(Point2.LeaveTangent, Segment, Threshold) &&
			VectorsAreCollinear(Point3.ArriveTangent, Segment, Threshold)
		);
	}
}

FPCGElementPtr UPCGCleanSplineSettings::CreateElement() const
{
	return MakeShared<FPCGCleanSplineElement>();
}

#if WITH_EDITOR
void UPCGCleanSplineSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property)
	{
		if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UPCGCleanSplineSettings, bUseRadians))
		{
			CollinearAngleThreshold = bUseRadians ? FMath::DegreesToRadians(CollinearAngleThreshold) : FMath::RadiansToDegrees(CollinearAngleThreshold);
		}
		else if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UPCGCleanSplineSettings, CollinearAngleThreshold))
		{
			static constexpr double MaxCollinearAngleToleranceDegrees = 89;
			CollinearAngleThreshold = FMath::Clamp(CollinearAngleThreshold, 0, bUseRadians ? FMath::DegreesToRadians(MaxCollinearAngleToleranceDegrees) : MaxCollinearAngleToleranceDegrees);
		}
	}
}
#endif // WITH_EDITOR

TArray<FPCGPinProperties> UPCGCleanSplineSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> Properties;
	Properties.Emplace_GetRef(PCGPinConstants::DefaultInputLabel, EPCGDataType::Spline).SetRequiredPin();
	return Properties;
}

TArray<FPCGPinProperties> UPCGCleanSplineSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> Properties;
	Properties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Spline);
	return Properties;
}

bool FPCGCleanSplineElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCleanSplineElement::Execute);

	check(InContext);

	const UPCGCleanSplineSettings* Settings = InContext->GetInputSettings<UPCGCleanSplineSettings>();
	check(Settings);

	// Nothing to do. Forward the output.
	if (!Settings->bFuseColocatedControlPoints && !Settings->bRemoveCollinearControlPoints)
	{
		InContext->OutputData = InContext->InputData;
		PCGLog::LogWarningOnGraph(LOCTEXT("NoOperation", "No Clean Spline operations selected. Input will be forwarded"), InContext);
		return true;
	}

	// Pre-calculate the tolerance value from the user defined tolerance in radians/degrees to cross-product comparable value.
	const double DotProductToleranceRad = Settings->bUseRadians ? Settings->CollinearAngleThreshold : FMath::DegreesToRadians(Settings->CollinearAngleThreshold);
	// Max the tolerance with an epsilon to accomodate rounding errors.
	const double DotProductTolerance = FMath::Max(FMath::Abs(FMath::Cos(DotProductToleranceRad)), UE_DOUBLE_SMALL_NUMBER);

	for (const FPCGTaggedData& InputData : InContext->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel))
	{
		const UPCGSplineData* InputSplineData = Cast<const UPCGSplineData>(InputData.Data);
		if (!InputSplineData || InputSplineData->GetNumSegments() < 1)
		{
			continue;
		}

		const FTransform& SplineTransform = InputSplineData->SplineStruct.Transform;
		const FInterpCurveVector& ControlPointsPosition = InputSplineData->SplineStruct.SplineCurves.Position;
		const FInterpCurveQuat& ControlPointsRotation = InputSplineData->SplineStruct.SplineCurves.Rotation;
		const FInterpCurveVector& ControlPointsScale = InputSplineData->SplineStruct.SplineCurves.Scale;
		const int32 NumControlPoints = ControlPointsPosition.Points.Num();
		bool bControlPointWasRemoved = false;

		TArray<FSplinePoint> ControlPoints;
		ControlPoints.Reserve(NumControlPoints);

		// For code clarity, generate the points first and remove them as needed.
		for (int32 i = 0; i < NumControlPoints; ++i)
		{
			/* Implementation note: Decay to custom tangents. They assist the user in building the spline, but the
			 * interpolation modes will affect the recalculations unpredictably when control points are removed.
			 */
			ControlPoints.Emplace(/*InputKey=*/i,
			   ControlPointsPosition.Points[i].OutVal,
			   ControlPointsPosition.Points[i].ArriveTangent,
			   ControlPointsPosition.Points[i].LeaveTangent,
			   ControlPointsRotation.Points[i].OutVal.Rotator(),
			   ControlPointsScale.Points[i].OutVal,
			   ESplinePointType::CurveCustomTangent);
		}

		if (Settings->bFuseColocatedControlPoints)
		{
			// Will evaluate by pairs. Reverse order for optimizing RemoveAt.
			for (int Index = ControlPoints.Num() - 1; Index > 0; --Index)
			{
				// Evaluate by pairs for colocated.
				if (PCGCleanSplineHelpers::ControlPointsAreColocated(
						ControlPoints[Index - 1],
						ControlPoints[Index],
						SplineTransform,
						Settings->ColocationDistanceThreshold,
						Settings->bUseSplineLocalSpace))
				{
					EPCGControlPointFuseMode FuseMode = Settings->FuseMode;
					// Generally, keep the first control point, but preserve the final control point to maintain the spline's length
					if (FuseMode == EPCGControlPointFuseMode::Auto)
					{
						FuseMode = (Index == ControlPoints.Num() - 1) ? EPCGControlPointFuseMode::KeepFirst : FuseMode = EPCGControlPointFuseMode::KeepSecond;
					}

					switch (FuseMode)
					{
						// Keep the first control point
						case EPCGControlPointFuseMode::KeepFirst:
							ControlPoints[Index - 1].LeaveTangent = ControlPoints[Index].LeaveTangent;
							ControlPoints.RemoveAt(Index, EAllowShrinking::No);
							break;
						// Keep the second control point
						case EPCGControlPointFuseMode::KeepSecond:
							ControlPoints[Index].ArriveTangent = ControlPoints[Index - 1].ArriveTangent;
							ControlPoints.RemoveAt(Index - 1, EAllowShrinking::No);
							break;
						// Average the two control points' transforms and update the leave tangent
						case EPCGControlPointFuseMode::Merge:
							ControlPoints[Index - 1].Position = FMath::Lerp(ControlPoints[Index - 1].Position, ControlPoints[Index].Position, 0.5);
							ControlPoints[Index - 1].Rotation = FMath::Lerp(ControlPoints[Index - 1].Rotation, ControlPoints[Index].Rotation, 0.5);
							ControlPoints[Index - 1].Scale = FMath::Lerp(ControlPoints[Index - 1].Scale, ControlPoints[Index].Scale, 0.5);
							ControlPoints[Index - 1].LeaveTangent = ControlPoints[Index].LeaveTangent;
							ControlPoints.RemoveAt(Index, EAllowShrinking::No);
							break;
						case EPCGControlPointFuseMode::Auto: // Should've been picked up by now. Fallthrough...
						default:
							checkNoEntry();
							break;
					}

					bControlPointWasRemoved = true;
				}
			}
		}

		if (Settings->bRemoveCollinearControlPoints)
		{
			// Will evaluate by triplets. Reverse order for optimizing RemoveAt.
			for (int Index = ControlPoints.Num() - 1; Index > 1; --Index)
			{
				if (PCGCleanSplineHelpers::ControlPointsAreCollinear(
						ControlPoints[Index - 2],
						ControlPoints[Index - 1],
						ControlPoints[Index],
						DotProductTolerance))
				{
					ControlPoints[Index - 2].LeaveTangent = ControlPoints[Index].Position - ControlPoints[Index - 2].Position;
					ControlPoints[Index].ArriveTangent = ControlPoints[Index - 2].LeaveTangent;
					ControlPoints.RemoveAt(Index - 1, EAllowShrinking::No);
					bControlPointWasRemoved = true;
				}
			}
		}

		// Update input keys if a point was removed, to keep them monotonically incremental
		if (bControlPointWasRemoved)
		{
			for (int i = 0; i < ControlPoints.Num(); ++i)
			{
				ControlPoints[i].InputKey = i;
			}
		}

		UPCGSplineData* NewSplineData = FPCGContext::NewObject_AnyThread<UPCGSplineData>(InContext);
		NewSplineData->InitializeFromData(InputSplineData);
		NewSplineData->Initialize(ControlPoints, InputSplineData->IsClosed(), InputSplineData->GetTransform());

		FPCGTaggedData& Output = InContext->OutputData.TaggedData.Emplace_GetRef(InputData);
		Output.Data = NewSplineData;
	}

	return true;
}

#undef LOCTEXT_NAMESPACE
