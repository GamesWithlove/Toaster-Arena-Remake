// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportSound.h"


URealTimeImportSound* URealTimeImportSound::realTimeImportSound;
URealTimeImportSound::URealTimeImportSound(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
	realTimeImportSound = this;
}


URealTimeImportSound* URealTimeImportSound::getRealTimeImportSound() {
	return realTimeImportSound;
}


void URealTimeImportSound::CreateSoundWaveFromFile(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, FString& fileID, ERTISoundFileType soundFileType, USoundWaveProcedural*& soundWave, FString& fileName, int32& errorCode, FString& errorMessage) {
	loadSoundFileInternal(directoryType, filePath, maxFileSize, 0.f, fileID, soundWave, fileName, errorCode, errorMessage, true, soundFileType, true);
}



TMap<FString, UAudioComponent*> URealTimeImportSound::getFileIDaudioComponentCache() {
	return 	fileIDaudioComponentCache;
}



uint64 URealTimeImportSound::get4ByteVal(TArray<uint8>& fileData, int32 index) {
	if (fileData.Num() < (index + 3))
		return 0;
	uint64 val = fileData.GetData()[index] << 0;
	val += fileData.GetData()[index + 1] << 8;
	val += fileData.GetData()[index + 2] << 16;
	val += fileData.GetData()[index + 3] << 24;

	return val;
}

uint64 URealTimeImportSound::get2ByteVal(TArray<uint8>& fileData, int32 index) {
	if (fileData.Num() < (index + 1))
		return 0;
	uint64 val = fileData.GetData()[index] << 0;
	val += fileData.GetData()[index + 1] << 8;
	return val;
}

void URealTimeImportSound::addRamStreamToCache(FString fileID, FSteamWavFromRamThread* thread) {
	soundStreamFromRamCache.Add(fileID, thread);
}

void URealTimeImportSound::addDiskStreamToCache(FString fileID, FSteamWavFromDiskThread* thread) {
	soundStreamFromDiskCache.Add(fileID, thread);
}

//void URealTimeImportSound::addWavToCache(FString fileID, USoundWaveProcedural* wav){
//	soundCache.Add(fileID, wav);
//}

FRTISoundDataStruct* URealTimeImportSound::getSoundDataCache(FString fileID) {
	return soundDataCache.Find(fileID);
}




void URealTimeImportSound::getWavHeaderInfoInternal(TArray<uint8>& fileData, int64 fileSize, FString& dataType, uint64& chunkSize, uint64& subChunk1Size, int64& numChannels, int64& sampleRate, uint64& byteRate, int64& bitsPerSample, uint64& subChunk2Size, float& durationSec, uint64& removeBytesSize) {

	dataType.AppendChar((unsigned char)fileData.GetData()[0]);
	dataType.AppendChar((unsigned char)fileData.GetData()[1]);
	dataType.AppendChar((unsigned char)fileData.GetData()[2]);
	dataType.AppendChar((unsigned char)fileData.GetData()[3]);


	if (dataType.Equals("RIFF") == false) {
		return;
	}

	chunkSize = get4ByteVal(fileData, 4);
	subChunk1Size = get4ByteVal(fileData, 16);
	numChannels = get2ByteVal(fileData, 22);
	sampleRate = get4ByteVal(fileData, 24);
	byteRate = get4ByteVal(fileData, 28);
	bitsPerSample = get2ByteVal(fileData, 34);
	subChunk2Size = get4ByteVal(fileData, 40);

	if (chunkSize == 0 || subChunk1Size == 0 || numChannels == 0 || sampleRate == 0 || byteRate == 0 || bitsPerSample == 0 || subChunk2Size == 0) {
		return;
	}


	removeBytesSize = 44;

	//search the word "data" in header each byte is a letter. 100 = d, 97 = a, 116 = t       
	if ((removeBytesSize + subChunk2Size + 8) < chunkSize && (removeBytesSize + subChunk2Size + 8) < fileData.Num()) {
		int64 tmp = removeBytesSize + subChunk2Size;
		if (fileData.GetData()[tmp] == 100
			&& fileData.GetData()[tmp + 1] == 97
			&& fileData.GetData()[tmp + 2] == 116
			&& fileData.GetData()[tmp + 3] == 97) {
			removeBytesSize = removeBytesSize + subChunk2Size + 8;
		}
	}
	int64 numSamples = fileSize / (numChannels * (bitsPerSample / 8));
	durationSec = ((float)numSamples) / ((float)sampleRate);
}





void URealTimeImportSound::CreateSoundWaveFromFileAsync(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, ERTISoundFileType soundFileType, FString eventID) {

	if (createSoundWaveFromFileThread == nullptr) {
		createSoundWaveFromFileThread = new FCreateSoundWaveFromFileThread(this, directoryType, filePath, maxFileSize, eventID, soundFileType);
	}
	else {
		createSoundWaveFromFileThread->restartThread(this, directoryType, filePath, maxFileSize, eventID, soundFileType);
	}
}


