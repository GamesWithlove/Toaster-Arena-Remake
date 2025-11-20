// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once

#define STB_IMAGE_IMPLEMENTATION
#define STBI_SUPPORT_ZLIB

#include "RealTimeImportMesh.h"
#include "RealTimeImportMeshFBX.generated.h"

UENUM()
enum class ERTIInformationType : uint8
{

	E_none	UMETA(DisplayName = "none"),
	E_ByPolygonVertex	UMETA(DisplayName = "ByPolygonVertex"), /*(or also ByVertice, as the Blender exporter writes.I think the author is spanish.)*/
	E_ByVertex 	UMETA(DisplayName = "ByVertex"),
	E_ByPolygon	UMETA(DisplayName = "ByPolygon"),
	E_ByEdge 	UMETA(DisplayName = "ByEdge"),
	E_AllSame 	UMETA(DisplayName = "AllSame")
};

UENUM()
enum class ERTIReferenceInformationType : uint8
{
	E_none	UMETA(DisplayName = "none"),
	E_Direct	UMETA(DisplayName = "Direct"),
	E_IndexToDirect	UMETA(DisplayName = "IndexToDirect")
};

UENUM()
enum class ERTIAxisType : uint8
{
	E_X	UMETA(DisplayName = "X"),
	E_Y	UMETA(DisplayName = "Y"),
	E_Z	UMETA(DisplayName = "Z")
};

USTRUCT()
struct FRTIFBXVideoStruct
{
	GENERATED_USTRUCT_BODY()

	FString filePath = FString();
	int64 fbxID = 0;
	TArray<uint8> fbxTextureData;
	UTexture2D* texture = nullptr;
};

USTRUCT()
struct FRTIFBXTextureStruct
{
	GENERATED_USTRUCT_BODY()

	ERTITextureType textureType = ERTITextureType::E_none;
	FString textureTypeString;
	int64 fbxID = 0;
	TMap<int64, FRTIFBXVideoStruct*> videoStructs;
	float scalingU = 1;
	float scalingV = 1;
	float scalingUnknown = 1;
	int8 scalingCounter = 0;
	
};


USTRUCT()
struct FRTIFBXMaterialStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();
	TArray<uint8> ambient;
	TArray<uint8> diffuse;
	TArray<uint8> specular;
	TArray<uint8> emissive;
	TArray<uint8> transparent;
	//TArray<uint8> displacement;
	//TArray<uint8> vectordisplacement;
	TArray<uint8> reflection;


	float emissiveFactor = 1;
	float ambientFactor = 1;
	float diffuseFactor = 1;
	float bumpFactor = 1;
	float transparencyFactor = 1;
	float displacementFactor = 1;
	float vectorDisplacementFactor = 1;
	float specularFactor = 1;
	float shininessExponent = 0.2;
	float reflectionFactor = 1;

	int64 fbxID = 0;
	TMap<int64, FRTIFBXTextureStruct*> textureStructs;
};


USTRUCT()
struct FRTIFBXGeometryStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();

	TArray<FVector> vertices;
	TArray<int32> polygonVertexIndexes;
	TArray<FVector> normals;


	TArray<int32> normalsIndexes;

	TArray<FVector2D> UV0;
	TArray<int32> UV0Indexes;

	TArray<FLinearColor> vertexColors;
	TArray<int32> vertexColorsIndexes;

	TArray<int32> edges;
	TArray<int32> materialPolygons;


	int64 fbxID = 0;
	ERTICoordinateSystem coordinateSystem;

	ERTIInformationType normalInformationType;
	ERTIReferenceInformationType normalReferenceInformationType;
	ERTIInformationType UVInformationType;
	ERTIReferenceInformationType UVReferenceInformationType;
	ERTIInformationType VertexColorInformationType;
	ERTIReferenceInformationType VertexColorReferenceInformationType;
	ERTIInformationType MatInformationType;
	ERTIReferenceInformationType MatReferenceInformationType;

};


USTRUCT()
struct FRTIFBXArmatureStruct
{
	GENERATED_USTRUCT_BODY()
};

USTRUCT()
struct FRTIFBXModelStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();

	bool modelGeometryLocationXisSet = false;
	bool modelGeometryLocationYisSet = false;
	bool modelGeometryLocationZisSet = false;

	bool modelLocationXisSet = false;
	bool modelLocationYisSet = false;
	bool modelLocationZisSet = false;

	bool rotationActive = false;
	bool modelPreRotationXisSet = false;
	bool modelPreRotationYisSet = false;
	bool modelPreRotationZisSet = false;

	float modelPreRotationXisValue = 0;
	float modelPreRotationYisValue = 0;
	float modelPreRotationZisValue = 0;

	bool modelRotationXisSet = false;
	bool modelRotationYisSet = false;
	bool modelRotationZisSet = false;

	float modelRotationXisValue = 0;
	float modelRotationYisValue = 0;
	float modelRotationZisValue = 0;

	bool modelScaleXisSet = false;
	bool modelScaleYisSet = false;
	bool modelScaleZisSet = false;

	FTransform geometricTransformRTI;
	FTransform relativeTransform;
	int64 fbxID = 0;
	TArray<FRTIFBXMaterialStruct*> materialStructs;
	struct FRTIFBXGeometryStruct* geometryStruct = nullptr;

	int64 parent = -1;
	TArray<int64> children;
};




USTRUCT()
struct FRTIFBXConnections
{
	GENERATED_USTRUCT_BODY()

	ERTIAxisType UpAxis = ERTIAxisType::E_Y;
	ERTIAxisType FrontAxis = ERTIAxisType::E_Z;
	ERTIAxisType CoordAxis = ERTIAxisType::E_X;

	bool UpAxisSign = false;
	bool FrontAxisSign = false;
	bool CoordAxisSign = false;


	TMap<int64, FRTIFBXModelStruct*> model;
	TMap<int64, FRTIFBXGeometryStruct*> geometry;
	TMap<int64, FRTIFBXMaterialStruct*> material;
	TMap<int64, FRTIFBXTextureStruct*> texture;
	TMap<int64, FRTIFBXVideoStruct*> video;

	//TMap<int64, int64> connectionMap;
	//TMap<int64, TArray<int64>> connectionMapRevers;
};



UCLASS()
class REALTIMEIMPORT_API URealTimeImportMeshFBX : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void LoadFBXFile(
		ERTIMeshType fileType,
		FString dir,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		ERTICoordinateSystem coordinateSystem,
		bool calculateTangents,
		bool cacheTexture,
		bool autoDetectionNormalMap,
		bool useSRGB,
		bool createMipMaps,
		ERTIERGBFormat rgbFormat,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);




	int32 parseFbxBinaryData(bool& success, FString& successMessage, TArray<uint8>& fbxFileData, uint32 dataPosition,
		FRTIFBXConnections& fbxConnections, int32 fbxVersion, ERTICoordinateSystem coordinateSystem, FString dir, bool flipUV_Y);

	ERTIInformationType informationTypeStringToEnum(FString informationType);
	ERTIReferenceInformationType referenceInformationTypeTypeStringToEnum(FString informationType);

	TArray<uint8> uncompressFbxData(TArray<uint8>& data, uint32 start, uint32 size, uint32 compressedLen);

};