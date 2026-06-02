//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  


#include "EMSMisc.h"
#include "EMSPluginSettings.h"
#include "EMSAsyncLoadGame.h"
#include "EMSAsyncSaveGame.h"
#include "EMSAsyncStream.h"
#include "Engine/World.h"
#include "UObject/UObjectIterator.h"

/**
FSettingHelpers
**/

bool FSettingHelpers::IsNoMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled;
}

bool FSettingHelpers::IsNormalMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Normal;
}

bool FSettingHelpers::IsStreamMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream;
}

bool FSettingHelpers::IsFullMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Full;
}

bool FSettingHelpers::IsStackBasedMultiLevelSave()
{
	return IsFullMultiLevelSave() || IsNormalMultiLevelSave();
}

bool FSettingHelpers::IsContainingStreamMultiLevelSave()
{
	return IsFullMultiLevelSave() || IsStreamMultiLevelSave();
}

bool FSettingHelpers::IsMultiLevelSaveCompatible(const EMultiLevelSaveMethod InMode)
{
	const EMultiLevelSaveMethod CurrentSettings = UEMSPluginSettings::Get()->MultiLevelSaving;

	if (CurrentSettings == InMode)
	{
		return true;
	}

	switch (InMode)
	{

	case EMultiLevelSaveMethod::ML_Disabled:
	case EMultiLevelSaveMethod::ML_Stream:
		return IsNoMultiLevelSave() || IsStreamMultiLevelSave();

	case EMultiLevelSaveMethod::ML_Full:
	case EMultiLevelSaveMethod::ML_Normal:
		return IsStackBasedMultiLevelSave();

	default:
		break;
	}

	return false;
}

bool FSettingHelpers::IsDynamicLevelStreaming()
{
	return IsContainingStreamMultiLevelSave() && UEMSPluginSettings::Get()->bDynamicLevelStreaming;
}

bool FSettingHelpers::IsStreamingMemoryOnly(const bool bWorldPartition)
{
	//World partition has a separate setting
	if (bWorldPartition)
	{
		return UEMSPluginSettings::Get()->WorldPartitionSaving == EWorldPartitionMethod::MemoryOnly;
	}

	return UEMSPluginSettings::Get()->LevelStreamSaving == EAutoSaveStreamMethod::MemoryOnly;
}

bool FSettingHelpers::IsStreamingLoadOnly()
{
	return UEMSPluginSettings::Get()->WorldPartitionSaving == EWorldPartitionMethod::LoadOnly;
}

bool FSettingHelpers::IsConsoleFileSystem()
{
	return UEMSPluginSettings::Get()->FileSaveMethod != EFileSaveMethod::FM_Desktop;
}

bool FSettingHelpers::IsFileCompressionAllowed()
{
	return UEMSPluginSettings::Get()->FileSaveMethod != EFileSaveMethod::FM_Console;
}

bool FSettingHelpers::IsMultiThreadSaving()
{
	return UEMSPluginSettings::Get()->bMultiThreadSaving && FPlatformProcess::SupportsMultithreading();
}

bool FSettingHelpers::IsMultiThreadLoading()
{
	return UEMSPluginSettings::Get()->LoadMethod == ELoadMethod::LM_Thread && FPlatformProcess::SupportsMultithreading();
}

bool FSettingHelpers::IsDeferredLoading()
{
	return UEMSPluginSettings::Get()->LoadMethod == ELoadMethod::LM_Deferred;
}

uint32 FSettingHelpers::GetLoadBatchSize()
{
	return FMath::Max(1, UEMSPluginSettings::Get()->DeferredLoadStackSize);
}

/**
Async Node Helpers
**/

template<class T>
bool FAsyncSaveHelpers::CheckLoadIterator(const T& It, const ESaveGameMode Mode, const bool bLog, const FString& DebugString)
{
	if (It && It->IsActive() && (It->Mode == Mode || Mode == ESaveGameMode::MODE_All))
	{
		if (bLog)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("%s is active while trying to save or load."), *DebugString);
		}

		return true;
	}

	return false;
}

bool FAsyncSaveHelpers::IsAsyncSaveOrLoadTaskActive(const UWorld* InWorld, const ESaveGameMode Mode, const EAsyncCheckType CheckType, const bool bLog)
{
	//This will prevent the functions from being executed at all during pause.
	if (InWorld->IsPaused())
	{
		if (bLog)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Async save or load called during pause. Operation was canceled."));
		}

		return true;
	}

	if (CheckType == EAsyncCheckType::CT_Both || CheckType == EAsyncCheckType::CT_Load)
	{
		for (TObjectIterator<UEMSAsyncLoadGame> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Load Game Actors"))
			{
				return true;
			}
		}

		for (TObjectIterator<UEMSAsyncStream> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Load Stream Level Actors"))
			{
				return true;
			}
		}
	}

	if (CheckType == EAsyncCheckType::CT_Both || CheckType == EAsyncCheckType::CT_Save)
	{
		for (TObjectIterator<UEMSAsyncSaveGame> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Save Game Actors"))
			{
				return true;
			}
		}
	}

	return false;
}

bool FAsyncSaveHelpers::IsStreamAutoLoadActive(const ULevel* InLevel)
{
	for (TObjectIterator<UEMSAsyncStream> It; It; ++It)
	{
		if (It && It->IsActive() && It->StreamingLevel == InLevel)
		{
			return true;
		}
	}

	return false;
}

void FAsyncSaveHelpers::DestroyStreamAutoLoadTask(const ULevel* InLevel)
{
	for (TObjectIterator<UEMSAsyncStream> It; It; ++It)
	{
		if (It && It->IsActive())
		{
			if (InLevel == nullptr || It->StreamingLevel == InLevel)
			{
				It->ForceDestroy();
			}
		}
	}
}

void FAsyncSaveHelpers::DestroyAsyncLoadTask()
{
	for (TObjectIterator<UEMSAsyncLoadGame> It; It; ++It)
	{
		if (It && It->IsActive())
		{
			It->ForceDestroy();
		}
	}
}

void FAsyncSaveHelpers::DestroyAsyncSaveTask()
{
	for (TObjectIterator<UEMSAsyncSaveGame> It; It; ++It)
	{
		if (It && It->IsActive())
		{
			It->ForceDestroy();
		}
	}
}

bool FAsyncSaveHelpers::ShouldCancelSaveTask(const UObject* InObject)
{
	if (!IsValid(InObject))
	{
		return true;
	}

	//Engine shutting down
	if (IsEngineExitRequested())
	{
		return true;
	}

	//World state check
	if (UWorld* World = InObject->GetWorld())
	{
		if (World->bIsTearingDown)
		{
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

ESaveGameMode FAsyncSaveHelpers::GetMode(const int32 Data)
{
	if (EMSFLAG::IsPlayer(Data))
	{
		if (EMSFLAG::IsLevel(Data))
		{
			return ESaveGameMode::MODE_All;
		}
		else
		{
			return ESaveGameMode::MODE_Player;
		}
	}

	return ESaveGameMode::MODE_Level;
}

/**
Save Debug Helpers
**/

void FSaveDebugHelpers::DebugLogDataSize(const UObject* Object, const TArray<uint8>& InData)
{
	FString ObjectName = "None";
	if (Object)
	{
		ObjectName = Object->GetName();
	}

	//Log memory size
	const SIZE_T AllocBytes = InData.GetAllocatedSize();
	const float SizeKb = AllocBytes / 1024.0f;
	UE_LOG(LogEasyMultiSave, Log, TEXT("Data Size: %.2f Kb | Elements: %d | Object: %s"), SizeKb, InData.Num(), *ObjectName);
}