void URealTimeImportSound::CreateSoundWaveFromBytesInternal(FString name, TArray<uint8> fileData, float maxFileSize, ERTISoundFileType soundFileType, USoundWaveProcedural*& soundWave, int32& errorCode, FString& errorMessage, bool queueAudio) {

	if (fileData.Num() == 0) {
		errorMessage = "Byte Array is empty";
		errorCode = 3;
		return;
	}

	FString cacheID = name + "_" + FString::FromInt(fileData.Num());
	if (soundDataCache.Find(cacheID) != nullptr) {
		FRTISoundDataStruct& sds = *soundDataCache.Find(cacheID);

		soundWave = NewObject<USoundWaveProcedural>();

		soundWave->Duration = sds.duration;
		soundWave->SetSampleRate(sds.sampleRate);
		soundWave->NumChannels = sds.numChannels;

		soundWave->bLooping = false;
		soundWave->bCanProcessAsync = true;


		// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
		if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
			if (!AudioDevice->bAudioMixerModuleLoaded) {
				soundWave->bCanProcessAsync = false;
			}
		}
#endif
		if (queueAudio) {
			soundWave->QueueAudio(sds.soundData.GetData(), sds.soundData.Num());
		}

		return;
	}

	if (maxFileSize > 0) {
		int32 max = maxFileSize * 1024 * 1024;
		if (fileData.Num() > maxFileSize) {
			errorMessage = "Maximum file size exceeded. (" + FString::SanitizeFloat(((float)fileData.Num()) / 1024 / 1024) + ">" + FString::SanitizeFloat(((float)max) / 1024 / 1024) + ")";
			errorCode = 4;
			return;
		}
	}

	soundWave = createSoundWaveWithDataInSoundWave(fileData, cacheID, 0, soundFileType, errorCode, errorMessage, queueAudio);

}

void URealTimeImportSound::CreateSoundWaveFromBytes(FString name, TArray<uint8> fileData, float maxFileSize, ERTISoundFileType soundFileType, USoundWaveProcedural*& soundWave, int32& errorCode, FString& errorMessage) {
	CreateSoundWaveFromBytesInternal(name, fileData, maxFileSize, soundFileType, soundWave, errorCode, errorMessage, true);
}

void  URealTimeImportSound::CreateSoundWaveFromBytesAsync(FString name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, FString eventID) {

	if (loadWavBytesThread == nullptr) {
		loadWavBytesThread = new FCreateSoundWaveFromBytesThread(this, name, bytes, maxFileSize, eventID, soundFileType);
	}
	else {
		loadWavBytesThread->restartThread(this, name, bytes, maxFileSize, eventID, soundFileType);
	}
}



void URealTimeImportSound::loadAndPlaySoundFileAsync(const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float maxFileSize, float volumeMultiplier, float pitchMultiplier, int32 startTime, bool persistAcrossLevelTransition, ERTISoundFileType soundFileType) {


	if (volumeMultiplier < 0)
		volumeMultiplier = 0;
	if (volumeMultiplier > MAX_VOLUME)
		volumeMultiplier = MAX_VOLUME;
	if (pitchMultiplier < MIN_PITCH)
		pitchMultiplier = MIN_PITCH;
	if (pitchMultiplier > MAX_PITCH)
		pitchMultiplier = MAX_PITCH;

	if (pitchMultiplier < 0)
		pitchMultiplier = 0.1;

	FRTIWavPlayAsyncStruct playWaveStruct;
	playWaveStruct.WorldContextObject = WorldContextObject;
	playWaveStruct.directoryType = directoryType;
	playWaveStruct.filePath = filePath;
	playWaveStruct.maxFileSize = maxFileSize;
	playWaveStruct.volumeMultiplier = volumeMultiplier;
	playWaveStruct.pitchMultiplier = pitchMultiplier;
	playWaveStruct.startTime = startTime;
	playWaveStruct.persistAcrossLevelTransition = persistAcrossLevelTransition;

	TArray<uint8> empty;
	new FSteamWavFromRamThread(this, playWaveStruct, empty, soundFileType);

}

void URealTimeImportSound::loadAndPlaySoundBytesAsync(const UObject* WorldContextObject, TArray<uint8> bytes, float volumeMultiplier, float pitchMultiplier, int32 startTimeInSeconds, bool persistAcrossLevelTransition) {
	if (volumeMultiplier < 0)
		volumeMultiplier = 0;
	if (volumeMultiplier > MAX_VOLUME)
		volumeMultiplier = MAX_VOLUME;
	if (pitchMultiplier < MIN_PITCH)
		pitchMultiplier = MIN_PITCH;
	if (pitchMultiplier > MAX_PITCH)
		pitchMultiplier = MAX_PITCH;

	if (pitchMultiplier < 0)
		pitchMultiplier = 0.1;

	FRTIWavPlayAsyncStruct playWaveStruct;
	playWaveStruct.WorldContextObject = WorldContextObject;
	playWaveStruct.volumeMultiplier = volumeMultiplier;
	playWaveStruct.pitchMultiplier = pitchMultiplier;
	//playWaveStruct.startTime = startTime;
	playWaveStruct.persistAcrossLevelTransition = persistAcrossLevelTransition;

	new FSteamWavFromRamThread(this, playWaveStruct, bytes, ERTISoundFileType::E_wav);
}


