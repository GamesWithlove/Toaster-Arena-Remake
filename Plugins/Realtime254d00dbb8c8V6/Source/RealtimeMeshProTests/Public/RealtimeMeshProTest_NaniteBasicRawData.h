// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshActor.h"
#include "RealtimeMeshProTest_NaniteBasicRawData.generated.h"

/**
 * Test actor demonstrating basic Nanite mesh creation from raw vertex/triangle data.
 *
 * This test validates the core Nanite pipeline by creating meshes from raw arrays:
 * - Simple Sphere: Low-poly sphere (100 vertices) demonstrating basic Nanite usage
 * - Complex Torus: High-poly torus (5000+ vertices) to demonstrate Nanite benefit
 * - Tessellated Plane: Dense grid (100x100 = 10,000 vertices) with height variation
 *
 * Tests the complete workflow:
 * 1. CreateFromRawMesh() - Converts raw vertex/index arrays to Nanite cluster data
 * 2. BuildMinimalHierarchy() - Creates BVH hierarchy for efficient rendering
 * 3. BuildRealtimeNaniteMesh() - Compiles to GPU-ready Nanite resources
 * 4. SetNaniteResources() - Applies resources to RealtimeMesh
 */
UCLASS()
class REALTIMEMESHPROTESTS_API ARealtimeMeshProTest_NaniteBasicRawData : public ARealtimeMeshActor
{
	GENERATED_BODY()

public:
	ARealtimeMeshProTest_NaniteBasicRawData();

	/** Enable low-poly sphere test (100 vertices) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test")
	bool bEnableSimpleSphere = true;

	/** Enable high-poly torus test (5000+ vertices) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test")
	bool bEnableComplexTorus = true;

	/** Enable tessellated plane test (10,000 vertices) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test")
	bool bEnableTessellatedPlane = true;

	/** Sphere subdivision level (0-3) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test", meta = (ClampMin = "0", ClampMax = "3"))
	int32 SphereSubdivision = 1;

	/** Torus segment count (higher = more detail) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test", meta = (ClampMin = "16", ClampMax = "128"))
	int32 TorusSegments = 64;

	/** Plane grid resolution (NxN grid) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test", meta = (ClampMin = "10", ClampMax = "200"))
	int32 PlaneGridSize = 100;

	virtual void OnConstruction(const FTransform& Transform) override;

private:
	// Create low-poly sphere from raw data (validates basic Nanite creation)
	void CreateSimpleSphere();

	// Create high-poly torus from raw data (demonstrates Nanite benefit for complex geometry)
	void CreateComplexTorus();

	// Create dense tessellated plane from raw data (demonstrates large vertex count handling)
	void CreateTessellatedPlane();

	// Helper: Generate sphere geometry
	void GenerateSphereGeometry(TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
		TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles, float Radius, int32 Segments, int32 Rings);

	// Helper: Generate torus geometry
	void GenerateTorusGeometry(TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
		TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles, float MajorRadius, float MinorRadius, int32 MajorSegments, int32 MinorSegments);

	// Helper: Generate tessellated plane with height variation
	void GenerateTessellatedPlane(TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
		TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles, int32 GridSize, float CellSize, float HeightVariation);
};
