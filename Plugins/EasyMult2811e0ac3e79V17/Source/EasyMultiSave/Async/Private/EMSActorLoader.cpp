//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSActorLoader.h"
#include "EMSObject.h"
#include "EMSActors.h"
#include "Async/Async.h"
#include "TimerManager.h"

/**
Init
**/

//Always create via FEMSLevelLoader::Create to ensure shared ownership.
FEMSLevelLoader::FEMSLevelLoader(UEMSObject* EMSObject, const FLoaderInitData& InitData)
{
	EMS = EMSObject;

	SavedActors = InitData.InActorData;
	ActorMap = InitData.InActorMap;
	bIsWorldPartitionLoader = InitData.bIsWorldPartition;

	BatchSize = FMath::Max(1, int32(FSettingHelpers::GetLoadBatchSize()));
	CurrentIndex = 0;

	TotalProcessedCount = 0;
}

FEMSLevelLoader::~FEMSLevelLoader()
{
	//On Destroy
	if (!bCompleted)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Loader was destroyed before being finished!"));
	}

	SavedActors.Empty();
	ActorMap.Empty();
	Batches.Empty();
}

TSharedRef<FEMSLevelLoader> FEMSLevelLoader::Create(UEMSObject* EMSObject, const FLoaderInitData& InitData)
{
	return MakeShareable(new FEMSLevelLoader(EMSObject, InitData));
}

void FEMSLevelLoader::Start()
{
	if (!EMS)
	{
		return;
	}

	UE_LOG(LogEasyMultiSave, Verbose, TEXT("Total Actors to Load: %d"), SavedActors.Num());

	const bool bMulti = FSettingHelpers::IsMultiThreadLoading();
	const bool bDeferred = FSettingHelpers::IsDeferredLoading();

	//Distance based sorting
	FActorHelpers::SortLevelActors(SavedActors, EMS->GetPlayerController());

	SetLoaderTimer([bMulti, bDeferred](TSharedPtr<FEMSLevelLoader> Loader)
	{
		if (Loader.IsValid())
		{
			if (bMulti)
			{
				Loader->LoadMultiThreaded();
			}
			else if (bDeferred)
			{
				Loader->LoadDeferred();
			}
			else
			{
				Loader->LoadDefault();
			}
		}
	});
}

/**
Default Loading
**/

void FEMSLevelLoader::LoadDefault()
{
	for (const FActorSaveData& Data : SavedActors)
	{
		EvaluateAndProcess(Data);
	}

	FinishLoading();
}

/**
Multi-Thread Loading
**/

void FEMSLevelLoader::LoadMultiThreaded()
{
	TWeakPtr<FEMSLevelLoader> WeakPtr = AsShared();
	Async(EAsyncExecution::ThreadPool, [WeakPtr]()
	{
		if (TSharedPtr<FEMSLevelLoader> Loader = WeakPtr.Pin())
		{
			Loader->GatherValidBatches();

			if (Loader->CheckCancel())
			{
				return;
			}

			Loader->ScheduleMainThreadBatchStart();
		}
	});
}

void FEMSLevelLoader::GatherValidBatches()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSActorLoader::GatherValidBatches"));
	SCOPE_CYCLE_COUNTER(STAT_EMSLoader_Gather);

	TArray<TArray<FActorProcessData>> LocalBatches;
	TArray<FActorProcessData> CurrentBatch;

	int32 IterationCount = 0;

	for (const FActorSaveData& Data : SavedActors)
	{
		//Early exit
		if (CheckCancel())
		{
			return;
		}

		if (CheckActorLimits(IterationCount))
		{
			return;
		}

		TWeakObjectPtr<AActor> ActorPtr;
		if (ShouldEvaluateData(Data, ActorPtr))
		{
			CurrentBatch.Add({Data, ActorPtr});

			if (CurrentBatch.Num() >= BatchSize)
			{
				LocalBatches.Add(MoveTemp(CurrentBatch));
				CurrentBatch.Empty();
			}
		}
	}

	if (CurrentBatch.Num() > 0)
	{
		LocalBatches.Add(MoveTemp(CurrentBatch));
	}

	FScopeLock Lock(&LoadActorScope);

	Batches = MoveTemp(LocalBatches);
}

