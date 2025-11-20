// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "HAL/CriticalSection.h"
#include "Modules/ModuleManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/RunnableThread.h"
#include "HAL/FileManager.h"
#include "AudioDevice.h"
#include "AudioDecompress.h"
#include "Interfaces/IAudioFormat.h"
#include "Interfaces/IAudioFormatModule.h"
#include "ImageUtils.h"
#include "PixelFormat.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2DDynamic.h"
#include "RenderUtils.h"
#include "RenderCore.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "RenderingThread.h"
#include "Async/Async.h"
#include "Misc/Base64.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Misc/MemoryReadStream.h"
#include "Misc/Compression.h"
#include "ProceduralMeshComponent.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/Actor.h"
#include "KismetProceduralMeshLibrary.h"
#include "Misc/InteractiveProcess.h"
#include "Dom/JsonValue.h"
#if ENGINE_MAJOR_VERSION == 4 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	#include "VorbisAudioInfo.h"
	#include "OpusAudioInfo.h"
#endif
//
//#include "MeshUtilities.h"
//#include "Rendering/SkeletalMeshLODModel.h"


#include "RealTimeImport.generated.h"


class URealTimeImportAsyncNodeLoadMesh;
class URealTimeImportAsyncNodeSaveMesh;
class URealTimeImportAsyncNodeLoadFile;
class URealTimeImportAsyncNodeSaveFile;
class URealTimeImportAsyncNodeLoadAllFilesFromDirectory;
class URealTimeImportAsyncNodeCreateSoundWaveFromFile;
class URealTimeImportAsyncNodeCreateSoundWaveFromBytes;
class URealTimeImportAsyncNodeLoadImageFile;
class URealTimeImportAsyncNodeLoadImageBytes;
class FRealTimeImportThread;
class ARTIActor;
struct FRTIMeshStruct;


UENUM(BlueprintType)
enum class ERTIFilaDialogType : uint8
{
	E_file	UMETA(DisplayName = "File"),
	E_folder	UMETA(DisplayName = "Folder")
};

UENUM(BlueprintType)
enum class ERTIFilaDialogInitDirType : uint8
{
	E_drive_letter	UMETA(DisplayName = "Drive letter"),
	E_folder_name	UMETA(DisplayName = "Folder name")
};

UENUM(BlueprintType)
enum class ERTIDirectoryType : uint8
{
	E_gd	UMETA(DisplayName = "Game directory"),
	E_ad 	UMETA(DisplayName = "Absolute directory")
};

UENUM(BlueprintType)
enum class ERTISoundFileType : uint8
{
	E_wav	UMETA(DisplayName = "WAV"),
	E_ogg 	UMETA(DisplayName = "OGG")
};

UENUM(BlueprintType)
enum class ERTIExportImageType : uint8
{
	E_png 	UMETA(DisplayName = "PNG"),
	E_bmp 	UMETA(DisplayName = "BMP"),
	E_jpg 	UMETA(DisplayName = "JPG"),
	E_tga 	UMETA(DisplayName = "TGA"),
	E_tif 	UMETA(DisplayName = "TIFF")
};

UENUM(BlueprintType)
enum class ERTIMeshType : uint8
{
	E_obj	UMETA(DisplayName = "OBJ"),
	E_fbx	UMETA(DisplayName = "FBX Binary"),
	E_fbxUV	UMETA(DisplayName = "FBX Binary flip Y UV"),
	E_stl	UMETA(DisplayName = "STL"),
	E_gltf	UMETA(DisplayName = "glTF"),
	E_glb	UMETA(DisplayName = "GLB"),
};

UENUM(BlueprintType)
enum class ERTIModelType : uint8
{
	//E_bone	UMETA(DisplayName = "Bone"),
	E_group	UMETA(DisplayName = "Group"),
	E_mesh	UMETA(DisplayName = "Mesh")
};

UENUM(BlueprintType)
enum class ERTIMeshExportType : uint8
{
	E_obj	UMETA(DisplayName = "OBJ")
};


