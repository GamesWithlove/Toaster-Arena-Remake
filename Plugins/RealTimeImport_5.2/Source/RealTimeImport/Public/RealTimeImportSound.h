// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "RealTimeImport.h"
#include "RealTimeImportSound.generated.h"


class FCreateSoundWaveFromFileThread;
class FCreateSoundWaveFromBytesThread;
class FSteamWavFromRamThread;
class FSteamWavFromDiskThread;

UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URealTimeImportSound : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static URealTimeImportSound* realTimeImportSound;
	UFUNCTION()
		static URealTimeImportSound* getRealTimeImportSound();

	void CreateSoundWaveFromFile(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, FString& fileID, ERTISoundFileType soundFileType, USoundWaveProcedural*& soundWave, FString& fileName, int32& errorCode, FString& errorMessage);
	void CreateSoundWaveFromFileAsync(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);
	void CreateSoundWaveFromBytes(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, USoundWaveProcedural*& Sound, int32& errorCode, FString& errorMessage);
	void CreateSoundWaveFromBytesAsync(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);
	void removeSoundFromCache(FString fileID);
	void emptySoundCache();
	void loadAndPlaySoundFileAsync(const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float maxFileSize, float volumeMultiplier = 1.0, float playSpeed = 1.0, int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true, ERTISoundFileType soundFileType = ERTISoundFileType::E_wav);
	void loadAndPlaySoundBytesAsync(const UObject* WorldContextObject, TArray<uint8> bytes, float volumeMultiplier = 1.0, float playSpeed = 1.0, int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true);
	void streamWavFile(bool& success, FString& errorMessage, const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float volumeMultiplier = 1.0, /*float playSpeed = 1.0,*/ int32 startTimeInSeconds = 0, bool persistAcrossLevelTransition = true);
	void seekWavFileStream(FString fileID, float positionInSeconds);
	void pauseSound(FString fileID);
	void resumeSound(FString fileID);
	void stopSound(FString fileID, bool removeFromCache);
	void stopAllSounds(bool removeFromCache);
	void stopSoundInternal(FString fileID, bool removeFromCache);
	void changeVolumeSound(FString fileID, float volumeMultiplier = 1.0);
	bool isSoundActive(FString fileID);
	void getSoundInfo(ERTIDirectoryType directoryType, FString filePath, FString& name, FString& fileNameExtension, int64& fileSize, float& duration,
			int64& numChannels, int32& quality, int64& sampleDataSize, int64& sampleRate);


	void CreateSoundWaveFromBytesInternal(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, USoundWaveProcedural*& Sound, int32& errorCode, FString& errorMessage, bool queueAudio);
	void loadSoundFileInternal(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, float startTime, FString& fileID, USoundWaveProcedural*& Sound,
		FString& fileName, int32& errorCode, FString& errorMessage, bool cacheFileData, ERTISoundFileType soundfileType, bool queueAudio);
	FRTISoundDataStruct* getSoundDataCache(FString fileID);
	void addRamStreamToCache(FString fileID, FSteamWavFromRamThread* thread);
	void addDiskStreamToCache(FString fileID, FSteamWavFromDiskThread* thread);
	void createAudioComponentAndPlay(const UObject* WorldContextObject, USoundWaveProcedural* sound, FString fileID, float volumeMultiplier, float pitchMultiplier, bool persistAcrossLevelTransition);
	FSoundQualityInfo decompressOGG(TArray<uint8>& compressedBufferIN, TArray<uint8>& uncompressedBufferOUT, int32& errorCode);
	TMap<FString, UAudioComponent*> getFileIDaudioComponentCache();

	void triggerCreateSoundWaveFromFileEventDelegate(int32 errorCode, FString eventID, USoundWaveProcedural* Sound, FString fileName, FString errorMessage);
	void triggerCreateSoundWaveFromBytesEventDelegate(int32 errorCode, FString eventID, USoundWaveProcedural* Sound, FString errorMessage);
	void triggerPlaySoundEventDelegate(int32 errorCode, FString fileID, FString errorMessage, float durationInSeconds);
	void triggerActiveSoundPositionEventDelegate(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent);
	void triggerStopSoundEventDelegate(FString fileID);


	

