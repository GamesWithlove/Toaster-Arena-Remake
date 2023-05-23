// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/PakFile/Public/IPlatformFilePak.h"
#include "HAL/PlatformFilemanager.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Misc/PackageName.h"

class PAKLOADER_API FPakLoaderFileVisitor : public IPlatformFile::FDirectoryVisitor
{
public:
	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		if (!bIsDirectory)
		{
			Files.Add(FilenameOrDirectory);
		}
		return true;
	}

	TArray<FString> Files;
};

class PAKLOADER_API FPakLoader
{
public:
	FPakLoader();
	~FPakLoader();

	FPakLoader(const FPakLoader&) = delete;
	FPakLoader& operator=(const FPakLoader&) = delete;

	/* Returns instance of this singleton class */
	static FPakLoader *Get();

	/* Gets the PakFile platform file. */
	FPakPlatformFile *GetPakPlatformFile();

	/* Resets the platform file to it's original. Only useful for editor (non shipping builds). */
	void ResetPlatformFile();

	/* Gets an array of all mounted pak files. */
	TArray<FString> GetMountedPakFilenames();

	/* Checks if the file exists and file is a valid pak file format. */
	bool IsValidPakFile(const FString &PakFilename, int64 &OutPakSize, bool bSigned = false);

	/* Returns search pak order acoording to how the path starts. */
	int32 GetPakOrderFromPakFilename(const FString& PakFilePath);

	/* Mounts a pak file and registers mount point automatically. */
	bool MountPakFileEasy(const FString& PakFilename);

	/* Mounts a pak file. Set PakOrder = INDEX_NONE if unsure. Leave mount path empty to use the mount path found in the pak file. */
	bool MountPakFile(const FString &PakFilename, int32 PakOrder, const FString &MountPath);

	/* Unmounts a pak file. */
	bool UnmountPakFile(const FString &PakFilename);

	/*
		Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.
		Requires that the path is registered within Unreal. (RegisterMountPoint)
		Example: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh

		@Filename: Absolute file or path.
		@PackageName: Will hold the converted path. Empty if Filename's path is not registered.
	*/
	void RegisterMountPoint(const FString& RootPath, const FString& ContentPath);
	void UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath);

	/* Get the root and content path for this pak. This is a guess by checking where the AssetRegistry.bin file is in the pak file. */
	bool GetRootPathAndContentPathForPak(const FPakFile& PakFile, FString& OutRootPath, FString& OutContentPath);

	TArray<FString> GetFilesInDirectory(const FString &Directory);
	TArray<FString> GetFilesInDirectoryRecursively(const FString &Directory);
	TArray<FString> GetFilesInPak(const FString &PakFilename, bool bUAssetOnly = true);

	/* Load the AssetRegistry.bin to publish files to Unreal's asset registry. */
	void LoadAssetRegistryFile(const FString &AssetRegistryFile);

	bool DoesDirectoryExist(const FString &Directory);
	bool DoesFileExist(const FString &Filename);

	/* Load object with desired class from path. */
	template<class T>
	T *LoadObjectFromPak(const FString &Filename)
	{
		const FString Name = T::StaticClass()->GetName() + TEXT("'") + Filename + TEXT(".") + FPackageName::GetShortName(Filename) + TEXT("'");
		return Cast<T>(StaticLoadObject(T::StaticClass(), nullptr, *Name));
	}

	/* Load class file. Adds correct loading format with _C suffix. */
	UClass *LoadClassFromPak(const FString &Filename);

	/* Read content of a file as string. Requires full path filename. */
	bool ReadStringFromPak(const FString &Filename, FString &OutStr);

protected:
	FPakPlatformFile *PakPlatformFile = nullptr;

#if WITH_EDITOR
	IPlatformFile *OriginalPlatformFile = nullptr;
#endif

private:
	static FPakLoader *Instance;
};
