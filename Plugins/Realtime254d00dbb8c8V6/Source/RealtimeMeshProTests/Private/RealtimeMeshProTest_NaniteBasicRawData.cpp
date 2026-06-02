// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshProTest_NaniteBasicRawData.h"
#include "RealtimeMeshSimple.h"
#include "RealtimeMeshNaniteBuilder.h"

using namespace RealtimeMesh;
using namespace RealtimeMesh::Nanite;

ARealtimeMeshProTest_NaniteBasicRawData::ARealtimeMeshProTest_NaniteBasicRawData()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ARealtimeMeshProTest_NaniteBasicRawData::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Create all enabled test meshes
	if (bEnableSimpleSphere)
	{
		CreateSimpleSphere();
	}

	if (bEnableComplexTorus)
	{
		CreateComplexTorus();
	}

	if (bEnableTessellatedPlane)
	{
		CreateTessellatedPlane();
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::CreateSimpleSphere()
{
	// Test 1: Simple low-poly sphere to validate basic Nanite creation workflow
	// This uses a modest vertex count to ensure Nanite clustering works correctly

	URealtimeMeshSimple* RealtimeMesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	// Setup material slot
	RealtimeMesh->SetupMaterialSlot(0, "NaniteMaterial");

	// Generate sphere geometry
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	const float Radius = 50.0f;
	const int32 Segments = 8 * (1 << FMath::Clamp(SphereSubdivision, 0, 3));
	const int32 Rings = 4 * (1 << FMath::Clamp(SphereSubdivision, 0, 3));

	GenerateSphereGeometry(Vertices, Normals, UVs, Triangles, Radius, Segments, Rings);

	UE_LOG(LogRealtimeMesh, Log, TEXT("CreateSimpleSphere: Generated %d vertices, %d triangles"),
		Vertices.Num(), Triangles.Num() / 3);

	// Create Nanite mesh from raw data
	TArray<TArray<FVector2f>> UVChannels;
	UVChannels.Add(UVs);

	TArray<TConstArrayView<FVector2f>> UVViews;
	UVViews.Add(TConstArrayView<FVector2f>(UVChannels[0]));

	TArray<FColor> EmptyColors; // No vertex colors for this test

	FRealtimeMeshNaniteMesh NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(
		TConstArrayView<FVector3f>(Vertices),
		TConstArrayView<FVector3f>(Normals),
		TConstArrayView<TConstArrayView<FVector2f>>(UVViews),
		TConstArrayView<FColor>(EmptyColors),
		TConstArrayView<int32>(Triangles)
	);

	// Build minimal hierarchy
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	// Build Nanite resources with standard settings
	FRealtimeMeshNaniteBuildSettings BuildSettings;
	BuildSettings.PositionPrecision = 4;
	BuildSettings.NormalBits = 8;

	FRealtimeMeshNaniteResourcesPtr NaniteResources = BuildRealtimeNaniteMesh(NaniteMesh, BuildSettings);

	if (NaniteResources.IsValid())
	{
		// Apply Nanite resources to mesh at offset position
		RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RealtimeMesh->GetMesh()->GetSharedResources());
		RealtimeMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));

		UE_LOG(LogRealtimeMesh, Log, TEXT("CreateSimpleSphere: Successfully created Nanite mesh"));
	}
	else
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CreateSimpleSphere: Failed to create Nanite resources"));
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::CreateComplexTorus()
{
	// Test 2: High-poly torus to demonstrate Nanite benefit for complex geometry
	// This creates a mesh with 5000+ vertices to show Nanite's efficiency

	URealtimeMeshSimple* RealtimeMesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	// Setup material slot
	RealtimeMesh->SetupMaterialSlot(0, "NaniteMaterial");

	// Generate torus geometry
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	const float MajorRadius = 80.0f;
	const float MinorRadius = 30.0f;
	const int32 MajorSegments = FMath::Clamp(TorusSegments, 16, 128);
	const int32 MinorSegments = FMath::Clamp(TorusSegments / 2, 8, 64);

	GenerateTorusGeometry(Vertices, Normals, UVs, Triangles, MajorRadius, MinorRadius, MajorSegments, MinorSegments);

	UE_LOG(LogRealtimeMesh, Log, TEXT("CreateComplexTorus: Generated %d vertices, %d triangles"),
		Vertices.Num(), Triangles.Num() / 3);

	// Create Nanite mesh from raw data
	TArray<TArray<FVector2f>> UVChannels;
	UVChannels.Add(UVs);

	TArray<TConstArrayView<FVector2f>> UVViews;
	UVViews.Add(TConstArrayView<FVector2f>(UVChannels[0]));

	TArray<FColor> EmptyColors;

	FRealtimeMeshNaniteMesh NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(
		TConstArrayView<FVector3f>(Vertices),
		TConstArrayView<FVector3f>(Normals),
		TConstArrayView<TConstArrayView<FVector2f>>(UVViews),
		TConstArrayView<FColor>(EmptyColors),
		TConstArrayView<int32>(Triangles)
	);

	// Build minimal hierarchy
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	// Build Nanite resources
	FRealtimeMeshNaniteBuildSettings BuildSettings;
	BuildSettings.PositionPrecision = 4;
	BuildSettings.NormalBits = 8;

	FRealtimeMeshNaniteResourcesPtr NaniteResources = BuildRealtimeNaniteMesh(NaniteMesh, BuildSettings);

	if (NaniteResources.IsValid())
	{
		// Apply Nanite resources to mesh at offset position
		RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RealtimeMesh->GetMesh()->GetSharedResources());
		RealtimeMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));

		UE_LOG(LogRealtimeMesh, Log, TEXT("CreateComplexTorus: Successfully created Nanite mesh"));
	}
	else
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CreateComplexTorus: Failed to create Nanite resources"));
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::CreateTessellatedPlane()
{
	// Test 3: Dense tessellated plane with height variation
	// This creates a mesh with 10,000+ vertices to demonstrate Nanite's
	// ability to handle large vertex counts efficiently

	URealtimeMeshSimple* RealtimeMesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	// Setup material slot
	RealtimeMesh->SetupMaterialSlot(0, "NaniteMaterial");

	// Generate tessellated plane geometry
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	const int32 GridSize = FMath::Clamp(PlaneGridSize, 10, 200);
	const float CellSize = 10.0f;
	const float HeightVariation = 20.0f;

	GenerateTessellatedPlane(Vertices, Normals, UVs, Triangles, GridSize, CellSize, HeightVariation);

	UE_LOG(LogRealtimeMesh, Log, TEXT("CreateTessellatedPlane: Generated %d vertices, %d triangles"),
		Vertices.Num(), Triangles.Num() / 3);

	// Create Nanite mesh from raw data
	TArray<TArray<FVector2f>> UVChannels;
	UVChannels.Add(UVs);

	TArray<TConstArrayView<FVector2f>> UVViews;
	UVViews.Add(TConstArrayView<FVector2f>(UVChannels[0]));

	// Add vertex colors based on height for visual interest
	TArray<FColor> VertexColors;
	VertexColors.Reserve(Vertices.Num());
	for (const FVector3f& Vertex : Vertices)
	{
		const float HeightNormalized = (Vertex.Z + HeightVariation) / (HeightVariation * 2.0f);
		const FLinearColor Color = FLinearColor(HeightNormalized, 0.5f, 1.0f - HeightNormalized);
		VertexColors.Add(Color.ToFColor(false));
	}

	FRealtimeMeshNaniteMesh NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(
		TConstArrayView<FVector3f>(Vertices),
		TConstArrayView<FVector3f>(Normals),
		TConstArrayView<TConstArrayView<FVector2f>>(UVViews),
		TConstArrayView<FColor>(VertexColors),
		TConstArrayView<int32>(Triangles)
	);

	// Build minimal hierarchy
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	// Build Nanite resources
	FRealtimeMeshNaniteBuildSettings BuildSettings;
	BuildSettings.PositionPrecision = 4;
	BuildSettings.NormalBits = 8;

	FRealtimeMeshNaniteResourcesPtr NaniteResources = BuildRealtimeNaniteMesh(NaniteMesh, BuildSettings);

	if (NaniteResources.IsValid())
	{
		// Apply Nanite resources to mesh at offset position
		RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RealtimeMesh->GetMesh()->GetSharedResources());
		RealtimeMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));

		UE_LOG(LogRealtimeMesh, Log, TEXT("CreateTessellatedPlane: Successfully created Nanite mesh with vertex colors"));
	}
	else
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CreateTessellatedPlane: Failed to create Nanite resources"));
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::GenerateSphereGeometry(
	TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals,
	TArray<FVector2f>& OutUVs,
	TArray<int32>& OutTriangles,
	float Radius,
	int32 Segments,
	int32 Rings)
{
	OutVertices.Empty();
	OutNormals.Empty();
	OutUVs.Empty();
	OutTriangles.Empty();

	// Generate vertices
	for (int32 Ring = 0; Ring <= Rings; ++Ring)
	{
		const float Theta = static_cast<float>(Ring) / static_cast<float>(Rings) * PI;
		const float SinTheta = FMath::Sin(Theta);
		const float CosTheta = FMath::Cos(Theta);

		for (int32 Segment = 0; Segment <= Segments; ++Segment)
		{
			const float Phi = static_cast<float>(Segment) / static_cast<float>(Segments) * 2.0f * PI;
			const float SinPhi = FMath::Sin(Phi);
			const float CosPhi = FMath::Cos(Phi);

			const FVector3f Position(
				Radius * SinTheta * CosPhi,
				Radius * SinTheta * SinPhi,
				Radius * CosTheta
			);

			const FVector3f Normal = Position.GetSafeNormal();
			const FVector2f UV(
				static_cast<float>(Segment) / static_cast<float>(Segments),
				static_cast<float>(Ring) / static_cast<float>(Rings)
			);

			OutVertices.Add(Position);
			OutNormals.Add(Normal);
			OutUVs.Add(UV);
		}
	}

	// Generate triangles
	for (int32 Ring = 0; Ring < Rings; ++Ring)
	{
		for (int32 Segment = 0; Segment < Segments; ++Segment)
		{
			const int32 Current = Ring * (Segments + 1) + Segment;
			const int32 Next = Current + 1;
			const int32 Below = (Ring + 1) * (Segments + 1) + Segment;
			const int32 BelowNext = Below + 1;

			// Two triangles per quad
			OutTriangles.Add(BelowNext);
			OutTriangles.Add(Below);
			OutTriangles.Add(Current);

			OutTriangles.Add(Next);
			OutTriangles.Add(BelowNext);
			OutTriangles.Add(Current);
		}
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::GenerateTorusGeometry(
	TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals,
	TArray<FVector2f>& OutUVs,
	TArray<int32>& OutTriangles,
	float MajorRadius,
	float MinorRadius,
	int32 MajorSegments,
	int32 MinorSegments)
{
	OutVertices.Empty();
	OutNormals.Empty();
	OutUVs.Empty();
	OutTriangles.Empty();

	// Generate vertices
	for (int32 i = 0; i <= MajorSegments; ++i)
	{
		const float u = static_cast<float>(i) / static_cast<float>(MajorSegments) * 2.0f * PI;
		const float CosU = FMath::Cos(u);
		const float SinU = FMath::Sin(u);

		for (int32 j = 0; j <= MinorSegments; ++j)
		{
			const float v = static_cast<float>(j) / static_cast<float>(MinorSegments) * 2.0f * PI;
			const float CosV = FMath::Cos(v);
			const float SinV = FMath::Sin(v);

			const FVector3f Position(
				(MajorRadius + MinorRadius * CosV) * CosU,
				(MajorRadius + MinorRadius * CosV) * SinU,
				MinorRadius * SinV
			);

			const FVector3f TorusCenter(MajorRadius * CosU, MajorRadius * SinU, 0.0f);
			const FVector3f Normal = (Position - TorusCenter).GetSafeNormal();

			const FVector2f UV(
				static_cast<float>(i) / static_cast<float>(MajorSegments),
				static_cast<float>(j) / static_cast<float>(MinorSegments)
			);

			OutVertices.Add(Position);
			OutNormals.Add(Normal);
			OutUVs.Add(UV);
		}
	}

	// Generate triangles
	for (int32 i = 0; i < MajorSegments; ++i)
	{
		for (int32 j = 0; j < MinorSegments; ++j)
		{
			const int32 Current = i * (MinorSegments + 1) + j;
			const int32 Next = Current + 1;
			const int32 Below = (i + 1) * (MinorSegments + 1) + j;
			const int32 BelowNext = Below + 1;

			// Two triangles per quad (counter-clockwise winding)
			OutTriangles.Add(Current);
			OutTriangles.Add(Next);
			OutTriangles.Add(Below);

			OutTriangles.Add(Next);
			OutTriangles.Add(BelowNext);
			OutTriangles.Add(Below);
		}
	}
}

void ARealtimeMeshProTest_NaniteBasicRawData::GenerateTessellatedPlane(
	TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals,
	TArray<FVector2f>& OutUVs,
	TArray<int32>& OutTriangles,
	int32 GridSize,
	float CellSize,
	float HeightVariation)
{
	OutVertices.Empty();
	OutNormals.Empty();
	OutUVs.Empty();
	OutTriangles.Empty();

	// Generate vertices with procedural height variation
	for (int32 Y = 0; Y <= GridSize; ++Y)
	{
		for (int32 X = 0; X <= GridSize; ++X)
		{
			const float XPos = X * CellSize;
			const float YPos = Y * CellSize;

			// Procedural height variation using sine waves
			const float Height =
				FMath::Sin(XPos * 0.1f) * FMath::Cos(YPos * 0.1f) * HeightVariation +
				FMath::Sin(XPos * 0.05f) * HeightVariation * 0.5f;

			const FVector3f Position(XPos, YPos, Height);

			// Calculate approximate normal using height field
			const float HeightLeft = FMath::Sin((XPos - CellSize) * 0.1f) * FMath::Cos(YPos * 0.1f) * HeightVariation;
			const float HeightRight = FMath::Sin((XPos + CellSize) * 0.1f) * FMath::Cos(YPos * 0.1f) * HeightVariation;
			const float HeightDown = FMath::Sin(XPos * 0.1f) * FMath::Cos((YPos - CellSize) * 0.1f) * HeightVariation;
			const float HeightUp = FMath::Sin(XPos * 0.1f) * FMath::Cos((YPos + CellSize) * 0.1f) * HeightVariation;

			const FVector3f Tangent(CellSize * 2.0f, 0.0f, HeightRight - HeightLeft);
			const FVector3f Bitangent(0.0f, CellSize * 2.0f, HeightUp - HeightDown);
			const FVector3f Normal = FVector3f::CrossProduct(Tangent, Bitangent).GetSafeNormal();

			const FVector2f UV(
				static_cast<float>(X) / static_cast<float>(GridSize),
				static_cast<float>(Y) / static_cast<float>(GridSize)
			);

			OutVertices.Add(Position);
			OutNormals.Add(Normal);
			OutUVs.Add(UV);
		}
	}

	// Generate triangles
	for (int32 Y = 0; Y < GridSize; ++Y)
	{
		for (int32 X = 0; X < GridSize; ++X)
		{
			const int32 V0 = Y * (GridSize + 1) + X;
			const int32 V1 = V0 + 1;
			const int32 V2 = V0 + (GridSize + 1);
			const int32 V3 = V2 + 1;

			// Two triangles per quad
			OutTriangles.Add(V0);
			OutTriangles.Add(V2);
			OutTriangles.Add(V1);

			OutTriangles.Add(V1);
			OutTriangles.Add(V2);
			OutTriangles.Add(V3);
		}
	}
}
