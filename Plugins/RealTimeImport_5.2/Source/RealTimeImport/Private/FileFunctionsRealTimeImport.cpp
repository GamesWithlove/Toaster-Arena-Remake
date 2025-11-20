// Copyright 2018-2020 David Romanski (Socke). All Rights Reserved.

#include "FileFunctionsRealTimeImport.h"

UFileFunctionsRealTimeImport* UFileFunctionsRealTimeImport::fileFunctionsRealTimeImport;
UFileFunctionsRealTimeImport::UFileFunctionsRealTimeImport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	fileFunctionsRealTimeImport = this;
}

UFileFunctionsRealTimeImport* UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport() {
	return fileFunctionsRealTimeImport;
}

FString UFileFunctionsRealTimeImport::getCleanDirectory(ERTIDirectoryType directoryType, FString filePath) {
	if (directoryType == ERTIDirectoryType::E_ad) {
		return FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		return FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}
}

void UFileFunctionsRealTimeImport::writeBytesToFile(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes, bool& success) {
	success = FFileHelper::SaveArrayToFile(bytes, *getCleanDirectory(directoryType, filePath));
}

void UFileFunctionsRealTimeImport::addBytesToFile(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes, bool& success) {
	FArchive* writer = IFileManager::Get().CreateFileWriter(*getCleanDirectory(directoryType, filePath), EFileWrite::FILEWRITE_Append);
	if (!writer) {
		success = false;
		return;
	}
	writer->Seek(writer->TotalSize());
	writer->Serialize(bytes.GetData(), bytes.Num());
	writer->Close();
	delete writer;

	success = true;
}

//void UFileFunctionsRealTimeImport::splittFile(ERTIDirectoryType directoryType, FString filePath, int32 parts, bool& success){
//	if (parts <= 0)
//		parts = 1;
//	FArchive* reader = IFileManager::Get().CreateFileReader(*getCleanDirectory(directoryType, filePath));
//	if (!reader) {
//		success = false;
//		return;
//	}
//	
//	int64 splittAfterBytes = reader->TotalSize()/ ((int64)parts);
//	TArray<uint8> bytes;
//
//	for (int32 i = 0; i < parts; i++){
//		bytes.AddUninitialized(splittAfterBytes);
//		reader->Serialize(bytes.GetData(), splittAfterBytes);
//		if (FFileHelper::SaveArrayToFile(bytes, *getCleanDirectory(directoryType, filePath)) == false) {
//			success = false;
//			return;
//		}
//		splittAfterBytes =
//		reader->Seek();
//	}
//
//}

TArray<uint8> UFileFunctionsRealTimeImport::readBytesFromFile(ERTIDirectoryType directoryType, FString filePath, bool& success) {
	TArray<uint8> result;
	success = FFileHelper::LoadFileToArray(result, *getCleanDirectory(directoryType, filePath));
	return result;
}

void UFileFunctionsRealTimeImport::readStringFromFile(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& data) {
	data.Empty();
	success = FFileHelper::LoadFileToString(data, *getCleanDirectory(directoryType, filePath));
}

void UFileFunctionsRealTimeImport::writeStringToFile(ERTIDirectoryType directoryType, FString data, FString filePath, bool& success) {
	success = FFileHelper::SaveStringToFile(data, *getCleanDirectory(directoryType, filePath));
}


