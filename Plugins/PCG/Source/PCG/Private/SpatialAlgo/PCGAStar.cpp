// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpatialAlgo/PCGAStar.h"

#include "Helpers/PCGHelpers.h"
#include "SpatialAlgo/PCGOctreeQueries.h"

namespace PCGSpatialAlgo::AStar
{
namespace Helpers
{
	bool CompareNodes(const FNode& Node1, const FNode& Node2)
	{
		return Node1.EstimatedGoalCost < Node2.EstimatedGoalCost;
	}

	void BuildFinalPath(const FSearchState& SearchState, const FNode& FinalNode, const bool bCopyOriginatingPoints, TArray<FPCGPoint>& OutPath)
	{
		check(&FinalNode);

		OutPath.Reset();

		const FNode* Node = &FinalNode;
		do // Build path from the goal backwards.
		{
			check(Node->PCGPoint);
			if (bCopyOriginatingPoints)
			{
				OutPath.Emplace(*Node->PCGPoint);
			}
			else
			{
				OutPath.Emplace(Node->PCGPoint->Transform, /*InDensity=*/1, PCGHelpers::ComputeSeedFromPosition(Node->PCGPoint->Transform.GetLocation()));
			}

			Node = Node->PreviousNodeIndex != INDEX_NONE ? &SearchState.NodeList[Node->PreviousNodeIndex] : nullptr;
		}
		while (Node);

		// Reverse to get it in the correct travel order.
		Algo::Reverse(OutPath);
	}

