// Copyright 2018-2020 David Romanski (Socke). All Rights Reserved.
#pragma once

#include "RealTimeImport.h"
#include "RealTimeImportBPLibrary.h"
#include "FileFunctionsRealTimeImport.generated.h"

class FLoadFileThread;
class FSaveFileThread;
class FLoadAllFilesFromDirectoryThread;

UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API UFileFunctionsRealTimeImport : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static UFileFunctionsRealTimeImport* fileFunctionsRealTimeImport;
	UFUNCTION()
		static UFileFunctionsRealTimeImport* getFileFunctionsRealTimeImport();



	static FString getCleanDirectory(ERTIDirectoryType directoryType, FString filePath);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void writeBytesToFile(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes, bool& success);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void addBytesToFile(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes, bool& success);
	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
	//	static void splittFile(ERTIDirectoryType directoryType, FString filePath, int32 parts, bool& success);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static TArray<uint8> readBytesFromFile(ERTIDirectoryType directoryType, FString filePath, bool &success);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void readStringFromFile(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& data);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void writeStringToFile(ERTIDirectoryType directoryType, FString data, FString filePath, bool& success);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void getMD5FromFile(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& MD5);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void bytesToBase64String(TArray<uint8> bytes, FString& base64String);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static TArray<uint8> base64StringToBytes(FString base64String, bool& success);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void fileToBase64String(ERTIDirectoryType directoryType, FString filePath, bool& success, FString& base64String, FString& fileName);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool fileExists(ERTIDirectoryType directoryType, FString filePath);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool directoryExists(ERTIDirectoryType directoryType, FString path);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static int64 fileSize(ERTIDirectoryType directoryType, FString filePath);
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool deleteFile(ERTIDirectoryType directoryType, FString filePath);
	/** Delete a directory and return true if the directory was deleted or otherwise does not exist. **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool deleteDirectory(ERTIDirectoryType directoryType, FString filePath);
	/** Return true if the file is read only. **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool isReadOnly(ERTIDirectoryType directoryType, FString filePath);
	/** Attempt to move a file. Return true if successful. Will not overwrite existing files. **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool moveFile(ERTIDirectoryType directoryTypeTo, FString filePathTo, ERTIDirectoryType directoryTypeFrom, FString filePathFrom);
	/** Attempt to change the read only status of a file. Return true if successful. **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool setReadOnly(ERTIDirectoryType directoryType, FString filePath, bool bNewReadOnlyValue);
	/** Return the modification time of a file. Returns FDateTime::MinValue() on failure **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static FDateTime getTimeStamp(ERTIDirectoryType directoryType, FString filePath);
	/** Sets the modification time of a file **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static void	setTimeStamp(ERTIDirectoryType directoryType, FString filePath, FDateTime DateTime);
	/** Return the last access time of a file. Returns FDateTime::MinValue() on failure **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static FDateTime getAccessTimeStamp(ERTIDirectoryType directoryType, FString filePath);
	/** For case insensitive filesystems, returns the full path of the file with the same case as in the filesystem */
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static FString getFilenameOnDisk(ERTIDirectoryType directoryType, FString filePath);
	/** Create a directory and return true if the directory was created or already existed. **/
	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static bool createDirectory(ERTIDirectoryType directoryType, FString path);


	static void LoadFile(ERTIDirectoryType directoryType, FString filePath, FString& fileName, TArray<uint8>& bytes, int32& errorCode, FString& errorMessage);
	void LoadFileAsync(ERTIDirectoryType directoryType, FString filePath, FString eventID);
	static void SaveFile(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString& fileName, FString& fullPath, int32& errorCode, FString& errorMessage);
	void SaveFileAsync(ERTIDirectoryType directoryType, FString filePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString eventID);
	static bool LoadAllFilesFromDirectory(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, int32& count, TArray<FString>& files, TArray<FString>& filePaths);
	void LoadAllFilesFromDirectoryAsync(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, FString eventID);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static FString Base64Encode(TArray<uint8> bytes);

	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|File")
		static TArray<uint8> Base64Decode(FString base64EncodedString);


	void triggerLoadFileEventDelegate(int32 errorCode, FString eventID, TArray<uint8>& bytes, FString fileName, FString errorMessage);
	void triggerSaveFileEventDelegate(int32 errorCode, FString eventID, FString fileName, FString fullPath, FString errorMessage);
	void triggerLoadAllFilesFromDirectoryEventDelegate(FString eventID, int32& count, TArray<FString>& files, TArray<FString>& filePaths);