UENUM(BlueprintType)
enum class ERTITextureType : uint8
{
	E_none	UMETA(DisplayName = "none"),
	E_un	UMETA(DisplayName = "Unknown"),
	E_Kd	UMETA(DisplayName = "Diffuse"),
	E_Ks 	UMETA(DisplayName = "Specular"),
	E_Ka 	UMETA(DisplayName = "Ambient Color"),
	E_Ns 	UMETA(DisplayName = "SpecularHighlightComponent"),
	E_d		UMETA(DisplayName = "Alpha"),
	E_bump 	UMETA(DisplayName = "BumpOrNormal"),
	E_disp 	UMETA(DisplayName = "Displacement"),
	E_decal	UMETA(DisplayName = "StencilDecal"),
	E_refl 	UMETA(DisplayName = "Reflection"),
	E_Pr 	UMETA(DisplayName = "Roughness"),
	E_Pm 	UMETA(DisplayName = "Metallic"),
	E_Ps 	UMETA(DisplayName = "Sheen"),
	E_Pc 	UMETA(DisplayName = "ClearcoatThickness"),
	E_Pcr 	UMETA(DisplayName = "ClearcoatRoughness"),
	E_Ke 	UMETA(DisplayName = "Emissive"),
	E_aniso	UMETA(DisplayName = "Anisotropy"),
	E_anisor 	UMETA(DisplayName = "AnisotropyRotation"),
	E_norm 	UMETA(DisplayName = "Normal"),
	E_RMA 	UMETA(DisplayName = "Microsoft_RMA"),
	E_occ	UMETA(DisplayName = "Occllusion")
};


UENUM(BlueprintType)
enum class ERTIFileType : uint8
{
	E_wav	UMETA(DisplayName = "WAV"),
	E_ogg	UMETA(DisplayName = "OGG"),
	E_png 	UMETA(DisplayName = "PNG"),
	E_bmp 	UMETA(DisplayName = "BMP"),
	E_jpg 	UMETA(DisplayName = "JPG"),
	E_exr 	UMETA(DisplayName = "EXR"),
	E_obj 	UMETA(DisplayName = "OBJ"),
	E_fbx 	UMETA(DisplayName = "FBX"),
	E_stl 	UMETA(DisplayName = "STL"),
	E_gltf 	UMETA(DisplayName = "glTF"),
	E_glb 	UMETA(DisplayName = "GLB"),
	E_all 	UMETA(DisplayName = "ALL")
};

UENUM(BlueprintType)
enum class ERTICoordinateSystem : uint8
{
	E_RightHanded	UMETA(DisplayName = "Right-handed"),
	E_LeftHanded	UMETA(DisplayName = "Left-handed")
};

UENUM(BlueprintType)
enum class ERTIERGBFormat : uint8
{
	E_auto UMETA(DisplayName = "Auto detection") ,
	E_RGBA	UMETA(DisplayName = "RGBA"),
	E_BGRA 	UMETA(DisplayName = "BGRA"),
	E_Gray 	UMETA(DisplayName = "Gray")
};

UENUM(BlueprintType)
enum class ERTIAnimationsFrameType : uint8
{
	E_None	UMETA(DisplayName = "None"),
	E_Rotate	UMETA(DisplayName = "Rotate"),
	E_Location	UMETA(DisplayName = "Location"),				
	E_Scale		UMETA(DisplayName = "Scale")
};


//UENUM()
//enum class ERTIFbxIDType : uint8
//{
//	E_none	UMETA(DisplayName = "none"),
//	E_model	UMETA(DisplayName = "model"),
//	E_geometry	UMETA(DisplayName = "geometry"),
//	E_material	UMETA(DisplayName = "material"),
//	E_texture	UMETA(DisplayName = "texture"),
//	E_video	UMETA(DisplayName = "video")
//};

