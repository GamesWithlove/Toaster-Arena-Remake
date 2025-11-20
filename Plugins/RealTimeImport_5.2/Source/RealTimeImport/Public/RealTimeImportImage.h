// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "RealTimeImport.h"
#include "RealTimeImportImage.generated.h"

class FLoadImageFileThread;
class FLoadImageBytesThread;
class FRemoveTextureThread;


USTRUCT(BlueprintType, Category = Basic)
struct FRTITextureToDeleteStruct
{
	GENERATED_USTRUCT_BODY()

	UTexture* texture = nullptr;
	bool emptyTextureBeforeDeleting = false;

	bool deleteMe = false;

};


UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URealTimeImportImage : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static URealTimeImportImage* realTimeImportImage;
	UFUNCTION()
		static URealTimeImportImage* getRealTimeImportImage();

	/*
	*@return is from cache
	*/
	bool LoadImageFile(ERTIDirectoryType directoryType, FString filePath, UTexture2D*& texture, FString& fileName, int32& errorCode, FString& errorMessage,bool cacheTexture = false, TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);
	void LoadImageFileAsync(ERTIDirectoryType directoryType, FString filePath, FString eventID, TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);
	void LoadImageBytesAsync(FString name, TArray<uint8> bytes, FString eventID, TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);
	/*
	*@return is from cache
	*/
	bool LoadImageBytes(FString name, TArray<uint8> bytes, UTexture2D*& texture, int32& errorCode, FString& errorMessage, bool cacheTexture = false, TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default, bool SRGB = true, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);


	//void LoadImageAsMipMap(UTexture2D* texture, ERTIDirectoryType directoryType, FString filePath, int32& errorCode, FString& errorMessage);
	void removeTextureFromCacheAndDestroyTexture(UTexture* texture, bool emptyTextureBeforeDeleting);
	void removeTextureFromCacheAndDestroyTextureInternal(UTexture* texture, bool emptyTextureBeforeDeleting);
	void removeTextureFromCacheAndDestroyTextureInternalGameThread(UTexture* texture, bool emptyTextureBeforeDeleting);
	void removeTextureFromCacheInternal(UTexture* texture);
	void emptyTextureCacheAndDestroyTextures(bool emptyTexturesBeforeDeleting);

	static TArray<uint8> textureRenderTarget2D_ToByteArray(bool& success, FString& errorMessage,UTextureRenderTarget2D* textureRenderTarget2D, ERTIExportImageType type, int32 quality = 100);


	
	UTexture2DDynamic* texture2DToTexture2DDynamic(UTexture2D* texture2D, bool destroyTexture2D);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image")
	static TArray<FColor> getImageColors(TArray<uint8> imageBytes);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Image", meta = (WorldContext = "WorldContextObject"))
	static void texture2DToByteArray(UObject* WorldContextObject,UMaterial* exportMaterial,bool& success, FString& errorMessage,TArray<uint8>& bytes, UTexture2D* toExportTexture);
	void texture2DToByteArrayNonStatic(UObject* WorldContextObject,UMaterial* exportMaterial,bool& success, FString& errorMessage,TArray<uint8>& bytes, UTexture2D* toExportTexture);




	void triggerLoadImageFileEventDelegate(int32 errorCode, FString eventID, UTexture2D* texture, FString fileName, FString errorMessage);
	void triggerLoadImageBytesEventDelegate(int32 errorCode, FString eventID, UTexture2D* texture, FString errorMessage);
	
	void changeTexturDestroyThreadSettings(float threadSleepTimeInSeconds, bool showLogs);

	TMap<FString, UTexture2D*> textureCache;

	UTexture2D* getTextureFromCacheIfThreadSafe(FString id);
	void addTextureToCacheThreadSafe(FString id, UTexture2D* texture);

