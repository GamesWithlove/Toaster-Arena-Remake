// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportThread.h"


uint32 FRealTimeImportThread::Run() {


	TArray<FSRealtimeImportThreadJobData*> toDelete;

	while (true) {

		while (jobQueue.IsEmpty() == false) {
			FSRealtimeImportThreadJobData* jobData = nullptr;
			jobQueue.Dequeue(jobData);
			if (jobData == nullptr) {
				continue;
			}

			switch (jobData->jobType) {
			case ERTIThreadJobType::E_LoadMesh:
			{
				URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad = false;
				bool success = false;
				FString successMessage;
				TArray<FRTIModelStruct> modelStructs;
				URealTimeImportMesh::getRealTimeImportMesh()->LoadMeshFile(jobData->meshFileType,
					jobData->directoryType,
					jobData->filePath,
					success,
					successMessage,
					modelStructs,
					jobData->coordinateSystem,
					jobData->calculateTangents,
					jobData->cacheTexture,
					jobData->autoDetectionNormalMap,
					jobData->SRGB,
					jobData->createMipMaps,
					jobData->rgbFormat,
					jobData->asyncNodeLoadMesh);

				if (jobData->asyncNodeLoadMesh != nullptr) {
					AsyncTask(ENamedThreads::GameThread, [jobData, modelStructs, successMessage, success]() {
						if (jobData->asyncNodeLoadMesh != nullptr && jobData->asyncNodeLoadMesh->IsValidLowLevel()) {
							jobData->asyncNodeLoadMesh->jobComplete(modelStructs, successMessage, success,jobData->eventID);
						}
						jobData->deleteMe = true;
					});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_SaveMesh:
			{
				bool success = false;
				FString errorMessage;
				URealTimeImportMesh::getRealTimeImportMesh()->saveModelsToFile(
					jobData->WorldContextObject,
					jobData->exportMaterial,
					jobData->coordinateSystem,
					jobData->meshFileType,
					jobData->directoryType,
					jobData->filePath,
					success,
					errorMessage,
					jobData->modelStructs);

				if (jobData->asyncNodeSaveMesh != nullptr) {
					AsyncTask(ENamedThreads::GameThread, [jobData, errorMessage, success]() {
						if (jobData->asyncNodeSaveMesh != nullptr && jobData->asyncNodeSaveMesh->IsValidLowLevel()) {
							jobData->asyncNodeSaveMesh->jobComplete(errorMessage, success,jobData->eventID);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_LoadFile:
			{
				FString fileName;
				TArray<uint8> bytes;
				int32 errorCode;
				FString errorMessage;
				UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->LoadFile(jobData->directoryType, jobData->filePath,
					fileName, bytes, errorCode, errorMessage);

				if (jobData->asyncNodeLoadFile != nullptr) {
					AsyncTask(ENamedThreads::GameThread, [jobData, fileName, bytes, errorCode, errorMessage]() {
						if (jobData->asyncNodeLoadFile != nullptr && jobData->asyncNodeLoadFile->IsValidLowLevel()) {
							jobData->asyncNodeLoadFile->jobComplete(fileName, bytes, errorCode, errorMessage);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_SaveFile:
			{
				FString fileName;
				FString fullPath;
				int32 errorCode;
				FString errorMessage;
				UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->SaveFile(jobData->directoryType, jobData->filePath, jobData->createDirectories, jobData->overwriteFile,
					jobData->bytes, fileName, fullPath, errorCode, errorMessage);

				if (jobData->asyncNodeSaveFile != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, fileName, fullPath, errorCode, errorMessage]() {
						if (jobData->asyncNodeSaveFile != nullptr && jobData->asyncNodeSaveFile->IsValidLowLevel()) {
							jobData->asyncNodeSaveFile->jobComplete(fileName, fullPath, errorCode, errorMessage);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_LoadAllFiles:
			{

				int32 count;
				TArray<FString> files;
				TArray<FString> filePaths;
				bool success = UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->LoadAllFilesFromDirectory(jobData->directoryType, jobData->fileType, jobData->filePath, jobData->recursiveSearch,
					count, files, filePaths);

				if (jobData->asyncNodeLoadAllFilesFromDirectory != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, count, files, filePaths, success]() {
						if (jobData->asyncNodeLoadAllFilesFromDirectory != nullptr && jobData->asyncNodeLoadAllFilesFromDirectory->IsValidLowLevel()) {
							jobData->asyncNodeLoadAllFilesFromDirectory->jobComplete(count, files, filePaths, success);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_CreateWaveFromFile:
			{

				FString fileID;
				USoundWaveProcedural* soundWave;
				FString fileName;
				int32 errorCode = 0;
				FString errorMessage;
				URealTimeImportSound::getRealTimeImportSound()->CreateSoundWaveFromFile(jobData->directoryType, jobData->filePath,
					jobData->maxFileSize, fileID, jobData->soundFileType, soundWave, fileName, errorCode, errorMessage);

				if (jobData->asyncNodeCreateSoundWaveFromFile != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, fileID, soundWave, fileName, errorCode, errorMessage]() {
						if (jobData->asyncNodeCreateSoundWaveFromFile != nullptr && jobData->asyncNodeCreateSoundWaveFromFile->IsValidLowLevel()) {
							jobData->asyncNodeCreateSoundWaveFromFile->jobComplete(fileID, soundWave, fileName, errorCode, errorMessage);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_CreateWaveFromBytes:
			{

				FString fileID;
				USoundWaveProcedural* soundWave;
				FString fileName;
				int32 errorCode = 0;
				FString errorMessage;
				URealTimeImportSound::getRealTimeImportSound()->CreateSoundWaveFromBytes(jobData->name, jobData->bytes,
					jobData->maxFileSize, jobData->soundFileType, soundWave, errorCode, errorMessage);

				if (jobData->asyncNodeCreateSoundWaveFromBytes != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, soundWave, errorCode, errorMessage]() {
						if (jobData->asyncNodeCreateSoundWaveFromBytes != nullptr && jobData->asyncNodeCreateSoundWaveFromBytes->IsValidLowLevel()) {
							jobData->asyncNodeCreateSoundWaveFromBytes->jobComplete(soundWave, errorCode, errorMessage);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_LoadImageFile:
			{
				UTexture2D* texture;
				FString fileName;
				int32 errorCode = 0;
				FString errorMessage;
				URealTimeImportImage::getRealTimeImportImage()->LoadImageFile(jobData->directoryType, jobData->filePath,
					texture, fileName, errorCode, errorMessage,jobData->cacheTexture, jobData->compressionSettings, jobData->SRGB, jobData->createMipMaps, jobData->rgbFormat);

				if (jobData->asyncNodeLoadImageFile != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, texture, fileName, errorCode, errorMessage]() {
						if (jobData->asyncNodeLoadImageFile != nullptr && jobData->asyncNodeLoadImageFile->IsValidLowLevel()) {
							jobData->asyncNodeLoadImageFile->jobComplete(texture, fileName, errorCode, errorMessage,jobData->eventID);
						}
						jobData->deleteMe = true;
						});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			case ERTIThreadJobType::E_LoadImageBytes:
			{
				UTexture2D* texture;
				int32 errorCode = 0;
				FString errorMessage;
				URealTimeImportImage::getRealTimeImportImage()->LoadImageBytes(jobData->name, jobData->bytes,
					texture, errorCode, errorMessage,jobData->cacheTexture, jobData->compressionSettings, jobData->SRGB, jobData->createMipMaps, jobData->rgbFormat);

				if (jobData->asyncNodeLoadImageBytes != nullptr) {
					
					AsyncTask(ENamedThreads::GameThread, [jobData, texture, errorCode, errorMessage]() {
						if (jobData->asyncNodeLoadImageBytes != nullptr && jobData->asyncNodeLoadImageBytes->IsValidLowLevel()) {
							jobData->asyncNodeLoadImageBytes->jobComplete(texture, errorCode, errorMessage, jobData->eventID);
						}
						jobData->deleteMe = true;
					});
				}
				else {
					jobData->deleteMe = true;
				}
			}
			break;
			default:
				jobData->deleteMe = true;
			}
			toDelete.Add(jobData);
		}

		FPlatformProcess::Sleep(0.01);

		int32 i = 0;
		while (i < toDelete.Num()) {
			if (toDelete[i] != nullptr && toDelete[i]->deleteMe) {
				delete toDelete[i];
				toDelete.RemoveAt(i);
				continue;
			}
			
			i++;
		}
	}
	
	
	return 0;
}

void FRealTimeImportThread::addJob(FSRealtimeImportThreadJobData* jobData){
	jobQueue.Enqueue(jobData);
}

void FRealTimeImportThread::cancelAllJobs(){
	jobQueue.Empty();
}
