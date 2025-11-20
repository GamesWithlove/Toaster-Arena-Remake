//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#include "EMSAsyncCheck.h"
#include "EMSObject.h"

UEMSAsyncCheck* UEMSAsyncCheck::CheckSaveFiles(UObject* WorldContextObject, ESaveFileCheckType CheckType)
{
	if (UEMSObject* EMSObject = UEMSObject::Get(WorldContextObject))
	{
		if (!EMSObject->IsAsyncSaveOrLoadTaskActive())
		{
			UEMSAsyncCheck* CheckTask = NewObject<UEMSAsyncCheck>(GetTransientPackage());
			CheckTask->EMS = EMSObject;
			CheckTask->Type = CheckType;
			return CheckTask;
		}
	}

	return nullptr;
}

void UEMSAsyncCheck::Activate()
{
	if (EMS)
	{
		EMS->LogPackageVersion();
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncCheck::StartCheck);
	}
}

void UEMSAsyncCheck::StartCheck()
{
	EMS->CheckSaveGameVersion(EDataLoadType::DATA_Object);
	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncCheck::CheckPlayer);
}

void UEMSAsyncCheck::CheckPlayer()
{
	EMS->CheckSaveGameVersion(EDataLoadType::DATA_Player);
	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncCheck::CheckLevel);
}

void UEMSAsyncCheck::CheckLevel()
{
	EMS->CheckSaveGameVersion(EDataLoadType::DATA_Level);
	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncCheck::CompleteCheck);
}

void UEMSAsyncCheck::CompleteCheck()
{
	SetReadyToDestroy();

	if (EMS->CompleteCheckSaveFile(Type))
	{
		OnCompleted.Broadcast();
		return;
	}

	OnFailed.Broadcast();
}
