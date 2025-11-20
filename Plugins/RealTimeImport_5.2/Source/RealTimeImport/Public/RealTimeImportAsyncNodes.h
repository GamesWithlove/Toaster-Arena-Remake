// Copyright 2017 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "RealTimeImport.h"
#include "RealTimeImportAsyncNodes.generated.h"


/*--- Load Mesh -------------------------------------------------------------------------------------------------------------*/


UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeLoadMesh : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

		
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadMeshCompleteDelegate, const TArray<FRTIModelStruct>&, modelStructs, const FString&, errorMessage,
		const FString, eventID, const float, progressInPercent);

	UPROPERTY(BlueprintAssignable)
		FLoadMeshCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FLoadMeshCompleteDelegate OnFail;

	UPROPERTY(BlueprintAssignable)
	FLoadMeshCompleteDelegate OnProgress;

	UPROPERTY(BlueprintAssignable)
	FLoadMeshCompleteDelegate OnMaterialProgress;
	/**
*Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh
*@param fileType Format of the file. Currently only OBJ possible
*@param directoryType Absolute path or relative path.
*@param filePath Path inclusive file.
*@param eventID Optional Since this function is asynchronous it can be that with several function calls one after the other these are completed in different order. With this parameter you can bring the request and the result together.
*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeLoadMesh* LoadMeshFileAsyncNode(ERTIMeshType fileType,
			ERTIDirectoryType directoryType,
			FString filePath,
			ERTICoordinateSystem coordinateSystem,
			bool calculateTangents = true,
			bool cacheTexture = false,
			bool autoDetectionNormalMap = true,
			bool useSRGB = true,
			bool createMipMaps = false,
			ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA,
			FString eventID = "");



	virtual void Activate() override;

	void jobComplete(TArray<FRTIModelStruct> modelStructs, FString errorMessage, bool successful, FString eventID);
	void setProgress(float pecent);
	void setMaterialProgress(float pecent);

private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	TArray<FRTIModelStruct> emptyArrayForProgressEvent;
};

//
//UCLASS()
//class REALTIMEIMPORT_API URealTimeImportAsyncNodeSpawnMeshActor : public UBlueprintAsyncActionBase
//{
//	GENERATED_BODY()
//
//
//public:
//	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadMeshCompleteDelegate, const AActor*, actorWithMesh, const FString&, errorMessage,
//		const FString, eventID, const float, progressInPercent);
//
//	UPROPERTY(BlueprintAssignable)
//	FLoadMeshCompleteDelegate OnSuccess;
//
//	UPROPERTY(BlueprintAssignable)
//	FLoadMeshCompleteDelegate OnFail;
//
//	UPROPERTY(BlueprintAssignable)
//	FLoadMeshCompleteDelegate OnProgress;
//
//	UPROPERTY(BlueprintAssignable)
//	FLoadMeshCompleteDelegate OnMaterialProgress;
//
//
//	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"/*,AdvancedDisplay="13"*/))
//	static URealTimeImportAsyncNodeSpawnMeshActor* spawnMeshFromFileAsyncNode(UObject* WorldContextObject,
//		FTransform transform,
//		FString filePath,
//		ERTICoordinateSystem coordinateSystem,
//		bool calculateTangents = false,
//		bool cacheTexture = false,
//		bool autoDetectionNormalMap = true,
//		bool useSRGB = true,
//		bool createMipMaps = false,
//		ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA,
//		FString eventID = "",
//		UMaterial* material = nullptr,
//		UMaterial* vertexColorMaterial = nullptr);
//
//
//
//	virtual void Activate() override;
//
//	void jobComplete(TArray<FRTIModelStruct> modelStructs, FString errorMessage, bool successful, FString eventID);
//	void setProgress(float pecent);
//	void setMaterialProgress(float pecent);
//
//private:
//	FSRealtimeImportThreadJobData* jobData = nullptr;
//	TArray<FRTIModelStruct> emptyArrayForProgressEvent;
//};


/*--- Save Mesh -------------------------------------------------------------------------------------------------------------*/


UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeSaveMesh : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveMeshCompleteDelegate, const FString&, errorMessage,
		const FString, eventID);

	UPROPERTY(BlueprintAssignable)
	FSaveMeshCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FSaveMeshCompleteDelegate OnFail;

	
	/**
	*Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh
	*@param exportMaterial Suitable material can be found in the plugin's content directory. Otherwise look in the documentation to create a material.
	*@param filePath Path inclusive file.
	*@param eventID Optional Since this function is asynchronous it can be that with several function calls one after the other these are completed in different order. With this parameter you can bring the request and the result together.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static URealTimeImportAsyncNodeSaveMesh* saveModelsToFile(
		UObject* WorldContextObject,
		UMaterial* exportMaterial,
		ERTIMeshExportType fileType,
		ERTICoordinateSystem coordinateSystem,
		ERTIDirectoryType directoryType,
		FString filePath,
		TArray<FRTIModelStruct> modelStructs,
		FString eventID = "");



	virtual void Activate() override;

	void jobComplete(FString errorMessage, bool successful, FString eventID);

private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
};

/*--- Load File -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeLoadFile: public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadFileCompleteDelegate, const FString, fileName, const TArray<uint8>&, bytes, const int32, errorCode, const FString, errorMessage);

	UPROPERTY(BlueprintAssignable)
		FLoadFileCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FLoadFileCompleteDelegate OnFail;

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File", meta = (BlueprintInternalUseOnly = "true"))
	static URealTimeImportAsyncNodeLoadFile* LoadFileAsyncNode(ERTIDirectoryType directoryType, FString filePath);


	virtual void Activate() override;

	void jobComplete(FString fileName, TArray<uint8> bytes, int32 errorCode, FString errorMessage);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Save File -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeSaveFile : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSaveFileCompleteDelegate, const FString, fileName, const FString&, fullPath, const int32, errorCode, const FString, errorMessage);

	UPROPERTY(BlueprintAssignable)
		FSaveFileCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FSaveFileCompleteDelegate OnFail;

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeSaveFile* SaveFileAsyncNode(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes, bool createDirectories, bool overwriteFile);


	virtual void Activate() override;

	void jobComplete(FString fileName, FString fullPath, int32 errorCode, FString errorMessage);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Load All Files From Directory -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLoadAllFilesFromDirectoryCompleteDelegate, const int32&, count, const TArray<FString>&, files, const TArray<FString>&, filePaths);

	UPROPERTY(BlueprintAssignable)
		FLoadAllFilesFromDirectoryCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FLoadAllFilesFromDirectoryCompleteDelegate OnFail;

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeLoadAllFilesFromDirectory* LoadAllFilesFromDirectoryAsyncNode(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch);


	virtual void Activate() override;

	void jobComplete(int32 count, TArray<FString> files, TArray<FString> filePaths, bool successful);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Create Sound Wave From File -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeCreateSoundWaveFromFile : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCreateSoundWaveFromFileCompleteDelegate,const FString, fileID, const USoundWaveProcedural*, soundWave,
		const FString, fileName, const int32, errorCode,const FString, errorMessage);

	UPROPERTY(BlueprintAssignable)
		FCreateSoundWaveFromFileCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FCreateSoundWaveFromFileCompleteDelegate OnFail;

	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeCreateSoundWaveFromFile* CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
			float maxFileSize, ERTISoundFileType soundFileType);


	virtual void Activate() override;

	void jobComplete(FString fileID, USoundWaveProcedural* soundWave, FString fileName, int32 errorCode, FString errorMessage);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Create Sound Wave From Bytes -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCreateSoundWaveFromBytesCompleteDelegate,const USoundWaveProcedural*, soundWave,
		const int32, errorCode, const FString, errorMessage);

	UPROPERTY(BlueprintAssignable)
		FCreateSoundWaveFromBytesCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FCreateSoundWaveFromBytesCompleteDelegate OnFail;

	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param name An individual name to cache the sound better in RAM
	*@param bytes Image bytes
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeCreateSoundWaveFromBytes* CreateSoundWaveFromBytesAsyncNode(FString name, TArray<uint8> bytes, float maxFileSize,
			ERTISoundFileType soundFileType);


	virtual void Activate() override;

	void jobComplete(USoundWaveProcedural* soundWave, int32 errorCode, FString errorMessage);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Load Image From File -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeLoadImageFile : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLoadImageFromFileCompleteDelegate, const UTexture2D*, texture,
		const FString, fileName, const int32, errorCode, const FString, errorMessage,const FString, eventID);

	UPROPERTY(BlueprintAssignable)
		FLoadImageFromFileCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FLoadImageFromFileCompleteDelegate OnFail;

	/**
	*Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param eventID Optional Since this function is asynchronous it can be that with several function calls one after the other these are completed in different order. With this parameter you can bring the request and the result together.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeLoadImageFile* LoadImageFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
			TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default,
			bool cacheTexture = false, bool SRGB = true,
			bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA, FString eventID ="");


	virtual void Activate() override;

	void jobComplete(UTexture2D* texture, FString fileName, int32 errorCode, FString errorMessage, FString eventID);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---Load Image From Bytes -------------------------------------------------------------------------------------------------------------*/

