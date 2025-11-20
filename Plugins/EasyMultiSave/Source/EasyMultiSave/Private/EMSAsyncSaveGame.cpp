//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#include "EMSAsyncSaveGame.h"
#include "EMSFunctionLibrary.h"
#include "Modules/ModuleManager.h"
#include "Engine/Engine.h"
#include "Async/Async.h"

/**
Init
**/

UEMSAsyncSaveGame::UEMSAsyncSaveGame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Mode(ESaveGameMode::MODE_All)
	, Data(0)
	, bIsActive(false)
	, bFinishedStep(false)
	, bHasFailed(false)
	, bAutoSaveLevel(false)
	, bMemoryOnly(false) {}

UEMSAsyncSaveGame* UEMSAsyncSaveGame::AsyncSaveActors(UObject* WorldContextObject, int32 Data)
{
	if (UEMSObject* EMSObject = UEMSObject::Get(WorldContextObject))
	{
		const ESaveGameMode Mode = FAsyncSaveHelpers::GetMode(Data);

		if (FStreamHelpers::IsLevelStillStreaming(EMSObject->GetWorld(), true))
		{
			return nullptr;
		}

		if (EMSObject->IsAsyncSaveOrLoadTaskActive(Mode))
		{
			return nullptr;
		}

		UEMSAsyncSaveGame* SaveTask = NewObject<UEMSAsyncSaveGame>(GetTransientPackage());
		if (SaveTask)
		{
			SaveTask->EMS = EMSObject;
			SaveTask->Data = Data;
			SaveTask->Mode = Mode;

			return SaveTask;
		}	
	}

	return nullptr;
}

void UEMSAsyncSaveGame::AutoSaveLevelActors(UEMSObject* EMSObject)
{
	UEMSAsyncSaveGame* SaveTask = NewObject<UEMSAsyncSaveGame>(GetTransientPackage());
	if (SaveTask)
	{
		SaveTask->EMS = EMSObject;
		SaveTask->Data = ENUM_TO_FLAG(ESaveTypeFlags::SF_Level);
		SaveTask->Mode = ESaveGameMode::MODE_Level;
		SaveTask->bAutoSaveLevel = true;
		SaveTask->bMemoryOnly = (UEMSPluginSettings::Get()->WorldPartitionSaving == EWorldPartitionMethod::MemoryOnly);
		SaveTask->Activate();
	}
}

void UEMSAsyncSaveGame::Activate()
{
	if (EMS)
	{
		bIsActive = true;

		//Skip Prepare and only clear the Actor List
		if (bAutoSaveLevel)
		{
			EMS->ClearActorList();
		}
		else
		{
			EMS->PrepareLoadAndSaveActors(Data, EAsyncCheckType::CT_Save, false);
		}

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::StartSaving);
	}
}

void UEMSAsyncSaveGame::StartSaving()
{
	bHasFailed = false;

	if (EMS)
	{
		if (bAutoSaveLevel && !bMemoryOnly)
		{
			//Only save slot if it does not exist
			if (!EMS->DoesSaveGameExist(EMS->GetCurrentSaveGameName()))
			{
				EMS->SaveSlotInfoObject();
			}
		}
		else
		{
			//Always save slot
			EMS->SaveSlotInfoObject();
		}

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::SavePlayer);
	}
}

/**
Player
**/

void UEMSAsyncSaveGame::SavePlayer()
{
	bFinishedStep = false;

	if (EMS)
	{
		if (FSettingHelpers::IsMultiThreadSaving())
		{
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [this]()
			{
				InternalSavePlayer();
			});
		}
		else
		{
			InternalSavePlayer();
		}

		TryMoveToNextStep(ENextStepType::SaveLevel);
	}
}

void UEMSAsyncSaveGame::InternalSavePlayer()
{
	if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Player))
	{
		if (!EMS->SavePlayerActors())
		{
			bHasFailed = true;
		}
	}

	bFinishedStep = true;
}

/**
Level
**/

void UEMSAsyncSaveGame::SaveLevel()
{
	bFinishedStep = false;

	if (EMS)
	{
		if (FSettingHelpers::IsMultiThreadSaving())
		{
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [this]()
			{
				InternalSaveLevel();
			});
		}
		else
		{
			InternalSaveLevel();
		}

		TryMoveToNextStep(ENextStepType::FinishSave);
	}
}

void UEMSAsyncSaveGame::InternalSaveLevel()
{
	if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Level))
	{
		const bool bPrevHasFailed = bHasFailed;

		if(EMS->SaveLevelActors(bMemoryOnly))
		{
			bHasFailed = false;
		}
		else
		{
			bHasFailed = bPrevHasFailed;
		}
	}

	bFinishedStep = true;
}

/**
Finish
**/

void UEMSAsyncSaveGame::FinishSaving()
{
	if (EMS)
	{
		bIsActive = false;

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::CompleteSavingTask);
	}
}

void UEMSAsyncSaveGame::CompleteSavingTask()
{
	if (bHasFailed)
	{
		OnFailed.Broadcast();
	}
	else
	{
		OnCompleted.Broadcast();
	}

	SetReadyToDestroy();
}

/**
Helper Functions
**/

void UEMSAsyncSaveGame::TryMoveToNextStep(ENextStepType Step)
{
	//This is used to delay further execution until multi-thread code finished, but without blocking.

	if (EMS)
	{
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindLambda([this, Step]()
		{
			if (bFinishedStep)
			{
				if (Step == ENextStepType::FinishSave)
				{
					EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::FinishSaving);
				}
				else
				{
					EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::SaveLevel);
				}
			}
			else
			{
				TryMoveToNextStep(Step);
			}
		});

		EMS->GetTimerManager().SetTimerForNextTick(TimerDelegate);
	}
}