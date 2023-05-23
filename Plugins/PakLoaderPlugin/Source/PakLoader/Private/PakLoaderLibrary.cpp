// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#include "PakLoaderLibrary.h"
#include "PakLoader.h"
#include "LogHelper.h"
#include "Misc/FileHelper.h"
#include "Misc/CoreDelegates.h"
#include "Core/Public/Misc/SecureHash.h"
#include "Engine/Engine.h" // For GEngine / IsPackagedBuild
#include "Engine/LocalPlayer.h" // For IsPackagedBuild
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"

bool UPakLoaderLibrary::IsPackagedBuild()
{
	ULocalPlayer* LocalPlayer = GEngine->FindFirstLocalPlayerFromControllerId(0);

	if (!LocalPlayer)
	{
		return true;
	}

	UWorld *World = LocalPlayer->GetWorld();

	if (World)
	{
		if (World->GetNetMode() == ENetMode::NM_DedicatedServer)
		{
			return true;
		}

		if (World->WorldType == EWorldType::Editor ||
			World->WorldType == EWorldType::EditorPreview ||
			World->WorldType == EWorldType::PIE)
		{
			return false;
		}
	}

	return true;
}

void UPakLoaderLibrary::EnableRuntimeLog(bool bEnable, const FString &NewLogPath)
{
	FLogHelper::EnableLogging(bEnable);
	FLogHelper::SetLogPath(NewLogPath);
}

void UPakLoaderLibrary::RuntimeLog(const FString &Text)
{
	FLogHelper::Log(LL_LOG, Text);
}

FString UPakLoaderLibrary::GetProjectName()
{
	return FApp::GetProjectName();
}

FString UPakLoaderLibrary::ProjectPersistentDownloadDir()
{
	return FPaths::ProjectPersistentDownloadDir();
}

FString UPakLoaderLibrary::SHA1SUM(const FString &Filename)
{
	TArray<uint8> FileArray;

	if (!FFileHelper::LoadFileToArray(FileArray, *Filename))
	{
		return FString();
	}

	FSHAHash ShaHash;
	FSHA1::HashBuffer(&FileArray[0], FileArray.Num(), ShaHash.Hash);

	return ShaHash.ToString();
}

bool UPakLoaderLibrary::TryConvertFilenameToLongPackageName(const FString &Filename, FString &PackageName)
{
	return FPackageName::TryConvertFilenameToLongPackageName(Filename, PackageName);
}

FString UPakLoaderLibrary::GetShortName(const FString &LongName)
{
	return FPackageName::GetShortName(LongName);
}

TArray<FString> UPakLoaderLibrary::GetMountedPakFilenames()
{
	return FPakLoader::Get()->GetMountedPakFilenames();
}

bool UPakLoaderLibrary::IsValidPakFile(const FString &PakFilename, int64 &PakSize)
{
	return FPakLoader::Get()->IsValidPakFile(PakFilename, PakSize, false);
}

bool UPakLoaderLibrary::MountPakFileEasy(const FString& PakFilename)
{
	return FPakLoader::Get()->MountPakFileEasy(PakFilename);
}

bool UPakLoaderLibrary::MountPakFile(const FString &PakFilename, const FString &MountPath)
{
	return FPakLoader::Get()->MountPakFile(PakFilename, INDEX_NONE, MountPath);
}

bool UPakLoaderLibrary::UnmountPakFile(const FString &PakFilename)
{
	return FPakLoader::Get()->UnmountPakFile(PakFilename);
}

void UPakLoaderLibrary::RegisterMountPoint(const FString &RootPath, const FString &ContentPath)
{
	FPakLoader::Get()->RegisterMountPoint(RootPath, ContentPath);
}

void UPakLoaderLibrary::UnRegisterMountPoint(const FString &RootPath, const FString &ContentPath)
{
	FPakLoader::Get()->UnRegisterMountPoint(RootPath, ContentPath);
}

void UPakLoaderLibrary::LoadPakAssetRegistryFile(const FString &AssetRegistryFile)
{
	FPakLoader::Get()->LoadAssetRegistryFile(AssetRegistryFile);
}

bool UPakLoaderLibrary::RegisterEncryptionKey(const FString &Guid, const FString &AesKey)
{
	if (AesKey.IsEmpty())
		return false;

	FGuid EncryptionKeyGuid;

	if (Guid.Len() > 0)
	{
		if (!FGuid::Parse(Guid, EncryptionKeyGuid))
		{
			return false;
		}
	}

	TArray<uint8> KeyBytes;
	if (!FBase64::Decode(AesKey, KeyBytes))
		return false;

	check(KeyBytes.Num() == sizeof(FAES::FAESKey));
	
	FAES::FAESKey EncryptionKey;
	FMemory::Memcpy(EncryptionKey.Key, &KeyBytes[0], sizeof(EncryptionKey.Key));

#if ENGINE_MINOR_VERSION <= 25 && ENGINE_MAJOR_VERSION == 4
	return FCoreDelegates::GetRegisterEncryptionKeyDelegate().ExecuteIfBound(EncryptionKeyGuid, EncryptionKey);
#else
	FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate().Broadcast(EncryptionKeyGuid, EncryptionKey);
	return true;
#endif
}

TArray<FString> UPakLoaderLibrary::GetFilesInPakDirectory(const FString &PakDirectory, bool bRecursively)
{
	if (bRecursively)
	{
		return FPakLoader::Get()->GetFilesInDirectoryRecursively(PakDirectory);
	}

	return FPakLoader::Get()->GetFilesInDirectory(PakDirectory);
}

TArray<FString> UPakLoaderLibrary::GetFilesInPak(const FString& PakFilename, bool bUAssetOnly)
{
	return FPakLoader::Get()->GetFilesInPak(PakFilename, bUAssetOnly);
}

bool UPakLoaderLibrary::DoesPakDirectoryExist(const FString &PakDirectory)
{
	return FPakLoader::Get()->DoesDirectoryExist(PakDirectory);
}

UClass *UPakLoaderLibrary::GetPakFileClass(const FString &Filename)
{
	return FPakLoader::Get()->LoadClassFromPak(Filename);
}

UObject *UPakLoaderLibrary::GetPakFileObject(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UObject>(Filename);
}

UTexture2D *UPakLoaderLibrary::GetPakFileTexture2D(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UTexture2D>(Filename);
}

UStaticMesh *UPakLoaderLibrary::GetPakFileStaticMesh(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UStaticMesh>(Filename);
}

USkeletalMesh *UPakLoaderLibrary::GetPakFileSkeletalMesh(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<USkeletalMesh>(Filename);
}

USoundBase *UPakLoaderLibrary::GetPakFileSound(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<USoundBase>(Filename);
}

UMaterial *UPakLoaderLibrary::GetPakFileMaterial(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UMaterial>(Filename);
}

UMaterialInstanceConstant *UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UMaterialInstanceConstant>(Filename);
}

UAnimSequence *UPakLoaderLibrary::GetPakFileAnimSequence(const FString &Filename)
{
	return FPakLoader::Get()->LoadObjectFromPak<UAnimSequence>(Filename);
}

bool UPakLoaderLibrary::GetPakFileText(const FString &Filename, FString &String)
{
	return FPakLoader::Get()->ReadStringFromPak(Filename, String);
}
