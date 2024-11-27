// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_EDITOR

#include "Tests/PCGTestsCommon.h"

#include "Data/PCGPointData.h"
#include "SpatialAlgo/PCGOctreeQueries.h"

IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_Sphere, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.Sphere", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_ClosestPoint, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.ClosestPoint", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_ClosestPointDiscardCenter, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.ClosestPointDiscardCenter", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_ClosestPointFromOtherPoint, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.ClosestPointFromOtherPoint", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_FarthestPoint, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.FarthestPoint", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGOctreeQueriesTest_FarthestPointFromOtherPoint, FPCGTestBaseClass, "Plugins.PCG.OctreeQueries.FarthestPointFromOtherPoint", PCGTestsCommon::TestFlags)

/**
* For all the tests, the point data will be points scattered on a straight line (Direction {1, 1, 1}), and evenly spaced.
* Query will be on the first point, at the origin.
*/
namespace PCGOctreeQueriesTest
{
	static constexpr double Distance = 100.0;
	static constexpr int32 NumPoints = 10;

	UPCGPointData* CreatePointData()
	{
		UPCGPointData* InputPointData = PCGTestsCommon::CreateEmptyPointData();
		TArray<FPCGPoint>& InputPoints = InputPointData->GetMutablePoints();
		InputPoints.Reserve(NumPoints);

		for (int32 i = 0; i < NumPoints; ++i)
		{
			FVector Location = FVector::OneVector * Distance * i;
			InputPoints.Emplace(FTransform(Location), 1.0f, 42);
		}

		return InputPointData;
	}
}


bool FPCGOctreeQueriesTest_Sphere::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	TArray<int32> ExpectedIndexes = { 0, 1, 2 };
	int32 CountFound = 0;
	UPCGOctreeQueries::ForEachPointInsideSphere(InputPointData, FVector::ZeroVector, 350.0, [&ExpectedIndexes, &CountFound, &InputPoints = InputPointData->GetPoints()](const FPCGPoint& InPoint, double)
	{
		const int32 PointIndex = static_cast<int32>(&InPoint - InputPoints.GetData());
		if (ExpectedIndexes.Contains(PointIndex))
		{
			++CountFound;
		}
	});

	UTEST_EQUAL("We found the expected number of points", CountFound, ExpectedIndexes.Num());

	return true;
}

bool FPCGOctreeQueriesTest_ClosestPoint::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	const FPCGPoint* ClosestPoint = UPCGOctreeQueries::GetClosestPoint(InputPointData, FVector::ZeroVector, /*bDiscardCenter=*/false, 350.0);
	UTEST_NOT_NULL("Closest point was found", ClosestPoint);

	const int32 PointIndex = static_cast<int32>(ClosestPoint - InputPointData->GetPoints().GetData());

	UTEST_EQUAL("Closest point is the right index", PointIndex, 0);
	return true;
}

bool FPCGOctreeQueriesTest_ClosestPointDiscardCenter::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	const FPCGPoint* ClosestPoint = UPCGOctreeQueries::GetClosestPoint(InputPointData, FVector::ZeroVector, /*bDiscardCenter=*/true, 350.0);
	UTEST_NOT_NULL("Closest point was found", ClosestPoint);

	const int32 PointIndex = static_cast<int32>(ClosestPoint - InputPointData->GetPoints().GetData());

	UTEST_EQUAL("Closest point is the right index", PointIndex, 1);
	return true;
}

bool FPCGOctreeQueriesTest_ClosestPointFromOtherPoint::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	const FPCGPoint* ClosestPoint = UPCGOctreeQueries::GetClosestPointFromOtherPoint(InputPointData, InputPointData->GetPoints()[0], 350.0);
	UTEST_NOT_NULL("Closest point was found", ClosestPoint);

	const int32 PointIndex = static_cast<int32>(ClosestPoint - InputPointData->GetPoints().GetData());

	UTEST_EQUAL("Closest point is the right index", PointIndex, 1);
	return true;
}

bool FPCGOctreeQueriesTest_FarthestPoint::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	const FPCGPoint* FarthestPoint = UPCGOctreeQueries::GetFarthestPoint(InputPointData, FVector::ZeroVector, 350.0);
	UTEST_NOT_NULL("Farthest point was found", FarthestPoint);

	const int32 PointIndex = static_cast<int32>(FarthestPoint - InputPointData->GetPoints().GetData());

	UTEST_EQUAL("Farthest point is the right index", PointIndex, 2);
	return true;
}

bool FPCGOctreeQueriesTest_FarthestPointFromOtherPoint::RunTest(const FString& Parameters)
{
	const UPCGPointData* InputPointData = PCGOctreeQueriesTest::CreatePointData();
	check(InputPointData);

	const FPCGPoint* FarthestPoint = UPCGOctreeQueries::GetFarthestPointFromOtherPoint(InputPointData, InputPointData->GetPoints()[0], 10000.0);
	UTEST_NOT_NULL("Farthest point was found", FarthestPoint);

	const int32 PointIndex = static_cast<int32>(FarthestPoint - InputPointData->GetPoints().GetData());

	UTEST_EQUAL("Farthest point is the right index", PointIndex, 9);
	return true;
}

#endif // WITH_EDITOR