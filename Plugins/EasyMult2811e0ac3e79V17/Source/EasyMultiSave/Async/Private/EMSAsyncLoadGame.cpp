//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSAsyncLoadGame.h"
#include "EMSObject.h"
#include "Engine/Engine.h"
#include "Modules/ModuleManager.h"
#include "Async/Async.h"
#include "TimerManager.h"
#include "UObject/UObjectIterator.h"

/**
Init
**/

UEMSAsyncLoadGame::UEMSAsyncLoadGame()
{
	Mode = ESaveGameMode::MODE_All;
	Data = 0;
	bIsActive = false;
	bLoadFailed = true;
	bFullReload = false;
	bAutoLoadLevel = false;
}

UEMSAsyncLoadGame* UEMSAsyncLoadGame::AsyncLoadActors(UObject* WorldContextObject, int32 Data, bool bFullReload)
{
	if (UEMSObject* EMSObject = UEMSObject::Get(WorldContextObject))
	{
		const ESaveGameMode Mode = FAsyncSaveHelpers::GetMode(Data);

		if (EMSObject->IsAsyncSaveOrLoadTaskActive(Mode))
		{
			return nullptr;
		}

		UEMSAsyncLoadGame* LoadTask = NewObject<UEMSAsyncLoadGame>(GetTransientPackage());		
		if(LoadTask)
		{
			LoadTask->EMS = EMSObject;
			LoadTask->Data = Data;
			LoadTask->Mode = Mode;
			LoadTask->bFullReload = bFullReload;
			return LoadTask;
		}
	}

	return nullptr;
}

void UEMSAsyncLoadGame::AutoLoadLevelActors(UEMSObject* EMSObject)
{
	UEMSAsyncLoadGame* LoadTask = NewObject<UEMSAsyncLoadGame>(GetTransientPackage());
	if (LoadTask)
	{
		LoadTask->EMS = EMSObject;
		LoadTask->Data = TOFLAG(ESaveTypeFlags::SF_Level);
		LoadTask->Mode = ESaveGameMode::MODE_Level;
		LoadTask->bFullReload = false;
		LoadTask->bAutoLoadLevel = true;
		LoadTask->RegisterWithGameInstance(EMSObject);
		LoadTask->Activate();
	}
}

void UEMSAsyncLoadGame::Activate()
{
	//No data
	if (Data <= 0)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Load Game Actors has no Data Flags selected."));
		FailLoadingTask();
		return;
	}

	if (EMS)
	{
		const bool bIsManualLevelLoad = EMSFLAG::IsLevel(Data) && !bAutoLoadLevel;
		if (bIsManualLevelLoad)
		{
			//Warn when still streaming
			if (EMS->IsLevelStreaming())
			{
				UE_LOG(LogEasyMultiSave, Warning,
				TEXT("Load during level streaming. Use 'Is Level Streaming Active' to verify. "
				 "Blueprint Level Streaming nodes may complete before Level Instances have finished streaming."));
			}

			//Warn when trying to manually load WP
			if (EMS->AutoSaveLoadWorldPartition() && !EMS->SkipInitialWorldPartitionLoad())
			{
				UE_LOG(LogEasyMultiSave, Warning, TEXT("Manual World Partition load without 'Skip Initial Load' enabled in the settings. This can lead to issues."));
			}
		}

		bIsActive = true;
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::PreLoading);
	}
}

/**
Load Actors
**/

void UEMSAsyncLoadGame::PreLoading()
{
	if (!EMS)
	{
		return;
	}

	//Timeout (start once)
	const float WaitTime = UEMSPluginSettings::Get()->AsyncWaitDelay;
	const bool bTimeoutActive = EMS->GetTimerManager().IsTimerActive(FailedTimerHandle);
	if (WaitTime > 0.f && !bTimeoutActive)
	{
		EMS->GetTimerManager().SetTimer(
			FailedTimerHandle,
			FTimerDelegate::CreateUObject(this, &UEMSAsyncLoadGame::FailLoadingTask),
			WaitTime,
			false
		);
	}

	if (EMSFLAG::IsPlayer(Data))
	{
		if (!EMS->HasValidPlayer())
		{
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::PreLoading);
			return;
		}
	}

	if (EMSFLAG::IsLevel(Data))
	{
		if (!EMS->HasValidGameWorld())
		{
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::PreLoading);
			return;
		}
	}

	const EPrepareType PrepareType = bFullReload ? EPrepareType::PT_FullReload : EPrepareType::PT_Default;
	EMS->PrepareLoadAndSaveActors(Data, EAsyncCheckType::CT_Load, PrepareType);

	//Cancel timeout
	EMS->GetTimerManager().ClearTimer(FailedTimerHandle);

	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::StartLoading);
}

