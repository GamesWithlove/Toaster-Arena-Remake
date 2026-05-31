//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSAsyncWait.h"
#include "EMSObject.h"
#include "EMSFunctionLibrary.h"
#include "TimerManager.h"

UEMSAsyncWait::UEMSAsyncWait()
{
	Type = EAsyncCheckType::CT_Load;
	bSaveOrLoadTaskWasActive = false;
	bTimeoutTriggered = false;
	bCompleted = false;
	CheckCounter = 0;
}

UEMSAsyncWait* UEMSAsyncWait::AsyncWaitForOperation(UObject* WorldContextObject, EAsyncCheckType CheckType, TSoftObjectPtr<AActor> CheckActor)
{
	if (UEMSObject* EMSObject = UEMSObject::Get(WorldContextObject))
	{
		UEMSAsyncWait* WaitTask = NewObject<UEMSAsyncWait>(GetTransientPackage());
		WaitTask->EMS = EMSObject;
		WaitTask->Type = CheckType;
		WaitTask->TargetActor = CheckActor;
		return WaitTask;
	}

	return nullptr;
}

void UEMSAsyncWait::Activate()
{
	if (EMS)
	{
		StartWaitTask();

		const float WaitTime = UEMSPluginSettings::Get()->AsyncWaitDelay;
		if (WaitTime > 0.f)
		{
			EMS->GetTimerManager().SetTimer(WaitTimerHandle, FTimerDelegate::CreateUObject(this, &UEMSAsyncWait::ForceProceed), WaitTime, false);
		}
	}
	else
	{
		CompleteWaitTask();
	}
}

void UEMSAsyncWait::StartWaitTask()
{
	if (!EMS || bTimeoutTriggered)
	{
		CompleteWaitTask();
		return;
	}

	//Single Actor check
	if (!TargetActor.ToSoftObjectPath().IsNull())
	{
		//Try to get the pointer 
		AActor* ResolvedActor = TargetActor.Get();
		if (ResolvedActor && UEMSFunctionLibrary::IsLoadedState(ResolvedActor))
		{
			CompleteWaitTask();
			return;
		}

		//If it's not loaded yet OR not finished processing, check again next tick
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncWait::StartWaitTask);
		return;
	}

	//Check for World Partition Init
	bool bWorldPartitionInitalizing = false;
	if (Type != EAsyncCheckType::CT_Save)
	{
		bWorldPartitionInitalizing = EMS->AutoSaveLoadWorldPartition() && !EMS->WorldPartitionLoadComplete();
	}

	const bool bIsTaskActive = EMS->IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_All, Type, false);

	//Wait as long as the current async operation is completed.
	if (bIsTaskActive || bWorldPartitionInitalizing)
	{
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncWait::StartWaitTask);
		bSaveOrLoadTaskWasActive = true;
	}
	else
	{
		//Without save data or an already completed WP-init, we will proceed  
		const bool bSaveFileExists = EMS->DoesSaveSlotExist(EMS->GetCurrentSaveGameName());
		const bool bHasLevel = EMS->WasCurrentLevelSaved();
		const bool bWorldPartitionAlreadyComplete = EMS->WorldPartitionLoadComplete();

		if (!bSaveFileExists || !bHasLevel || bWorldPartitionAlreadyComplete)
		{
			//Wait a few frames, due to the async nature of Save and Load operations
			if (++CheckCounter > EMS::MinAsyncWaitFrames)
			{
				bSaveOrLoadTaskWasActive = true;
			}
		}

		if (bSaveOrLoadTaskWasActive)
		{
			CompleteWaitTask();
		}
		else
		{
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncWait::StartWaitTask);
		}
	}	
}

void UEMSAsyncWait::ForceProceed()
{
	bTimeoutTriggered = true;
	StartWaitTask();
}

void UEMSAsyncWait::CompleteWaitTask()
{
	if (bCompleted)
	{
		return;
	}

	bCompleted = true;

	if (EMS)
	{
		EMS->GetTimerManager().ClearAllTimersForObject(this);
	}

	OnCompleted.Broadcast();
	SetReadyToDestroy();
}