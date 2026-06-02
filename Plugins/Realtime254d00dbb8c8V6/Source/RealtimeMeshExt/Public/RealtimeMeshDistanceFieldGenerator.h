// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "RealtimeMeshDynamicMeshAdapter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/DynamicMeshAABBTree3.h"
#include "Core/RealtimeMeshDataStream.h"
#include "Mesh/RealtimeMeshDistanceField.h"
#include "RealtimeMeshDistanceFieldGenerator.generated.h"

class UDynamicMesh;
class URealtimeMeshSimple;
struct FRealtimeMeshDistanceField;

USTRUCT(BlueprintType)
struct FRealtimeMeshDistanceFieldGeneratorOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	float DistanceFieldResolutionScale = 2.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	bool bGenerateAsIfTwoSided = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	bool bUsePointQuery = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	bool bMultiThreadedGeneration = true;
};

/**
 * 
 */
UCLASS()
class REALTIMEMESHEXT_API URealtimeMeshDistanceFieldGeneration : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		const RealtimeMesh::FRealtimeMeshAABBTree3& StreamSetBVH,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());

	static ERealtimeMeshOutcomePins GenerateDistanceFieldForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
		
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForStreamSet(
		URealtimeMeshStreamSet* StreamSet,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForRealtimeMesh(
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		const UE::Geometry::FDynamicMeshAABBTree3& DynamicMeshBVH,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateDistanceFieldForDynamicMesh(
		UDynamicMesh* DynamicMesh,
		FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());



	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> GenerateDistanceFieldForStreamSetAsync(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> GenerateDistanceFieldForStreamSetAsync(
		URealtimeMeshStreamSet* StreamSet,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> GenerateDistanceFieldForRealtimeMeshAsync(
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> GenerateDistanceFieldForDynamicMeshAsync(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> GenerateDistanceFieldForDynamicMeshAsync(
		UDynamicMesh* DynamicMesh,
		FRealtimeMeshDistanceFieldGeneratorOptions Options = FRealtimeMeshDistanceFieldGeneratorOptions());


private:

	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateDistanceFieldForStreamSetAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		URealtimeMeshStreamSet* StreamSet,
		FRealtimeMeshDistanceFieldGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshDistanceField& DistanceField);

	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateDistanceFieldForRealtimeMeshAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshDistanceFieldGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshDistanceField& DistanceField);
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateDistanceFieldForDynamicMeshAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		UDynamicMesh* DynamicMesh,
		FRealtimeMeshDistanceFieldGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshDistanceField& DistanceField);
	
};
