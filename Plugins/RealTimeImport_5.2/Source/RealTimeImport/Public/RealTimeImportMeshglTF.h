// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once


#include "RealTimeImportMesh.h"
#include "RealTimeImportMeshglTF.generated.h"



UCLASS()
class REALTIMEIMPORT_API URealTimeImportMeshglTF : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	void LoadglTF_File(
		FString dir,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		bool cacheTexture,
		bool useSRGB, 
		bool createMipMaps,
		ERTIERGBFormat rgbFormat,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);

	void LoadGLB_File(
		FString dir,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		bool cacheTexture,
		bool useSRGB, 
		bool createMipMaps,
		ERTIERGBFormat rgbFormat,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);
private:

	void parseData(
		bool isBinary,
		FString json,
		FString dir,
		TArray<uint8>& binData,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		bool cacheTexture,
		bool useSRGB, 
		bool createMipMaps,
		ERTIERGBFormat rgbFormat,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);

	FString UrlDecode(const FStringView EncodedString);

	bool generateTexture(bool isBinary, int32 textureIndex,ERTITextureType type, FString originalFileDir,
		bool cacheTexture,bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat,
		TArray<TSharedPtr<FJsonValue>>& texturesArray,TArray<TSharedPtr<FJsonValue>>& imagesArray,
		TArray<TSharedPtr<FJsonValue>>& bufferViewsArray,TArray<uint8>& binData,TMap<FString, TArray<uint8>>& bufferCache, FRTIMeshStruct& mesh);

	void parseAccessor(TSharedPtr<FJsonObject> accessorJson, int32& accessorBufferViewIndex, int32& accessorCount, int32& accessorComponentType, int32& accessorByteOffset,FString& accessorType);
	void parseBufferView(TSharedPtr<FJsonObject> bufferViewJson,int32 accessorCount, int32& bufferViewIndex, int32& bufferViewByteLength,int32& bufferViewByteOffset, int32& bufferViewByteStride);

	TArray<uint8> getDataArray(bool isBinary, int32 bufferViewByteOffset, int32 dataLength, int32 bufferViewIndex, FString dir,
		TSharedPtr<FJsonObject> bufferJson,TMap<FString,FArchive*>& readers, TMap<FString, TArray<uint8>>& bufferCache, TArray<uint8>& binData);
	TArray<uint8> getDataFromFile(int32 offset, int32 length, TMap<FString, FArchive*>& readerCache, FString originalDir, FString fileDir);
	TArray<uint8> getDataFromBuffer(int32 offset, int32 length, TArray<uint8>& buffer);
	TArray<int32> dataArrayToInt32ArrayWithInt32Values(TArray<uint8>& data,bool saveIndeces,TMap<int32,int32>& indeces, int32 bufferViewByteStride, bool isUnsigned = false);
	TArray<int32> dataArrayToInt32ArrayWithInt16Values(TArray<uint8>& data,bool saveIndeces,TMap<int32,int32>& indeces, int32 bufferViewByteStride, bool isUnsigned = false);
	TArray<int32> dataArrayToInt32ArrayWithInt8Values(TArray<uint8>& data,bool saveIndeces,TMap<int32,int32>& indeces, int32 bufferViewByteStride, bool isUnsigned = false);
	TArray<float> dataArrayToFloatArray(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<FVector> dataArrayToFVectorArray(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<FTransform> dataArrayToFTransformArrayWithMatrixValues(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<FVector2D> dataArrayToFVector2DArray(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<FRotator> dataArrayToFRotatorArray(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<TArray<float>> dataArrayTo2DFloatArray(TArray<uint8>& data, int32 bufferViewByteStride);
	TArray<TArray<int16>> dataArrayTo2DInt16ArrayWithInt8Values(TArray<uint8>& data, int32 bufferViewByteStride,bool isUnsigned = false);
	TArray<TArray<int16>> dataArrayTo2DInt16Array(TArray<uint8>& data, int32 bufferViewByteStride,bool isUnsigned = false);

	void addMeshesRecursive(TArray<FRTIModelStruct>& modelStructs,TMap<int32, FRTIModelStruct*>& modelStructPtrMap, TMap<int32, FRTIModelStruct*>& modelStructCache , FRTIModelStruct* modelstruct);
};