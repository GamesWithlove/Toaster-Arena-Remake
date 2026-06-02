// Copyright (C) 2019-2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "PakLoaderSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPakLoaderOnContentPathMounted, FString, AssetPath, FString, ContentPath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPakFileMounted2, FString, PakFilename, FString, MountPoint, int32, NumFiles);

/**
 * 
 */
UCLASS()
class PAKLOADER_API UPakLoaderSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Called by the engine when a new content path is mounted. Native delegate: FPackageName::OnContentPathMounted()
	UPROPERTY(BlueprintAssignable)
	FPakLoaderOnContentPathMounted OnContentPathMounted;

	// Called by the engine when a content path is dismounted. Native delegate: FPackageName::OnContentPathDismounted()
	UPROPERTY(BlueprintAssignable)
	FPakLoaderOnContentPathMounted OnContentPathDismounted;

	/* 
		Called by the engine when a pak file is mounted.
		The original delegate is called with IPakFile as parameter which is not exposed to Blueprints.
		Native delegate: FCoreDelegates::GetOnPakFileMounted2()
	*/
	UPROPERTY(BlueprintAssignable)
	FOnPakFileMounted2 OnPakFileMounted2;

	void Native_OnContentPathMounted(const FString& AssetPath, const FString& ContentPath);
	void Native_OnContentPathDismounted(const FString& AssetPath, const FString& ContentPath);

#if ENGINE_MINOR_VERSION <= 25 && ENGINE_MAJOR_VERSION == 4
	void Native_OnPakFileMounted(const TCHAR*, const int32);
#else
	void Native_OnPakFileMounted2(const IPakFile& PakFile);
#endif
};
