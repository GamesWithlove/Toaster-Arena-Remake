// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshActor.h"
#include "RealtimeMeshProTest_NaniteManualClusters.generated.h"

// Forward declaration
namespace RealtimeMesh
{
	namespace Nanite
	{
		struct FRealtimeMeshNaniteMesh;
	}
}

/**
 * Comprehensive test for creating Nanite meshes from manually constructed clusters.
 *
 * This test demonstrates:
 * - Manual cluster creation with different configurations
 * - Multi-cluster box (one cluster per face)
 * - Single cluster with multiple material ranges
 * - Custom hierarchy building
 */
UCLASS()
class REALTIMEMESHPROTESTS_API ARealtimeMeshProTest_NaniteManualClusters : public ARealtimeMeshActor
{
	GENERATED_BODY()

public:
	ARealtimeMeshProTest_NaniteManualClusters();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	/**
	 * Creates a box made of 6 separate clusters (one per face).
	 * Each face is a separate cluster to demonstrate multi-cluster geometry.
	 */
	void CreateMultiClusterBox(RealtimeMesh::Nanite::FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size, int32 MaterialSlot);

	/**
	 * Creates a single cluster with multiple material ranges.
	 * Demonstrates how to assign different materials to different triangle ranges within one cluster.
	 */
	void CreateClusterWithMultipleMaterialRanges(RealtimeMesh::Nanite::FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size);

	/**
	 * Creates a 2-level hierarchy manually to demonstrate hierarchy building.
	 * Shows how to manually construct parent-child relationships with LOD bounds.
	 */
	void CreateCustomHierarchyMesh(RealtimeMesh::Nanite::FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size);

	/**
	 * Helper to create a single box face as a cluster.
	 */
	static void CreateBoxFace(
		TArray<FVector3f>& Vertices,
		TArray<FVector3f>& Normals,
		TArray<FColor>& Colors,
		TArray<FVector2f>& UVs,
		TArray<uint8>& Indices,
		const FVector3f& V0, const FVector3f& V1, const FVector3f& V2, const FVector3f& V3,
		const FVector3f& Normal,
		const FColor& Color);
};