private:
	FCriticalSection criticalSection;
	FRemoveTextureThread* removeTextureThread = nullptr;
	

	class FLoadImageFileThread* loadImageFileThread = nullptr;
	class FLoadImageBytesThread* loadImageBytesThread = nullptr;

	
	UTexture2D* createTexture2D(TArray<uint8>& bytes, FString name, int32& errorCode, FString& errorMessage, TextureCompressionSettings compressionSettings , bool SRGB, bool createMipMaps = false, ERTIERGBFormat rgbFormat = ERTIERGBFormat::E_BGRA);

	void resizeRawImageData(TArray64<uint8>& sourceData, TArray<uint8>& outData, int32 sourceX, int32 sourceY, int32 targetX, int32 targetY, EPixelFormat pixelformat, bool SRGB);
	void imageResize(int32 SrcWidth, int32 SrcHeight, const TArrayView<const FColor>& SrcData, int32 DstWidth, int32 DstHeight, const TArrayView<FColor>& DstData, bool bLinearSpace, bool bForceOpaqueOutput);
	static bool getRawImageData(UTextureRenderTarget2D* TexRT, TArray64<uint8>& RawData);
	static void rawImageDataToBMPData(TArray<uint8>& bmpData, int32 SourceWidth, int32 SourceHeight, const FColor* Data, int64 size);

	void addMipMap(FTexturePlatformData* platformData, UTexture2D* texture, TArray<uint8>& decompressedImageData, int32 width, int32 height, int32& errorCode, FString& errorMessage);
};


/******************* Asyc Threads *************************/
class FLoadImageFileThread : public FRunnable {

public:

	FLoadImageFileThread(URealTimeImportImage* imageLibP, ERTIDirectoryType directoryTypeP, FString filePathP, FString eventIDP,
		TextureCompressionSettings& compressionSettingsP,
		bool SRGB_P, bool createMipMapsP, ERTIERGBFormat rgbFormatP) :
		imageLib(imageLibP),
		directoryType(directoryTypeP),
		filePath(filePathP),
		eventID(eventIDP),
		compressionSettings(compressionSettingsP),
		SRGB(SRGB_P),
		createMipMaps(createMipMapsP),
		rgbFormat(rgbFormatP){
		FString threadName = "FLoadImageFileThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FLoadImageFileThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {

		while (true) {
			UTexture2D* texture;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
			imageLib->LoadImageFile(directoryType, filePath, texture, fileName, errorCode, errorMessage, true,compressionSettings, SRGB, createMipMaps);

			imageLib->triggerLoadImageFileEventDelegate(errorCode, eventID, texture, fileName, errorMessage);

			texture = nullptr;

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}
		return 0;
	}

	void restartThread(URealTimeImportImage* imageLibP, ERTIDirectoryType directoryTypeP, FString filePathP, FString eventIDP,
		TextureCompressionSettings compressionSettingsP, bool SRGB_P, bool createMipMapsP, ERTIERGBFormat rgbFormatP) {
		imageLib = imageLibP;
		directoryType = directoryTypeP;
		filePath = filePathP;
		eventID = eventIDP;
		compressionSettings = compressionSettingsP;
		SRGB = SRGB_P;
		createMipMaps = createMipMapsP;
		rgbFormat = rgbFormatP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}


private:
	URealTimeImportImage* imageLib = nullptr;
	ERTIDirectoryType directoryType;
	FString filePath;
	FString eventID;
	TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
	bool SRGB = true;
	bool createMipMaps = false;
	ERTIERGBFormat rgbFormat;
	FRunnableThread* thread = nullptr;
	bool paused = true;
};


class FLoadImageBytesThread : public FRunnable {

public:

	FLoadImageBytesThread(URealTimeImportImage* imageLibP, FString nameP, TArray<uint8>& bytesP, FString eventIDP,
		TextureCompressionSettings& compressionSettingsP, bool SRGB_P, bool createMipMapsP, ERTIERGBFormat rgbFormatP) :
		imageLib(imageLibP),
		name(nameP),
		bytes(bytesP),
		eventID(eventIDP),
		compressionSettings(compressionSettingsP),
		SRGB(SRGB_P),
		createMipMaps(createMipMapsP),
		rgbFormat(rgbFormatP){
		threadName = "FLoadImageBytesThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	FLoadImageBytesThread(URealTimeImportImage* imageLibP, FString nameP, TArray<uint8>& bytesP, FString eventIDP,
		TextureCompressionSettings& compressionSettingsP, bool SRGB_P, bool createMipMapsP, ERTIERGBFormat rgbFormatP, bool endlesThreadP) :
		imageLib(imageLibP),
		name(nameP),
		bytes(bytesP),
		eventID(eventIDP),
		compressionSettings(compressionSettingsP),
		SRGB(SRGB_P),
		createMipMaps(createMipMapsP),
		rgbFormat(rgbFormatP),
		endlesThread(endlesThreadP){
		threadName = "FLoadImageBytesThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FLoadImageBytesThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {
		if (endlesThread == false) {
			isCached = imageLib->LoadImageBytes(name, bytes, texture, errorCode, errorMessage,true, compressionSettings, SRGB, createMipMaps);
			if (errorCode != 0) {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Error %i on loading the texture: %s"), errorCode, *errorMessage)
			}
			hasFinished = true;
			return 0;
		}

		while (endlesThread) {
				
			imageLib->triggerLoadImageBytesEventDelegate(errorCode, eventID, texture, errorMessage);
	
			bytes.Empty();

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}

		return 0;
	}