private:


	TMap<FString, FSteamWavFromRamThread*> soundStreamFromRamCache;
	TMap<FString, FSteamWavFromDiskThread*> soundStreamFromDiskCache;

	//TMap<FString, USoundWaveProcedural*> soundCache;
	TMap<FString, UAudioComponent*> fileIDaudioComponentCache;
	//TMap<UAudioComponent*, FString> audioComponentFileIDCache;
	TMap<UAudioComponent*, bool> pauseCache;



	class FCreateSoundWaveFromFileThread* createSoundWaveFromFileThread = nullptr;
	class FCreateSoundWaveFromBytesThread* loadWavBytesThread = nullptr;

	TMap<FString, FRTISoundDataStruct> soundDataCache;


	void getWavHeaderInfoInternal(TArray<uint8>& fileData, int64 fileSize, FString& dataType, uint64& chunkSize, uint64& subChunk1Size, int64& numChannels, int64& sampleRate,
		uint64& byteRate, int64& bitsPerSample, uint64& subChunk2Size, float& durationSec, uint64& removeBytesSize);


	


	void OnAudioFinished(UAudioComponent* AudioComponent);
	void OnAudioSingleEnvelopeValue(const class UAudioComponent* audioComponent, const float averageEnvelopeValue, const float maxEnvelope, const int32 numWaveInstances);

	uint64 get4ByteVal(TArray<uint8>& fileData, int32 index);
	uint64 get2ByteVal(TArray<uint8>& fileData, int32 index);


	//void addWavToCache(FString fileID, USoundWaveProcedural* wav);


	USoundWaveProcedural* createSoundWaveWithDataInStruct(TArray<uint8>& bytes, FString name, int32& errorCode, FString& errorMessage);
	USoundWaveProcedural* createSoundWaveWithDataInSoundWave(TArray<uint8>& bytes, FString name, float startTime, ERTISoundFileType soundFileType, int32& errorCode, FString& errorMessage, bool queueAudio);


	


};

/******************* Asyc Threads *************************/

class FCreateSoundWaveFromFileThread : public FRunnable {

public:

	FCreateSoundWaveFromFileThread(URealTimeImportSound* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, float maxFileSizeP, FString eventIDP, ERTISoundFileType soundFileTypeP) :
		main(mainP),
		directoryType(directoryTypeP),
		filePath(filePathP),
		maxFileSize(maxFileSizeP),
		eventID(eventIDP),
		soundFileType(soundFileTypeP) {
		FString threadName = "FCreateSoundWaveFromFileThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FCreateSoundWaveFromFileThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {

		while (true) {
			USoundWaveProcedural* soundWave = nullptr;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
			FString fileID;

			main->CreateSoundWaveFromFile(directoryType, filePath, maxFileSize, fileID, soundFileType, soundWave, fileName, errorCode, errorMessage);
			main->triggerCreateSoundWaveFromFileEventDelegate(errorCode, eventID, soundWave, fileName, errorMessage);


			soundWave = nullptr;

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}

		return 0;
	}

	void restartThread(URealTimeImportSound* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, float maxFileSizeP, FString eventIDP, ERTISoundFileType soundFileTypeP) {
		main = mainP;
		directoryType = directoryTypeP;
		filePath = filePathP;
		maxFileSize = maxFileSizeP;
		eventID = eventIDP;
		soundFileType = soundFileTypeP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

protected:
	URealTimeImportSound* main = nullptr;
	ERTIDirectoryType directoryType;
	FString filePath;
	float maxFileSize;
	FString eventID;
	ERTISoundFileType soundFileType;

	FRunnableThread* thread = nullptr;
	bool paused = true;
};


class FCreateSoundWaveFromBytesThread : public FRunnable {

public:

	FCreateSoundWaveFromBytesThread(URealTimeImportSound* mainP, FString nameP, TArray<uint8> bytesP, float maxFileSizeP, FString eventIDP, ERTISoundFileType soundFileTypeP) :
		main(mainP),
		name(nameP),
		bytes(bytesP),
		maxFileSize(maxFileSizeP),
		eventID(eventIDP),
		soundFileType(soundFileTypeP) {
		FString threadName = "FCreateSoundWaveFromBytesThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FCreateSoundWaveFromBytesThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {

		while (true) {
			USoundWaveProcedural* soundWave;
			int32 errorCode;
			FString errorMessage;
			main->CreateSoundWaveFromBytes(name, bytes, maxFileSize, soundFileType, soundWave, errorCode, errorMessage);
			main->triggerCreateSoundWaveFromBytesEventDelegate(errorCode, eventID, soundWave, errorMessage);


			soundWave = nullptr;
			bytes.Empty();

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}

		return 0;
	}

