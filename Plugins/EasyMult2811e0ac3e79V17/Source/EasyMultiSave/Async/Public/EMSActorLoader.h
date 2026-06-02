//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSData.h"
#include "EMSMisc.h"
#include "EMSLevel.h"
#include "EMSVersion.h"
#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "HAL/ThreadSafeBool.h"
#include "EMSActorLoader.generated.h"

class UEMSObject;

DECLARE_DELEGATE(FOnLoaderComplete);

DECLARE_STATS_GROUP(TEXT("Easy Multi Save"), STATGROUP_EMS, STATCAT_Advanced);
DECLARE_CYCLE_STAT(TEXT("EMS Loader Tick"), STAT_EMSLoader_Tick, STATGROUP_EMS);
DECLARE_CYCLE_STAT(TEXT("EMS Loader Gather"), STAT_EMSLoader_Gather, STATGROUP_EMS);

USTRUCT()
struct FLoaderInitData
{
    GENERATED_BODY()

public:

    bool bIsWorldPartition;
    TArray<FActorSaveData> InActorData;

    UPROPERTY()
    TMap<FActorByteKey, TWeakObjectPtr<AActor>> InActorMap;

    FLoaderInitData()
        : bIsWorldPartition(false)
    {
    }

    FLoaderInitData(bool bInIsWorldPartition, const TArray<FActorSaveData>& InData, const TMap<FActorByteKey, TWeakObjectPtr<AActor>>& InMap)
        : bIsWorldPartition(bInIsWorldPartition), InActorData(InData), InActorMap(InMap)
    {
    }
};

class EASYMULTISAVE_API FEMSLevelLoader : public TSharedFromThis<FEMSLevelLoader>
{

public:

    //Constructor and Destructor
    FEMSLevelLoader(UEMSObject* EMSObject, const FLoaderInitData& InitData);
    ~FEMSLevelLoader();

    //Factory
    static TSharedRef<FEMSLevelLoader> Create(UEMSObject* EMSObject, const FLoaderInitData& InitData);

    //Start loading
    void Start();
    FOnLoaderComplete OnComplete;

private:

    //ProcessData holds save data + pre-resolved actor pointer
    struct FActorProcessData
    {
        FActorSaveData Data;
        TWeakObjectPtr<AActor> ActorPtr;

        FActorProcessData()
        {
        }

        FActorProcessData(const FActorSaveData& InData, const TWeakObjectPtr<AActor>& InActorPtr)
            : Data(InData), ActorPtr(InActorPtr)
        {
        }
    };

    void LoadDefault();
    void LoadMultiThreaded();
    void GatherValidBatches();
    void ScheduleMainThreadBatchStart();
    void LoadDeferred();
    void StartTick();
    void Tick();
    void FinishLoading();

    void StartBatchTick();
    void ProcessNextBatch();
    void ProcessActorBatch(const TArray<FActorProcessData>& Batch);

    void EvaluateAndProcess(const FActorSaveData& Data);
    bool ShouldEvaluateData(const FActorSaveData& Data, TWeakObjectPtr<AActor>& OutActorPtr) const;
    void ProcessActor(const FActorProcessData& ProcessData);
    bool ShouldContinueTicking();

    bool CheckActorLimits(int32& IterationCount);

    void Destroy();

    const bool HasValidWorld() const;
    bool CheckCancel();

    template<typename FuncType>
    void SetLoaderTimer(FuncType&& Callback);

private:

    //Actor Load limits, likely never reached
    static constexpr int32 MAX_ACTORS_PER_ITERATION = 100000;
    static constexpr int32 MAX_TOTAL_ACTORS = 1000000;

    int32 TotalProcessedCount = 0;

    TObjectPtr<UEMSObject> EMS;

    TArray<FActorSaveData> SavedActors;
    TArray<TArray<FActorProcessData>> Batches;

    TMap<FActorByteKey, TWeakObjectPtr<AActor>> ActorMap;

    FCriticalSection LoadActorScope;

    FThreadSafeBool bCanceled = false;
    FThreadSafeBool bCompleted = false;

    bool bIsWorldPartitionLoader = false;

    int32 CurrentIndex = 0;
    int32 BatchSize = 0;
};
