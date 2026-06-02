//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSAsyncStream.h"
#include "EMSObject.h"
#include "EMSActors.h"
#include "EMSActorLoader.h"
#include "Engine/Engine.h"
#include "Engine/Level.h"
#include "TimerManager.h"
#include "Async/Async.h"

/**
Init
**/

UEMSAsyncStream::UEMSAsyncStream()
{
	Mode = ESaveGameMode::MODE_All;
	bIsActive = false;
}

bool UEMSAsyncStream::InitStreamingLoadTask(UEMSObject* EMSObject, const ULevel* InLevel)
{
	//Check to see if an instance with the same streaming level is active.
	if (FAsyncSaveHelpers::IsStreamAutoLoadActive(InLevel))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Skipped loading streaming level while same async task is already active"));
		return false;
	}

	UEMSAsyncStream* LoadTask = NewObject<UEMSAsyncStream>(GetTransientPackage());
	if (LoadTask)
	{
		LoadTask->StreamingLevel = InLevel;
		LoadTask->EMS = EMSObject;
		LoadTask->RegisterWithGameInstance(EMSObject);
		LoadTask->Activate();
		return true;
	}

	return false;
}

void UEMSAsyncStream::Activate()
{
	if (EMS)
	{
		//Setup data one frame before loading
		if (!SetupLevelActors())
		{
			Deactivate();
			return;
		}

		bIsActive = true;
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::StartLoad);
	}
}

void UEMSAsyncStream::StartLoad()
{
	if (EMS)
	{
		//Spawn Loader
		const FLoaderInitData LoaderData = FLoaderInitData(true, PrunedActorData, StreamActorsMap);
		Loader = FEMSLevelLoader::Create(EMS, LoaderData);
		Loader->OnComplete.BindUObject(this, &UEMSAsyncStream::FinishLoadingStreamLevel);
		Loader->Start();
	}
}

bool UEMSAsyncStream::SetupLevelActors()
{
	if (!EMS || !StreamingLevel || EMS::ArrayEmpty(StreamingLevel->Actors))
	{
		return false;
	}

	if (!EMS->GetMultiLevelStreamData().HasLevelActors())
	{
		return false;
	}

	const int32 EstimatedSize = StreamingLevel->Actors.Num();
	StreamActorsMap.Reserve(EstimatedSize);

	//This is somewhat like the Prepare Actors function
	for (AActor* Actor : StreamingLevel->Actors)
	{
		if (EMS->IsValidActor(Actor) 
			&& FActorHelpers::IsPlacedActor(Actor) 
			&& !FActorHelpers::IsLoaded(Actor) 
			&& !FActorHelpers::IsSkipSave(Actor))
		{
			const FString FullName = EMS->GetFullActorName(Actor);
			const TArray<uint8> DataName = EMS->BytesFromString(FullName);
			StreamActorsMap.Add(FActorByteKey(DataName), Actor);
		}
	}

	if (EMS::ArrayEmpty(StreamActorsMap))
	{
		return false;
	}

	TotalActors = StreamActorsMap.Num();
	EMS->AllocateRealLoadedActors(TotalActors);

	//Prune data
	PrunedActorData = EMS->GetMultiLevelStreamData().ActorArray;
	FActorHelpers::PruneSavedActors(StreamActorsMap, PrunedActorData);

	return true;
}

/**
Finish
**/

void UEMSAsyncStream::FinishLoadingStreamLevel()
{
	UE_LOG(LogEasyMultiSave, Log, TEXT("Loaded %d streaming Actors"), TotalActors);
	EndTask(true);
}

void UEMSAsyncStream::ForceDestroy()
{
	if (EMS)
	{
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::Deactivate);
	}
	else
	{
		Deactivate();
	}
}

void UEMSAsyncStream::Deactivate()
{
	EndTask(false);
}

void UEMSAsyncStream::EndTask(const bool bBroadcastFinish)
{
	if (bBroadcastFinish && EMS)
	{
		EMS->BroadcastOnPartitionLoaded();
	}

	bIsActive = false;
	SetReadyToDestroy();
}