USoundWaveProcedural* URealTimeImportSound::createSoundWaveWithDataInSoundWave(TArray<uint8>& fileData, FString fileID, float startTime, ERTISoundFileType soundFileType, int32& errorCode, FString& errorMessage, bool queueAudio) {


	USoundWaveProcedural* soundWave = NewObject<USoundWaveProcedural>();


	if (fileData.Num() < 100) {
		errorMessage = "Wav file too small. The file must be at least 100 bytes in size.";
		errorCode = 7;
		return soundWave;
	}

	uint64 chunkSize = 0;
	uint64 subChunk1Size = 0;
	int64 numChannels = 0;
	int64 sampleRate = 0;
	uint64 byteRate = 0;
	int64 bitsPerSample = 0;
	uint64 subChunk2Size = 0;
	uint64 removeBytesSize = 0;
	float durationSec = 0;

	FRTISoundDataStruct sds;

	if (soundFileType == ERTISoundFileType::E_wav) {

		FString dataType = FString();

		getWavHeaderInfoInternal(fileData, fileData.Num(), dataType, chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, bitsPerSample, subChunk2Size, durationSec, removeBytesSize);


		if (dataType.Equals("RIFF") == false) {
			errorMessage = "This file type is not supported.:" + dataType;
			errorCode = 5;
			return soundWave;
		}


		if (chunkSize == 0 || subChunk1Size == 0 || numChannels == 0 || sampleRate == 0 || byteRate == 0 || bitsPerSample == 0 || subChunk2Size == 0) {
			errorMessage = "Wav file corrupted.";
			errorCode = 8;
			UE_LOG(LogTemp, Display, TEXT("chunkSize:%i subChunk1Size:%i numChannels:%i sampleRate:%i byteRate:%i bitsPerSample:%i subChunk2Size:%i"), chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, bitsPerSample, subChunk2Size);
			return soundWave;
		}

		if (bitsPerSample != 16) {
			errorMessage = "Only 16bit (bits per sample) files are supported by UE4. This file has:" + FString::FromInt(bitsPerSample) + "bit";
			errorCode = 6;
			return soundWave;
		}

		//remove header
#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION >= 5
		fileData.RemoveAtSwap(0, removeBytesSize, EAllowShrinking::Yes);
#else
		fileData.RemoveAtSwap(0, removeBytesSize, true);
#endif

		uint64 numSamples = fileData.Num() / (numChannels * (bitsPerSample / 8));
		durationSec = ((float)numSamples) / ((float)sampleRate);


		sds.soundData.AddUninitialized(fileData.Num());
		FMemory::Memcpy(sds.soundData.GetData(), fileData.GetData(), fileData.Num());


		/*	UE_LOG(LogTemp, Display, TEXT("dataType:%s"), *dataType);
			UE_LOG(LogTemp, Display, TEXT("chunkSize:%i"), chunkSize);
			UE_LOG(LogTemp, Display, TEXT("subChunk1Size:%i"), subChunk1Size);
			UE_LOG(LogTemp, Display, TEXT("numChannels:%i"), numChannels);
			UE_LOG(LogTemp, Display, TEXT("sampleRate:%i"), sampleRate);
			UE_LOG(LogTemp, Display, TEXT("byteRate:%i"), byteRate);
			UE_LOG(LogTemp, Display, TEXT("bitsPerSample:%i"), bitsPerSample);
			UE_LOG(LogTemp, Display, TEXT("subChunk2Size:%i"), subChunk2Size);
			UE_LOG(LogTemp, Display, TEXT("numSamples:%i"), numSamples);
			UE_LOG(LogTemp, Display, TEXT("Duration in Seconds:%f"), durationSec);*/
	}

	else {


		if (soundFileType == ERTISoundFileType::E_ogg) {
			FSoundQualityInfo qualityInfo = decompressOGG(fileData, sds.soundData, errorCode);

			if (errorCode != 0) {
				errorMessage = "ogg could not be decompressed. Wrong codec? Only vorbis is supported.";
				return soundWave;
			}

			durationSec = qualityInfo.Duration;
			numChannels = qualityInfo.NumChannels;
			sampleRate = qualityInfo.SampleRate;
			bitsPerSample = qualityInfo.SampleDataSize;

		}
		else {
			errorMessage = "Audio format is not supported.";
			errorCode = 1313;
			return soundWave;

		}
	}


	soundWave->Duration = durationSec;
	soundWave->SetSampleRate(sampleRate);
	soundWave->NumChannels = numChannels;

	soundWave->bLooping = false;
	soundWave->bCanProcessAsync = true;


	// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
	if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
		if (!AudioDevice->bAudioMixerModuleLoaded) {
			soundWave->bCanProcessAsync = false;
		}
	}
#endif

	if (queueAudio) {
		soundWave->QueueAudio(sds.soundData.GetData(), sds.soundData.Num());
	}

	errorCode = 0;


	sds.duration = durationSec;
	sds.sampleRate = sampleRate;
	sds.numChannels = numChannels;

	soundDataCache.Add(fileID, sds);


	//free memory
	fileData.Empty();

	return soundWave;
}