void FEMSLevelLoader::ScheduleMainThreadBatchStart()
{
	if (CheckCancel())
	{
		return;
	}

	TWeakPtr<FEMSLevelLoader> WeakPtr = AsShared();
	AsyncTask(ENamedThreads::GameThread, [WeakPtr]()
	{
		if (TSharedPtr<FEMSLevelLoader> Loader = WeakPtr.Pin())
		{
			Loader->StartBatchTick();
		}
	});
}

void FEMSLevelLoader::StartBatchTick()
{
	FScopeLock Lock(&LoadActorScope);

	if (!CheckCancel() && EMS && Batches.Num() > 0)
	{
		SetLoaderTimer([](TSharedPtr<FEMSLevelLoader> Loader)
		{
			if (Loader.IsValid())
			{
				Loader->ProcessNextBatch();
			}
		});
	}
	else
	{
		FinishLoading();
	}
}

void FEMSLevelLoader::ProcessNextBatch()
{
	if (CheckCancel())
	{
		return;
	}

	FScopeLock Lock(&LoadActorScope);

	if (bCompleted || EMS::ArrayEmpty(Batches))
	{
		FinishLoading();
		return;
	}

	ProcessActorBatch(Batches[0]);
	Batches.RemoveAt(0);

	StartBatchTick();
}

void FEMSLevelLoader::ProcessActorBatch(const TArray<FActorProcessData>& Batch)
{
	for (const FActorProcessData& Item : Batch)
	{
		ProcessActor(Item);
	}
}

/**
Deferred Loading
**/

void FEMSLevelLoader::LoadDeferred()
{
	StartTick();
}

void FEMSLevelLoader::StartTick()
{
	if (EMS)
	{
		SetLoaderTimer([](TSharedPtr<FEMSLevelLoader> Loader)
		{
			if (Loader.IsValid())
			{
				Loader->Tick();
			}
		});
	}
}

void FEMSLevelLoader::Tick()
{
	SCOPE_CYCLE_COUNTER(STAT_EMSLoader_Tick);

	if (!EMS || bCompleted || EMS::ArrayEmpty(SavedActors))
	{
		FinishLoading();
		return;
	}

	//Continue deferred load tick
	if (ShouldContinueTicking())
	{
		if (CurrentIndex < SavedActors.Num())
		{
			StartTick();
		}
		else
		{
			FinishLoading();
		}
	}
}

bool FEMSLevelLoader::ShouldContinueTicking() 
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSActorLoader::ShouldContinueTicking"));

	int32 IterationCount = 0;

	while (IterationCount < BatchSize && CurrentIndex < SavedActors.Num())
	{
		//Early exit
		if (CheckCancel()) 
		{ 
			return false; 
		}

		if(CheckActorLimits(IterationCount))
		{
			return false;
		}

		const FActorSaveData Data = SavedActors[CurrentIndex];
		EvaluateAndProcess(Data);

		++CurrentIndex;
	}

	return true;
}

/**
Modular helpers
**/

void FEMSLevelLoader::EvaluateAndProcess(const FActorSaveData& Data)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSActorLoader::EvaluateAndProcess"));

	TWeakObjectPtr<AActor> ActorPtr;
	if (ShouldEvaluateData(Data, ActorPtr))
	{
		const FActorProcessData Item(Data, ActorPtr);
		ProcessActor(Item);
	}
}

static inline void LogActorLoaded(const FActorSaveData& ActorData)
{
	if (!UE_LOG_ACTIVE(LogEasyMultiSave, VeryVerbose))
	{
		return;
	}

	const FString ActorName = FSaveHelpers::StringFromBytes(ActorData.Name);
	const FString ActorClass = FSaveHelpers::StringFromBytes(ActorData.Class);
	const FString TypeDisplayName = StaticEnum<EActorType>()->GetNameStringByValue(static_cast<uint8>(ActorData.Type));

	UE_LOG(LogEasyMultiSave, VeryVerbose,
		TEXT("Actor Loaded - Name: %s | Class: %s | Type: %s "),
		*ActorName,
		*ActorClass,
		*TypeDisplayName);
}