UCLASS()
class REALTIMEIMPORT_API URealTimeImportAsyncNodeLoadImageBytes : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadImageFromBytesCompleteDelegate, const UTexture2D*, texture,
		const int32, errorCode, const FString, errorMessage, const FString, eventID);

	UPROPERTY(BlueprintAssignable)
		FLoadImageFromBytesCompleteDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FLoadImageFromBytesCompleteDelegate OnFail;

	/**
	*Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param name An individual name to cache the image better in RAM
	*@param bytes Image bytes
	*@param eventID Optional Since this function is asynchronous it can be that with several function calls one after the other these are completed in different order. With this parameter you can bring the request and the result together.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image", meta = (BlueprintInternalUseOnly = "true"))
		static URealTimeImportAsyncNodeLoadImageBytes* LoadImageBytesAsyncNode(FString name, TArray<uint8> bytes,
			TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, 
			bool cacheTexture = false, bool SRGB = true,
			bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA, FString eventID ="");


	virtual void Activate() override;

	void jobComplete(UTexture2D* texture, int32 errorCode, FString errorMessage, FString eventID);


private:
	FSRealtimeImportThreadJobData* jobData = nullptr;
	
};


/*---File Dialog-------------------------------------------------------------------------------------------------------------*/

UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URTIFileDialogAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	/*
	* Opens the Windows file dialog to select files or directories. Powershell is used in the background, so the function is only available on Windows.
	* @param initialDirectory see documentation
	* @param filter see documentation
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File", meta = (BlueprintInternalUseOnly = "true"))
	static URTIFileDialogAsyncEvent* openFileDialogAsyncEvent(ERTIFilaDialogType type = ERTIFilaDialogType::E_file,
		ERTIFilaDialogInitDirType initialDirectoryType = ERTIFilaDialogInitDirType::E_folder_name,
		FString initialDirectory = "MyComputer", FString filter = "All files (*.*)|*.*",FString title = "", bool multiSelect = false);


	virtual void Activate() override;
	virtual void BeginDestroy() override;



	ERTIFilaDialogType type;
	ERTIFilaDialogInitDirType initialDirectoryType;
	FString initialDirectory;
	FString filter;
	FString title;
	bool multiSelect;
	TArray<FString> fileDialogResultData;
	FInteractiveProcess* powershellProcessFileDialog = nullptr;

	UFUNCTION()
		void powershellProcessEventFileDialogOutput(FString data);
	UFUNCTION()
		void powershellProcessEventFileDialogCompleted(int32 a, bool b);
	void cleanProcess();
	void fireEvent();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHWMonEvent, const TArray<FString>&, absoluteDirs);

	UPROPERTY(BlueprintAssignable)
	FHWMonEvent onFinish;
	UPROPERTY(BlueprintAssignable)
	FHWMonEvent onCancel;

};


/*---Model Animation -------------------------------------------------------------------------------------------------------------*/

//UCLASS()
//class REALTIMEIMPORT_API URealTimeImportAsyncNodeAnimationModel : public UBlueprintAsyncActionBase
//{
//	GENERATED_BODY()
//
//public:
//	
//	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FAnimationModelDelegate,
//		const int64, modelID, const ERTIAnimationsFrameType, type, const FRotator, rotation, const FVector, location, const FVector, scale);
//	
//	UPROPERTY(BlueprintAssignable)
//	FAnimationModelDelegate OnLastFrame;
//
//	UPROPERTY(BlueprintAssignable)
//	FAnimationModelDelegate OnNewData;
//
//	
//	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation", meta = (BlueprintInternalUseOnly = "true"))
//	static URealTimeImportAsyncNodeAnimationModel* getModelAnimationFrameByTime(const TArray<FRTIModelStruct>& modelStructs, float timePosition);
//
//
//	virtual void Activate() override;
//
//
//private:
//	const TArray<FRTIModelStruct>* modelStructs = nullptr;
//	float timePosition = 0;
//
//};