// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataVisualizations/PCGSplineDataVisualization.h"

#include "Data/PCGPointData.h"
#include "Data/PCGSplineData.h"
#include "Data/PCGSplineStruct.h"

namespace PCGSplineDataVisualizationConstants
{
	const FVector HalfExtents = FVector(50.0); // Set the points to fill up 1 meter of space by default.
}

FPCGTableVisualizerInfo IPCGSplineDataVisualization::GetTableVisualizerInfo(const UPCGData* Data) const
{
	FPCGTableVisualizerInfo Info = IPCGSpatialDataVisualization::GetTableVisualizerInfo(Data);

	Info.FocusOnDataCallback = [](const UPCGData* Data, TArrayView<const int> Indices)
	{
		if (const UPCGSplineData* SplineData = Cast<UPCGSplineData>(Data))
		{
			FBox BoundingBox(EForceInit::ForceInit);

			if (Indices.IsEmpty())
			{
				BoundingBox = SplineData->GetBounds();
			}
			else
			{
				const TArray<FInterpCurvePointVector>& Positions = SplineData->SplineStruct.SplineCurves.Position.Points;
				const TArray<FInterpCurvePointVector>& Scales = SplineData->SplineStruct.SplineCurves.Scale.Points;

				for (const int& Index : Indices)
				{
					check(Positions.IsValidIndex(Index) && Scales.IsValidIndex(Index));

					const FVector& Position = SplineData->GetTransform().TransformPosition(Positions[Index].OutVal);
					const FVector HalfExtent = Scales[Index].OutVal * PCGSplineDataVisualizationConstants::HalfExtents;

					FBox PointBoundingBox(Position + HalfExtent, Position - HalfExtent);
					BoundingBox += PointBoundingBox;
				}
			}

			if (GEditor && BoundingBox.IsValid)
			{
				GEditor->MoveViewportCamerasToBox(BoundingBox, /*bActiveViewportOnly=*/true, /*DrawDebugBoxTimeInSeconds=*/2.5f);
			}
		}
	};

	return Info;
}

const UPCGPointData* IPCGSplineDataVisualization::CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const
{
	if (const UPCGSplineData* SplineData = Cast<UPCGSplineData>(Data))
	{
		UPCGPointData* PointData = NewObject<UPCGPointData>();
		PointData->InitializeFromData(SplineData);
		TArray<FPCGPoint>& Points = PointData->GetMutablePoints();

		const int32 NumControlPoints = SplineData->SplineStruct.SplineCurves.Position.Points.Num();

		for (int ControlPointIndex = 0; ControlPointIndex < NumControlPoints; ++ControlPointIndex)
		{
			FPCGPoint& Point = Points.Emplace_GetRef();
			Point.Transform = SplineData->SplineStruct.GetTransformAtSplineInputKey(ControlPointIndex, ESplineCoordinateSpace::World);
			Point.SetExtents(PCGSplineDataVisualizationConstants::HalfExtents);
		}

		return PointData;
	}

	return nullptr;
}