USoundWaveProcedural* URealTimeImportSound::createSoundWaveWithDataInStruct(TArray<uint8>& fileData, FString fileID, int32& errorCode, FString& errorMessage) {


	USoundWaveProcedural* soundWave = NewObject<USoundWaveProcedural>();

	if (soundDataCache.Find(fileID) == nullptr) {



		if (fileData.Num() < 100) {
			errorMessage = "Wav file too small. The file must be at least 100 bytes in size.";
			errorCode = 7;
			return soundWave;
		}


		//wav header
		FString dataType = FString();
		dataType.AppendChar((unsigned char)fileData.GetData()[0]);
		dataType.AppendChar((unsigned char)fileData.GetData()[1]);
		dataType.AppendChar((unsigned char)fileData.GetData()[2]);
		dataType.AppendChar((unsigned char)fileData.GetData()[3]);


		if (dataType.Equals("RIFF") == false) {
			errorMessage = "This file type is not supported.:" + dataType;
			errorCode = 5;
			return soundWave;
		}

		uint64 chunkSize = get4ByteVal(fileData, 4);
		uint64 subChunk1Size = get4ByteVal(fileData, 16);
		uint64 numChannels = get2ByteVal(fileData, 22);
		uint64 sampleRate = get4ByteVal(fileData, 24);
		uint64 byteRate = get4ByteVal(fileData, 28);
		uint64 bitsPerSample = get2ByteVal(fileData, 34);
		uint64 subChunk2Size = get4ByteVal(fileData, 40);

		if (chunkSize == 0 || subChunk1Size == 0 || numChannels == 0 || sampleRate == 0 || byteRate == 0 || bitsPerSample == 0 || subChunk2Size == 0) {
			errorMessage = "Wav file corrupted.";
			errorCode = 8;
			UE_LOG(LogTemp, Display, TEXT("chunkSize:%i subChunk1Size:%i numChannels:%i sampleRate:%i byteRate:%i bitsPerSample:%i subChunk2Size:%i"), chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, bitsPerSample, subChunk2Size);
			return soundWave;
		}

		if (bitsPerSample != 16) {
			errorMessage = "Only 16bit (bits per sample) files are supported by UE4. This file has:" + FString::FromInt(bitsPerSample) + "bit";
			errorCode = 6;
			return soundWave;
		}

		uint64 removeBytesSize = 44;

		//search the word "data" in header each byte is a letter. 100 = d, 97 = a, 116 = t       
		if ((removeBytesSize + subChunk2Size + 8) < chunkSize && (removeBytesSize + subChunk2Size + 8) < fileData.Num()) {
			uint64 tmp = removeBytesSize + subChunk2Size;
			if (fileData.GetData()[tmp] == 100
				&& fileData.GetData()[tmp + 1] == 97
				&& fileData.GetData()[tmp + 2] == 116
				&& fileData.GetData()[tmp + 3] == 97) {
				removeBytesSize = removeBytesSize + subChunk2Size + 8;
			}
		}



		//remove header
#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION >= 5
		fileData.RemoveAt(0, removeBytesSize, EAllowShrinking::Yes);
#else
		fileData.RemoveAt(0, removeBytesSize, true);
#endif
		//if (soundDataCache.Find(fileID) != nullptr) {
		//	FRTISoundDataStruct& sds = *soundDataCache.Find(fileID);
		//}


		uint64 numSamples = fileData.Num() / (numChannels * (bitsPerSample / 8));
		float durationSec = ((float)numSamples) / ((float)sampleRate);


		UE_LOG(LogTemp, Display, TEXT("dataType:%s"), *dataType);
		UE_LOG(LogTemp, Display, TEXT("chunkSize:%i"), chunkSize);
		UE_LOG(LogTemp, Display, TEXT("subChunk1Size:%i"), subChunk1Size);
		UE_LOG(LogTemp, Display, TEXT("numChannels:%i"), numChannels);
		UE_LOG(LogTemp, Display, TEXT("sampleRate:%i"), sampleRate);
		UE_LOG(LogTemp, Display, TEXT("byteRate:%i"), byteRate);
		UE_LOG(LogTemp, Display, TEXT("bitsPerSample:%i"), bitsPerSample);
		UE_LOG(LogTemp, Display, TEXT("subChunk2Size:%i"), subChunk2Size);
		UE_LOG(LogTemp, Display, TEXT("numSamples:%i"), numSamples);
		UE_LOG(LogTemp, Display, TEXT("Duration in Seconds:%f"), durationSec);




		soundWave->bDynamicResource = true;
		soundWave->Duration = durationSec;
		soundWave->SetSampleRate(sampleRate);
		soundWave->NumChannels = numChannels;


		soundWave->bLooping = false;
		soundWave->bCanProcessAsync = true;


		// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
		if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
			if (!AudioDevice->bAudioMixerModuleLoaded) {
				soundWave->bCanProcessAsync = false;
			}
		}
#endif


		FRTISoundDataStruct sds;
		sds.soundData.AddUninitialized(fileData.Num());
		FMemory::Memcpy(sds.soundData.GetData(), fileData.GetData(), fileData.Num());
		sds.duration = durationSec;
		sds.sampleRate = sampleRate;
		sds.numChannels = numChannels;
		soundDataCache.Add(fileID, sds);

		errorCode = 0;

		//free memory
		fileData.Empty();
	}
	else {
		FRTISoundDataStruct sds = *soundDataCache.Find(fileID);
		soundWave->Duration = sds.duration;
		soundWave->SetSampleRate(sds.sampleRate);
		soundWave->NumChannels = sds.numChannels;


		soundWave->bLooping = false;
		soundWave->bCanProcessAsync = true;


		// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
		if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
			if (!AudioDevice->bAudioMixerModuleLoaded) {
				soundWave->bCanProcessAsync = false;
			}
		}
#endif
		errorCode = 0;
	}

	return soundWave;
}



void URealTimeImportSound::createAudioComponentAndPlay(const UObject* WorldContextObject, USoundWaveProcedural* sound, FString fileID, float volumeMultiplier, float pitchMultiplier, bool persistAcrossLevelTransition) {
	if (!GEngine || !GEngine->UseSound() || sound == nullptr) {
		triggerPlaySoundEventDelegate(100, fileID, "Engine or Sound Object is null.", 0);
		UE_LOG(LogTemp, Error, TEXT("Realtime Import(100): Engine or Sound Object is null."));
		return;
	}

	

	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!ThisWorld || !ThisWorld->bAllowAudioPlayback || ThisWorld->IsNetMode(NM_DedicatedServer)) {
		triggerPlaySoundEventDelegate(101, fileID, "Audio component cannot be created in this blueprint.", 0);
		UE_LOG(LogTemp, Error, TEXT("Realtime Import(100): Audio component cannot be created in this blueprint."));
		return;
	}

	FAudioDevice::FCreateComponentParams Params = FAudioDevice::FCreateComponentParams(ThisWorld);


	if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {

		UAudioComponent* AudioComponent = AudioDevice->CreateComponent(sound, Params);
		if (AudioComponent) {
			AudioComponent->SetVolumeMultiplier(volumeMultiplier);
			AudioComponent->SetPitchMultiplier(pitchMultiplier);
			AudioComponent->bAllowSpatialization = false;
			AudioComponent->bIsUISound = true;
			AudioComponent->bIgnoreForFlushing = persistAcrossLevelTransition;

			AudioComponent->OnAudioFinishedNative.AddUObject(this, &URealTimeImportSound::OnAudioFinished);
			AudioComponent->OnAudioMultiEnvelopeValueNative.AddUObject(this, &URealTimeImportSound::OnAudioSingleEnvelopeValue);

			fileIDaudioComponentCache.Add(fileID, AudioComponent);
			//audioComponentFileIDCache.Add(AudioComponent, fileID);
			AudioComponent->Play();


			if (soundStreamFromRamCache.Find(fileID) != nullptr) {
				FSteamWavFromRamThread* thread = *soundStreamFromRamCache.Find(fileID);
				if (thread != nullptr) {
					thread->play(CastChecked<USoundWaveProcedural>(AudioComponent->Sound));
				}
			}
			USoundWaveProcedural* soundWav = CastChecked<USoundWaveProcedural>(AudioComponent->Sound);
			if (soundWav != nullptr) {
				triggerPlaySoundEventDelegate(0, fileID, "", soundWav->GetDuration());
			}


		}
		else {
			triggerPlaySoundEventDelegate(102, fileID, "Unable to create voice audio component!", 0);
			UE_LOG(LogTemp, Error, TEXT("Realtime Import(102): Unable to create voice audio component!"));
		}

	}
}