void UEMSAsyncLoadGame::ClearFailTimer()
{
	if (EMS)
	{
		if (FailedTimerHandle.IsValid())
		{
			EMS->GetTimerManager().ClearTimer(FailedTimerHandle);
		}
	}
}

void UEMSAsyncLoadGame::StartLoading()
{
	PreparePlayer();
}

/**
Player Actors
**/

void UEMSAsyncLoadGame::PreparePlayer()
{
	if (!EMS)
	{
		return;
	}

	if (EMSFLAG::IsPlayer(Data))
	{
		if (EMS->TryLoadPlayerFile())
		{
			SetLoadNotFailed();
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::LoadPlayer);
			return;
		}
	}

	SchedulePrepareLevel();
}

void UEMSAsyncLoadGame::LoadPlayer()
{
	if (EMS)
	{
		EMS->LoadPlayerActors(EMS->GetPlayerController());
		SchedulePrepareLevel();
	}
}

void UEMSAsyncLoadGame::SchedulePrepareLevel()
{
	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::PrepareLevel);
}

/**
Level Actors
**/

void UEMSAsyncLoadGame::PrepareLevel()
{ 
	if (!EMS)
	{
		return;
	}

	if (EMSFLAG::IsLevel(Data))
	{
		if (EMS->TryLoadLevelFile())
		{
			SetLoadNotFailed();
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::LoadGameMode);
		}
		else
		{
			FinishLoading();
		}
	}
	else
	{
		FinishLoading();
	}
}

void UEMSAsyncLoadGame::LoadGameMode()
{
	if (EMS)
	{
		EMS->LoadGameMode();
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::LoadLevelScripts);
	}
}

void UEMSAsyncLoadGame::LoadLevelScripts()
{
	if (EMS)
	{
		EMS->LoadLevelScripts();
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::PrepareLevelActors);
	}
}

void UEMSAsyncLoadGame::PrepareLevelActors()
{
	if (EMS)
	{
		EMS->PruneLevelActors();
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::StartLoadLevelActors);
	}
}

void UEMSAsyncLoadGame::StartLoadLevelActors()
{
	if (EMS)
	{
		EMS->LoadLevelActors(this);
	}
}

void UEMSAsyncLoadGame::LoadLevelActors(const FLoaderInitData& LoaderData)
{
	//Spawn Loader
	Loader = FEMSLevelLoader::Create(EMS, LoaderData);
	Loader->OnComplete.BindUObject(this, &UEMSAsyncLoadGame::FinishLoading);
	Loader->Start();
}

/**
Finish
**/

void UEMSAsyncLoadGame::FinishLoading()
{
	//Has to be a tick before broadcast.
	bIsActive = false;
	ClearFailTimer();

	if (!EMS)
	{
		SetReadyToDestroy();
		return;
	}

	if (EMSFLAG::IsLevel(Data))
	{
		EMS->FinishLoadingLevel(!bLoadFailed);
	}

	if (bLoadFailed)
	{
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::FailLoadingTask);
	}
	else
	{
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncLoadGame::CompleteLoadingTask);
	}
}

void UEMSAsyncLoadGame::ForceDestroy()
{
	bIsActive = false;
	SetReadyToDestroy();
}

void UEMSAsyncLoadGame::CompleteLoadingTask()
{
	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

void UEMSAsyncLoadGame::FailLoadingTask()
{
	OnFailed.Broadcast();
	SetReadyToDestroy();
}
