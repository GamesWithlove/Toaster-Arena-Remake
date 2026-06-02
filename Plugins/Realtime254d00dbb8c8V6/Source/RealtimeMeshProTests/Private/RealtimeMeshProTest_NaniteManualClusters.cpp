// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshProTest_NaniteManualClusters.h"
#include "RealtimeMeshNaniteBuilder.h"
#include "RealtimeMeshSimple.h"

using namespace RealtimeMesh;
using namespace RealtimeMesh::Nanite;

ARealtimeMeshProTest_NaniteManualClusters::ARealtimeMeshProTest_NaniteManualClusters()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ARealtimeMeshProTest_NaniteManualClusters::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Initialize simple mesh
	URealtimeMeshSimple* RealtimeMesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	// Setup 3 material slots for testing
	RealtimeMesh->SetupMaterialSlot(0, "Material_Red");
	RealtimeMesh->SetupMaterialSlot(1, "Material_Green");
	RealtimeMesh->SetupMaterialSlot(2, "Material_Blue");

	// Create a single combined Nanite mesh containing all three tests
	FRealtimeMeshNaniteMesh CombinedNaniteMesh;

	// Center all three test boxes around the actor origin
	// Test 1: Multi-cluster box (6 clusters, one per face) - positioned left
	CreateMultiClusterBox(CombinedNaniteMesh, FVector3f(-300.0f, 0.0f, 0.0f), 200.0f, 0);

	// Test 2: Single cluster with multiple material ranges - positioned center
	CreateClusterWithMultipleMaterialRanges(CombinedNaniteMesh, FVector3f(0.0f, 0.0f, 0.0f), 200.0f);

	// Test 3: Custom hierarchy mesh - positioned right
	CreateCustomHierarchyMesh(CombinedNaniteMesh, FVector3f(300.0f, 0.0f, 0.0f), 200.0f);

	// Build hierarchy for the combined mesh
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(CombinedNaniteMesh);

	// Build Nanite resources
	FRealtimeMeshNaniteBuildSettings Settings;
	Settings.PositionPrecision = 4;
	Settings.NormalBits = 8;

	FRealtimeMeshNaniteResourcesPtr NaniteResources = BuildRealtimeNaniteMesh(CombinedNaniteMesh, Settings);

	if (NaniteResources.IsValid())
	{
		// Apply combined Nanite resources to mesh
		RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RealtimeMesh->GetMesh()->GetSharedResources());
		RealtimeMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));

		UE_LOG(LogRealtimeMesh, Log, TEXT("Created combined manual cluster test with %d total clusters"), CombinedNaniteMesh.Clusters.Num());
	}
}