void UFileFunctionsRealTimeImport::getMD5FromFile(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& MD5) {
	MD5.Empty();
	FArchive* reader = IFileManager::Get().CreateFileReader(*getCleanDirectory(directoryType, filePath));
	if (!reader) {
		success = false;
		return;
	}

	TArray<uint8> byteArrayTmp;
	int64 totalSize = reader->TotalSize();
	int64 loadedBytes = 0;
	int64 leftUploadBytes = 1024;


	if (totalSize < leftUploadBytes)
		leftUploadBytes = totalSize;


	uint8 Digest[16];
	FMD5 Md5Gen;

	while ((loadedBytes + leftUploadBytes) <= totalSize) {
		byteArrayTmp.Reset(leftUploadBytes);
		byteArrayTmp.AddUninitialized(leftUploadBytes);
		reader->Serialize(byteArrayTmp.GetData(), byteArrayTmp.Num());
		loadedBytes += leftUploadBytes;
		reader->Seek(loadedBytes);

		Md5Gen.Update(byteArrayTmp.GetData(), byteArrayTmp.Num());
	}

	leftUploadBytes = totalSize - loadedBytes;
	if (leftUploadBytes > 0) {
		byteArrayTmp.Reset(leftUploadBytes);
		byteArrayTmp.AddUninitialized(leftUploadBytes);
		reader->Serialize(byteArrayTmp.GetData(), byteArrayTmp.Num());
		loadedBytes += leftUploadBytes;
		Md5Gen.Update(byteArrayTmp.GetData(), byteArrayTmp.Num());
	}

	if (reader != nullptr) {
		reader->Close();
		delete reader;
	}

	if (totalSize != loadedBytes) {
		success = false;
		return;
	}

	Md5Gen.Final(Digest);
	for (int32 i = 0; i < 16; i++) {
		MD5 += FString::Printf(TEXT("%02x"), Digest[i]);
	}

	success = true;
}


void UFileFunctionsRealTimeImport::bytesToBase64String(TArray<uint8> bytes, FString& base64String) {
	base64String.Empty();
	base64String = FBase64::Encode(bytes);
}

TArray<uint8> UFileFunctionsRealTimeImport::base64StringToBytes(FString base64String, bool& success) {
	TArray<uint8> fileData;
	success = FBase64::Decode(*base64String, fileData);
	return fileData;
}

void UFileFunctionsRealTimeImport::fileToBase64String(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& base64String, FString& fileName) {
	base64String.Empty();
	fileName.Empty();
	TArray<uint8> fileData;
	if (!FFileHelper::LoadFileToArray(fileData, *getCleanDirectory(directoryType, filePath))) {
		success = false;
		return;
	}
	base64String = FBase64::Encode(fileData);
	success = true;
}

