//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"

class ULevelStreamingDynamic;
class ULevel;
class ILevelInstanceInterface;
class UWorld;

class EASYMULTISAVE_API FLevelHelpers
{

public:

	static FString GetWorldLevelName(const UWorld* InWorld, const bool bRedirect = true);
	static bool IsTransientLevelName(const FString& LevelPackageName);

	static const ULevelStreamingDynamic* GetRuntimeLevelInstance(const AActor* Actor);
	static FName GetStableDynamicLevelInstanceID(const ILevelInstanceInterface* LevelIf, const FString& LevelAssetName);
	static FName GetFullRuntimeLevelInstanceName(const AActor* Actor);
	static FString GetLevelInstanceNameAsString(const AActor* Actor);

};

class EASYMULTISAVE_API FStreamHelpers
{

public:

	static bool AutoSaveLoadWorldPartition(const UWorld* InWorld);
	static bool HasStreamingLevels(const UWorld* InWorld);
	static bool IsLevelStillStreaming(const UWorld* InWorld);
	static bool CanProcessStreaming(const UWorld* InWorld);
	static bool IsWorldPartitionInit(const UWorld* InWorld);
	static bool CanProcessWorldPartition(const UWorld* InWorld);
};