UENUM(BlueprintType)
enum class ERTIThreadJobType : uint8
{
	E_None					UMETA(DisplayName = "none"),
	E_LoadMesh				UMETA(DisplayName = "LoadMesh"),
	E_SaveMesh				UMETA(DisplayName = "SaveMesh"),
	E_LoadFile				UMETA(DisplayName = "LoadFile"),
	E_SaveFile				UMETA(DisplayName = "SaveFile"),
	E_LoadAllFiles			UMETA(DisplayName = "LoadAllFiles"),
	E_CreateWaveFromFile	UMETA(DisplayName = "CreateWaveFromFile"),
	E_CreateWaveFromBytes	UMETA(DisplayName = "CreateWaveFromBytes"),
	E_LoadAndPlaySoundFile	UMETA(DisplayName = "LoadAndPlaySoundFile"),
	E_LoadAndPlaySoundBytes	UMETA(DisplayName = "LoadAndPlaySoundBytes"),
	E_LoadImageFile			UMETA(DisplayName = "LoadImageFile"),
	E_LoadImageBytes		UMETA(DisplayName = "LoadImageBytes")

};




USTRUCT(BlueprintType, Category = Basic)
struct FRTITextureStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString textureName = FString();

	UTexture2D* texture = nullptr;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	ERTITextureType textureType = ERTITextureType::E_none;

	FString textureTypeString;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int64 fbxID = 0;
	//TArray<uint8> fbxTextureData;

	float scalingU = 1;
	float scalingV = 1;
};

USTRUCT(BlueprintType, Category = Basic)
struct FRTIMaterialStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, Category = Basic)
	bool isEmpty = true;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString materialName = FString();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString textureName = FString();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TMap<FString, FRTITextureStruct> textures;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FString> texturesFileNames;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FColor ambient = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FColor diffuse = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FColor specular = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FColor emissive = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FColor transparent = FColor(0, 0, 0, 0);

	//UPROPERTY(VisibleAnywhere, Category = Basic)
	//	FColor displacement = FColor(0, 0, 0, 0);

	//UPROPERTY(VisibleAnywhere, Category = Basic)
	//	FColor vectorDisplacement = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FColor reflection = FColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float specularExponent = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float dissolved = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float dissolvedInverted = 0;


	UPROPERTY(VisibleAnywhere, Category = Basic)
		float emissiveFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float ambientFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float diffuseFactor = 0;
	
	UPROPERTY(VisibleAnywhere, Category = Basic)
		float bumpFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float transparencyFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float displacementFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float vectorDisplacementFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float specularFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float shininessExponent = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float reflectionFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float metallicFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float roughnessFactor = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		float indexofRefraction = 0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		int32 illuminationModelNumber = 0;




	UPROPERTY(VisibleAnywhere, Category = Basic)
	int64 fbxID = 0;
};


USTRUCT(BlueprintType, Category = Basic)
struct FRTIAnimationFrame
{
	GENERATED_USTRUCT_BODY()

	int64 id = -1;
	ERTIAnimationsFrameType type;
	
	TArray<FRotator> rotations;
	TArray<FVector> locations;
	TArray<FVector> scales;
	
	TArray<float> timeKeys;

	float interpolatedTime = -1;
	FTransform interpolatedTransform;
};



USTRUCT(BlueprintType, Category = Basic)
struct FRTIBone
{
	GENERATED_USTRUCT_BODY()
	int64 id = -1;
	int64 parent = -1;
	int32 meshInModelArrayIndex = -1;

	FVector debugStart;
	FVector debugEnd;

	FTransform relativeTransform;
	TArray<int64> children;
	TArray<int32> triangles;
	TArray<FVector> vertices;
	TMap<int32, bool> uniqueVerticesTestMap;

	FTransform inverseBindMatrice;

	FTransform animationsTransform;
	float animationMinTimeKey = 0;
	float animationMaxTimeKey = 0;
	TArray<FRTIAnimationFrame*> animationFrames;
	
	TArray<int32> joinMeshVertexConnection;
	TArray<float> weight;
	
};


USTRUCT(BlueprintType, Category = Basic)
struct FRTISkeleton
{
	GENERATED_USTRUCT_BODY()
	int64 id = -1;
	int64 parent = -1;
	TArray<FRTIBone*> bones;
	TArray<int64> children;
	FTransform relativeTransform;
	//TArray<FRTIAnimationFrame> interpolatedAnimationFrames;
};