void ARealtimeMeshProTest_NaniteManualClusters::CreateMultiClusterBox(FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size, int32 MaterialSlot)
{
	const float HalfSize = Size * 0.5f;

	// Define the 8 vertices of the box
	const FVector3f Vertices[8] = {
		Center + FVector3f(-HalfSize, -HalfSize, -HalfSize), // 0
		Center + FVector3f(HalfSize, -HalfSize, -HalfSize),  // 1
		Center + FVector3f(HalfSize, HalfSize, -HalfSize),   // 2
		Center + FVector3f(-HalfSize, HalfSize, -HalfSize),  // 3
		Center + FVector3f(-HalfSize, -HalfSize, HalfSize),  // 4
		Center + FVector3f(HalfSize, -HalfSize, HalfSize),   // 5
		Center + FVector3f(HalfSize, HalfSize, HalfSize),    // 6
		Center + FVector3f(-HalfSize, HalfSize, HalfSize)    // 7
	};

	// Define face colors for visualization
	const FColor FaceColors[6] = {
		FColor::Red,    // Front
		FColor::Green,  // Back
		FColor::Blue,   // Left
		FColor::Yellow, // Right
		FColor::Cyan,   // Top
		FColor::Magenta // Bottom
	};

	// Create 6 clusters, one for each face of the box
	struct FFaceDefinition
	{
		int32 V0, V1, V2, V3;
		FVector3f Normal;
		int32 ColorIndex;
	};

	const FFaceDefinition Faces[6] = {
		{ 0, 1, 2, 3, FVector3f(0, 0, -1), 0 }, // Front (Z-)
		{ 5, 4, 7, 6, FVector3f(0, 0, 1), 1 },  // Back (Z+)
		{ 4, 0, 3, 7, FVector3f(-1, 0, 0), 2 }, // Left (X-)
		{ 1, 5, 6, 2, FVector3f(1, 0, 0), 3 },  // Right (X+)
		{ 3, 2, 6, 7, FVector3f(0, 1, 0), 4 },  // Top (Y+)
		{ 4, 5, 1, 0, FVector3f(0, -1, 0), 5 }  // Bottom (Y-)
	};

	for (int32 FaceIndex = 0; FaceIndex < 6; FaceIndex++)
	{
		const FFaceDefinition& Face = Faces[FaceIndex];
		FRealtimeMeshNaniteCluster& Cluster = OutNaniteMesh.Clusters.Emplace_GetRef();

		TArray<FVector3f> FaceVerts;
		TArray<FVector3f> FaceNormals;
		TArray<FColor> FaceVertexColors;
		TArray<FVector2f> FaceUVs;
		TArray<uint8> FaceIndices;

		CreateBoxFace(
			FaceVerts, FaceNormals, FaceVertexColors, FaceUVs, FaceIndices,
			Vertices[Face.V0], Vertices[Face.V1], Vertices[Face.V2], Vertices[Face.V3],
			Face.Normal,
			FaceColors[Face.ColorIndex]
		);

		// Populate cluster data
		Cluster.EditVertices() = MoveTemp(FaceVerts);
		Cluster.EditNormals() = MoveTemp(FaceNormals);
		Cluster.EditColors() = MoveTemp(FaceVertexColors);
		Cluster.EditIndices() = MoveTemp(FaceIndices);

		// Add UV channel
		if (Cluster.EditUVs().Num() == 0)
		{
			Cluster.EditUVs().AddDefaulted();
		}
		Cluster.EditUVs()[0] = MoveTemp(FaceUVs);

		// Add single material range covering all triangles (2 triangles = 6 indices)
		FRealtimeMeshNaniteMaterialRange MatRange;
		MatRange.RangeStart = 0;
		MatRange.RangeLength = 2; // 2 triangles
		MatRange.MaterialIndex = MaterialSlot;
		Cluster.EditMaterialRanges().Add(MatRange);

		// Update bounds
		Cluster.UpdateBounds();
	}

	UE_LOG(LogRealtimeMesh, Log, TEXT("Added multi-cluster box with 6 clusters at %s"), *Center.ToString());
}