	void restartThread(URealTimeImportImage* imageLibP, FString nameP, TArray<uint8> bytesP, FString eventIDP,
		TextureCompressionSettings compressionSettingsP, bool SRGB_P, bool createMipMapsP, ERTIERGBFormat rgbFormatP) {
		imageLib = imageLibP;
		name = nameP;
		bytes = bytesP;
		eventID = eventIDP;
		eventID = eventIDP;
		compressionSettings = compressionSettingsP;
		SRGB = SRGB_P;
		createMipMaps = createMipMapsP;
		rgbFormat = rgbFormatP;
		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

	
	FThreadSafeBool hasFinished = false;
	FThreadSafeBool isCached = false;
	int32 errorCode = 0;
	FString errorMessage;
	UTexture2D* texture = nullptr;	

private:
	FString threadName;
	URealTimeImportImage* imageLib = nullptr;
	FString name;
	TArray<uint8>& bytes;
	FString eventID;
	TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
	bool SRGB = true;
	bool createMipMaps = false;
	ERTIERGBFormat rgbFormat;
	FRunnableThread* thread = nullptr;
	bool paused = true;
	bool endlesThread = true;
	
	
	
};



class FRemoveTextureThread : public FRunnable {

public:

	FRemoveTextureThread(URealTimeImportImage* imageLibP) :
		imageLib(imageLibP) {
		FString threadName = "FRemoveTextureThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FRemoveTextureThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {
		TArray<FRTITextureToDeleteStruct*> texturesToDelete;

		while (true) {

			if (texturesToDelete.Num() > 0) {
				bool showLogsGlobal = showLogs;
				AsyncTask(ENamedThreads::GameThread, [texturesToDelete, showLogsGlobal]() {
					for (int32 i = 0; i < texturesToDelete.Num(); i++) {
						if (texturesToDelete[i] != nullptr && texturesToDelete[i]->deleteMe == false) {
							URealTimeImportImage::getRealTimeImportImage()->removeTextureFromCacheAndDestroyTextureInternal(texturesToDelete[i]->texture, texturesToDelete[i]->emptyTextureBeforeDeleting);
							if (showLogsGlobal)
								UE_LOG(LogTemp, Display, TEXT("RealTimeImport: Texture released for deletion."));
						}
						texturesToDelete[i]->deleteMe = true;
					}
					});
			}


		

			FPlatformProcess::Sleep(threadSleepSeconds);

			int32 i = 0;
			while (i < texturesToDelete.Num()) {
				if (texturesToDelete[i] != nullptr && texturesToDelete[i]->deleteMe) {
					delete texturesToDelete[i];
					texturesToDelete.RemoveAt(i);
					continue;
				}
				i++;
			}

			while (textureQueue.IsEmpty() == false) {
				FRTITextureToDeleteStruct* t = nullptr;
				textureQueue.Dequeue(t);
				texturesToDelete.Add(t);
			}
			
		}
		return 0;
	}

	void addTexture(UTexture* texture,bool emptyTextureBeforeDeleting) {
		FRTITextureToDeleteStruct* t = new FRTITextureToDeleteStruct();
		t->texture = texture;
		t->emptyTextureBeforeDeleting = emptyTextureBeforeDeleting;
		textureQueue.Enqueue(t);
	}

	void changeTexturDestroyThreadSettings(float threadSleepTimeInSeconds, bool showLogsP) {
		threadSleepSeconds = threadSleepTimeInSeconds;
		showLogs = showLogsP;
	}


private:
	URealTimeImportImage* imageLib = nullptr;
	FRunnableThread* thread = nullptr;
	TQueue<FRTITextureToDeleteStruct*> textureQueue;
	float threadSleepSeconds = 10.f;
	bool showLogs = false;
};