USTRUCT(BlueprintType, Category = Basic)
struct FRTIMeshStruct
{
	GENERATED_USTRUCT_BODY()

		bool isDefaultStruct = false;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString geometryName = FString();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<int32> triangles;
	TMap<int32,int32> trianglesVerticesIndeces;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FVector> vertices;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FVector> normals;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FVector2D> UV0;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FLinearColor> vertexColors;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	TArray<FProcMeshTangent> tangents;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	bool hasMaterialData = false;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FRTIMaterialStruct materialData = FRTIMaterialStruct();

	/*FRTISkeleton* skeleton = nullptr;*/
	TArray<TArray<int16>> joins;
	TArray<TArray<float>> weights;
};

USTRUCT(BlueprintType, Category = Basic)
struct FRTIModelStruct
{
	GENERATED_USTRUCT_BODY()

	FString structID;

	FString name = "NoName";

	FTransform relativeTransform;

	TArray<FRTIMeshStruct> meshStructs;


	int64 modelID = -1;

	int64 parent = -1;
	TArray<int64> children;

	ERTIModelType modelType = ERTIModelType::E_mesh;

	FVector geometryLocation;


	FRTISkeleton* skeleton = nullptr;
	//TArray<TArray<int16>> joins;
	//TArray<TArray<float>> weights;

	//animations stuff
	bool skeletonAnimation = false;
	int32 skinID = -1;
	TArray<FRTIAnimationFrame*> animationFrames;
	//TMap<int64, TArray<FRTIAnimationFrame>> interpolatedAnimationFrames;
	FTransform animationsTransform;
	float animationMinTimeKey = 0;
	float animationMaxTimeKey = 0;

	FString gltfExtrasJsonString;
};


USTRUCT()
struct FRTIWavPlayAsyncStruct
{
	GENERATED_USTRUCT_BODY()

	const UObject* WorldContextObject = nullptr;
	ERTIDirectoryType directoryType = ERTIDirectoryType::E_gd;
	FString filePath = FString();
	float maxFileSize = 0;
	UAudioComponent* AudioComponent = nullptr;
	float volumeMultiplier = 1.0;
	float pitchMultiplier = 1.0;
	int32 startTime = 0;
	bool persistAcrossLevelTransition = false;


	FSoundQualityInfo qualityInfo = { 0 };
};


USTRUCT(BlueprintType)
struct FRTISoundDataStruct
{
	GENERATED_USTRUCT_BODY()
		
	float duration = 0;
	uint64 sampleRate = 0;
	uint64 numChannels = 0;
	int64 headerSize = 0;
	TArray<uint8> soundData;
	USoundWaveProcedural* soundWave = nullptr;
};

USTRUCT()
struct FSRealtimeImportThreadJobData
{
	GENERATED_USTRUCT_BODY()

		ERTIThreadJobType jobType = ERTIThreadJobType::E_None;

	UObject* WorldContextObject = nullptr;
	UMaterial* exportMaterial = nullptr;

	URealTimeImportAsyncNodeLoadMesh* asyncNodeLoadMesh = nullptr;
	URealTimeImportAsyncNodeSaveMesh* asyncNodeSaveMesh = nullptr;
	URealTimeImportAsyncNodeLoadFile* asyncNodeLoadFile = nullptr;
	URealTimeImportAsyncNodeSaveFile* asyncNodeSaveFile = nullptr;
	URealTimeImportAsyncNodeLoadAllFilesFromDirectory* asyncNodeLoadAllFilesFromDirectory = nullptr;
	URealTimeImportAsyncNodeCreateSoundWaveFromFile* asyncNodeCreateSoundWaveFromFile = nullptr;
	URealTimeImportAsyncNodeCreateSoundWaveFromBytes* asyncNodeCreateSoundWaveFromBytes = nullptr;
	URealTimeImportAsyncNodeLoadImageFile* asyncNodeLoadImageFile = nullptr;
	URealTimeImportAsyncNodeLoadImageBytes* asyncNodeLoadImageBytes = nullptr;