void URealTimeImportSound::OnAudioFinished(UAudioComponent* AudioComponent) {

	/*if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 60.0f, FColor::Green, TEXT("URealTimeImportSound::OnAudioFinished"));*/
		//UE_LOG(LogTemp, Warning, TEXT("URealTimeImportSound::OnAudioFinished"));

	if (AudioComponent != nullptr) {

		//ignore when paused
		if (pauseCache.Find(AudioComponent) != nullptr) {
			return;
		}

		AudioComponent->Stop();
		USoundWaveProcedural* soundWav = CastChecked<USoundWaveProcedural>(AudioComponent->Sound);
		if (soundWav != nullptr) {
			soundWav->ResetAudio();
		}

		AudioComponent->RemoveFromRoot();
#if ENGINE_MAJOR_VERSION == 5
		AudioComponent->MarkAsGarbage();
#else
		AudioComponent->MarkPendingKill();
#endif
		AudioComponent = nullptr;
	}
}

void URealTimeImportSound::OnAudioSingleEnvelopeValue(const class UAudioComponent* audioComponent, const float averageEnvelopeValue, const float maxEnvelope, const int32 numWaveInstances){
	URealTimeImportBPLibrary::RealTimeImportBPLibrary->onActiveSoundEnvelopeValueEventDelegate.Broadcast(averageEnvelopeValue, maxEnvelope, numWaveInstances);
}

void URealTimeImportSound::changeVolumeSound(FString fileID, float volumeMultiplier) {
	if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->SetVolumeMultiplier(volumeMultiplier);
		}
	}
}

bool URealTimeImportSound::isSoundActive(FString fileID) {

	//if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
	//	UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
	//	if (audioComponentFileIDCache.Find(AudioComponent) != nullptr) {
	//		return true;
	//	}
	//}

	if (soundStreamFromRamCache.Find(fileID) != nullptr || soundStreamFromDiskCache.Find(fileID) != nullptr) {

		/*if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
			UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
			return AudioComponent->IsActive();
		}*/
		return true;
	}
	return false;
}

void URealTimeImportSound::getSoundInfo(ERTIDirectoryType directoryType, FString filePath, FString& name, FString& fileNameExtension, int64& fileSize,
	float& duration, int64& numChannels, int32& quality, int64& sampleDataSize, int64& sampleRate) {


	filePath = UFileFunctionsRealTimeImport::getCleanDirectory(directoryType, filePath);

	FArchive* reader = IFileManager::Get().CreateFileReader(*filePath);
	if (!reader) {
		return;
	}

	fileSize = reader->TotalSize();
	if (fileSize <= 100) {
		return;
	}


	name = FPaths::GetCleanFilename(filePath);
	fileNameExtension = FPaths::GetExtension(filePath);


	TArray<uint8> fileData;

	FString type = fileNameExtension.ToLower();
	if (type.Equals("ogg")) {
		fileData.AddUninitialized(fileSize);
		reader->Serialize(fileData.GetData(), fileData.Num());

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 0
		IAudioInfoFactory* Factory = IAudioInfoFactoryRegistry::Get().Find(Audio::NAME_OGG);
		TUniquePtr<ICompressedAudioInfo> audioInfo;
		audioInfo.Reset(Factory->Create());
		FSoundQualityInfo qualityInfo = { 0 };
		if (audioInfo->ReadCompressedInfo(fileData.GetData(), fileData.Num(), &qualityInfo)) {
			duration = qualityInfo.Duration;
			numChannels = qualityInfo.NumChannels;
			quality = qualityInfo.Quality;
			sampleDataSize = qualityInfo.SampleDataSize;
			sampleRate = qualityInfo.SampleRate;
		}
#else
		FVorbisAudioInfo audioInfo;
		FSoundQualityInfo qualityInfo = { 0 };
		if (audioInfo.ReadCompressedInfo(fileData.GetData(), fileData.Num(), &qualityInfo)) {
			duration = qualityInfo.Duration;
			numChannels = qualityInfo.NumChannels;
			quality = qualityInfo.Quality;
			sampleDataSize = qualityInfo.SampleDataSize;
			sampleRate = qualityInfo.SampleRate;
		}
#endif
	}

	if (type.Equals("wav")) {
		fileData.AddUninitialized(100);
		reader->Serialize(fileData.GetData(), fileData.Num());

		uint64 chunkSize = 0;
		uint64 subChunk1Size = 0;
		uint64 byteRate = 0;
		uint64 subChunk2Size = 0;
		uint64 removeBytesSize = 0;
		FString headerType = FString();

		getWavHeaderInfoInternal(fileData, fileSize, headerType, chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, sampleDataSize, subChunk2Size, duration, removeBytesSize);

	}

	reader->Close();
	delete reader;
	fileData.Empty();
}


