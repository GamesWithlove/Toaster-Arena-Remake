// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpatialAlgo/PCGOctreeQueries.h"

namespace PCGOctreeQueries
{
	/** Factorize the logic for all GetClosest/GetFarthest, as the only thing that changes is the StartingDistance and the Condition. */
	template <typename Func = TFunctionRef<bool(double ChosenPointDistance, const FPCGPoint& CurrentPoint, double SquaredDistance)>>
	const FPCGPoint* GetPointInSphereUnderCondition(const UPCGPointData* InPointData, const FVector& InCenter, const double InSearchDistance, const double InStartingDistance, Func Condition)
	{
		if (!InPointData)
		{
			return nullptr;
		}

		const FPCGPoint* ChosenPoint = nullptr;
		const double SearchDistance = FMath::Max(InSearchDistance, 0.0);

		double ChosenPointDistance = InStartingDistance;
		UPCGOctreeQueries::ForEachPointInsideSphere(InPointData, InCenter, SearchDistance, [&ChosenPointDistance, &ChosenPoint, Condition = std::move(Condition)](const FPCGPoint& Point, double SquaredDistance)
		{
			if (Condition(ChosenPointDistance, Point, SquaredDistance))
			{
				ChosenPointDistance = SquaredDistance;
				ChosenPoint = &Point;
			}
		});

		return ChosenPoint;
	}
}

TArray<FPCGPoint> UPCGOctreeQueries::GetPointsInsideBounds(const UPCGPointData* InPointData, const FBox& InBounds)
{
	if (!InPointData)
	{
		return {};
	}

	TArray<FPCGPoint> Result;
	InPointData->GetOctree().FindElementsWithBoundsTest(InBounds, [&Result](const FPCGPointRef& PointRef)
	{
		if (ensure(PointRef.Point))
		{
			Result.Add(*PointRef.Point);
		}
	});

	return Result;
}

TArray<FPCGPoint> UPCGOctreeQueries::GetPointsInsideSphere(const UPCGPointData* InPointData, const FVector& InCenter, const double InRadius)
{
	if (!InPointData)
	{
		return {};
	}

	TArray<FPCGPoint> Result;
	ForEachPointInsideSphere(InPointData, InCenter, InRadius, [&Result](const FPCGPoint& Point, double)
	{
		Result.Add(Point);
	});

	return Result;
}

void UPCGOctreeQueries::GetClosestPoint(const UPCGPointData* InPointData, const FVector& InCenter, const bool bInDiscardCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance)
{
	bOutFound = false;
	if (const FPCGPoint* ClosestPoint = GetClosestPoint(InPointData, InCenter, bInDiscardCenter, InSearchDistance))
	{
		bOutFound = true;
		OutPoint = *ClosestPoint;
	}
}

const FPCGPoint* UPCGOctreeQueries::GetClosestPoint(const UPCGPointData* InPointData, const FVector& InCenter, const bool bInDiscardCenter, const double InSearchDistance)
{
	return PCGOctreeQueries::GetPointInSphereUnderCondition(InPointData, InCenter, InSearchDistance, std::numeric_limits<double>::max(),
		[bInDiscardCenter](double ChosenPointDistance, const FPCGPoint& Point, double SquaredDistance)
		{
			return SquaredDistance <= ChosenPointDistance && (!bInDiscardCenter || SquaredDistance > UE_DOUBLE_SMALL_NUMBER);
		});
}

void UPCGOctreeQueries::GetClosestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance)
{
	bOutFound = false;
	if (!InPointData)
	{
		return;
	}

	if (!InPointData->GetPoints().IsValidIndex(InPointIndex))
	{
		return;
	}

	if (const FPCGPoint* ClosestPoint = GetClosestPointFromOtherPoint(InPointData, InPointData->GetPoints()[InPointIndex], InSearchDistance))
	{
		bOutFound = true;
		OutPoint = *ClosestPoint;
	}
}

const FPCGPoint* UPCGOctreeQueries::GetClosestPointFromOtherPoint(const UPCGPointData* InPointData, const FPCGPoint& InPoint, const double InSearchDistance)
{
	return PCGOctreeQueries::GetPointInSphereUnderCondition(InPointData, InPoint.Transform.GetLocation(), InSearchDistance, std::numeric_limits<double>::max(),
		[&InPoint](double ChosenPointDistance, const FPCGPoint& Point, double SquaredDistance)
		{
			return SquaredDistance <= ChosenPointDistance && &InPoint != &Point;
		});
}

void UPCGOctreeQueries::GetFarthestPoint(const UPCGPointData* InPointData, const FVector& InCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance)
{
	bOutFound = false;
	if (const FPCGPoint* FarthestPoint = GetFarthestPoint(InPointData, InCenter, InSearchDistance))
	{
		bOutFound = true;
		OutPoint = *FarthestPoint;
	}
}

const FPCGPoint* UPCGOctreeQueries::GetFarthestPoint(const UPCGPointData* InPointData, const FVector& InCenter, const double InSearchDistance)
{
	return PCGOctreeQueries::GetPointInSphereUnderCondition(InPointData, InCenter, InSearchDistance, std::numeric_limits<double>::min(),
		[](double ChosenPointDistance, const FPCGPoint& Point, double SquaredDistance)
		{
			return SquaredDistance >= ChosenPointDistance;
		});
}

void UPCGOctreeQueries::GetFarthestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance)
{
	bOutFound = false;
	if (!InPointData)
	{
		return;
	}

	if (!InPointData->GetPoints().IsValidIndex(InPointIndex))
	{
		return;
	}

	if (const FPCGPoint* ClosestPoint = GetFarthestPointFromOtherPoint(InPointData, InPointData->GetPoints()[InPointIndex], InSearchDistance))
	{
		bOutFound = true;
		OutPoint = *ClosestPoint;
	}
}

const FPCGPoint* UPCGOctreeQueries::GetFarthestPointFromOtherPoint(const UPCGPointData* InPointData, const FPCGPoint& InPoint, const double InSearchDistance)
{
	return PCGOctreeQueries::GetPointInSphereUnderCondition(InPointData, InPoint.Transform.GetLocation(), InSearchDistance, std::numeric_limits<double>::min(),
		[&InPoint](double ChosenPointDistance, const FPCGPoint& Point, double SquaredDistance)
		{
			return SquaredDistance >= ChosenPointDistance && &InPoint != &Point;
		});
}