	void restartThread(URealTimeImportSound* mainP, FString nameP, TArray<uint8> bytesP, float maxFileSizeP, FString eventIDP, ERTISoundFileType soundFileTypeP) {
		main = mainP;
		name = nameP;
		bytes = bytesP;
		eventID = eventIDP;
		soundFileType = soundFileTypeP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

protected:
	URealTimeImportSound* main = nullptr;
	FString name;
	TArray<uint8> bytes;
	float maxFileSize;
	FString eventID;
	ERTISoundFileType soundFileType;

	FRunnableThread* thread = nullptr;
	bool paused = true;
};



class FSteamWavFromRamThread : public FRunnable {

public:

	FSteamWavFromRamThread(URealTimeImportSound* mainP, FRTIWavPlayAsyncStruct playWaveStructP, TArray<uint8>& parameterBytesP, ERTISoundFileType soundFileTypeP) :
		main(mainP),
		playWaveStruct(playWaveStructP),
		parameterBytes(parameterBytesP),
		soundFileType(soundFileTypeP) {
		FString threadName = "FSteamWavThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FSteamWavFromRamThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {

		URealTimeImportSound* mainGlobal = main;

		FString fileName;
		int32 errorCode;
		FString errorMessage;
		TArray<uint8> buffer;
		int32 currentPositionByte = 0;
		int32 bufferSize = 0;
		float sleepTime = 1 / (playWaveStruct.pitchMultiplier <= 0 ? 1.f : playWaveStruct.pitchMultiplier);

		FString fileIDGlobal = "";
		TArray<uint8>* fileData = nullptr;

		bool isLoadBytes = false;

		if (parameterBytes.Num() > 0) {
			isLoadBytes = true;
			fileID = FGuid::NewGuid().ToString();
			mainGlobal->CreateSoundWaveFromBytesInternal(fileName, parameterBytes, 0, soundFileType, soundWav, errorCode, errorMessage, false);

		}
		else {
			mainGlobal->loadSoundFileInternal(playWaveStruct.directoryType, playWaveStruct.filePath, playWaveStruct.maxFileSize, playWaveStruct.startTime, fileID, soundWav, fileName, errorCode, errorMessage, true, soundFileType, false);

		}

		fileIDGlobal = fileID;
		if (errorCode != 0) {
			mainGlobal->triggerPlaySoundEventDelegate(errorCode, fileIDGlobal, errorMessage, 0);
			return 0;
		}

		if (mainGlobal->getSoundDataCache(fileID) != nullptr) {
			FRTISoundDataStruct& dataStruct = *mainGlobal->getSoundDataCache(fileID);
			fileData = &dataStruct.soundData;
		}

		if (fileData == nullptr || fileData->Num() == 0) {
			return 0;
		}

		if (mainGlobal->isSoundActive(fileID)) {
			AsyncTask(ENamedThreads::GameThread, [mainGlobal, fileIDGlobal]() {
				mainGlobal->stopSound(fileIDGlobal, false);
				});
			UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary: Wav file is already playing. The previous one will be stopped."));
			FPlatformProcess::Sleep(1);
		}

		mainGlobal->addRamStreamToCache(fileID, this);

		//calculate buffer size for one second
		float durationInSeconds = soundWav->Duration / (playWaveStruct.pitchMultiplier <= 0 ? 1.f : playWaveStruct.pitchMultiplier);
		float orginalDurationInSeconds = durationInSeconds;

		//durationInSeconds++;//1 second minimum
		bufferSize = fileData->Num() / durationInSeconds;

		if (bufferSize % 2 != 0) {
			bufferSize--;
		}

		if (playWaveStruct.startTime >= durationInSeconds) {
			UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary: Start time is higher or equal to duration. Wav file will be played from the beginning."));
		}
		else {
			//skip time (startTime)
			for (int32 i = 0; i < playWaveStruct.startTime; i++) {
				currentPositionByte += bufferSize;
				durationInSeconds--;
			}
		}


		//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary full file size to buffer: %i"), fileData->Num());
		//up to 10 seconds buffer at start
		for (int32 i = 0; i < 10; i++) {
			if (fileData->Num() > (currentPositionByte + bufferSize)) {
				buffer.Empty();
				buffer.AddUninitialized(bufferSize);
				FMemory::Memcpy(buffer.GetData(), fileData->GetData() + currentPositionByte, bufferSize);
				soundWav->QueueAudio(buffer.GetData(), buffer.Num());
				currentPositionByte += bufferSize;
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer: %i"), bufferSize);
			}
			else {
				if (fileData->Num() > currentPositionByte) {
					int32 remainingBufferSize = (fileData->Num() - currentPositionByte);
					//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer2: %i > %i+%i = %i"), fileData->Num(), currentPositionByte, bufferSize, remainingBufferSize);
					buffer.Empty();
					buffer.AddUninitialized(remainingBufferSize);
					FMemory::Memcpy(buffer.GetData(), fileData->GetData() + currentPositionByte, remainingBufferSize);
					soundWav->QueueAudio(buffer.GetData(), buffer.Num());
					currentPositionByte += remainingBufferSize;
					//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer3: %i %i"), fileData->Num(), currentPositionByte);
				}
				break;
			}
		}

		const UObject* WorldContextObject = playWaveStruct.WorldContextObject;
		float volumeMultiplier = playWaveStruct.volumeMultiplier;
		float pitchMultiplier = playWaveStruct.pitchMultiplier;
		bool persistAcrossLevelTransition = playWaveStruct.persistAcrossLevelTransition;
		USoundWaveProcedural* soundWavGlobal = soundWav;

		AsyncTask(ENamedThreads::GameThread, [WorldContextObject, soundWavGlobal, fileIDGlobal, mainGlobal, volumeMultiplier, pitchMultiplier, persistAcrossLevelTransition]() {
			mainGlobal->createAudioComponentAndPlay(WorldContextObject, soundWavGlobal, fileIDGlobal, volumeMultiplier, pitchMultiplier, persistAcrossLevelTransition);
			});

		pauseThread(true);
		//workaround. suspend do not work on all platforms. lets sleep
		while (run && paused) {
			FPlatformProcess::Sleep(0.01);
		}

		float durationInPercent = 0.f;

		while (run && soundWav != nullptr && soundWav->IsValidLowLevel()) {

			durationInPercent = (orginalDurationInSeconds - durationInSeconds) * 100 / orginalDurationInSeconds;

			mainGlobal->triggerActiveSoundPositionEventDelegate(fileIDGlobal, (orginalDurationInSeconds - durationInSeconds), durationInSeconds, durationInPercent);

			if (fileData->Num() > (currentPositionByte + bufferSize)) {
				buffer.Empty();
				buffer.AddUninitialized(bufferSize);
				FMemory::Memcpy(buffer.GetData(), fileData->GetData() + currentPositionByte, bufferSize);
				soundWav->QueueAudio(buffer.GetData(), buffer.Num());
				currentPositionByte += bufferSize;
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer-1: %i"), bufferSize);
			}
			else {
				if (currentPositionByte < fileData->Num()) {
					bufferSize = fileData->Num() - currentPositionByte;
					buffer.Empty();
					buffer.AddUninitialized(bufferSize);
					FMemory::Memcpy(buffer.GetData(), fileData->GetData() + currentPositionByte, bufferSize);
					soundWav->QueueAudio(buffer.GetData(), buffer.Num());
					//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer-2: %i"), bufferSize);
				}
				break;
			}

	
			//pause sound?
			//workaround. suspend do not work on all platforms. lets sleep
			while (run && paused) {
				FPlatformProcess::Sleep(0.01);
			}


			//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary %s : %i : %i"),*fileID, currentPositionByte, durationInSeconds);

			FPlatformProcess::Sleep(sleepTime);
			durationInSeconds--;

		}

		//no buffer. wait for the sound to end
		while (!stopped) {

			if (durationInSeconds < 1.f) {
				FPlatformProcess::Sleep(durationInSeconds);
				break;
			}

			//pause sound?
			//workaround. suspend do not work on all platforms. lets sleep
			while (run && paused) {
				FPlatformProcess::Sleep(0.01);
			}

			//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary wait for end. %f"), durationInSeconds);

			FPlatformProcess::Sleep(sleepTime);
			durationInSeconds--;

			durationInPercent = (orginalDurationInSeconds - durationInSeconds) * 100 / orginalDurationInSeconds;
			if (durationInPercent > 100)
				durationInPercent = 100;
			mainGlobal->triggerActiveSoundPositionEventDelegate(fileIDGlobal, (orginalDurationInSeconds - durationInSeconds), durationInSeconds, durationInPercent);
		}

		if (isLoadBytes) {
			removeFromCache = true;
		}


		AsyncTask(ENamedThreads::GameThread, [mainGlobal, fileIDGlobal]() {
			mainGlobal->stopSoundInternal(fileIDGlobal, false);
			mainGlobal->triggerStopSoundEventDelegate(fileIDGlobal);
			});

		if (removeFromCache) {
			mainGlobal->removeSoundFromCache(fileID);
		}
		else {
			if (soundWav != nullptr) {
				soundWav->ResetAudio();
			}
		}
		fileData = nullptr;
		buffer.Empty();
		return 0;
	}


