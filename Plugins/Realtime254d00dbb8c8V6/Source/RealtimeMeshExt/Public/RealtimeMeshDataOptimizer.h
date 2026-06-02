// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Core/RealtimeMeshDataStream.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RealtimeMeshDataOptimizer.generated.h"

class URealtimeMeshStreamSet;

UENUM()
enum class ERealtimeMeshOptimizationQuality : uint8
{
	RenderingEfficiency,
	GenerationSpeed
};

/**
 * 
 */
UCLASS()
class REALTIMEMESHEXT_API URealtimeMeshDataOptimizer : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/**
	 *	Generates, or re-generates the Triangles streams to remove redundant vertices.
	 *	Will use your existing Triangles stream if available, or generate one out of each successive group of 3 vertices
	 */
	static void OptimizeMeshIndexing(RealtimeMesh::FRealtimeMeshStreamSet& Streams);

	/**
	 *	Optimizes the vertex streams for the gpu cache efficiency.
	 */
	static void OptimizeVertexCache(RealtimeMesh::FRealtimeMeshStreamSet& Streams, ERealtimeMeshOptimizationQuality Quality);

	/**
	 *	Optimizes the mesh data to attempt to reduce overdraw
	 */
	static void OptimizeOverdraw(RealtimeMesh::FRealtimeMeshStreamSet& Streams, float Threshold = 1.01f);

	/**
	 *	Optimizes the vertex data to improve memory loading efficiency.
	 */
	static void OptimizeVertexFetch(RealtimeMesh::FRealtimeMeshStreamSet& Streams);


	/**
	 *	Generates, or re-generates the Triangles streams to remove redundant vertices.
	 *	Will use your existing Triangles stream if available, or generate one out of each successive group of 3 vertices
	 */
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Optimization")
	static void OptimizeMeshIndexing(URealtimeMeshStreamSet* Streams);

	/**
	 *	Optimizes the vertex streams for the gpu cache efficiency.
	 */
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Optimization")
	static void OptimizeVertexCache(URealtimeMeshStreamSet* Streams, ERealtimeMeshOptimizationQuality Quality = ERealtimeMeshOptimizationQuality::RenderingEfficiency);

	/**
	 *	Optimizes the mesh data to attempt to reduce overdraw
	 */
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Optimization")
	static void OptimizeOverdraw(URealtimeMeshStreamSet* Streams, float Threshold = 1.01f);

	/**
	 *	Optimizes the vertex data to improve memory loading efficiency.
	 */
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Optimization")
	static void OptimizeVertexFetch(URealtimeMeshStreamSet* Streams);
	
};