FSoundQualityInfo URealTimeImportSound::decompressOGG(TArray<uint8>& compressedBufferIN, TArray<uint8>& uncompressedBufferOUT, int32& errorCode) {

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 0
	IAudioInfoFactory* Factory = IAudioInfoFactoryRegistry::Get().Find(Audio::NAME_OGG);

	FSoundQualityInfo qualityInfo = { 0 };

	TUniquePtr<ICompressedAudioInfo> audioInfoVorbis;
	audioInfoVorbis.Reset(Factory->Create());

	if (audioInfoVorbis->ReadCompressedInfo(compressedBufferIN.GetData(), compressedBufferIN.Num(), &qualityInfo)) {
		uncompressedBufferOUT.AddUninitialized(qualityInfo.SampleDataSize);
		audioInfoVorbis->ExpandFile(uncompressedBufferOUT.GetData(), &qualityInfo);
		return qualityInfo;
	}
#else
	FSoundQualityInfo qualityInfo = { 0 };

	FVorbisAudioInfo audioInfoVorbis;
	if (audioInfoVorbis.ReadCompressedInfo(compressedBufferIN.GetData(), compressedBufferIN.Num(), &qualityInfo)) {

		uncompressedBufferOUT.AddUninitialized(qualityInfo.SampleDataSize);
		audioInfoVorbis.ExpandFile(uncompressedBufferOUT.GetData(), &qualityInfo);
		return qualityInfo;
	}
#endif 

	errorCode = 1682;

	//Looks like ue4 only supports its own version of opus see OPUS_ID_STRING in FOpusAudioInfo::ParseHeader
	//qualityInfo = { 0 };

	//FOpusAudioInfo audioInfoOpus;
	//if (audioInfoOpus.ReadCompressedInfo(compressedBufferIN.GetData(), compressedBufferIN.Num(), &qualityInfo)) {

	//	uncompressedBufferOUT.AddUninitialized(qualityInfo.SampleDataSize);
	//	audioInfoOpus.ExpandFile(uncompressedBufferOUT.GetData(), &qualityInfo);
	//	return qualityInfo;
	//}


	return qualityInfo;
}


//void URealTimeImportSound::changePlaySpeedWavSound(FString fileID, float playSpeed) {
//	if (audioComponentCache.Find(fileID) != nullptr) {
//		UAudioComponent* AudioComponent = *audioComponentCache.Find(fileID);
//		AudioComponent->SetPitchMultiplier(playSpeed);
//	}
//}


void URealTimeImportSound::resumeSound(FString fileID) {

	if (fileIDaudioComponentCache.Find(fileID) != nullptr && soundStreamFromRamCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->Play();
			pauseCache.Remove(AudioComponent);
			//audioComponentFileIDCache.Add(AudioComponent, fileID);

			FSteamWavFromRamThread* steamWavThread = *soundStreamFromRamCache.Find(fileID);
			steamWavThread->pauseThread(false);
		}
		return;
	}

	if (fileIDaudioComponentCache.Find(fileID) != nullptr && soundStreamFromDiskCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->Play();
			pauseCache.Remove(AudioComponent);
			//audioComponentFileIDCache.Add(AudioComponent, fileID);

			FSteamWavFromDiskThread* steamWavThread = *soundStreamFromDiskCache.Find(fileID);
			steamWavThread->pauseThread(false);
		}
		return;
	}
}

void URealTimeImportSound::seekWavFileStream(FString fileID, float positionInSeconds) {
	if (soundStreamFromDiskCache.Find(fileID) != nullptr) {
		FSteamWavFromDiskThread* steamWavThread = *soundStreamFromDiskCache.Find(fileID);
		steamWavThread->seek(positionInSeconds);
	}
}

void URealTimeImportSound::pauseSound(FString fileID) {

	if (fileIDaudioComponentCache.Find(fileID) != nullptr && soundStreamFromRamCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->Stop();
			pauseCache.Add(AudioComponent, true);

			FSteamWavFromRamThread* steamWavThread = *soundStreamFromRamCache.Find(fileID);
			steamWavThread->pauseThread(true);
		}
		return;
	}

	if (fileIDaudioComponentCache.Find(fileID) != nullptr && soundStreamFromDiskCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->Stop();
			pauseCache.Add(AudioComponent, true);

			FSteamWavFromDiskThread* steamWavThread = *soundStreamFromDiskCache.Find(fileID);
			steamWavThread->pauseThread(true);
		}
		return;
	}
}


void URealTimeImportSound::stopSound(FString fileID, bool removeFromCache) {

	if (soundStreamFromRamCache.Find(fileID) != nullptr) {

		if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
			UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
			if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
				AudioComponent->Stop();
			}
		}

		FSteamWavFromRamThread* steamWavThread = *soundStreamFromRamCache.Find(fileID);
		if (steamWavThread != nullptr) {
			soundStreamFromRamCache.Remove(fileID);
			steamWavThread->stopThread(removeFromCache);
			//delete steamWavThread;//leads to a lag in the game thread. todo: create a small GC for it
			steamWavThread = nullptr;
		}
		return;
	}

	if (soundStreamFromDiskCache.Find(fileID) != nullptr) {

		if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
			UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
			if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
				AudioComponent->Stop();
			}
		}

		FSteamWavFromDiskThread* steamWavThread = *soundStreamFromDiskCache.Find(fileID);
		if (steamWavThread != nullptr) {
			soundStreamFromRamCache.Remove(fileID);
			steamWavThread->stopThread();
			//delete steamWavThread;//leads to a lag in the game thread. todo: create a small GC for it
			steamWavThread = nullptr;
		}
		return;
	}


}