void ARealtimeMeshProTest_NaniteManualClusters::CreateClusterWithMultipleMaterialRanges(FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size)
{
	const float HalfSize = Size * 0.5f;

	// Create a single cluster containing a box with multiple material ranges
	FRealtimeMeshNaniteCluster& Cluster = OutNaniteMesh.Clusters.Emplace_GetRef();

	// Box vertices
	const FVector3f Vertices[8] = {
		Center + FVector3f(-HalfSize, -HalfSize, -HalfSize), // 0
		Center + FVector3f(HalfSize, -HalfSize, -HalfSize),  // 1
		Center + FVector3f(HalfSize, HalfSize, -HalfSize),   // 2
		Center + FVector3f(-HalfSize, HalfSize, -HalfSize),  // 3
		Center + FVector3f(-HalfSize, -HalfSize, HalfSize),  // 4
		Center + FVector3f(HalfSize, -HalfSize, HalfSize),   // 5
		Center + FVector3f(HalfSize, HalfSize, HalfSize),    // 6
		Center + FVector3f(-HalfSize, HalfSize, HalfSize)    // 7
	};

	// Add all 8 vertices
	for (int32 i = 0; i < 8; i++)
	{
		Cluster.EditVertices().Add(Vertices[i]);
		Cluster.EditNormals().Add(FVector3f(0, 0, 1).GetSafeNormal()); // Simple up normal
		Cluster.EditColors().Add(FColor::White);
	}

	// Add UV channel
	if (Cluster.EditUVs().Num() == 0)
	{
		Cluster.EditUVs().AddDefaulted();
	}

	// Add UVs for all vertices
	for (int32 i = 0; i < 8; i++)
	{
		Cluster.EditUVs()[0].Add(FVector2f(i % 2, i / 2));
	}

	// Add 12 triangles (2 per face, 6 faces)
	// We'll split them into 3 material ranges: 4 triangles each

	// Material Range 0: Red - Front and Back faces (4 triangles)
	// Front face (Z-)
	Cluster.EditIndices().Add(0); Cluster.EditIndices().Add(1); Cluster.EditIndices().Add(2);
	Cluster.EditIndices().Add(0); Cluster.EditIndices().Add(2); Cluster.EditIndices().Add(3);
	// Back face (Z+)
	Cluster.EditIndices().Add(5); Cluster.EditIndices().Add(4); Cluster.EditIndices().Add(7);
	Cluster.EditIndices().Add(5); Cluster.EditIndices().Add(7); Cluster.EditIndices().Add(6);

	// Material Range 1: Green - Left and Right faces (4 triangles)
	// Left face (X-)
	Cluster.EditIndices().Add(4); Cluster.EditIndices().Add(0); Cluster.EditIndices().Add(3);
	Cluster.EditIndices().Add(4); Cluster.EditIndices().Add(3); Cluster.EditIndices().Add(7);
	// Right face (X+)
	Cluster.EditIndices().Add(1); Cluster.EditIndices().Add(5); Cluster.EditIndices().Add(6);
	Cluster.EditIndices().Add(1); Cluster.EditIndices().Add(6); Cluster.EditIndices().Add(2);

	// Material Range 2: Blue - Top and Bottom faces (4 triangles)
	// Top face (Y+)
	Cluster.EditIndices().Add(3); Cluster.EditIndices().Add(2); Cluster.EditIndices().Add(6);
	Cluster.EditIndices().Add(3); Cluster.EditIndices().Add(6); Cluster.EditIndices().Add(7);
	// Bottom face (Y-)
	Cluster.EditIndices().Add(4); Cluster.EditIndices().Add(5); Cluster.EditIndices().Add(1);
	Cluster.EditIndices().Add(4); Cluster.EditIndices().Add(1); Cluster.EditIndices().Add(0);

	// Create 3 material ranges
	FRealtimeMeshNaniteMaterialRange Range0;
	Range0.RangeStart = 0;
	Range0.RangeLength = 4;
	Range0.MaterialIndex = 0;
	Cluster.EditMaterialRanges().Add(Range0);

	FRealtimeMeshNaniteMaterialRange Range1;
	Range1.RangeStart = 4;
	Range1.RangeLength = 4;
	Range1.MaterialIndex = 1;
	Cluster.EditMaterialRanges().Add(Range1);

	FRealtimeMeshNaniteMaterialRange Range2;
	Range2.RangeStart = 8;
	Range2.RangeLength = 4;
	Range2.MaterialIndex = 2;
	Cluster.EditMaterialRanges().Add(Range2);

	// Update bounds
	Cluster.UpdateBounds();

	UE_LOG(LogRealtimeMesh, Log, TEXT("Added single cluster with 3 material ranges at %s"), *Center.ToString());
}

