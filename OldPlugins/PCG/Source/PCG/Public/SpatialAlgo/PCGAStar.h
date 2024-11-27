// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGPoint.h"
#include "Math/Vector.h"

class UPCGPointData;

namespace PCGSpatialAlgo::AStar
{
struct FNode
{
	explicit FNode(const FPCGPoint* InPCGPoint, const int32 InPreviousNodeIndex, const double InLocalCost, const double InEstimatedGoalCost)
		: PCGPoint(InPCGPoint)
		, PreviousNodeIndex(InPreviousNodeIndex)
		, LocalCost(InLocalCost)
		, EstimatedGoalCost(InEstimatedGoalCost)
	{}

	const FPCGPoint* PCGPoint = nullptr;
	/** The currently assigned parent node with the least cost. */
	int32 PreviousNodeIndex = INDEX_NONE;
	/** Concrete cost from start to this node. */
	double LocalCost = 0.0;
	/** Current total cost when heuristic is added to the local cost. */
	double EstimatedGoalCost = 0.0;
};

namespace Cost
{
	double CalculateCost_EuclideanDistance(const double PreviousNodeCost, const FPCGPoint* PreviousNodePoint, const double DistanceToPreviousNodeSquared, const FPCGPoint* CurrentPoint);
}

namespace Heuristic
{
	double CalculateHeuristic_EuclideanDistance(const FVector& CurrentLocation, const FVector& GoalLocation);
}

struct FSearchSettings
{
	/** The max distance from each point to search for the next viable point in the path. */
	double SearchDistance = 1000;
	/** The heuristic estimates a faster path to speed up processing. A lower heuristic weight can be faster, but it may cease being the optimal path. A weight of 0 is essentially flood fill. */
	double HeuristicWeight = 1.0;
	/** Even if the path is not complete, return the most optimal and viable partial path to the goal. */
	bool bAcceptPartialPath = true;
	/** Copy the point data from the originating points. */
	bool bCopyOriginatingPoints = false;
};

struct FSearchState
{
	static uint32 constexpr PreAllocNodeCount = 1024u;
	/** Keep track of the point data for the octree search. */
	const UPCGPointData* OriginatingPointData = nullptr;
	/** Cost function */
	TFunction<double(const double /*PreviousNodeCost*/, const FPCGPoint* /*PreviousNodePoint*/, const double /*DistanceToPreviousNodeSquared*/, const FPCGPoint* /*CurrentPoint*/)> CostFunction = Cost::CalculateCost_EuclideanDistance;
	/** Heuristic function */
	TFunction<double(const FVector& /*CurrentLocation*/, const FVector& /*GoalLocation*/)> HeuristicFunction = Heuristic::CalculateHeuristic_EuclideanDistance;

	/** Storage of the current known node. Source of truth for the nodes, so it should not be resized after its initial reserve. */
	TArray<FNode, TInlineAllocator<PreAllocNodeCount>> NodeList;
	/** Used as a priority list of nodes, sorted by cost. */
	TArray<int32, TInlineAllocator<PreAllocNodeCount>> OpenIndexList;
	/** Nodes that are no longer viable. */
	TArray<int32, TInlineAllocator<PreAllocNodeCount>> ClosedIndexList;
	/** To track nodes to their corresponding points. */
	TMap<const FPCGPoint*, int32> PointToNodeIndexMap;
};

namespace Helpers
{
	bool CompareNodes(const FNode& Node1, const FNode& Node2);
	void BuildFinalPath(const FSearchState& SearchState, const FNode& FinalNode, bool bCopyOriginatingPoints, TArray<FPCGPoint>& OutPath);
}

enum class ESearchResult
{
	Invalid = 0,
	Processing,
	Partial,
	Complete
};

/** Initialize the search state for AStar. Must be called before ExecuteSearchIteration. */
void Initialize(const FPCGPoint* const StartPoint, FSearchState& OutSearchState);

/** Runs a single iteration of the A* algorithm. Intended to be called multiple times, whereupon it will return true when the algorithm is finished. */
ESearchResult ExecuteSearchIteration(const FSearchSettings& SearchSettings, FSearchState& SearchState, const TArray<FPCGPoint>& GoalPoints, TArray<FPCGPoint>& OutPath);
}
