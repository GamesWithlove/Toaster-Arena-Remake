// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "PakLoaderLibrary.generated.h"

class UTexture2D;
class UStaticMesh;
class USoundBase;
class UMaterial;
class UMaterialInstanceConstant;
class USkeletalMesh;
class UAnimSequence;

/**
 *
 */
UCLASS()
class PAKLOADER_API UPakLoaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/* Returns true if this current build is a packaged (shipping) build. Returns false if it is an editor build. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static bool IsPackagedBuild();

	/*
		Logs to a file and console, helpful for testing packaged builds to see whats going on.
	
		@bEnable: treu to enable logging.
		@NewLogPath: File to output the text log.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static void EnableRuntimeLog(bool bEnable, const FString &NewLogPath);

	/*
		Logs to a file and console, helpful for testing packaged builds to see whats going on.
		Requires EnableRuntimeLog to be called first.

		@Text: Text to log.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static void RuntimeLog(const FString &Text);

	/* Returns name of this Unreal project. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static FString GetProjectName();

	/* Returns directory of Unreal's persistent download directory. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static FString ProjectPersistentDownloadDir();

	/*
		Returns SHA1 checksum of a file.
	
		@Filename: File to generate checksum for.
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static FString SHA1SUM(const FString &Filename);

	/*
		Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.
		Requires that the path is registered within Unreal. (RegisterMountPoint)
		Example: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh
	
		@Filename: Absolute file or path.
		@PackageName: Will hold the converted path. Empty if Filename's path is not registered.
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static bool TryConvertFilenameToLongPackageName(const FString &Filename, FString &PackageName);

	/* 
		Returns everything after the last slash.
		Example: /Game/Textures/T_MyTexture = T_MyTexture
	
		@LongName: Long package name to short package name.
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static FString GetShortName(const FString &LongName);

	/* Returns an array of all currently mounted pak files. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static TArray<FString> GetMountedPakFilenames();

	/*
		Tests if a file on disk is a valid .pak file. Also returns size in bytes of the Pak content.
	
		@PakFilename: .pak file on disk.
		@PakSize: If pak file is valid then this variable will hold the pak's size in bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static bool IsValidPakFile(const FString &PakFilename, int64 &PakSize);

	/*
		Mounts a pak file and automatically tries to register the mount path.
		If you use this function then you don't have to call RegisterMountPoint yourself.
		This function also automatically tries to load the asset registry file of the pak.
		This only requirement for this function is that the pak file contains an AssetRegistry.bin file
		in order to detect the root and content path automatically.

		@PakFilename: .pak file on disk.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static bool MountPakFileEasy(const FString &PakFilename);

	/*
		Mounts a pak file. !!!Read the plugins documentation to learn about mount points etc.!!!

		@PakFilename: .pak file on disk.
		@MountPath: Where to mount the Pak content. Leave empty if unsure (mount path as specified in the pak file will be used).
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static bool MountPakFile(const FString &PakFilename, const FString &MountPath);

	/*
		Unmounts a Pak that was previously mounted.

		@PakFilename: .pak file on disk to unmount.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static bool UnmountPakFile(const FString &PakFilename);

	/*
		Creates a link between a root path and a package content path (mount point).
		This is required to make references between assets work. Should be called after mounting a pak.
		See the parameters below for an example. After calling this function, the RootPath will point to the ContentPath.
		Without registering a mount point the engine doesn't know the root path of your mounted plugin.
		The ContentPath is the mount point of the pak file + the further part to your "Content" folder.
		See this image for another example: https://drive.google.com/file/d/1jKlOshFSnXQIXwKyENl1zwsskhl4Vke2/view?usp=sharing
		
		@RootPath: Top content folder name of where your assets are in (Example: /TestDLC/).
		@ContentPath: The path inside a pak to where the RootPath should point to. (Example: ../../../TestProject/Plugins/TestDLC/Content/)
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static void RegisterMountPoint(const FString &RootPath, const FString &ContentPath);

	/*
		Unregister previously registered mount point. See RegisterMountPoint function.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static void UnRegisterMountPoint(const FString &RootPath, const FString &ContentPath);

	/*
		Loads an AssetRegistry.bin file to publish new files to Unreal's asset registry.
	
		@AssetRegistryFile: Full path to an AssetRegistry.bin file. Example: (../../../TestProject/Plugins/TestDLC/AssetRegistry.bin)
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static void LoadPakAssetRegistryFile(const FString &AssetRegistryFile);

	/*
		Registers an AES encryption key to the engine.

		@Guid: The encryption key guid. For example 00000000000000000000000000000000
		@AesKey: The AES key as base64. For example: zLQDKoikfG77t0B84QGt8CTpAyVjjj86dX3vo8mEmUE=
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static bool RegisterEncryptionKey(const FString &Guid, const FString &AesKey);

	/*
		Returns all files in a specific pak directory.
		
		@PakDirectory: Path in pak (Example: ../../../TestProject)
		@bRecursively: true to also return files in subfolders.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader")
	static TArray<FString> GetFilesInPakDirectory(const FString &PakDirectory, bool bRecursively);

	/*
		Returns all files from inside a .pak file

		@PakFilename: .pak file on disk.
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static TArray<FString> GetFilesInPak(const FString &PakFilename, bool bUAssetOnly = true);

	/*
		Tests if a specific pak directory exists.
		
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static bool DoesPakDirectoryExist(const FString &PakDirectory);

	/*
		Loads any class (ie Blueprints) from a pak file. Returns UClass which you can cast to your desired class (ie AActor).
	
		@Filename: The file to load as class. (Example: /TestDLC/Blueprints/BP_Test)
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UClass *GetPakFileClass(const FString &Filename);

	/*
		Loads any object (assets) from a pak file. Returns UObject which you can cast to your desired asset class type.
	
		@Filename: The file to load as object. (Example: /TestDLC/Meshes/SM_Chair)
	*/
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UObject *GetPakFileObject(const FString &Filename);

	/* Utility to load UTexture2D asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UTexture2D *GetPakFileTexture2D(const FString &Filename);

	/* Utility to load UStaticMesh asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UStaticMesh *GetPakFileStaticMesh(const FString &Filename);

	/* Utility to load USkeletalMesh asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static USkeletalMesh *GetPakFileSkeletalMesh(const FString &Filename);

	/* Utility to load USoundBase asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static USoundBase *GetPakFileSound(const FString &Filename);

	/* Utility to load UMaterial asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UMaterial *GetPakFileMaterial(const FString &Filename);

	/* Utility to load UMaterialInstanceConstant asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UMaterialInstanceConstant *GetPakFileMaterialInstanceConstant(const FString &Filename);

	/* Utility to load UAnimSequence asset from pak. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static UAnimSequence *GetPakFileAnimSequence(const FString &Filename);

	/* Reads content as string from pak. Requires full absolute path. */
	UFUNCTION(BlueprintPure, Category = "PakLoader")
	static bool GetPakFileText(const FString &Filename, FString &String);
};