	void stopThread(bool removeFromCacheP = false) {
		removeFromCache = removeFromCacheP;
		run = false;
		stopped = true;
		if (paused)
			pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

	void play(USoundWaveProcedural* soundWavP) {
		if (soundWavP == nullptr)
			return;
		soundWav = soundWavP;
		pauseThread(false);
	}

protected:
	URealTimeImportSound* main = nullptr;
	FRTIWavPlayAsyncStruct playWaveStruct;
	FRunnableThread* thread = nullptr;
	bool paused = false;
	bool run = true;
	bool stopped = false;
	bool removeFromCache = false;
	FString fileID;
	USoundWaveProcedural* soundWav = nullptr;
	TArray<uint8> parameterBytes;
	ERTISoundFileType soundFileType;
};

class FSteamWavFromDiskThread : public FRunnable {

public:

	FSteamWavFromDiskThread(URealTimeImportSound* mainP, FRTIWavPlayAsyncStruct playWaveStructP, FRTISoundDataStruct soundDataStructP) :
		main(mainP),
		playWaveStruct(playWaveStructP),
		soundDataStruct(soundDataStructP) {
		FString threadName = "FSteamWavFromDiskThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	~FSteamWavFromDiskThread() {
		if (thread != nullptr) {
			delete thread;
			thread = nullptr;
		}
	}