	TTuple<const FPCGPoint*, double> GetNearestGoalToLocation(const FVector& Location, const TArray<FPCGPoint>& GoalPoints)
	{
		check(!GoalPoints.IsEmpty());

		double MinSquaredDistanceToGoal = std::numeric_limits<double>::max();
		int32 CurrentGoalIndex = INDEX_NONE;
		for (int32 GoalIndex = 0; GoalIndex < GoalPoints.Num(); ++GoalIndex)
		{
			const double SquareDistanceToGoal = FVector::DistSquared(Location, GoalPoints[GoalIndex].Transform.GetLocation());
			if (SquareDistanceToGoal < MinSquaredDistanceToGoal)
			{
				MinSquaredDistanceToGoal = SquareDistanceToGoal;
				CurrentGoalIndex = GoalIndex;
			}
		}
		check(CurrentGoalIndex != INDEX_NONE);

		return MakeTuple(&GoalPoints[CurrentGoalIndex], MinSquaredDistanceToGoal);
	}
}

namespace Cost
{
	double CalculateCost_EuclideanDistance(const double PreviousNodeCost, const FPCGPoint* PreviousNodePoint, const double DistanceToPreviousNodeSquared, const FPCGPoint* CurrentPoint)
	{
		return PreviousNodeCost + FMath::Sqrt(DistanceToPreviousNodeSquared);
	}
}

/** Note: In order for the path to be optimal, the heuristic cost must always be less than or equal to the actual cost. */
namespace Heuristic
{
	double CalculateHeuristic_EuclideanDistance(const FVector& CurrentLocation, const FVector& GoalLocation)
	{
		return FVector::Dist(CurrentLocation, GoalLocation);
	}
}

/** Initialize the search state for AStar. Must be called before ExecuteSearchIteration. */
void Initialize(const FPCGPoint* const StartPoint, FSearchState& OutSearchState)
{
	check(StartPoint);

	// Emplace the starting node on the open list. The costs will be 0 at the starting point.
	OutSearchState.NodeList.Reset();
	OutSearchState.NodeList.Emplace(StartPoint, /*InParent=*/INDEX_NONE, /*InCost=*/0.0, /*HeuristicCost=*/0.0);
	OutSearchState.OpenIndexList.Reset();
	// Okay to add the first index this way, since it will be "heapified" by default with one element.
	OutSearchState.OpenIndexList.Add(0);
	OutSearchState.ClosedIndexList.Reset();
	OutSearchState.PointToNodeIndexMap.Reset();
}

/** Runs a single iteration of the A* algorithm. Intended to be called multiple times, whereupon it will return true when the algorithm is finished. */
ESearchResult ExecuteSearchIteration(const FSearchSettings& SearchSettings, FSearchState& SearchState, const TArray<FPCGPoint>& GoalPoints, TArray<FPCGPoint>& OutPath)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGPathfindingElement::Algorithm::ExecuteSearchIteration);
	check(SearchState.OriginatingPointData);

	// The goal points should be guaranteed by the caller. Must call Initialize first to create the open index list.
	if (GoalPoints.IsEmpty() || !ensure(!SearchState.OpenIndexList.IsEmpty()))
	{
		return ESearchResult::Invalid;
	}

	TArray<FNode, TInlineAllocator<FSearchState::PreAllocNodeCount>>& NodeList = SearchState.NodeList;

	auto HeapPredicate = [&SearchState](int32 Index1, int32 Index2) { return Helpers::CompareNodes(SearchState.NodeList[Index1], SearchState.NodeList[Index2]); };

	// Get the lowest cost point on the list, which has been binary heap sorted.
	int32 CurrentNodeIndex;
	SearchState.OpenIndexList.HeapPop(CurrentNodeIndex, HeapPredicate, EAllowShrinking::No);
	check(NodeList[CurrentNodeIndex].PCGPoint);

	TTuple<const FPCGPoint*, double> GoalInfo = Helpers::GetNearestGoalToLocation(NodeList[CurrentNodeIndex].PCGPoint->Transform.GetLocation(), GoalPoints);
	const FPCGPoint* CurrentGoal = GoalInfo.Get<0>();
	const double MinSquaredDistanceToGoal = GoalInfo.Get<1>();

	auto PerPointProcessing = [&NodeList, CurrentNodeIndex, CurrentGoal, &HeapPredicate, &SearchSettings, &SearchState, &GoalPoints](const FPCGPoint* Point, const double DistanceToPointSquared)
	{
		const bool bTrackedPoint = SearchState.PointToNodeIndexMap.Contains(Point);
		// Node has already been ruled out.
		if (bTrackedPoint && SearchState.ClosedIndexList.Contains(SearchState.PointToNodeIndexMap[Point]))
		{
			return;
		}

		const double TentativeNewLocalCost = SearchState.CostFunction(NodeList[CurrentNodeIndex].LocalCost, NodeList[CurrentNodeIndex].PCGPoint, DistanceToPointSquared, Point);

		// Blocked paths don't need expansion here, and serve no purpose at this point (at least from that direction) from being visited.
		if (TentativeNewLocalCost == std::numeric_limits<double>::max())
		{
			return;
		}

		/** Implementation Note: If there are multiple goals, a heuristic to a specific goal is not valid. The goal
		 * can not be changed during the pathfinding process, as neighbor evaluation is tied to the heuristic to the
		 * current goal at any point. Nodes may be ruled out and added to the Closed List
		 */
		auto GetHeuristicCost = [&SearchSettings, &SearchState, &GoalPoints](const FPCGPoint* CurrentPoint, const FPCGPoint* GoalPoint) -> double
		{
			return (GoalPoints.Num() > 1) ? 0.0 : SearchSettings.HeuristicWeight * SearchState.HeuristicFunction(CurrentPoint->Transform.GetLocation(), GoalPoint->Transform.GetLocation());
		};

		// Not tracking this point yet--add it to the node list and map it.
		if (!bTrackedPoint)
		{
			const double HeuristicCost = GetHeuristicCost(Point, CurrentGoal);
			NodeList.Emplace(Point, CurrentNodeIndex, TentativeNewLocalCost, TentativeNewLocalCost + HeuristicCost);
			const int32 NewNodeIndex = NodeList.Num() - 1;
			SearchState.OpenIndexList.HeapPush(NewNodeIndex, HeapPredicate);
			SearchState.PointToNodeIndexMap.Emplace(Point, NewNodeIndex);

			return;
		}

		// Check if the path to this neighbor is a better path than its current one. If so, update accordingly.
		const int32 NeighborIndex = SearchState.PointToNodeIndexMap[Point];
		FNode& Neighbor = SearchState.NodeList[NeighborIndex];
		if (TentativeNewLocalCost < Neighbor.LocalCost)
		{
			const int32 CurrentOpenListIndex = SearchState.OpenIndexList.Find(NeighborIndex);
			check(CurrentOpenListIndex != INDEX_NONE);

			// The priority may have changed, so remove the index and add it again.
			SearchState.OpenIndexList.HeapRemoveAt(CurrentOpenListIndex, HeapPredicate, EAllowShrinking::No);

			const double HeuristicCost = GetHeuristicCost(Point, CurrentGoal);
			Neighbor.PreviousNodeIndex = CurrentNodeIndex;
			Neighbor.LocalCost = TentativeNewLocalCost;
			Neighbor.EstimatedGoalCost = TentativeNewLocalCost + HeuristicCost;

			SearchState.OpenIndexList.HeapPush(NeighborIndex, HeapPredicate);
		}
	};

	// Arrived at the goal.
	if (FMath::IsNearlyZero(MinSquaredDistanceToGoal))
	{
		Helpers::BuildFinalPath(SearchState, SearchState.NodeList[CurrentNodeIndex], SearchSettings.bCopyOriginatingPoints, OutPath);
		return ESearchResult::Complete;
	}
	// Close enough to the goal we need to add it as a possibility.
	else if (MinSquaredDistanceToGoal <= SearchSettings.SearchDistance * SearchSettings.SearchDistance)
	{
		PerPointProcessing(CurrentGoal, MinSquaredDistanceToGoal);
	}

	// Gather neighbors within the search radius.
	UPCGOctreeQueries::ForEachPointInsideSphere(
		SearchState.OriginatingPointData,
		NodeList[CurrentNodeIndex].PCGPoint->Transform.GetLocation(),
		SearchSettings.SearchDistance,
		[&PerPointProcessing](const FPCGPointRef& PointRef, const double DistanceToPointSquared)
		{
			PerPointProcessing(PointRef.Point, DistanceToPointSquared);
		});

	// This node has been completely evaluated.
	SearchState.ClosedIndexList.Add(CurrentNodeIndex);

	// Final point to check, no path can be found.
	if (SearchState.OpenIndexList.IsEmpty())
	{
		OutPath.Reset();

		if (SearchSettings.bAcceptPartialPath)
		{
			// Find the closest point to any goal and walk back the path from there.
			int32 ClosestNodeIndex = INDEX_NONE;
			double ClosestSquaredDistance = std::numeric_limits<double>::max();
			for (const int32 NodeIndex : SearchState.ClosedIndexList)
			{
				TTuple<const FPCGPoint*, double> ClosestGoalInfo = Helpers::GetNearestGoalToLocation(SearchState.NodeList[NodeIndex].PCGPoint->Transform.GetLocation(), GoalPoints);
				const double SquaredDistance = ClosestGoalInfo.Get<1>();
				if (SquaredDistance < ClosestSquaredDistance)
				{
					ClosestSquaredDistance = SquaredDistance;
					ClosestNodeIndex = NodeIndex;
				}
			}

			Helpers::BuildFinalPath(SearchState, SearchState.NodeList[ClosestNodeIndex], SearchSettings.bCopyOriginatingPoints, OutPath);

			return ESearchResult::Partial;
		}
		else
		{
			return ESearchResult::Invalid;
		}
	}

	return ESearchResult::Processing;
}
} // namespace PCGSpatialAlgo::AStar