private:

	class FLoadFileThread* loadFileThread = nullptr;
	class FSaveFileThread* saveFileThread = nullptr;
	class FLoadAllFilesFromDirectoryThread* loadAllFilesFromDirectoryThread = nullptr;
};

/******************* Asyc Threads *************************/
class FLoadFileThread : public FRunnable {

public:

	FLoadFileThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, FString eventIDP) :
		main(mainP),
		directoryType(directoryTypeP),
		filePath(filePathP),
		eventID(eventIDP) {
		FString threadName = "FLoadFileThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {

		while (true) {
			TArray<uint8> bytes;
			FString fileName;
			int32 errorCode;
			FString errorMessage;

			main->LoadFile(directoryType, filePath, fileName, bytes, errorCode, errorMessage);
			main->triggerLoadFileEventDelegate(errorCode, eventID, bytes, fileName, errorMessage);

			bytes.Empty();

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}


		}

		return 0;
	}

	void restartThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, FString eventIDP) {
		main = mainP;
		directoryType = directoryTypeP;
		filePath = filePathP;
		eventID = eventIDP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}


protected:
	UFileFunctionsRealTimeImport* main = nullptr;
	ERTIDirectoryType directoryType;
	FString filePath;
	FString eventID;

	FRunnableThread* thread = nullptr;
	bool paused = true;
};

class FSaveFileThread : public FRunnable {

public:

	FSaveFileThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, bool createDirectoriesP, bool overwriteFileP, TArray<uint8> bytesP, FString eventIDP) :
		main(mainP),
		directoryType(directoryTypeP),
		filePath(filePathP),
		createDirectories(createDirectoriesP),
		overwriteFile(overwriteFileP),
		bytes(bytesP),
		eventID(eventIDP) {
		FString threadName = "FSaveFileThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {

		while (true) {
			FString fileName;
			FString fullPath;
			int32 errorCode;
			FString errorMessage;

			main->SaveFile(directoryType, filePath, createDirectories, overwriteFile, bytes, fileName, fullPath, errorCode, errorMessage);
			main->triggerSaveFileEventDelegate(errorCode, eventID, fileName, fullPath, errorMessage);


			bytes.Empty();

			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}

		return 0;
	}

	void restartThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, FString filePathP, bool createDirectoriesP, bool overwriteFileP, TArray<uint8> bytesP, FString eventIDP) {
		main = mainP;
		directoryType = directoryTypeP;
		filePath = filePathP;
		createDirectories = createDirectoriesP;
		overwriteFile = overwriteFileP;
		bytes = bytesP;
		eventID = eventIDP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}


protected:
	UFileFunctionsRealTimeImport* main = nullptr;
	ERTIDirectoryType directoryType;
	FString filePath;
	bool createDirectories;
	bool overwriteFile;
	TArray<uint8> bytes;
	FString eventID;

	FRunnableThread* thread = nullptr;
	bool paused = true;
};

class FLoadAllFilesFromDirectoryThread : public FRunnable {

public:

	FLoadAllFilesFromDirectoryThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, bool recursiveSearchP, ERTIFileType fileTypeP, FString dirPathP, FString eventIDP) :
		main(mainP),
		directoryType(directoryTypeP),
		recursiveSearch(recursiveSearchP),
		fileType(fileTypeP),
		dirPath(dirPathP),
		eventID(eventIDP) {
		FString threadName = "FLoadAllFilesFromDirectoryThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {

		while (true) {
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;

			main->LoadAllFilesFromDirectory(directoryType, fileType, dirPath, recursiveSearch, count, files, filePaths);
			main->triggerLoadAllFilesFromDirectoryEventDelegate(eventID, count, files, filePaths);


			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused) {
				FPlatformProcess::Sleep(0.01);
			}
		}

		return 0;
	}


	void restartThread(UFileFunctionsRealTimeImport* mainP, ERTIDirectoryType directoryTypeP, bool recursiveSearchP, ERTIFileType fileTypeP, FString dirPathP, FString eventIDP) {
		main = mainP;
		directoryType = directoryTypeP;
		recursiveSearch = recursiveSearchP;
		fileType = fileTypeP;
		dirPath = dirPathP;
		eventID = eventIDP;

		pauseThread(false);
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

protected:
	UFileFunctionsRealTimeImport* main = nullptr;
	ERTIDirectoryType directoryType;
	bool recursiveSearch;
	ERTIFileType fileType;
	FString dirPath;
	FString eventID;

	FRunnableThread* thread = nullptr;
	bool paused = true;
};