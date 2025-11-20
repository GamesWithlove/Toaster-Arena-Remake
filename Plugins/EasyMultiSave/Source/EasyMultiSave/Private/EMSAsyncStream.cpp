//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  


#include "EMSAsyncStream.h"
#include "EMSObject.h"
#include "Engine/Engine.h"
#include "Async/Async.h"

/**
Init
**/

UEMSAsyncStream::UEMSAsyncStream(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Mode(ESaveGameMode::MODE_All)
	, PrunedData(FMultiLevelStreamingData())
	, bIsActive(false)
	, TotalActors(0)
	, LoadedActorNum(0)
	, LoadedTotalNum(0) {}

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
		LoadTask->Activate();
		return true;
	}

	return false;
}

void UEMSAsyncStream::Activate()
{
	if (EMS)
	{
		bIsActive = true;
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::StartLoad);
	}
}

void UEMSAsyncStream::StartLoad()
{
	if (EMS)
	{
		if (!SetupLevelActors())
		{
			return;
		}

		if (FSettingHelpers::IsDeferredLoading())
		{
			EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::DeferredLoadStreamActors);
			return;
		}

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::ScheduleStreamingLoad);
	}
}

bool UEMSAsyncStream::SetupLevelActors()
{
	if (!EMS || !StreamingLevel || EMS::ArrayEmpty(StreamingLevel->Actors))
	{
		FinishLoadingStreamLevel(false);
		return false;
	}

	//This is somewhat like the Prepare Actors function
	for (AActor* Actor : StreamingLevel->Actors)
	{
		if (EMS->IsValidActor(Actor) 
			&& FActorHelpers::IsPlacedActor(Actor) 
			&& !FActorHelpers::IsLoaded(Actor) 
			&& !FActorHelpers::IsSkipSave(Actor))
		{
			StreamActors.Add(Actor);

			const FName ActorName(*FActorHelpers::GetFullActorName(Actor));
			StreamActorsMap.Add(ActorName, Actor);
		}
	}

	if (EMS::ArrayEmpty(StreamActors))
	{
		FinishLoadingStreamLevel(false);
		return false;
	}

	//Prune Actors to prevent looking up insanely huge arrays
	TArray<FActorSaveData> PrunedActors = EMS->GetMultiLevelStreamData().ActorArray;
	FSaveHelpers::PruneSavedActors(StreamActorsMap, PrunedActors);
	PrunedData.CopyActors(PrunedActors);

	//Distance based loading
	if (const APlayerController* PC = EMS->GetPlayerController())
	{
		StreamActors.Sort([PC](const AActor& A, const AActor& B)
		{
			return FActorHelpers::CompareDistance(A.GetActorLocation(), B.GetActorLocation(), PC);
		});
	}

	TotalActors = StreamActors.Num();

	return true;
}

void UEMSAsyncStream::LoadStreamingActor(AActor* Actor)
{

#if EMS_ENGINE_MIN_UE53

	if (!EMS)
	{
		return;
	}

	//Get the pruned Actor Data
	const FActorSaveData* ActorDataPtr = PrunedData.FindActor(Actor);
	if (!ActorDataPtr)
	{
		return;
	}

	const FActorSaveData ActorData = *ActorDataPtr;
	EMS->LoadStreamingActor(Actor, ActorData);

#endif

}

/**
Multi-Thread Loading
**/

void UEMSAsyncStream::ScheduleStreamingLoad()
{

#if EMS_ENGINE_MIN_UE53

	auto LoadActors = [this]()
	{
		for (AActor* Actor : StreamActors)
		{
			if (Actor)
			{
				LoadStreamingActor(Actor);
			}
		}
	};

	if (FSettingHelpers::IsMultiThreadLoading())
	{
		AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [LoadActors]()
		{
			LoadActors();
		});
	}
	else
	{
		LoadActors();
	}

	FinishLoadingStreamLevel(true);

#endif

}

/**
Deferred Loading
**/

void UEMSAsyncStream::DeferredLoadStreamActors()
{

#if EMS_ENGINE_MIN_UE53

	if (!EMS)
	{
		return;
	}

	const uint32 Batch = UEMSPluginSettings::Get()->DeferredLoadStackSize;
	uint32 LoadNum = 0;

	while (LoadNum < Batch)
	{
		//Failsafe exit, when level is streamed out
		if ((LoadedTotalNum++) >= TotalActors)
		{
			FinishLoadingStreamLevel(true);
			return;
		}

		const int32 FullBatch = LoadNum + LoadedActorNum;
		if (FullBatch >= TotalActors)
		{
			break;
		}

		const uint32 MinLoadNum = FMath::Min(FullBatch, TotalActors - 1);

		AActor* Actor = StreamActors[MinLoadNum];
		if (Actor)
		{
			LoadStreamingActor(Actor);
			LoadNum++;
		}
	}

	LoadedActorNum += LoadNum;
	EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncStream::DeferredLoadStreamActors);

#endif

}

/**
Finish
**/

void UEMSAsyncStream::FinishLoadingStreamLevel(const bool bSuccess)
{
	if (bSuccess)
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Loaded World Partition Actors"));
	}

	bIsActive = false;
	SetReadyToDestroy();
}


