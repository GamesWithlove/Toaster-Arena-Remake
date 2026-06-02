//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"

class EASYMULTISAVE_API FSettingHelpers
{

public:

	static bool IsNoMultiLevelSave();
	static bool IsNormalMultiLevelSave();
	static bool IsStreamMultiLevelSave();
	static bool IsFullMultiLevelSave();
	static bool IsStackBasedMultiLevelSave();
	static bool IsContainingStreamMultiLevelSave();
	static bool IsMultiLevelSaveCompatible(const EMultiLevelSaveMethod InMode);

	static bool IsDynamicLevelStreaming();

	static bool IsStreamingMemoryOnly(const bool bWorldPartition);
	static bool IsStreamingLoadOnly();

	static bool IsConsoleFileSystem();
	static bool IsFileCompressionAllowed();

	static bool IsMultiThreadSaving();
	static bool IsMultiThreadLoading();
	static bool IsDeferredLoading();

	static uint32 GetLoadBatchSize();
};

class EASYMULTISAVE_API FAsyncSaveHelpers
{

public:

	template<class T>
	static bool CheckLoadIterator(const T& It, const ESaveGameMode Mode, const bool bLog, const FString& DebugString);

	static bool IsAsyncSaveOrLoadTaskActive(const UWorld* InWorld, const ESaveGameMode Mode, const EAsyncCheckType CheckType, const bool bLog);
	static bool IsStreamAutoLoadActive(const ULevel* InLevel);
	static void DestroyStreamAutoLoadTask(const ULevel* InLevel = nullptr);
	static void DestroyAsyncLoadTask();
	static void DestroyAsyncSaveTask();

	static bool ShouldCancelSaveTask(const UObject* InObject);

	static ESaveGameMode GetMode(const int32 Data);
};

class EASYMULTISAVE_API FSaveDebugHelpers
{

public:

	static void DebugLogDataSize(const UObject* Object, const TArray<uint8>& InData);
};