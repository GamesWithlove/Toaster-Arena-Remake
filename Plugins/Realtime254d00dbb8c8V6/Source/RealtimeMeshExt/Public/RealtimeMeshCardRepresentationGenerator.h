// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RealtimeMeshDynamicMeshAdapter.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/DynamicMeshAABBTree3.h"
#include "Core/RealtimeMeshDataStream.h"
#include "Mesh/RealtimeMeshDistanceField.h"
#include "Mesh/RealtimeMeshCardRepresentation.h"
#include "RealtimeMeshCardRepresentationGenerator.generated.h"

class UDynamicMesh;
class URealtimeMeshSimple;
struct FRealtimeMeshCardRepresentation;

USTRUCT(BlueprintType)
struct FRealtimeMeshCardRepresentationGeneratorOptions
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	bool bMultiThreadedGeneration = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	int32 MaxLumenMeshCards = 12;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Representation")
	bool bGenerateAsIfTwoSided = false;
};


/**
 * 
 */
UCLASS()
class REALTIMEMESHEXT_API URealtimeMeshCardRepresentationGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		const RealtimeMesh::FRealtimeMeshAABBTree3& StreamSetBVH,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		const RealtimeMesh::FRealtimeMeshAABBTree3& StreamSetBVH,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
		
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (AutoCreateRefTerm="DistanceField", ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		URealtimeMeshStreamSet* StreamSet,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForStreamSet(
		URealtimeMeshStreamSet* StreamSet,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (AutoCreateRefTerm="DistanceField", ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForRealtimeMesh(
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		const UE::Geometry::FDynamicMeshAABBTree3& DynamicMeshBVH,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		const UE::Geometry::FDynamicMeshAABBTree3& DynamicMeshBVH,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (AutoCreateRefTerm="DistanceField", ExpandEnumAsExecs = "ReturnValue"))
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		UDynamicMesh* DynamicMesh,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static ERealtimeMeshOutcomePins GenerateCardRepresentationForDynamicMesh(
		UDynamicMesh* DynamicMesh,
		FRealtimeMeshCardRepresentation& CardRepresentation,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());


	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForStreamSetAsync(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForStreamSetAsync(
		const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForStreamSetAsync(
		URealtimeMeshStreamSet* StreamSet,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForStreamSetAsync(
		URealtimeMeshStreamSet* StreamSet,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForRealtimeMeshAsync(
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForDynamicMeshAsync(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
		
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForDynamicMeshAsync(
		const UE::Geometry::FDynamicMesh3& DynamicMesh,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForDynamicMeshAsync(
		UDynamicMesh* DynamicMesh,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());
	
	static TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> GenerateCardRepresentationForDynamicMeshAsync(
		UDynamicMesh* DynamicMesh,
		FRealtimeMeshCardRepresentationGeneratorOptions Options = FRealtimeMeshCardRepresentationGeneratorOptions());


private:
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateCardRepresentationForStreamSetAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		URealtimeMeshStreamSet* StreamSet,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshCardRepresentation& CardRepresentation);

	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateCardRepresentationForRealtimeMeshAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		URealtimeMeshSimple* RealtimeMesh,
		FRealtimeMeshCardRepresentationGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshCardRepresentation& CardRepresentation);
	
	UFUNCTION(BlueprintCallable, Category = "RealtimeMesh|Representation", meta = (ExpandEnumAsExecs = "Result", WorldContext="WorldContextObject", Latent, LatentInfo = "LatentInfo"))
	static void GenerateCardRepresentationForDynamicMeshAsync(
		UObject* WorldContextObject, FLatentActionInfo LatentInfo,
		UDynamicMesh* DynamicMesh,
		const FRealtimeMeshDistanceField& DistanceField,
		FRealtimeMeshCardRepresentationGeneratorOptions Options,
		ERealtimeMeshOutcomePins& Result,
		FRealtimeMeshCardRepresentation& CardRepresentation);
	
};
