// Copyright (C) 2019-2024 Blue Mountains GmbH. All Rights Reserved.

#include "PakLoaderSubsystem.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Misc/PackageName.h"
#include "Misc/CoreDelegates.h"

void UPakLoaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FPackageName::OnContentPathMounted().AddUObject(this, &UPakLoaderSubsystem::Native_OnContentPathMounted);
	FPackageName::OnContentPathDismounted().AddUObject(this, &UPakLoaderSubsystem::Native_OnContentPathDismounted);
#if ENGINE_MINOR_VERSION >= 3 && ENGINE_MAJOR_VERSION == 5
	FCoreDelegates::GetOnPakFileMounted2().AddUObject(this, &UPakLoaderSubsystem::Native_OnPakFileMounted2);
#elif ENGINE_MINOR_VERSION <= 25 && ENGINE_MAJOR_VERSION == 4
	FCoreDelegates::OnPakFileMounted.AddUObject(this, &UPakLoaderSubsystem::Native_OnPakFileMounted);
#else
	FCoreDelegates::OnPakFileMounted2.AddUObject(this, &UPakLoaderSubsystem::Native_OnPakFileMounted2);
#endif
}

void UPakLoaderSubsystem::Native_OnContentPathMounted(const FString& AssetPath, const FString& ContentPath)
{
	OnContentPathMounted.Broadcast(AssetPath, ContentPath);
}

void UPakLoaderSubsystem::Native_OnContentPathDismounted(const FString& AssetPath, const FString& ContentPath)
{
	OnContentPathDismounted.Broadcast(AssetPath, ContentPath);
}

#if ENGINE_MINOR_VERSION <= 25 && ENGINE_MAJOR_VERSION == 4
void UPakLoaderSubsystem::Native_OnPakFileMounted(const TCHAR* PakFilename, const int32)
{
	OnPakFileMounted2.Broadcast(PakFilename, "", 0);
}
#else
void UPakLoaderSubsystem::Native_OnPakFileMounted2(const IPakFile& PakFile)
{
	OnPakFileMounted2.Broadcast(PakFile.PakGetPakFilename(), PakFile.PakGetMountPoint(), PakFile.GetNumFiles());
}
#endif
