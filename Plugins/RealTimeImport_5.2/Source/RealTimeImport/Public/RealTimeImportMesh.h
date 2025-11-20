// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once


#include "RealTimeImport.h"
#include "../../ThirdParty/Triangulation.h"

#ifndef __RealTimeImportMeshSTL
#define __RealTimeImportMeshSTL
#include "RealTimeImportMeshSTL.h"
#endif

#ifndef __RealTimeImportMeshOBJ
#define __RealTimeImportMeshOBJ
#include "RealTimeImportMeshOBJ.h"
#endif

#ifndef __RealTimeImportMeshFBX
#define __RealTimeImportMeshFBX
#include "RealTimeImportMeshFBX.h"
#endif

#ifndef __RealTimeImportMeshglTF
#define __RealTimeImportMeshglTF
#include "RealTimeImportMeshglTF.h"
#endif

#include "RealTimeImportMesh.generated.h"


UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API ARTIActor : public AActor
{
	GENERATED_BODY()

public:
	/*virtual void BeginDestroy() override;*/

	UProceduralMeshComponent* createNewProceduralMesh(FTransform transform, int64 id, int64 parentID,TArray<FVector>& vertices, TArray<int32>& triangles);
	UProceduralMeshComponent* createNewEmptyProceduralMesh(FTransform transform, int64 id, int64 parentID);
	void connectProceduralMesh(FTransform transform, int64 id, int64 parentID);
	TArray<FVector> getVerticesChangesInPercent(int64 id);

	TMap<int64, UProceduralMeshComponent*> pmcMap;
	TArray<FVector> originalVertices;
};

UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URealTimeImportMesh : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static URealTimeImportMesh* realTimeImportMesh;
	UFUNCTION()
		static URealTimeImportMesh* getRealTimeImportMesh();


	
	void LoadMeshFile(ERTIMeshType fileType,
		ERTIDirectoryType directoryType,
		FString filePath,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		ERTICoordinateSystem coordinateSystem,
		bool calculateTangents = true,
		bool cacheTexture = false,
		bool autoDetectionNormalMap = true,
		bool useSRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);


	//mesh export

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RealTimeImport|Mesh")
	//	static FRTIMaterialStruct CreateMaterialStruct(UMaterialInterface* material, FString textureName, ERTITextureType textureType);


	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	static FRTIModelStruct makeModelStruct(FString name);
	FRTIModelStruct makeModelStructNonStatic(FString name);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static FRTIMeshStruct makeMeshStruct(FString meshName, TArray<FVector> vertices, TArray<int32> triangles,
			TArray<FVector> normals,
			TArray<FVector2D> UV0, UPrimitiveComponent* materialComponent);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void addMeshStructToModelStruct(FRTIModelStruct modelStruct,FRTIMeshStruct meshStruct);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void getGlTF_ExtraJsonData(const FRTIModelStruct& modelStruct,FString& json);


		
	
		//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh", meta = (WorldContext = "WorldContextObject"))
		static void saveModelsToFile(
			UObject* WorldContextObject,
			UMaterial* exportMaterial,
			ERTICoordinateSystem coordinateSystem,
			ERTIMeshType fileType,
			ERTIDirectoryType directoryType,
			FString filePath,
			bool& success,
			FString& errorMessage,
			const TArray<FRTIModelStruct>& modelStructs);


	static void breakModelStruct(const FRTIModelStruct& modelStruct,
		int64& modelID,FString& name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs,
		bool& hasParent, int64& parentModelID, TArray<int64>& childrenModelIDs,ERTIModelType& modelType,
		bool& hasSkeleton,	FRTISkeleton& skeleton,
		TArray<FRTIAnimationFrame*>& animationFrames);

	static void breakMeshStruct(const FRTIMeshStruct& meshStruct,
		FString& geometryName,
		TArray<int32>& triangles,
		TArray<FVector>& vertices,
		TArray<FVector>& normals,
		TArray<FVector2D>& UV0,
		TArray<FLinearColor>& vertexColors,
		TArray<FProcMeshTangent>& tangents,
		FRTIMaterialStruct& materialStruct);


	static void breakMaterialStruct(const FRTIMaterialStruct& materialData,
		bool& hasTexture,
		FString& materialName,
		FString& textureName,
		TArray<FRTITextureStruct>& textures,
		FColor& ambient,
		FColor& diffuse,
		FColor& specular,
		FColor& emissive,
		FColor& transparent,
		FColor& reflection,
		float& specularExponent,
		float& dissolved,
		float& dissolvedInverted,
		float& emissiveFactor,
		float& ambientFactor,
		float& diffuseFactor,
		float& bumpFactor,
		float& transparencyFactor,
		float& displacementFactor,
		float& vectorDisplacementFactor,
		float& specularFactor,
		float& shininessExponent,
		float& reflectionFactor,
		float& metallicFactor,
		float& roughnessFactor,
		float& indexofRefraction,
		int32& illuminationModelNumber);


	static void breakTextureStruct(const FRTITextureStruct& textureData,
		FString& textureName,
		UTexture2D*& texture,
		ERTITextureType& textureType,
		FString& textureTypeString,
		float& scalingU,
		float& scalingV);


	
	


	bool calculateModelAnimationFrameByTime(TArray<FRTIModelStruct>& modelStructs,URealTimeImportAnimationsFrames*& animationsFrames,float timePosition);
	bool calculateSkeletonAnimationFrameByTime(TArray<FRTIModelStruct>& modelStructs,URealTimeImportAnimationsFrames*& animationsFrames,float timePosition);

	void getModelAnimationsData(FRTIModelStruct& modelStruct,float timePosition, int64& modelID, FTransform& transform,int32& arrayIndex);
	//void getSkeletonAnimationsData(FRTISkeleton& skeleton,float timePosition,float deltaTime, TArray<int64>& modelIDs, TArray<FTransform>& transforms,int32& arrayIndex);

	//void getModelAnimationFrameByTime(const TArray<FRTIModelStruct>& modelStructs, float timePosition, URealTimeImportAsyncNodeAnimationModel* asyncNode);
	void resetAnimationTime(UProceduralMeshComponent* InProcMesh);
	

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	//	static void cleanTest(TArray<FRTIModelStruct> modelStructs) {

	//	for (int32 j = 0; j < modelStructs.Num(); j++) {

	//		for (int32 i = 0; i < modelStructs[j].meshStructs.Num(); i++)
	//		{

	//			for (auto& element : modelStructs[j].meshStructs[i].materialData.textures) {

	//				delete& element.Value;
	//			}

	//			delete& modelStructs[j].meshStructs[i].materialData;
	//			delete& modelStructs[j].meshStructs[i];

	//		}

	//		delete& modelStructs[j];
	//	}
	//};


	//Copy from the procedural mesh plugin. See UKismetProceduralMeshLibrary::CalculateTangentsForMesh.
	static void calculateTangents(TMap<FVector, TArray<int32>>& overlappingVertices, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UVs,
		TArray<FProcMeshTangent>& Tangents);

	static uint32 byteArrayToInt32(TArray<uint8>& data, uint32 start);
	static int64 byteArrayToInt64(TArray<uint8>& data, uint32 start);
	static TArray<int32> byteArrayToInt32Tarray(TArray<uint8>& data, uint32 start, uint32 size);
	static FString byteArrayToFString(TArray<uint8>& data, uint32 start, uint32 size);
	static TArray<uint8> cutByteArray(TArray<uint8>& original, uint32 start, uint32 size);
	static double parseBytesToDouble(TArray<uint8>& data, uint32 start);
	static float parseBytesToFloat(TArray<uint8>& data, uint32 start);
	static int32 parseBytesToInt32(TArray<uint8>& data, uint32 start);
	static int16 parseBytesToInt16(TArray<uint8>& data, uint32 start);
	static int8 parseBytesToInt8(TArray<uint8>& data, uint32 start);
	static uint32 parseBytesToInt32Unsigned(TArray<uint8>& data, uint32 start);
	static uint16 parseBytesToInt16Unsigned(TArray<uint8>& data, uint32 start);
	static uint8 parseBytesToInt8Unsigned(TArray<uint8>& data, uint32 start);
	float interpolateValuesByPercent(float a, float b, float percent);
	FRTIAnimationFrame* interpolateAnimationsTransform(FRTIAnimationFrame* frame, float timePosition, int64 id, FTransform& transform);

	TMap<FString, FRTIModelStruct*> modelStructCache;
	

private:
	
	
	UPROPERTY()
		class URealTimeImportMeshSTL* STL = nullptr;

	UPROPERTY()
		class URealTimeImportMeshOBJ* OBJ = nullptr;

	UPROPERTY()
		class URealTimeImportMeshFBX* FBX = nullptr;

	UPROPERTY()
		class URealTimeImportMeshglTF* glTF = nullptr;


};