void FEMSLevelLoader::ProcessActor(const FActorProcessData& ProcessData)
{
	AActor* Actor = ProcessData.ActorPtr.Get();
	const FActorSaveData ActorData = ProcessData.Data;
	const EActorType ActorType = EActorType(ActorData.Type);

	//Check for runtime Actors, make sure we never attempt to spawn any other type
	if (!IsValid(Actor) && FActorHelpers::IsRuntime(ActorType))
	{
		EMS->SpawnLevelActor(ActorData);

		LogActorLoaded(ActorData);

		return;
	}

	//Placed Actors
	if (IsValid(Actor) && !FActorHelpers::IsLoaded(Actor))
	{
		if (bIsWorldPartitionLoader)
		{
			EMS->LoadStreamingActor(Actor, ActorData);
		}
		else
		{
			EMS->ProcessLevelActor(Actor, ActorData, false);
		}

		LogActorLoaded(ActorData);
	}
}

bool FEMSLevelLoader::ShouldEvaluateData(const FActorSaveData& Data, TWeakObjectPtr<AActor>& OutActorPtr) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSActorLoader::ShouldEvaluateData"));

	const EActorType ActorType = EActorType(Data.Type);
	if (!FActorHelpers::IsLevelActor(ActorType, false))
	{
		return false;
	}

	//Find Actor
	const FActorByteKey Key(Data.Name);
	if (const TWeakObjectPtr<AActor>* Ptr = ActorMap.Find(Key))
	{
		OutActorPtr = *Ptr;
	}
	else
	{
		OutActorPtr = nullptr;
	}

	const bool bValid = OutActorPtr.IsValid();

	if (!bValid && FActorHelpers::IsRuntime(ActorType))
	{
		return true;
	}

	if (bValid && !FActorHelpers::IsLoaded(OutActorPtr.Get()))
	{
		return true;
	}

	return false;
}

bool FEMSLevelLoader::CheckActorLimits(int32& IterationCount)
{
    if (IterationCount >= MAX_ACTORS_PER_ITERATION)
    {
        UE_LOG(LogEasyMultiSave, Warning, TEXT("Hit actor iteration limit"));
    }

    if (TotalProcessedCount >= MAX_TOTAL_ACTORS)
    {
        UE_LOG(LogEasyMultiSave, Error, TEXT("Hit total actor limit"));
		FinishLoading();
        return true;
    }

    ++IterationCount;
    ++TotalProcessedCount;

    return false;
}

const bool FEMSLevelLoader::HasValidWorld() const
{
	if (!IsValid(EMS))
	{
		return false;
	}

	const TWeakObjectPtr<UWorld> TheWorld = MakeWeakObjectPtr(EMS->GetWorld());
	return TheWorld.IsValid();
}

bool FEMSLevelLoader::CheckCancel()
{
	FScopeLock Lock(&LoadActorScope);

	//Early exit if the load was canceled
	if (bCanceled || !EMS || !HasValidWorld() || IsEngineExitRequested())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Exiting background load process: Session ended or world is invalid."));
		FinishLoading();
		return true;
	}

	return false;
}

void FEMSLevelLoader::Destroy()
{
	bCanceled = true;

	SetLoaderTimer([](TSharedPtr<FEMSLevelLoader> Loader)
	{
		if (Loader.IsValid())
		{
			Loader->FinishLoading();
		}
	});
}

template<typename FuncType>
void FEMSLevelLoader::SetLoaderTimer(FuncType&& Callback)
{
	if (EMS)
	{
		TWeakPtr<FEMSLevelLoader> WeakPtr = AsShared();
		EMS->GetTimerManager().SetTimerForNextTick([WeakPtr, Callback = MoveTemp(Callback)]() mutable
		{
			if (TSharedPtr<FEMSLevelLoader> Loader = WeakPtr.Pin())
			{
				Callback(Loader);
			}
		});
	}
}

/**
Finish 
**/

void FEMSLevelLoader::FinishLoading()
{
	FScopeLock Lock(&LoadActorScope);

	if (bCompleted)
	{
		return;
	}

	bCompleted = true;

	//Capture a WeakPtr so we don’t keep the loader alive forever, but still fire the callback if it’s still around.
	TWeakPtr<FEMSLevelLoader> WeakPtr = AsShared();

	if (!IsInGameThread())
	{
		AsyncTask(ENamedThreads::GameThread, [WeakPtr]()
		{
			if (TSharedPtr<FEMSLevelLoader> Pinned = WeakPtr.Pin())
			{
				Pinned->OnComplete.ExecuteIfBound();
			}
		});
	}
	else
	{
		if (TSharedPtr<FEMSLevelLoader> Pinned = WeakPtr.Pin())
		{
			Pinned->OnComplete.ExecuteIfBound();
		}
	}
}