	ERTIMeshType meshFileType;
	ERTIFileType fileType;
	ERTISoundFileType soundFileType;
	ERTIDirectoryType directoryType;
	TextureCompressionSettings compressionSettings;

	FString filePath;
	FString name;
	FString eventID;

	TArray<uint8> bytes;

	float maxFileSize = .0;

	ERTICoordinateSystem coordinateSystem;

	bool calculateTangents = true;
	bool cacheTexture = true;
	bool recursiveSearch = false;
	bool createDirectories = false;
	bool overwriteFile = false;
	bool autoDetectionNormalMap = false;
	bool createMipMaps = false;
	bool SRGB = false;
	ERTIERGBFormat rgbFormat;

	TArray<FRTIModelStruct> modelStructs;
	bool deleteMe = false;
};


UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URealTimeImportAnimationsFrames : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//virtual void BeginDestroy() override;

	TMap<int64, TArray<FRTIAnimationFrame>> interpolatedAnimationFrames;
	//UPROPERTY()
	ARTIActor* skeletonPMCActor = nullptr;
};




/** GeomTools.h copy**/

///** Temp vertex struct for one vert of a static mesh triangle. */
//struct REALTIMEIMPORT_API FRTIClipSMVertex
//{
//	FVector3f Pos;
//	FVector3f TangentX;
//	FVector3f TangentY;
//	FVector3f TangentZ;
//	FVector2D UVs[8];
//	FColor Color;
//};
//
///** Properties of a clipped static mesh face. */
//struct REALTIMEIMPORT_API FRTIClipSMFace
//{
//	int32 MaterialIndex;
//	uint32 SmoothingMask;
//	int32 NumUVs;
//	bool bOverrideTangentBasis;
//
//	FVector FaceNormal;
//
//	FMatrix TangentXGradient;
//	FMatrix TangentYGradient;
//	FMatrix TangentZGradient;
//	FMatrix UVGradient[8];
//	FMatrix ColorGradient;
//
//	void CopyFace(const FRTIClipSMFace& OtherFace)
//	{
//		FMemory::Memcpy(this,&OtherFace,sizeof(FRTIClipSMFace));
//	}
//};
//
///** Properties of a clipped static mesh polygon. */
//struct REALTIMEIMPORT_API FRTIClipSMPolygon : FRTIClipSMFace
//{
//	TArray<FRTIClipSMVertex> Vertices;
//
//	FRTIClipSMPolygon(int32 Init)
//	{
//		FMemory::Memzero(this, sizeof(FRTIClipSMPolygon));
//	}
//};
//
//
///** Properties of a clipped static mesh triangle. */
//struct REALTIMEIMPORT_API FRTIClipSMTriangle : FRTIClipSMFace
//{
//	FRTIClipSMVertex Vertices[3];
//
//	/** Compute the triangle's normal, and the gradients of the triangle's vertex attributes over XYZ. */
//	//void ComputeGradientsAndNormal();
//
//	FRTIClipSMTriangle(int32 Init)
//	{
//		FMemory::Memzero(this, sizeof(FRTIClipSMTriangle));
//	}
//};

#ifndef __RealTimeImportThread
#define __RealTimeImportThread
#include "RealTimeImportThread.h"
#endif

#ifndef __RealTimeImportAsyncNodes
#define __RealTimeImportAsyncNodes
#include "RealTimeImportAsyncNodes.h"
#endif

#ifndef __FileFunctionsRealTimeImport
#define __FileFunctionsRealTimeImport
#include "FileFunctionsRealTimeImport.h"
#endif

#ifndef __RealTimeImportImage
#define __RealTimeImportImage
#include "RealTimeImportImage.h"
#endif

#ifndef __RealTimeImportMesh
#define __RealTimeImportMesh
#include "RealTimeImportMesh.h"
#endif

#ifndef __RealTimeImportSound
#define __RealTimeImportSound
#include "RealTimeImportSound.h"
#endif

#ifndef __RealTimeImportBPLibrary
#define __RealTimeImportBPLibrary
#include "RealTimeImportBPLibrary.h"
#endif



class FRealTimeImportModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};