bool UFileFunctionsRealTimeImport::fileExists(ERTIDirectoryType directoryType, FString filePath) {
	return FPaths::FileExists(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::directoryExists(ERTIDirectoryType directoryType, FString path) {
	return FPaths::DirectoryExists(*getCleanDirectory(directoryType, path));
}

int64 UFileFunctionsRealTimeImport::fileSize(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().FileSize(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::deleteFile(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::deleteDirectory(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().DeleteDirectory(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::isReadOnly(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().IsReadOnly(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::moveFile(ERTIDirectoryType directoryTypeTo, FString filePathTo, ERTIDirectoryType directoryTypeFrom, FString filePathFrom) {
	return FPlatformFileManager::Get().GetPlatformFile().MoveFile(*getCleanDirectory(directoryTypeTo, filePathTo), *getCleanDirectory(directoryTypeFrom, filePathFrom));
}

bool UFileFunctionsRealTimeImport::setReadOnly(ERTIDirectoryType directoryType, FString filePath, bool bNewReadOnlyValue) {
	return FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*getCleanDirectory(directoryType, filePath), bNewReadOnlyValue);
}

FDateTime UFileFunctionsRealTimeImport::getTimeStamp(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().GetTimeStamp(*getCleanDirectory(directoryType, filePath));
}

void UFileFunctionsRealTimeImport::setTimeStamp(ERTIDirectoryType directoryType, FString filePath, FDateTime DateTime) {
	FPlatformFileManager::Get().GetPlatformFile().SetTimeStamp(*getCleanDirectory(directoryType, filePath), DateTime);
}

FDateTime UFileFunctionsRealTimeImport::getAccessTimeStamp(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().GetAccessTimeStamp(*getCleanDirectory(directoryType, filePath));
}

FString UFileFunctionsRealTimeImport::getFilenameOnDisk(ERTIDirectoryType directoryType, FString filePath) {
	return FPlatformFileManager::Get().GetPlatformFile().GetFilenameOnDisk(*getCleanDirectory(directoryType, filePath));
}

bool UFileFunctionsRealTimeImport::createDirectory(ERTIDirectoryType directoryType, FString path) {
	return FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*getCleanDirectory(directoryType, path));
}


void UFileFunctionsRealTimeImport::LoadFile(ERTIDirectoryType directoryType, FString filePath, FString& fileName, TArray<uint8>& bytes, int32& errorCode, FString& errorMessage) {

	bytes.Empty();

	if (filePath.IsEmpty()) {
		errorMessage = "FilePath not set.";
		errorCode = 1;
		return;
	}

	FString dir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}


	if (!FPaths::FileExists(dir)) {
		errorMessage = "File not found:" + dir;
		errorCode = 2;
		return;
	}


	if (!FFileHelper::LoadFileToArray(bytes, *dir)) {
		errorMessage = "Can't read File:" + dir;
		errorCode = 3;
		return;
	}

	fileName = FPaths::GetCleanFilename(filePath);

	errorCode = 0;
}

void UFileFunctionsRealTimeImport::LoadFileAsync(ERTIDirectoryType directoryType, FString filePath, FString eventID) {
	if (loadFileThread == nullptr) {
		loadFileThread = new FLoadFileThread(this, directoryType, filePath, eventID);
	}
	else {
		loadFileThread->restartThread(this, directoryType, filePath, eventID);
	}

}

bool UFileFunctionsRealTimeImport::LoadAllFilesFromDirectory(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath,
	bool recursiveSearch, int32& count, TArray<FString>& files, TArray<FString>& filePaths) {

	FString dir;
	FString absoluteDir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		if (dirPath.Len() < 1) {
			return false;
		}
		dir = FPaths::ConvertRelativePathToFull(dirPath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + dirPath);
	}

	absoluteDir = dir;
	if (absoluteDir.EndsWith("\\") == false && absoluteDir.EndsWith("/") == false)
		absoluteDir += "/";

	FPaths::NormalizeDirectoryName(dirPath);


	if (!FPaths::DirectoryExists(dir)) {
		return false;
	}
	IFileManager& FileManager = IFileManager::Get();


	switch (fileType)
	{
	case ERTIFileType::E_wav:
		dir += "/*.wav";
		break;
	case ERTIFileType::E_ogg:
		dir += "/*.ogg";
		break;
	case ERTIFileType::E_png:
		dir += "/*.png";
		break;
	case ERTIFileType::E_bmp:
		dir += "/*.bmp";
		break;
	case ERTIFileType::E_jpg:
		dir += "/*.jpg";
		break;
	case ERTIFileType::E_obj:
		dir += "/*.obj";
		break;
	case ERTIFileType::E_fbx:
		dir += "/*.fbx";
		break;
	case ERTIFileType::E_stl:
		dir += "/*.stl";
		break;
	case ERTIFileType::E_gltf:
		dir += "/*.gltf";
		break;
	case ERTIFileType::E_glb:
		dir += "/*.glb";
		break;
	case ERTIFileType::E_all:
		dir += "/*.*";
		break;
	}

	if (recursiveSearch) {
		TArray<FString> filesFound;
		FileManager.FindFiles(filesFound, *dir, true, false);

		if (dirPath.Len() > 0 && dirPath.EndsWith("/") == false)
			dirPath += "/";
		//files
		for (int32 i = 0; i < filesFound.Num(); i++) {
			filePaths.Add(dirPath + filesFound[i]);
		}
		files.Append(filesFound);

		//dirs
		TArray<FString> dirsFound;
		FileManager.FindFiles(dirsFound, *(absoluteDir + "*"), false, true);
		for (int32 i = 0; i < dirsFound.Num(); i++) {
			LoadAllFilesFromDirectory(directoryType, fileType, (dirPath + dirsFound[i]), true, count, files, filePaths);
		}

	}
	else {
		FileManager.FindFiles(files, *dir, true, false);

		if (dirPath.Len() > 0)
			dirPath += "/";
		for (int32 i = 0; i < files.Num(); i++) {
			filePaths.Add(dirPath + files[i]);
		}
	}

	count = files.Num();
	return true;
}

void UFileFunctionsRealTimeImport::LoadAllFilesFromDirectoryAsync(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, FString eventID) {
	if (loadAllFilesFromDirectoryThread == nullptr) {
		loadAllFilesFromDirectoryThread = new FLoadAllFilesFromDirectoryThread(this, directoryType, recursiveSearch, fileType, dirPath, eventID);
	}
	else {
		loadAllFilesFromDirectoryThread->restartThread(this, directoryType, recursiveSearch, fileType, dirPath, eventID);
	}
}

void UFileFunctionsRealTimeImport::SaveFile(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString& fileName, FString& fullPath, int32& errorCode, FString& errorMessage) {
	if (filePath.IsEmpty()) {
		errorMessage = "FilePath not set.";
		errorCode = 1;
		return;
	}

	fileName = FPaths::GetCleanFilename(filePath);
	if (fileName.Len() < 1 || fileName.Contains(".") == false) {
		errorMessage = "Missing Filename in this Filepath:" + filePath;
		errorCode = 6;
		return;
	}

	FString dir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}

	fullPath = dir;

	FString dirOnly = FPaths::GetPath(dir);
	if (!FPaths::DirectoryExists(dirOnly) && dirOnly.Len() > 2) {
		if (!createDirectories) {
			errorMessage = "Dir not found:" + dirOnly;
			errorCode = 2;
			return;
		}
		if (!FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*dirOnly)) {
			errorMessage = "Can't create dir tree:" + dirOnly;
			errorCode = 3;
			return;
		}
	}

	if (FPaths::FileExists(dir)) {
		if (!overwriteFile) {
			errorMessage = "File already exists:" + dir;
			errorCode = 4;
			return;
		}
		else {
			if (!FFileHelper::SaveArrayToFile(bytes, *dir)) {
				errorMessage = "Can't write File:" + dir;
				errorCode = 5;
				return;
			}
		}
	}
	else {
		if (!FFileHelper::SaveArrayToFile(bytes, *dir)) {
			errorMessage = "Can't write File:" + dir;
			errorCode = 5;
			return;
		}
	}


	errorCode = 0;
}

void UFileFunctionsRealTimeImport::SaveFileAsync(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString eventID) {

	if (saveFileThread == nullptr) {
		saveFileThread = new FSaveFileThread(this, directoryType, filePath, createDirectories, overwriteFile, bytes, eventID);
	}
	else {
		saveFileThread->restartThread(this, directoryType, filePath, createDirectories, overwriteFile, bytes, eventID);
	}
}

FString UFileFunctionsRealTimeImport::Base64Encode(TArray<uint8> bytes) {
	return FBase64::Encode(bytes);
}

TArray<uint8> UFileFunctionsRealTimeImport::Base64Decode(FString base64EncodedString) {
	TArray<uint8> fileData;
	FBase64::Decode(*base64EncodedString, fileData);
	return fileData;
}

void UFileFunctionsRealTimeImport::triggerLoadFileEventDelegate(int32 errorCode, FString eventID, TArray<uint8>& bytes, FString fileName, FString errorMessage){
	AsyncTask(ENamedThreads::GameThread, [eventID, bytes, fileName, errorCode, errorMessage]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onLoadFileEventDelegate.Broadcast(errorCode, eventID, bytes, fileName, errorMessage);
	});
}

void UFileFunctionsRealTimeImport::triggerSaveFileEventDelegate(int32 errorCode, FString eventID, FString fileName, FString fullPath, FString errorMessage){
	AsyncTask(ENamedThreads::GameThread, [eventID, fileName, fullPath, errorCode, errorMessage]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onSaveFileEventDelegate.Broadcast(errorCode, eventID, fileName, fullPath, errorMessage);
	});
}

void UFileFunctionsRealTimeImport::triggerLoadAllFilesFromDirectoryEventDelegate(FString eventID, int32& count, TArray<FString>& files, TArray<FString>& filePaths){
	AsyncTask(ENamedThreads::GameThread, [eventID, count, files, filePaths]() {
		URealTimeImportBPLibrary::getRealTimeImportTarget()->onLoadAllFilesFromDirectoryEventDelegate.Broadcast(eventID, count, files, filePaths);
	});
}
