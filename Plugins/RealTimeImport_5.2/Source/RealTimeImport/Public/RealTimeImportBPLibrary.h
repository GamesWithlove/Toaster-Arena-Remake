// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "RealTimeImport.h"
#include "RealTimeImportBPLibrary.generated.h"


UCLASS()
class REALTIMEIMPORT_API URealTimeImportBPLibrary : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Delegates
	//Files
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLoadFileEventDelegate, int32, errorCode, FString, eventID, const TArray<uint8>&, bytes, FString, fileName, FString, errorMessage);
	UFUNCTION()
		void LoadFileEventDelegate(const int32 errorCode, const FString eventID, const TArray<uint8>& bytes, const FString fileName, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|File|Events|LoadFile")
		FLoadFileEventDelegate onLoadFileEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSaveFileEventDelegate, int32, errorCode, FString, eventID, FString, fileName, FString, fullPath, FString, errorMessage);
	UFUNCTION()
		void SaveFileEventDelegate(const int32 errorCode, const FString eventID, const FString fileName, const FString fullPath, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|File|Events|SaveFile")
		FSaveFileEventDelegate onSaveFileEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadAllFilesFromDirectoryEventDelegate, FString, eventID, int32, count, const TArray<FString>&, files, const TArray<FString>&, filePaths);
	UFUNCTION()
		void LoadAllFilesFromDirectoryEventDelegate(const FString eventID, const int32& count, const  TArray<FString>& files, const TArray<FString>& filePaths);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|File|Events|LoadAllFilesFromDirectory")
		FLoadAllFilesFromDirectoryEventDelegate onLoadAllFilesFromDirectoryEventDelegate;



	//WAV
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCreateSoundWaveFromFileEventDelegate, int32, errorCode, FString, eventID, USoundWaveProcedural*, Sound, FString, fileName, FString, errorMessage);
	UFUNCTION()
		void CreateSoundWaveFromFileEventDelegate(const int32 errorCode, const FString eventID, const USoundWaveProcedural* Sound, const FString fileName, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|CreateSoundWaveFromFile")
		FCreateSoundWaveFromFileEventDelegate onCreateSoundWaveFromFileEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCreateSoundWaveFromBytesEventDelegate, int32, errorCode, FString, eventID, USoundWaveProcedural*, Sound, FString, errorMessage);
	UFUNCTION()
		void CreateSoundWaveFromBytesEventDelegate(const int32 errorCode, const FString eventID, const USoundWaveProcedural* Sound, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|CreateSoundWaveFromBytes")
		FCreateSoundWaveFromBytesEventDelegate onCreateSoundWaveFromBytesEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlaySoundEventDelegate, int32, errorCode, FString, fileID, FString, errorMessage, float, durationInSeconds);
	UFUNCTION()
		void PlaySoundEventDelegate(const int32 errorCode, const FString fileID, const FString errorMessage, const float durationInSeconds);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|Play")
		FPlaySoundEventDelegate onPlaySoundEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FActiveSoundPositionEventDelegate, FString, fileID, float, positionSecondsStart, float, positionSecondsEnd, float, positionPercent);
	UFUNCTION()
		void ActiveSoundPositionEventDelegate(const FString fileID, const float positionSecondsStart, const float positionSecondsEnd, const float positionPercent);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|Position")
		FActiveSoundPositionEventDelegate onActiveSoundPositionEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FActiveSoundEnvelopeValueEventDelegate, float, averageEnvelopeValue, float, maxEnvelope, int32, numWaveInstances);
	UFUNCTION()
		void ActiveSoundEnvelopeValueEventDelegate(const float averageEnvelopeValue, const float maxEnvelope, const int32 numWaveInstances);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|EnvelopeValue")
		FActiveSoundEnvelopeValueEventDelegate onActiveSoundEnvelopeValueEventDelegate;
	

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStopSoundEventDelegate, FString, fileID);
	UFUNCTION()
		void StopSoundEventDelegate(const FString fileID);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Sound|Events|Stop")
		FStopSoundEventDelegate onStopSoundEventDelegate;

	//Images
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLoadImageFileEventDelegate, int32, errorCode, FString, eventID, UTexture2D*, texture, FString, fileName, FString, errorMessage);
	UFUNCTION()
		void LoadImageFileEventDelegate(const int32 errorCode, const FString eventID, const UTexture2D* texture, const FString fileName, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Image|Events|LoadImageFile")
		FLoadImageFileEventDelegate onLoadImageFileEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadImageBytesEventDelegate, int32, errorCode, FString, eventID, UTexture2D*, texture, FString, errorMessage);
	UFUNCTION()
		void LoadImageBytesEventDelegate(const int32 errorCode, const FString eventID, const UTexture2D* texture, const FString errorMessage);
	UPROPERTY(BlueprintAssignable, Category = "RealTimeImport|Image|Events|LoadImageBytes")
		FLoadImageBytesEventDelegate onLoadImageBytesEventDelegate;


	static URealTimeImportBPLibrary* RealTimeImportBPLibrary;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RealTimeImport")
		static URealTimeImportBPLibrary* getRealTimeImportTarget();

	//For an easier readable C++ code some functions were moved to the UFileFunctionsRealTimeImport class. For compatibility reasons, however, the functions will remain accessible via the URealTimeImportBPLibrary.

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void LoadFile(ERTIDirectoryType directoryType, FString filePath, FString& fileName, TArray<uint8>& bytes, int32& errorCode, FString& errorMessage);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		URealTimeImportBPLibrary* LoadFileAsync(ERTIDirectoryType directoryType, FString filePath, FString eventID);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void SaveFile(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString& fileName, FString& fullPath, int32& errorCode, FString& errorMessage);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		URealTimeImportBPLibrary* SaveFileAsync(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString eventID);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool LoadAllFilesFromDirectory(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, int32& count, TArray<FString>& files, TArray<FString>& filePaths);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		URealTimeImportBPLibrary* LoadAllFilesFromDirectoryAsync(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, FString eventID);


	//For an easier readable C++ code most functions were moved to the URealTimeImportSound class. For compatibility reasons, however, the functions will remain accessible via the URealTimeImportBPLibrary.

	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void CreateSoundWaveFromFile(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, FString& fileID, ERTISoundFileType soundFileType, USoundWaveProcedural*& soundWave, FString& fileName, int32& errorCode, FString& errorMessage);


	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static URealTimeImportBPLibrary* CreateSoundWaveFromFileAsync(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);

	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param name An individual name to cache the sound better in RAM
	*@param bytes Image bytes
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void CreateSoundWaveFromBytes(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, USoundWaveProcedural*& Sound, int32& errorCode, FString& errorMessage);

	/**
	*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.
	*@param name An individual name to cache the image better in RAM
	*@param bytes Image bytes
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static URealTimeImportBPLibrary* CreateSoundWaveFromBytesAsync(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);

	/**
	* Removes a Sound file from the cache if you didn't do it on stop. Can only be removed when it is not playing.
	*@param fileID
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void removeSoundFromCache(FString fileID);

	/**
	*Removes all sound files from the cache. Can only be removed when it is not playing.
	*@param fileID
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void emptySoundCache();

	/**
	* Loads a Sound file into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.
	*@param volumeMultiplier Volume.
	*@param playSpeed Playback speed
	*@param startTimeInSeconds From when the Wav should be played. Specified in seconds.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"), Category = "RealTimeImport|Sound")
		static void loadAndPlaySoundFileAsync(const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float maxFileSize, float volumeMultiplier = 1.0, float playSpeed = 1.0, int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true, ERTISoundFileType soundFileType = ERTISoundFileType::E_wav);

	/**
	* Loads Soud bytes into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.
	*@param bytes It must be the bytes of a complete Wav with header.
	*@param volumeMultiplier Volume.
	*@param playSpeed Playback speed
	*@param startTimeInSeconds From when the Wav should be played. Specified in seconds.
	*@param soundFileType The type (wav, ogg) of sound file that will be loaded
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"), Category = "RealTimeImport|Sound")
		static void loadAndPlaySoundBytesAsync(const UObject* WorldContextObject, TArray<uint8> bytes, float volumeMultiplier = 1.0, float playSpeed = 1.0, int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true);


	/**
	* With this node a Wav is streamed. Only 1 second of sound is read from the hard disk and played. Extremely low RAM usage.
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param volumeMultiplier Volume.
	*@param startTimeInSeconds From when the Wav should be played. Specified in seconds.
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"), Category = "RealTimeImport|Sound")
		static void streamWavFile(bool& success, FString& errorMessage, const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float volumeMultiplier = 1.0, /*float playSpeed = 1.0,*/ int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true);

	/**
	* This allows you to jump to a specific position of a wav file that is being streamed.
	*@param fileID This ID is generated when starting playback.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void seekWavFileStream(FString fileID, float positionInSeconds);

	/**
	* Pauses a Wav file.
	*@param fileID This ID is generated when starting playback.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void pauseSound(FString fileID);

	/**
	* Resumes a Wav file.
	*@param fileID This ID is generated when starting playback.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void resumeSound(FString fileID);

	/**
	* Stop a Wav file.
	*@param fileID This ID is generated when starting playback.
	*@param Determines whether the wav should remain in RAM if it exists.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void stopSound(FString fileID, bool removeFromCache);

	/**
	* Stop all Wav files.
	*@param Determines whether the wav should remain in RAM if it exists.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void stopAllSounds(bool removeFromCache);	


	/**
	* The volume can be changed during playback.
	*@param fileID This ID is generated when starting playback.
	*@param volumeMultiplier Volume.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void changeVolumeSound(FString fileID, float volumeMultiplier = 1.0);
		

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static bool isSoundActive(FString fileID);



	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
		static void getSoundInfo(ERTIDirectoryType directoryType, FString filePath, FString& name, FString& fileNameExtension, int64& fileSize, float& duration,
			int64& numChannels, int32& quality, int64& sampleDataSize, int64& sampleRate);


	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Sound")
	//	void changePlaySpeedWavSound(FString fileID, float playSpeed = 1.0);


	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static UTexture2DDynamic* texture2DToTexture2DDynamic(UTexture2D* texture2D, bool destroyTexture2D);

	/**
	*Load .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static void LoadImageFile(ERTIDirectoryType directoryType, FString filePath, UTexture2D*& texture, FString& fileName, int32& errorCode, FString& errorMessage,
			 TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool cacheTexture = true, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);

	/**
	*Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned int the Event. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static URealTimeImportBPLibrary* LoadImageFileAsync(ERTIDirectoryType directoryType, FString filePath, FString eventID,
			TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);

	/**
	*Creates an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param name An individual name to cache the image better in RAM
	*@param bytes Image bytes
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static void LoadImageBytes(FString name, TArray<uint8> bytes, UTexture2D*& texture, int32& errorCode, FString& errorMessage,
			 TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool cacheTexture = true, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);

	/**
	*Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!
	*@param name An individual name to cache the image better in RAM
	*@param bytes Image bytes
	*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static URealTimeImportBPLibrary* LoadImageBytesAsync(FString name, TArray<uint8> bytes, FString eventID,
			TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);

	/**
	*Creates Releases the texture so that the engine can delete it.
	*@param texture
	*@param emptyTextureBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory much quicker. But it can lead to stability problems. 
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static void removeTextureFromCacheAndDestroyTexture(UTexture* texture, bool emptyTextureBeforeDeleting);

	/**
	*Creates Releases all textures so that the engine can delete them.
	*@param emptyTexturesBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory immediately. But it can lead to stability problems.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static void emptyTextureCacheAndDestroyTextures(bool emptyTexturesBeforeDeleting);

	/**
	*There is a thread that runs in an infinite loop and passes textures to the Unreal GC for deletion if you have previously passed them with the function removeTextureFromCacheAndDestroyTexture or emptyTextureCacheAndDestroyTextures to this Thread. The thread pauses every "threadSleepTimeInSeconds". 
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static void changeTexturDestroyThreadSettings(float threadSleepTimeInSeconds = 10.f, bool showLogs = false);

	/**
	*Creates an image file from the TextureRenderTarget2D component and returns the bytes. The bytes can be saved as a file or sent with a different plugin.
	*@param textureRenderTarget2D
	*@param type PNG,JPG and BMP are possible
	*@param quality In percent. 100 = highest quality. 1 = lowest quality. BMP is not compressed. With PNG, UE4 doesn't seem to change much. The biggest difference can be seen with JPG.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
		static TArray<uint8> textureRenderTarget2D_ToByteArray(bool& success, FString& errorMessage, UTextureRenderTarget2D* textureRenderTarget2D, ERTIExportImageType type, int32 quality = 100);



	/**
	*Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh
	*@param fileType Format of the file. Currently only OBJ possible
	*@param directoryType Absolute path or relative path.
	*@param filePath Path inclusive file.
	*/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void LoadMeshFile(ERTIMeshType fileType,
			ERTIDirectoryType directoryType,
			FString filePath,
			bool& success,
			FString& successMessage,
			TArray<FRTIModelStruct>& modelStructs,
			ERTICoordinateSystem coordinateSystem,
			bool calculateTangents = true,
			bool cacheTexture = true,
			bool autoDetectionNormalMap = true,
			bool useSRGB = true,
			bool createMipMaps = false,
			ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);
		
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	static void cancelLoadMeshFile();

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void breakModelStruct(FRTIModelStruct modelStruct,int64& modelID, FString& name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs,
			bool& hasParent, int64& parentModelID, TArray<int64>& childrenModelIDs, ERTIModelType& modelType/*,
			bool& hasSkeleton,	FRTISkeleton& skeleton,
			bool& hasAnimation*/);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void breakMeshStruct(FRTIMeshStruct meshStruct,
			FString& geometryName,
			TArray<FVector>& vertices,
			TArray<int32>& triangles,
			TArray<FVector>& normals,
			TArray<FVector2D>& UV0,
			TArray<FLinearColor>& vertexColors,
			TArray<FProcMeshTangent>& tangents,
			FRTIMaterialStruct& materialStruct);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	//	static TArray<FRTIBone> getBones(const FRTISkeleton& skeleton);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void breakSkeletonStruct(const FRTISkeleton& skeleton,
			int64& skeletonID,
			int64& parentID,
			bool& hasParent,
			FTransform& relativeTransform,
			TArray<FRTIBone>& bones);


	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void breakBoneStruct(const FRTIBone& bone,
			int64& boneID,
			int64& parentID,
			bool& hasParent,
			FTransform& relativeTransform,
			TArray<int32>& triangles,
			TArray<FVector>& vertices,
			FVector& debugStart,
			FVector& debugEnd);


	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh", meta = (AdvancedDisplay = 5))
		static void breakMaterialStruct(FRTIMaterialStruct materialData,
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



	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void breakTextureStruct(FRTITextureStruct textureData,
			FString& textureName,
			UTexture2D*& texture,
			ERTITextureType& textureType,
			FString& textureTypeString,
			float& scalingU,
			float& scalingV);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation")
		static void getModelAnimationsData(UPARAM(ref) FRTIModelStruct& modelStruct,float timePosition, int64& modelID, FTransform& transform,int32& arrayIndex);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation")
		static void getCalculatedAnimationsFrames(URealTimeImportAnimationsFrames* animationsFrames,float timePosition);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation")
	//	static void getSkeletonAnimationsData(UPARAM(ref) FRTISkeleton& skeleton,float timePosition,float deltaTime, TArray<int64>& modelIDs, TArray<FTransform>& transforms,int32& arrayIndex);



	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation", meta = (WorldContext = "WorldContextObject"))
		static void calculateModelAnimation(UPARAM(ref) TArray<FRTIModelStruct>& modelStructs,float& endTime,URealTimeImportAnimationsFrames*& animationsFrames,UObject* WorldContextObject, int32 fps = 60);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation")
	//	static void calculateSkeletonAnimation(UPARAM(ref) FRTISkeleton& skeleton,float& endTime, int32 fps = 60);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static TArray<FVector> relativeVerticesToWorldVertices(FTransform worldTransoform, TArray<FVector> relativeVertices);

	/*UFUNCTION(BlueprintCallable, Category = "RealTimeImport")
		static FVector relativeLocationToWorldLocation(FTransform worldTransoform, FVector relativeLocation);*/

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh|Animation")
		static void resetAnimationTime(UProceduralMeshComponent* InProcMesh);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "vector array * float", CompactNodeTitle = "*"), Category = "RealTimeImport|Mesh")
		static TArray<FVector> Multiply_VectorArrayFloat(TArray<FVector> A, float B);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "RealTimeImport|Mesh")
		static FVector getGeometryLocation(FRTIModelStruct modelStruct);
		

	static void addJobToThread(FSRealtimeImportThreadJobData* jobData);
	FRealTimeImportThread* realTimeImportThread = nullptr;
	FThreadSafeBool cancelMeshLoad = false;
};