	virtual uint32 Run() override {


		URealTimeImportSound* mainGlobal = main;

		FArchive* reader = IFileManager::Get().CreateFileReader(*playWaveStruct.filePath);
		if (!reader) {
			thread = nullptr;
			return 0;
		}

		USoundWaveProcedural* soundWav = soundDataStruct.soundWave;
		float durationInSeconds = soundWav->Duration / (playWaveStruct.pitchMultiplier <= 0 ? 1.f : playWaveStruct.pitchMultiplier);
		float orginalDurationInSeconds = durationInSeconds;

		FString fileIDGlobal = fileID = FGuid::NewGuid().ToString();



		//1 second buffer
		int64 bufferSize = reader->TotalSize() / (((int64)soundDataStruct.duration) + 1);

		TArray<uint8> fileData;
		if ((bufferSize + soundDataStruct.headerSize) > reader->TotalSize()) {
			bufferSize = reader->TotalSize() - soundDataStruct.headerSize;
		}

		//bufferSize must be divisible by 2
		if (bufferSize % 2 != 0) {
			bufferSize--;
		}

		int64 currentPositionByte = 0;


		if (playWaveStruct.startTime <= 0) {
			//skip header
			currentPositionByte = soundDataStruct.headerSize;

		}
		else {
			durationInSeconds = durationInSeconds - playWaveStruct.startTime;
			currentPositionByte = (playWaveStruct.startTime * bufferSize);
		}

		if ((currentPositionByte + bufferSize) < reader->TotalSize()) {
			fileData.AddUninitialized(bufferSize);
			reader->Seek(currentPositionByte);
			reader->Serialize(fileData.GetData(), fileData.Num());
			soundWav->QueueAudio(fileData.GetData(), fileData.Num());
		}

		currentPositionByte += fileData.Num();

		fileData.Empty();

		mainGlobal->addDiskStreamToCache(fileID, this);

		const UObject* WorldContextObject = playWaveStruct.WorldContextObject;
		float volumeMultiplier = playWaveStruct.volumeMultiplier;
		float pitchMultiplier = playWaveStruct.pitchMultiplier;
		bool persistAcrossLevelTransition = playWaveStruct.persistAcrossLevelTransition;

		AsyncTask(ENamedThreads::GameThread, [WorldContextObject, soundWav, fileIDGlobal, mainGlobal, volumeMultiplier, pitchMultiplier, persistAcrossLevelTransition]() {
			mainGlobal->createAudioComponentAndPlay(WorldContextObject, soundWav, fileIDGlobal, volumeMultiplier, pitchMultiplier, persistAcrossLevelTransition);
			});


		float durationInPercent = 0;


		while (run) {
			//workaround. suspend thread do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
			durationInPercent = (orginalDurationInSeconds - durationInSeconds) * 100 / orginalDurationInSeconds;
			mainGlobal->triggerActiveSoundPositionEventDelegate(fileIDGlobal, (orginalDurationInSeconds - durationInSeconds), durationInSeconds, durationInPercent);


			if (mainGlobal->getFileIDaudioComponentCache().Find(fileID) != nullptr) {
				UAudioComponent* AudioComponent = *mainGlobal->getFileIDaudioComponentCache().Find(fileID);
				if (AudioComponent->IsValidLowLevel() == false || AudioComponent->IsActive() == false) {
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary: Audiocomponent seems to be no longer available. Wav Steam will be aborted."));
					break;
				}
			}



			if (seekInSeconds != 0) {
				durationInSeconds = orginalDurationInSeconds - seekInSeconds;
				currentPositionByte = (seekInSeconds * bufferSize);
				seekInSeconds = 0;

				//position must be divisible by 2
				if (currentPositionByte % 2 != 0) {
					currentPositionByte--;
				}

				if (currentPositionByte < 0) {
					break;
				}



				//we need one additional second in buffer
				if (reader->TotalSize() > (currentPositionByte + bufferSize)) {
					fileData.Empty();
					fileData.AddUninitialized(bufferSize);
					reader->Seek(currentPositionByte);
					reader->Serialize(fileData.GetData(), fileData.Num());
					soundWav->QueueAudio(fileData.GetData(), fileData.Num());
					currentPositionByte += bufferSize;
				}
			}



			if (reader->TotalSize() > (currentPositionByte + bufferSize)) {
				fileData.Empty();
				fileData.AddUninitialized(bufferSize);
				reader->Seek(currentPositionByte);
				reader->Serialize(fileData.GetData(), fileData.Num());
				soundWav->QueueAudio(fileData.GetData(), fileData.Num());
				currentPositionByte += bufferSize;
				//to respond more quickly to seek changes the 1 second sleep is divided
				for (int32 i = 0; i < 10; i++) {
					if (seekInSeconds == 0) {
						FPlatformProcess::Sleep(0.1);
						durationInSeconds = durationInSeconds - 0.1;
					}
					else {
						soundWav->ResetAudio();
						break;
					}
				}

			}
			else {
				if (currentPositionByte < reader->TotalSize()) {
					bufferSize = reader->TotalSize() - currentPositionByte;
					fileData.Empty();
					fileData.AddUninitialized(bufferSize);
					reader->Seek(currentPositionByte);
					reader->Serialize(fileData.GetData(), fileData.Num());
					soundWav->QueueAudio(fileData.GetData(), fileData.Num());
					//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary buffer-2: %i"), bufferSize);
					//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary(2): %i | %i"), bufferSize, currentPositionByte);
				}
				break;
			}
			//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary: %i | %i"), bufferSize, currentPositionByte);
		}


		reader->Close();
		delete reader;

		//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportBPLibrary Thread End: %f"), durationInSeconds);

		//no buffer.wait for the sound to end
		if (!stopped && durationInSeconds > 0) {
			FPlatformProcess::Sleep(durationInSeconds);
			durationInSeconds = 0;
		}

		durationInPercent = (orginalDurationInSeconds - durationInSeconds) * 100 / orginalDurationInSeconds;
		if (durationInPercent > 100)
			durationInPercent = 100;

		mainGlobal->triggerStopSoundEventDelegate(fileIDGlobal);
		mainGlobal->triggerActiveSoundPositionEventDelegate(fileIDGlobal, (orginalDurationInSeconds - durationInSeconds), durationInSeconds, durationInPercent);
		AsyncTask(ENamedThreads::GameThread, [mainGlobal, fileIDGlobal, durationInSeconds, durationInPercent, orginalDurationInSeconds]() {
			mainGlobal->stopSoundInternal(fileIDGlobal, true);
		});

		return 0;
	}


	void stopThread() {
		run = false;
		stopped = true;
		if (paused)
			pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

	void seek(float seekSeconds) {
		seekInSeconds = seekSeconds;
	}

protected:
	URealTimeImportSound* main = nullptr;
	FRTIWavPlayAsyncStruct playWaveStruct;
	FRTISoundDataStruct soundDataStruct;
	FRunnableThread* thread = nullptr;
	bool paused = false;
	bool run = true;
	bool stopped = false;
	FString fileID;
	//float durationInSeconds = 0.f;
	float seekInSeconds = 0.f;
};