void URealTimeImportSound::stopAllSounds(bool removeFromCache) {
	if (soundStreamFromRamCache.Num() > 0) {
		TMap<FString, FSteamWavFromRamThread*> mapCopy;
		mapCopy.Append(soundStreamFromRamCache);

		for (auto& element : mapCopy) {
			stopSound(element.Key, removeFromCache);
		}
		mapCopy.Empty();
	}

	if (soundStreamFromDiskCache.Num() > 0) {
		TMap<FString, FSteamWavFromDiskThread*> mapCopy;
		mapCopy.Append(soundStreamFromDiskCache);

		for (auto& element : mapCopy) {
			stopSound(element.Key, removeFromCache);
		}

		mapCopy.Empty();
	}
}

void URealTimeImportSound::stopSoundInternal(FString fileID, bool removeFromCache) {

	if (fileIDaudioComponentCache.Find(fileID) != nullptr) {
		UAudioComponent* AudioComponent = *fileIDaudioComponentCache.Find(fileID);
		if (AudioComponent->IsValidLowLevel() && AudioComponent != nullptr) {
			AudioComponent->Stop();
			fileIDaudioComponentCache.Remove(fileID);
			pauseCache.Remove(AudioComponent);
		}
	}

	if (soundStreamFromRamCache.Find(fileID) != nullptr) {
		FSteamWavFromRamThread* steamWavThread = *soundStreamFromRamCache.Find(fileID);
		if (steamWavThread != nullptr) {
			steamWavThread = nullptr;
		}
		soundStreamFromRamCache.Remove(fileID);
	}

	if (soundStreamFromDiskCache.Find(fileID) != nullptr) {
		FSteamWavFromDiskThread* steamWavThread = *soundStreamFromDiskCache.Find(fileID);
		if (steamWavThread != nullptr) {
			steamWavThread = nullptr;
		}
		soundStreamFromDiskCache.Remove(fileID);
	}

	if (removeFromCache) {
		removeSoundFromCache(fileID);
	}


	//CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
}

void URealTimeImportSound::removeSoundFromCache(FString fileID) {

	if (soundStreamFromRamCache.Find(fileID) != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Wav cannot be deleted from cache while it is still playing."));
		return;
	}


	if (soundDataCache.Find(fileID) != nullptr) {
		FRTISoundDataStruct sds = *soundDataCache.Find(fileID);
		sds.soundData.Empty();
		soundDataCache.Remove(fileID);
	}
}

void URealTimeImportSound::emptySoundCache() {

	for (auto& element : soundDataCache) {
		if (soundStreamFromRamCache.Find(element.Key) == nullptr) {
			element.Value.soundData.Empty();
		}
	}
	soundDataCache.Empty();

	//	CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);	
}



void URealTimeImportSound::streamWavFile(bool& success, FString& errorMessage, const UObject* WorldContextObject, ERTIDirectoryType directoryType, FString filePath, float volumeMultiplier, /*float playSpeed,*/ int32 startTimeInSeconds, bool persistAcrossLevelTransition) {

	if (UFileFunctionsRealTimeImport::fileExists(directoryType, filePath) == false) {
		UE_LOG(LogTemp, Error, TEXT("Can't read file %s"), *filePath);
		success = false;
		errorMessage = "Can't read file:" + filePath;
		return;
	}

	uint64 chunkSize = 0;
	uint64 subChunk1Size = 0;
	int64 numChannels = 0;
	int64 sampleRate = 0;
	uint64 byteRate = 0;
	int64 bitsPerSample = 0;
	uint64 subChunk2Size = 0;
	uint64 headerSize = 0;
	float durationSec = 0;

	FRTIWavPlayAsyncStruct playWaveStruct;


	filePath = UFileFunctionsRealTimeImport::getCleanDirectory(directoryType, filePath);

	FArchive* reader = IFileManager::Get().CreateFileReader(*filePath);
	if (!reader) {
		UE_LOG(LogTemp, Error, TEXT("Can't read file %s"), *filePath);
		success = false;
		errorMessage = "Can't read file:" + filePath;
		return;
	}

	int64 fileSize = reader->TotalSize();

	//if (soundFileType == ERTISoundFileType::E_wav) {

	TArray<uint8> fileData;
	fileData.AddUninitialized(1024);
	reader->Serialize(fileData.GetData(), fileData.Num());
	reader->Close();
	delete reader;

	FString dataType = FString();

	getWavHeaderInfoInternal(fileData, fileSize, dataType, chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, bitsPerSample, subChunk2Size, durationSec, headerSize);


	if (dataType.Equals("RIFF") == false) {
		success = false;
		errorMessage = "This file type is not supported.:" + dataType;
		return;
	}


	if (chunkSize == 0 || subChunk1Size == 0 || numChannels == 0 || sampleRate == 0 || byteRate == 0 || bitsPerSample == 0 || subChunk2Size == 0) {
		success = false;
		errorMessage = "Wav file corrupted.";
		//UE_LOG(LogTemp, Display, TEXT("chunkSize:%i subChunk1Size:%i numChannels:%i sampleRate:%i byteRate:%i bitsPerSample:%i subChunk2Size:%i"), chunkSize, subChunk1Size, numChannels, sampleRate, byteRate, bitsPerSample, subChunk2Size);
		return;
	}

	if (bitsPerSample != 16) {
		success = false;
		errorMessage = "Only 16bit (bits per sample) files are supported by UE4. This file has:" + FString::FromInt(bitsPerSample) + "bit";
		return;
	}


	fileData.Empty();


	if (volumeMultiplier < 0)
		volumeMultiplier = 0;
	if (volumeMultiplier > MAX_VOLUME)
		volumeMultiplier = MAX_VOLUME;
	//if (playSpeed < MIN_PITCH)
	//	playSpeed = MIN_PITCH;
	//if (playSpeed > MAX_PITCH)
	//	playSpeed = MAX_PITCH;

	//if (playSpeed < 0)
	//	playSpeed = 0.1;


	playWaveStruct.WorldContextObject = WorldContextObject;
	playWaveStruct.directoryType = directoryType;
	playWaveStruct.filePath = filePath;
	playWaveStruct.volumeMultiplier = volumeMultiplier;
	//playWaveStruct.pitchMultiplier = playSpeed;
	playWaveStruct.startTime = startTimeInSeconds;
	playWaveStruct.persistAcrossLevelTransition = persistAcrossLevelTransition;


	USoundWaveProcedural* soundWave = NewObject<USoundWaveProcedural>();
	soundWave->Duration = durationSec;// INDEFINITELY_LOOPING_DURATION;
	soundWave->SetSampleRate(sampleRate);
	soundWave->NumChannels = numChannels;

	//soundWave->SoundGroup = SOUNDGROUP_Voice;
	soundWave->bLooping = false;
	soundWave->bCanProcessAsync = true;


	// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
	if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
		if (!AudioDevice->bAudioMixerModuleLoaded) {
			soundWave->bCanProcessAsync = false;
		}
	}
