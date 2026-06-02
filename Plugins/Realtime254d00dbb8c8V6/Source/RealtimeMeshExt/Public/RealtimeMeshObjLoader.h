// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "Core/RealtimeMeshDataStream.h"
#include "RealtimeMeshObjLoader.generated.h"

class UDynamicMesh;
class URealtimeMeshStreamSet;
using namespace RealtimeMesh;

USTRUCT(BlueprintType)
struct REALTIMEMESHEXT_API FRealtimeMeshOBJTextureInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FString Path;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Sharpness = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Brightness = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Contrast = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Origin = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Scale = FVector3f::One();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Turbulence = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	int32 TextureResolution = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool Clamp = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	uint8 IMFChannel = 'm';
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool BlendU = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool BlendV = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float BumpMultiplier = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FString ColorSpace;
};


USTRUCT(BlueprintType)
struct REALTIMEMESHEXT_API FRealtimeMeshOBJMaterial
{
	GENERATED_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Ambient = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Diffuse = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Specular = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Transmittance = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FVector3f Emission = FVector3f::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Shininess = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float IOR = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Dissolve = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	int32 Illum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo AmbientTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo DiffuseTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo SpecularTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo SpecularHighlightTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo BumpTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo DisplacementTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo AlphaTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo ReflectionTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Roughness = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Metallic = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Sheen = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float ClearcoatThickness = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float ClearcoatRoughness = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float Anisotropy = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	float AnisotropyRotation = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo RoughnessTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo MetallicTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo SheenTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo EmissiveTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FRealtimeMeshOBJTextureInfo NormalTexture;
};



USTRUCT(BlueprintType)
struct REALTIMEMESHEXT_API FRealtimeMeshOBJLoadResult
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool bSuccess = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FString Message;
};

USTRUCT(BlueprintType)
struct REALTIMEMESHEXT_API FRealtimeMeshOBJLoadOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	FString MaterialSearchPath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool bReverseWinding = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool bGenerateTangents = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh|Loading|OBJ")
	bool bGenerateSmoothTangents = true;
};




/**
 * 
 */
UCLASS()
class REALTIMEMESHEXT_API URealtimeMeshObjLoader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	static FRealtimeMeshOBJLoadResult LoadStreamSetFromOBJFile(FRealtimeMeshStreamSet& OutStreams, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options = FRealtimeMeshOBJLoadOptions());

	UFUNCTION(BlueprintCallable, Category="RealtimeMesh|Loading|OBJ")
	static FRealtimeMeshOBJLoadResult LoadStreamSetFromOBJFile(URealtimeMeshStreamSet* OutStreams, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options = FRealtimeMeshOBJLoadOptions());

	/*static FRealtimeMeshOBJLoadResult LoadDynamicMeshFromOBJFile(UE::Geometry::FDynamicMesh3& OutMesh, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options = FRealtimeMeshOBJLoadOptions());

	UFUNCTION(BlueprintCallable, Category="RealtimeMesh|Loading|OBJ")
	static FRealtimeMeshOBJLoadResult LoadDynamicMeshFromOBJFile(UDynamicMesh* OutMesh, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options = FRealtimeMeshOBJLoadOptions());*/



	
};
