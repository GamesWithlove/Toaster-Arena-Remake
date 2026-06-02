// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshProTest_NaniteFrequentUpdates.h"
#include "RealtimeMeshComponent.h"
#include "RealtimeMeshSimple.h"
#include "RealtimeMeshNaniteBuilder.h"
#include "Data/RealtimeMeshData.h"

ARealtimeMeshProTest_NaniteFrequentUpdates::ARealtimeMeshProTest_NaniteFrequentUpdates()
{
	// Enable ticking for frame-by-frame updates
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Initialize tracking variables
	ElapsedTime = 0.0f;
	UpdateCounter = 0;
	TotalUpdateTime = 0.0;
	UpdateCount = 0;
	LastLogTime = 0.0;

	// Create additional mesh components for the different tests
	WaveMeshComponent = CreateDefaultSubobject<URealtimeMeshComponent>(TEXT("WaveMeshComponent"));
	WaveMeshComponent->SetupAttachment(RootComponent);
	WaveMeshComponent->SetRelativeLocation(FVector(-600.0f, 0.0f, 0.0f));

	MorphMeshComponent = CreateDefaultSubobject<URealtimeMeshComponent>(TEXT("MorphMeshComponent"));
	MorphMeshComponent->SetupAttachment(RootComponent);
	MorphMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	GrowMeshComponent = CreateDefaultSubobject<URealtimeMeshComponent>(TEXT("GrowMeshComponent"));
	GrowMeshComponent->SetupAttachment(RootComponent);
	GrowMeshComponent->SetRelativeLocation(FVector(600.0f, 0.0f, 0.0f));
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Don't initialize meshes during OnConstruction - wait for BeginPlay
	// OnConstruction can be called in editor during drag-and-drop which may fail object creation
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::BeginPlay()
{
	Super::BeginPlay();

	// Initialize meshes at BeginPlay when actor is fully constructed
	InitializeTestMeshes();

	// Reset timing on play
	ElapsedTime = 0.0f;
	UpdateCounter = 0;
	TotalUpdateTime = 0.0;
	UpdateCount = 0;
	LastLogTime = FPlatformTime::Seconds();

	UE_LOG(LogRealtimeMesh, Log, TEXT("NaniteFrequentUpdates: Test started - monitoring update performance"));
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ElapsedTime += DeltaTime;
	UpdateCounter++;

	// Update Test 1 every frame - Wave surface
	UpdateWaveSurface(ElapsedTime);

	// Update Test 2 every 5 frames - Morphing sphere
	if (UpdateCounter % 5 == 0)
	{
		UpdateMorphingSphere(ElapsedTime);
	}

	// Update Test 3 every 30 frames - Growing structure
	if (UpdateCounter % 30 == 0)
	{
		UpdateGrowingStructure(ElapsedTime);
	}

	// Log performance every 60 frames (approximately once per second at 60fps)
	if (UpdateCounter % 60 == 0)
	{
		LogPerformanceMetrics();
	}
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::InitializeTestMeshes()
{
	// Create initial RealtimeMesh objects for each component using concrete URealtimeMeshSimple class
	// Note: URealtimeMesh is abstract and cannot be instantiated directly
	if (!WaveMeshComponent->GetRealtimeMesh())
	{
		WaveMeshComponent->InitializeRealtimeMesh<URealtimeMeshSimple>();
	}

	if (!MorphMeshComponent->GetRealtimeMesh())
	{
		MorphMeshComponent->InitializeRealtimeMesh<URealtimeMeshSimple>();
	}

	if (!GrowMeshComponent->GetRealtimeMesh())
	{
		GrowMeshComponent->InitializeRealtimeMesh<URealtimeMeshSimple>();
	}

	// Perform initial updates to create the meshes
	UpdateWaveSurface(0.0f);
	UpdateMorphingSphere(0.0f);
	UpdateGrowingStructure(0.0f);
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::UpdateWaveSurface(float Time)
{
	// Safety check - don't update if mesh isn't initialized yet
	if (!WaveMeshComponent || !WaveMeshComponent->GetRealtimeMesh())
	{
		return;
	}

	const double StartTime = FPlatformTime::Seconds();

	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	CreateWaveGeometry(Time, Vertices, Normals, UVs, Triangles);

	// Build Nanite mesh
	using namespace RealtimeMesh::Nanite;

	TArray<TConstArrayView<FVector2f>> UVArray;
	UVArray.Add(UVs);

	TArray<FColor> Colors; // No colors for this test

	auto NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(Vertices, Normals, UVArray, Colors, Triangles);
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	FRealtimeMeshNaniteBuildSettings Settings;
	Settings.PositionPrecision = 4;
	Settings.NormalBits = 8;

	auto Resources = BuildRealtimeNaniteMesh(NaniteMesh, Settings);

	if (Resources.IsValid())
	{
		URealtimeMesh* RTMesh = WaveMeshComponent->GetRealtimeMesh();
		if (RTMesh)
		{
			RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RTMesh->GetMesh()->GetSharedResources());
			RTMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(Resources));
		}
	}

	const double EndTime = FPlatformTime::Seconds();
	TotalUpdateTime += (EndTime - StartTime);
	UpdateCount++;
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::UpdateMorphingSphere(float Time)
{
	// Safety check - don't update if mesh isn't initialized yet
	if (!MorphMeshComponent || !MorphMeshComponent->GetRealtimeMesh())
	{
		return;
	}

	const double StartTime = FPlatformTime::Seconds();

	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	CreateMorphGeometry(Time, Vertices, Normals, UVs, Triangles);

	// Build Nanite mesh
	using namespace RealtimeMesh::Nanite;

	TArray<TConstArrayView<FVector2f>> UVArray;
	UVArray.Add(UVs);

	TArray<FColor> Colors;

	auto NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(Vertices, Normals, UVArray, Colors, Triangles);
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	FRealtimeMeshNaniteBuildSettings Settings;
	Settings.PositionPrecision = 4;
	Settings.NormalBits = 8;

	auto Resources = BuildRealtimeNaniteMesh(NaniteMesh, Settings);

	if (Resources.IsValid())
	{
		URealtimeMesh* RTMesh = MorphMeshComponent->GetRealtimeMesh();
		if (RTMesh)
		{
			RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RTMesh->GetMesh()->GetSharedResources());
			RTMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(Resources));
		}
	}

	const double EndTime = FPlatformTime::Seconds();
	TotalUpdateTime += (EndTime - StartTime);
	UpdateCount++;
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::UpdateGrowingStructure(float Time)
{
	// Safety check - don't update if mesh isn't initialized yet
	if (!GrowMeshComponent || !GrowMeshComponent->GetRealtimeMesh())
	{
		return;
	}

	const double StartTime = FPlatformTime::Seconds();

	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UVs;
	TArray<int32> Triangles;

	CreateGrowGeometry(Time, Vertices, Normals, UVs, Triangles);

	// Build Nanite mesh
	using namespace RealtimeMesh::Nanite;

	TArray<TConstArrayView<FVector2f>> UVArray;
	UVArray.Add(UVs);

	TArray<FColor> Colors;

	auto NaniteMesh = FRealtimeMeshNaniteMesh::CreateFromRawMesh(Vertices, Normals, UVArray, Colors, Triangles);
	FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(NaniteMesh);

	FRealtimeMeshNaniteBuildSettings Settings;
	Settings.PositionPrecision = 4;
	Settings.NormalBits = 8;

	auto Resources = BuildRealtimeNaniteMesh(NaniteMesh, Settings);

	if (Resources.IsValid())
	{
		URealtimeMesh* RTMesh = GrowMeshComponent->GetRealtimeMesh();
		if (RTMesh)
		{
			RealtimeMesh::FRealtimeMeshUpdateContext UpdateContext(RTMesh->GetMesh()->GetSharedResources());
			RTMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(Resources));
		}
	}

	const double EndTime = FPlatformTime::Seconds();
	TotalUpdateTime += (EndTime - StartTime);
	UpdateCount++;
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::CreateWaveGeometry(float Time, TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals, TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles)
{
	// Create a 50x50 grid with animated wave pattern
	const int32 GridSize = 50;
	const float GridSpacing = 10.0f;
	const float WaveAmplitude = 50.0f;
	const float WaveFrequency = 0.5f;
	const float WaveSpeed = 2.0f;

	OutVertices.Reserve(GridSize * GridSize);
	OutNormals.Reserve(GridSize * GridSize);
	OutUVs.Reserve(GridSize * GridSize);
	OutTriangles.Reserve((GridSize - 1) * (GridSize - 1) * 6);

	// Generate vertices with wave animation
	for (int32 Y = 0; Y < GridSize; Y++)
	{
		for (int32 X = 0; X < GridSize; X++)
		{
			const float XPos = (X - GridSize / 2) * GridSpacing;
			const float YPos = (Y - GridSize / 2) * GridSpacing;

			// Animated wave equation
			const float Distance = FMath::Sqrt(XPos * XPos + YPos * YPos);
			const float ZPos = WaveAmplitude * FMath::Sin(Distance * WaveFrequency - Time * WaveSpeed);

			OutVertices.Add(FVector3f(XPos, YPos, ZPos));

			// Calculate normal by taking derivative of wave function
			const float Gradient = WaveAmplitude * WaveFrequency * FMath::Cos(Distance * WaveFrequency - Time * WaveSpeed);
			FVector3f Normal;
			if (Distance > 0.001f)
			{
				const float dZdX = Gradient * (XPos / Distance);
				const float dZdY = Gradient * (YPos / Distance);
				Normal = FVector3f(-dZdX, -dZdY, 1.0f).GetSafeNormal();
			}
			else
			{
				Normal = FVector3f(0.0f, 0.0f, 1.0f);
			}
			OutNormals.Add(Normal);

			// UV coordinates
			OutUVs.Add(FVector2f(static_cast<float>(X) / (GridSize - 1), static_cast<float>(Y) / (GridSize - 1)));
		}
	}

	// Generate triangles
	for (int32 Y = 0; Y < GridSize - 1; Y++)
	{
		for (int32 X = 0; X < GridSize - 1; X++)
		{
			const int32 Index0 = Y * GridSize + X;
			const int32 Index1 = Y * GridSize + (X + 1);
			const int32 Index2 = (Y + 1) * GridSize + (X + 1);
			const int32 Index3 = (Y + 1) * GridSize + X;

			// First triangle
			OutTriangles.Add(Index0);
			OutTriangles.Add(Index2);
			OutTriangles.Add(Index1);

			// Second triangle
			OutTriangles.Add(Index0);
			OutTriangles.Add(Index3);
			OutTriangles.Add(Index2);
		}
	}
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::CreateMorphGeometry(float Time, TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals, TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles)
{
	// Create a subdivided sphere that morphs into a cube and back
	const int32 Subdivisions = 24;
	const float Radius = 200.0f;

	// Morph factor oscillates between 0 (sphere) and 1 (cube)
	const float MorphFactor = (FMath::Sin(Time * 0.5f) + 1.0f) * 0.5f;

	// Generate sphere using UV sphere method
	OutVertices.Reserve((Subdivisions + 1) * (Subdivisions + 1));
	OutNormals.Reserve((Subdivisions + 1) * (Subdivisions + 1));
	OutUVs.Reserve((Subdivisions + 1) * (Subdivisions + 1));

	for (int32 Lat = 0; Lat <= Subdivisions; Lat++)
	{
		const float Theta = Lat * PI / Subdivisions;
		const float SinTheta = FMath::Sin(Theta);
		const float CosTheta = FMath::Cos(Theta);

		for (int32 Lon = 0; Lon <= Subdivisions; Lon++)
		{
			const float Phi = Lon * 2.0f * PI / Subdivisions;
			const float SinPhi = FMath::Sin(Phi);
			const float CosPhi = FMath::Cos(Phi);

			// Sphere position
			FVector3f SpherePos(
				Radius * SinTheta * CosPhi,
				Radius * SinTheta * SinPhi,
				Radius * CosTheta
			);

			// Cube position (normalize sphere pos and multiply by radius to get cube surface)
			FVector3f NormalizedPos = SpherePos.GetSafeNormal();
			const float MaxComponent = FMath::Max3(FMath::Abs(NormalizedPos.X),
			                                       FMath::Abs(NormalizedPos.Y),
			                                       FMath::Abs(NormalizedPos.Z));
			FVector3f CubePos = (NormalizedPos / MaxComponent) * Radius;

			// Interpolate between sphere and cube
			FVector3f FinalPos = FMath::Lerp(SpherePos, CubePos, MorphFactor);
			OutVertices.Add(FinalPos);

			// Normal is simply the normalized position for a sphere/cube morph
			OutNormals.Add(FinalPos.GetSafeNormal());

			// UV coordinates
			OutUVs.Add(FVector2f(static_cast<float>(Lon) / Subdivisions, static_cast<float>(Lat) / Subdivisions));
		}
	}

	// Generate triangles
	OutTriangles.Reserve(Subdivisions * Subdivisions * 6);
	for (int32 Lat = 0; Lat < Subdivisions; Lat++)
	{
		for (int32 Lon = 0; Lon < Subdivisions; Lon++)
		{
			const int32 First = (Lat * (Subdivisions + 1)) + Lon;
			const int32 Second = First + Subdivisions + 1;

			// First triangle (counter-clockwise winding)
			OutTriangles.Add(First);
			OutTriangles.Add(First + 1);
			OutTriangles.Add(Second);

			// Second triangle (counter-clockwise winding)
			OutTriangles.Add(First + 1);
			OutTriangles.Add(Second + 1);
			OutTriangles.Add(Second);
		}
	}
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::CreateGrowGeometry(float Time, TArray<FVector3f>& OutVertices,
	TArray<FVector3f>& OutNormals, TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles)
{
	// Create a structure that grows and shrinks in complexity over time
	// Use a "stacked boxes" pattern where the number of boxes changes

	const float CycleTime = 10.0f; // Full cycle every 10 seconds
	const float Phase = FMath::Fmod(Time, CycleTime) / CycleTime;

	// Number of boxes varies from 1 to 8
	const int32 NumBoxes = FMath::Clamp(static_cast<int32>((FMath::Sin(Phase * 2.0f * PI) + 1.0f) * 4.0f) + 1, 1, 8);
	const float BoxSize = 80.0f;
	const float BoxSpacing = 100.0f;

	for (int32 BoxIndex = 0; BoxIndex < NumBoxes; BoxIndex++)
	{
		const int32 BaseVertexIndex = OutVertices.Num();
		const float ZOffset = BoxIndex * BoxSpacing;
		const float Scale = 1.0f - (BoxIndex * 0.08f); // Each box slightly smaller

		// Create a box (8 vertices)
		const float S = BoxSize * Scale * 0.5f;

		TArray<FVector3f> BoxVertices = {
			FVector3f(-S, -S, -S + ZOffset), FVector3f(S, -S, -S + ZOffset),
			FVector3f(S, S, -S + ZOffset), FVector3f(-S, S, -S + ZOffset),
			FVector3f(-S, -S, S + ZOffset), FVector3f(S, -S, S + ZOffset),
			FVector3f(S, S, S + ZOffset), FVector3f(-S, S, S + ZOffset)
		};

		// Add vertices
		OutVertices.Append(BoxVertices);

		// Box face definitions (each face has 4 vertices)
		const TArray<TArray<int32>> Faces = {
			{0, 1, 2, 3}, // Bottom
			{4, 5, 6, 7}, // Top
			{0, 1, 5, 4}, // Front
			{2, 3, 7, 6}, // Back
			{0, 3, 7, 4}, // Left
			{1, 2, 6, 5}  // Right
		};

		const TArray<FVector3f> FaceNormals = {
			FVector3f(0, 0, -1), FVector3f(0, 0, 1),
			FVector3f(0, -1, 0), FVector3f(0, 1, 0),
			FVector3f(-1, 0, 0), FVector3f(1, 0, 0)
		};

		// Add normals (8 normals per box, averaged from adjacent faces)
		for (int32 i = 0; i < 8; i++)
		{
			OutNormals.Add(FVector3f(0, 0, 1)); // Simplified normal
		}

		// Add UVs (simple planar mapping)
		for (int32 i = 0; i < 8; i++)
		{
			OutUVs.Add(FVector2f(0.0f, 0.0f));
		}

		// Add triangles for each face
		for (const TArray<int32>& Face : Faces)
		{
			// Triangle 1
			OutTriangles.Add(BaseVertexIndex + Face[0]);
			OutTriangles.Add(BaseVertexIndex + Face[1]);
			OutTriangles.Add(BaseVertexIndex + Face[2]);

			// Triangle 2
			OutTriangles.Add(BaseVertexIndex + Face[0]);
			OutTriangles.Add(BaseVertexIndex + Face[2]);
			OutTriangles.Add(BaseVertexIndex + Face[3]);
		}
	}
}

void ARealtimeMeshProTest_NaniteFrequentUpdates::LogPerformanceMetrics()
{
	if (UpdateCount > 0)
	{
		const double CurrentTime = FPlatformTime::Seconds();
		const double TimeSinceLastLog = CurrentTime - LastLogTime;
		const double AverageUpdateTime = TotalUpdateTime / UpdateCount;
		const double AverageUpdateTimeMs = AverageUpdateTime * 1000.0;

		UE_LOG(LogRealtimeMesh, Log,
			TEXT("NaniteFrequentUpdates Performance: Frame %d | Avg Update Time: %.2f ms | Total Updates: %d | Time: %.1f s"),
			UpdateCounter, AverageUpdateTimeMs, UpdateCount, TimeSinceLastLog);

		// Reset counters for next logging interval
		TotalUpdateTime = 0.0;
		UpdateCount = 0;
		LastLogTime = CurrentTime;
	}
}
