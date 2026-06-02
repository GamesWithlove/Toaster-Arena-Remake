// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshActor.h"
#include "RealtimeMeshProTest_NaniteFrequentUpdates.generated.h"

/**
 * Test actor for demonstrating frequent (frame-by-frame) Nanite mesh updates.
 *
 * This test creates three different scenarios to stress-test Nanite's ability
 * to handle real-time mesh updates at various frequencies:
 *
 * - Test 1: Every Frame - Animated wave surface (50x50 grid)
 * - Test 2: Every 5 Frames - Morphing sphere/cube
 * - Test 3: Every 30 Frames - Growing/shrinking structure
 */
UCLASS()
class REALTIMEMESHPROTESTS_API ARealtimeMeshProTest_NaniteFrequentUpdates : public ARealtimeMeshActor
{
	GENERATED_BODY()

public:
	ARealtimeMeshProTest_NaniteFrequentUpdates();

protected:
	// Timing and performance tracking
	UPROPERTY()
	float ElapsedTime;

	UPROPERTY()
	int32 UpdateCounter;

	// Performance metrics
	double TotalUpdateTime;
	int32 UpdateCount;
	double LastLogTime;

	// Test mesh components
	UPROPERTY()
	TObjectPtr<URealtimeMeshComponent> WaveMeshComponent;

	UPROPERTY()
	TObjectPtr<URealtimeMeshComponent> MorphMeshComponent;

	UPROPERTY()
	TObjectPtr<URealtimeMeshComponent> GrowMeshComponent;

public:
	// AActor interface
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	// Test mesh update functions
	void UpdateWaveSurface(float Time);
	void UpdateMorphingSphere(float Time);
	void UpdateGrowingStructure(float Time);

	// Helper functions to create geometry
	void CreateWaveGeometry(float Time, TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
	                        TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles);
	void CreateMorphGeometry(float Time, TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
	                         TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles);
	void CreateGrowGeometry(float Time, TArray<FVector3f>& OutVertices, TArray<FVector3f>& OutNormals,
	                        TArray<FVector2f>& OutUVs, TArray<int32>& OutTriangles);

	// Initialize test meshes
	void InitializeTestMeshes();
	void LogPerformanceMetrics();
};