void ARealtimeMeshProTest_NaniteManualClusters::CreateCustomHierarchyMesh(FRealtimeMeshNaniteMesh& OutNaniteMesh, const FVector3f& Center, float Size)
{
	const float HalfSize = Size * 0.5f;

	// Create 4 small cube clusters that will form a 2x2 grid
	const FVector3f ClusterOffsets[4] = {
		FVector3f(-HalfSize * 0.5f, -HalfSize * 0.5f, 0),
		FVector3f(HalfSize * 0.5f, -HalfSize * 0.5f, 0),
		FVector3f(-HalfSize * 0.5f, HalfSize * 0.5f, 0),
		FVector3f(HalfSize * 0.5f, HalfSize * 0.5f, 0)
	};

	const float ClusterSize = HalfSize * 0.4f;

	for (int32 ClusterIdx = 0; ClusterIdx < 4; ClusterIdx++)
	{
		FRealtimeMeshNaniteCluster& Cluster = OutNaniteMesh.Clusters.Emplace_GetRef();
		const FVector3f ClusterCenter = Center + ClusterOffsets[ClusterIdx];

		// Create a simple cube for this cluster
		const FVector3f Verts[8] = {
			ClusterCenter + FVector3f(-ClusterSize, -ClusterSize, -ClusterSize),
			ClusterCenter + FVector3f(ClusterSize, -ClusterSize, -ClusterSize),
			ClusterCenter + FVector3f(ClusterSize, ClusterSize, -ClusterSize),
			ClusterCenter + FVector3f(-ClusterSize, ClusterSize, -ClusterSize),
			ClusterCenter + FVector3f(-ClusterSize, -ClusterSize, ClusterSize),
			ClusterCenter + FVector3f(ClusterSize, -ClusterSize, ClusterSize),
			ClusterCenter + FVector3f(ClusterSize, ClusterSize, ClusterSize),
			ClusterCenter + FVector3f(-ClusterSize, ClusterSize, ClusterSize)
		};

		// Add vertices
		for (int32 i = 0; i < 8; i++)
		{
			Cluster.EditVertices().Add(Verts[i]);
			Cluster.EditNormals().Add(FVector3f(0, 0, 1));
			Cluster.EditColors().Add(FColor::White);
		}

		// Add UV channel
		if (Cluster.EditUVs().Num() == 0)
		{
			Cluster.EditUVs().AddDefaulted();
		}

		for (int32 i = 0; i < 8; i++)
		{
			Cluster.EditUVs()[0].Add(FVector2f(i % 2, i / 2));
		}

		// Add 12 triangles (simple cube faces)
		const uint8 CubeIndices[36] = {
			0,1,2, 0,2,3,  // Front
			5,4,7, 5,7,6,  // Back
			4,0,3, 4,3,7,  // Left
			1,5,6, 1,6,2,  // Right
			3,2,6, 3,6,7,  // Top
			4,5,1, 4,1,0   // Bottom
		};

		for (int32 i = 0; i < 36; i++)
		{
			Cluster.EditIndices().Add(CubeIndices[i]);
		}

		// Assign material based on cluster index
		// Cluster 0: Material 0 (Red), Cluster 1: Material 1 (Green)
		// Cluster 2: Material 2 (Blue), Cluster 3: Material 0 (Red - cycle back)
		FRealtimeMeshNaniteMaterialRange MatRange;
		MatRange.RangeStart = 0;
		MatRange.RangeLength = 12;
		MatRange.MaterialIndex = ClusterIdx % 3; // Cycle through materials 0, 1, 2
		Cluster.EditMaterialRanges().Add(MatRange);

		// Update bounds
		Cluster.UpdateBounds();
	}

	UE_LOG(LogRealtimeMesh, Log, TEXT("Added 4 clusters in 2x2 grid at %s (using materials 0,1,2,0)"), *Center.ToString());
}

void ARealtimeMeshProTest_NaniteManualClusters::CreateBoxFace(
	TArray<FVector3f>& Vertices,
	TArray<FVector3f>& Normals,
	TArray<FColor>& Colors,
	TArray<FVector2f>& UVs,
	TArray<uint8>& Indices,
	const FVector3f& V0, const FVector3f& V1, const FVector3f& V2, const FVector3f& V3,
	const FVector3f& Normal,
	const FColor& Color)
{
	// Add 4 vertices for the quad
	const int32 BaseIndex = Vertices.Num();

	Vertices.Add(V0);
	Vertices.Add(V1);
	Vertices.Add(V2);
	Vertices.Add(V3);

	// Add normals
	for (int32 i = 0; i < 4; i++)
	{
		Normals.Add(Normal);
		Colors.Add(Color);
	}

	// Add UVs
	UVs.Add(FVector2f(0, 0));
	UVs.Add(FVector2f(1, 0));
	UVs.Add(FVector2f(1, 1));
	UVs.Add(FVector2f(0, 1));

	// Add two triangles (quad)
	// Triangle 1
	Indices.Add(BaseIndex + 0);
	Indices.Add(BaseIndex + 1);
	Indices.Add(BaseIndex + 2);

	// Triangle 2
	Indices.Add(BaseIndex + 0);
	Indices.Add(BaseIndex + 2);
	Indices.Add(BaseIndex + 3);
}