#endif


	FRTISoundDataStruct sds = FRTISoundDataStruct();
	sds.sampleRate = sampleRate;
	sds.numChannels = numChannels;
	sds.headerSize = headerSize;
	sds.soundWave = soundWave;
	sds.duration = durationSec;

	new FSteamWavFromDiskThread(this, playWaveStruct, sds);

	success = true;
	errorMessage.Empty();
}


void URealTimeImportSound::loadSoundFileInternal(ERTIDirectoryType directoryType, FString filePath, float maxFileSize, float startTime, FString& fileID,
	USoundWaveProcedural*& soundWave, FString& fileName, int32& errorCode, FString& errorMessage, bool cacheFileData, ERTISoundFileType soundFileType, bool queueAudio) {

	IFileManager& FileManager = IFileManager::Get();
	FString dir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}
	FString cacheID = dir + "_" + FileManager.GetTimeStamp(*dir).ToString();
	fileID = cacheID;

	/*TArray<uint8> fileData;
	FFileHelper::LoadFileToArray(fileData, *dir);
	soundWave = createStreamSoundWaveFromOGG(fileData, cacheID, startTime, errorCode, errorMessage);*/

	if (soundDataCache.Find(cacheID) != nullptr) {
		FRTISoundDataStruct& sds = *soundDataCache.Find(cacheID);

		soundWave = NewObject<USoundWaveProcedural>();

		soundWave->Duration = sds.duration;
		soundWave->SetSampleRate(sds.sampleRate);
		soundWave->NumChannels = sds.numChannels;

		soundWave->bLooping = false;
		soundWave->bCanProcessAsync = true;



		// Turn off async generation in old audio engine on mac.
#if PLATFORM_MAC
		if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice()) {
			if (!AudioDevice->bAudioMixerModuleLoaded) {
				soundWave->bCanProcessAsync = false;
			}
		}
#endif
		if (queueAudio) {
			soundWave->QueueAudio(sds.soundData.GetData(), sds.soundData.Num());
		}

		return;
	}


	if (maxFileSize > 0) {
		int64 max = maxFileSize * 1024 * 1024;
		int64 fileSize = UFileFunctionsRealTimeImport::fileSize(directoryType, filePath);
		if (fileSize > maxFileSize) {
			errorMessage = "Maximum file size exceeded. (" + FString::SanitizeFloat(((float)fileSize) / 1024 / 1024) + ">" + FString::SanitizeFloat(((float)max) / 1024 / 1024) + ")";
			errorCode = 4;
			return;
		}
	}


	TArray<uint8> fileData;
	UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->LoadFile(directoryType, filePath, fileName, fileData, errorCode, errorMessage);
	if (errorCode > 0) {
		return;
	}

	soundWave = createSoundWaveWithDataInSoundWave(fileData, cacheID, startTime, soundFileType, errorCode, errorMessage, queueAudio);

}





void URealTimeImportSound::triggerCreateSoundWaveFromFileEventDelegate(int32 errorCode, FString eventID, USoundWaveProcedural* soundWave, FString fileName, FString errorMessage){
	AsyncTask(ENamedThreads::GameThread, [eventID, soundWave, fileName, errorCode, errorMessage]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onCreateSoundWaveFromFileEventDelegate.Broadcast(errorCode, eventID, soundWave, fileName, errorMessage);
	});
}

void URealTimeImportSound::triggerCreateSoundWaveFromBytesEventDelegate(int32 errorCode, FString eventID, USoundWaveProcedural* soundWave, FString errorMessage){
	AsyncTask(ENamedThreads::GameThread, [eventID, soundWave, errorCode, errorMessage]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onCreateSoundWaveFromBytesEventDelegate.Broadcast(errorCode, eventID, soundWave, errorMessage);
	});
}

void URealTimeImportSound::triggerPlaySoundEventDelegate(int32 errorCode, FString fileID, FString errorMessage, float durationInSeconds){
	AsyncTask(ENamedThreads::GameThread, [fileID, errorCode, errorMessage, durationInSeconds]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onPlaySoundEventDelegate.Broadcast(errorCode, fileID, errorMessage, durationInSeconds);
	});
}

void URealTimeImportSound::triggerActiveSoundPositionEventDelegate(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent){
	AsyncTask(ENamedThreads::GameThread, [fileID, positionSecondsStart, positionSecondsEnd, positionPercent]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onActiveSoundPositionEventDelegate.Broadcast(fileID, positionSecondsStart, positionSecondsEnd, positionPercent);
	});
}

void URealTimeImportSound::triggerStopSoundEventDelegate(FString fileID){
	AsyncTask(ENamedThreads::GameThread, [fileID]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onStopSoundEventDelegate.Broadcast(fileID);
	});
}


