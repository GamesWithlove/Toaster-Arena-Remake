//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSObjectBase.h"
#include "Engine/LevelStreamingDynamic.h"
#include "UObject/ObjectKey.h"
#include "EMSObject.generated.h"

class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class UEMSAsyncSaveGame;
class UEMSAsyncLoadGame;
class FBufferArchive;
class FMemoryReader;
class APawn;
class APlayerController;
class AController;
class AActor;
class UWorld;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmsLoadPlayerComplete, const APlayerController*, LoadedPlayer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmsLoadLevelComplete, const TArray<TSoftObjectPtr<AActor>>&, LoadedActors);

UCLASS(BlueprintType, meta = (DisplayName = "Easy Multi Save", Keywords = "Save, EMS, EasyMultiSave, EasySave"))
class EASYMULTISAVE_API UEMSObject : public UEMSObjectBase
{
	GENERATED_BODY()

protected:
	UEMSObject();

/** Variables */

public:

	UPROPERTY(BlueprintAssignable, Category = "Easy Multi Save | Delegates")
	FEmsLoadPlayerComplete OnPlayerLoaded;

	UPROPERTY(BlueprintAssignable, Category = "Easy Multi Save | Delegates")
	FEmsLoadLevelComplete OnLevelLoaded;

	UPROPERTY(BlueprintAssignable, Category = "Easy Multi Save | Delegates")
	FEmsLoadLevelComplete OnPartitionLoaded;

private:

	FCriticalSection SaveActorsScope;
	FCriticalSection LoadActorScope;

	FString CachedPersistentLevelName;

	uint8 bLoadFromMemory : 1;

	uint8 bInitWorldPartitionLoadComplete : 1;
	uint8 bTryInitWorldPartitionLoad : 1;

	uint8 bSaveStreaming : 1;

	uint8 bCachedIsWorldPartition : 1;
	uint8 bCachedHasStreamingLevels : 1;
	
	float WorldPartitionInitTimer;
	float StreamingSaveRequestTime;

	FDelegateHandle ActorDestroyedHandle;

/** Data Archive Cache Variables, Zero initialized(Transient) */

private:

	UPROPERTY(Transient)
	TSet<TWeakObjectPtr<AActor>> ActorList;

	UPROPERTY(Transient)
	TMap<FActorByteKey, TWeakObjectPtr<AActor>> ActorMap;

private:

	UPROPERTY(Transient)
	TArray<FLevelArchive> LevelArchiveList;	

	UPROPERTY(Transient)
	FMultiLevelStreamingData MultiLevelStreamData;
	
	UPROPERTY(Transient)
	TArray<FActorSaveData> SavedActors;

	UPROPERTY(Transient)
	TArray<FActorSaveData> SavedActorsPruned;

	UPROPERTY(Transient)
	TArray<FLevelScriptSaveData> SavedScripts;

	UPROPERTY(Transient)
	FGameObjectSaveData SavedGameMode;

	UPROPERTY(Transient)
	FGameObjectSaveData SavedGameState;

private:

	UPROPERTY(Transient)
	TSet<FActorSaveData> StreamingActors;

	UPROPERTY(Transient)
	TSet<FActorSaveData> DestroyedActors;

	UPROPERTY(Transient)
	TArray<TSoftObjectPtr<AActor>> RealLoadedActors;

	UPROPERTY(Transient)
	TMap<FActorByteKey, FActorSaveData> RawObjectLevelActors;

	TMap<FObjectKey, FGameObjectSaveData> RawObjectData;

private:

	UPROPERTY(Transient)
	FPlayerStackArchive PlayerStackData;

	UPROPERTY(Transient)
	FPlayerArchive SavedPlayer;

/** Blueprint Library function accessors */
	
public:

	UObject* LoadRawObject(const AActor* Actor, const FRawObjectSaveData& Data);
	bool SaveRawObject(const AActor* Actor, const FRawObjectSaveData& Data);

	bool SavePlayerActorsCustom(AController* Controller, const FString& FileName);
	bool LoadPlayerActorsCustom(AController* Controller, const FString& FileName);
	bool DeleteCustomPlayerFile(const FString& FileName);

/** Other public Functions  */

public:

	static UEMSObject* Get(const UObject* WorldContextObject);

	void PrepareLoadAndSaveActors(const uint32 Data, const EAsyncCheckType FunctionType, const EPrepareType PrepareType);

	bool SavePlayerActors(const APlayerController* Controller, const FString& FileName);
	void LoadPlayerActors(APlayerController* Controller);

	bool SaveLevelActors(const bool bMemoryOnly);
	void LoadLevelActors(UEMSAsyncLoadGame* LoadTask);
	void LoadGameMode();
	void LoadLevelScripts();

	void FinishLoadingLevel(const bool bHasLoadedFile);

	bool TryLoadPlayerFile();
	bool TryLoadLevelFile();

	APlayerController* GetPlayerController() const;
	APawn* GetPlayerPawn(const APlayerController* PC) const;

	FTimerManager& GetTimerManager() const;

	bool HasValidGameWorld() const;
	bool HasValidPlayer() const;

/** Internal Functions  */

public:

	void SaveActorToBinary(const AActor* Actor, FGameObjectSaveData& OutData) const;
	void LoadActorFromBinary(AActor* Actor, const FGameObjectSaveData& InData) const;

	void SpawnLevelActor(const FActorSaveData& ActorArray);
	void ProcessLevelActor(AActor* Actor, const FActorSaveData& ActorArray, const bool bSetupStructs = true);

	void LoadStreamingActor(AActor* Actor, const FActorSaveData& ActorData);

	void PruneLevelActors();

protected:

	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;

private:

	void CreateLevelActor(UClass* SpawnClass, const FActorSaveData& ActorArray, const FActorSpawnParameters& SpawnParams);
	void FailSpawnLevelActor(const FActorSaveData& ActorArray) const;

	bool UnpackActorArchive(FMemoryReader& FromBinary, const EDataLoadType LoadType) override;
	bool UnpackLevelArchive(FMemoryReader& FromBinary);
	bool UnpackPlayerArchive(FMemoryReader& FromBinary);
	bool UnpackLevel(const FLevelArchive& LevelArchive);
	void UnpackPlayer(const FPlayerArchive& PlayerArchive);

	void PrepareLevelActors(const FActorInitContext& Init);
	void PreparePlayerActors(const FActorInitContext& Init);
	void AddActorToList(const FActorInitContext& Init);
	void InitListActor(const FActorInitContext& Init);
	
	FGameObjectSaveData ParseGameModeObjectForSaving(const AActor* Actor) const;
	FLevelScriptSaveData ParseLevelScriptForSaving(const AActor* Actor) const;
	FActorSaveData ParseLevelActorForSaving(const AActor* Actor, const EActorType Type) const;

	static void ProcessSaveEvent(const TWeakObjectPtr<const UObject> WeakRef, ESaveEventType SaveType);
	void ExecuteSaveEvent(const UObject* InObject, const ESaveEventType SaveType) const;
	void ExecuteActorPreSave(const AActor* Actor) const;
	void ExecuteActorSaved(const AActor* Actor) const;
	void ExecuteActorPreLoad(AActor* Actor) const;
	void ExecuteActorLoaded(AActor* Actor) const;
	void ExecuteComponentPreSave(const UActorComponent* Comp) const;
	void ExecuteComponentSaved(const UActorComponent* Comp) const;

	void SerializeActorStructProperties(const AActor* Actor) const;

	TArray<UActorComponent*> GetSaveComponents(const AActor* Actor) const;
	void SaveActorComponents(const AActor* Actor, TArray<FComponentSaveData>& OutComponents) const;
	void LoadActorComponents(const AActor* Actor, const TArray<FComponentSaveData>& InComponents) const;

	UObject* SerializeFromRawObject(const AActor* Actor, const FRawObjectSaveData& Data, const TArray<FComponentSaveData>& InputArray);
	void AppendRawObjectData(const AActor* Actor, TArray<FComponentSaveData>& OutComponents) const;
	void UpdateRawObjectData(const AActor* Actor, const FComponentSaveData& InputData);

	FLevelStackArchive AddMultiLevelStackData(const FLevelArchive& LevelArchive, const FLevelArchive& PersistentArchive, const FGameObjectSaveData& InGameMode, const FGameObjectSaveData& InGameState);
	FLevelArchive AddMultiLevelStreamData(const FLevelArchive& LevelArchive);
	void UpdateMultiLevelStreamData(const FLevelArchive& LevelArchive);

/** Actor Delegates  */

private:

	void OnActorDestroyed(AActor* DestroyedActor);
	void RemoveActorDelegates(UWorld* World);

/** World Delegates  */

	void OnPreWorldInit(UWorld* World, const UWorld::InitializationValues IVS);
	void OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);

	void OnLevelStreamingStateChanged(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLevelIfLoaded, ELevelStreamingState PreviousState, ELevelStreamingState NewState);
	void OnLevelBeginMakingInvisible(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLoadedLevel);
	void RemoveWorldStreamDelegates();

/** General Streaming Functions  */

	void HandleStreamingPersistence(const UWorld* InWorld, const ULevel* InLevel, const bool bIsLoading);
	bool ProcessSaveStreamingActors(const ULevel* InLoadedLevel);
	void StartStreamingSave(const ULevel* InLoadedLevel);
	void StartStreamingLoad(const ULevel* InLoadedLevel);
	void TryAccumulatedStreamingSave();

/** World Partition Functions  */

private:

	void WorldPartitionLoadLevel(const ULevel* InLoadedLevel);
	void WorldPartitionSaveLevel(const UWorld* InWorld, const ULevel* InLoadedLevel);

	void TryInitWorldPartition();
	void PollInitWorldPartition();

/** Manual Streaming Functions  */

private:

	void TrySaveStreamingLevel();
	void AccumulatedSaveStreamingLevel();

/** Delegate Functions  */

public:

	inline void BroadcastOnPartitionLoaded()
	{
		OnPartitionLoaded.Broadcast(RealLoadedActors);
		RealLoadedActors.Empty();
	}

	inline void BroadcastOnLevelLoaded()
	{
		OnLevelLoaded.Broadcast(RealLoadedActors);
		RealLoadedActors.Empty();
	}

	inline void AllocateRealLoadedActors(const int32 AllocNum)
	{
		RealLoadedActors.Reserve(AllocNum);
	}

	inline bool HasActuallyLoadedActors()
	{
		return !EMS::ArrayEmpty(RealLoadedActors);
	}

/** Clear Data Functions  */

public:

	inline void ClearMultiLevelSave()
	{
		ClearSavedLevelActors();
		ClearStreamingData();
		ClearMultiSaveLevels();
		LevelArchiveList.Empty();
		PlayerStackData = FPlayerStackArchive();
		bLoadFromMemory = false;
		bSaveStreaming = false;
	}

	inline void ClearWorldPartition()
	{
		bInitWorldPartitionLoadComplete = false;
		bTryInitWorldPartitionLoad = false;
		WorldPartitionInitTimer = 0.f;
		bLoadFromMemory = false;
		bSaveStreaming = false;
		StreamingActors.Empty();
	}

private:

	inline void ClearPlayerPosition()
	{
		SavedPlayer.ClearPosition();
	}

	inline void ClearActorList()
	{
		ActorList.Empty();
		ActorMap.Empty();
		RawObjectData.Empty();
	}

	inline void ClearSavedLevelActors()
	{
		SavedActors.Empty();
		SavedScripts.Empty();
		SavedActorsPruned.Empty();

		ClearDestroyedActors();
	}

	inline void ClearStreamingData()
	{
		MultiLevelStreamData = FMultiLevelStreamingData();
	}

	inline void ClearStreamingActors()
	{
		StreamingActors.Empty();
	}

	inline void ClearDestroyedActors()
	{
		DestroyedActors.Empty();
	}

	inline void ClearRawObjectLevelActors()
	{
		RawObjectLevelActors.Empty();
	}

	inline void ClearUserData() override
	{
		Super::ClearUserData();

		//When setting/deleting a Save User, we need to clear this
		ClearMultiLevelSave();
		ClearWorldPartition();
		ClearRawObjectLevelActors();
	}

/** Actor Helpers  */

public:

	FName GetLevelName();
	void AssignLevelName(const UWorld* InWorld);
	bool MatchesLevelName(const FName& InLevelName);
	static FName LevelScriptSaveName(const AActor* Actor);
	static EActorType GetActorType(const AActor* Actor);
	static FString GetActorLevelName(const AActor* Actor);
	static FString GetFullActorName(const AActor* Actor);
	static bool IsLoaded(const AActor* Actor);
	static bool IsPlaced(const AActor* Actor);
	static bool IsSkipSave(const AActor* Actor);
	static bool IsSkipTransform(const AActor* Actor);
	static bool IsLevelScript(const EActorType Type);
	static bool IsLevelActor(const EActorType Type, const bool bIncludeScripts);
	static bool HasSaveInterface(const AActor* Actor);
	static bool HasComponentSaveInterface(const UActorComponent* Comp);

protected:

	void ClearLoadFromMemory() override;

/** Other Helper Functions  */

public:

	inline static bool AutoDestroyActors()
	{
		return UEMSPluginSettings::Get()->bAutoDestroyActors;
	}

	inline static bool AdvancedSpawnCheck()
	{
		return UEMSPluginSettings::Get()->bAdvancedSpawnCheck;
	}

	inline bool IsValidActor(const AActor* Actor) const
	{
		return IsValid(Actor) && HasSaveInterface(Actor);
	}

	inline bool IsValidForSaving(const AActor* Actor) const
	{
		return IsValidActor(Actor) && !IsSkipSave(Actor);
	}

	inline bool IsValidForLoading(const AActor* Actor) const
	{
		return IsValidActor(Actor) && !IsLoaded(Actor);
	}

	inline bool HasLevelData() const
	{
		return !EMS::ArrayEmpty(SavedActors) 
			|| !EMS::ArrayEmpty(SavedScripts) 
			|| !EMS::ArrayEmpty(SavedGameMode.Data)
			|| !EMS::ArrayEmpty(SavedGameState.Data)
			|| MultiLevelStreamData.HasData();
	}

/** Streaming Helpers  */

public:

	inline bool HasAnyLevelStreaming() const
	{
		return bCachedHasStreamingLevels || bCachedIsWorldPartition;
	}

	inline bool IsLevelStreaming() const
	{
		return FStreamHelpers::IsLevelStillStreaming(GetWorld());
	}

	inline bool CanProcessStreaming() const
	{
		return FStreamHelpers::CanProcessStreaming(GetWorld());
	}

	inline bool AutoSaveLoadStreamingLevels()
	{
		return bCachedHasStreamingLevels && UEMSPluginSettings::Get()->LevelStreamSaving != EAutoSaveStreamMethod::Disabled;
	}

	inline FMultiLevelStreamingData GetMultiLevelStreamData() const
	{
		return MultiLevelStreamData;
	}

/** World Partition Helpers  */

public:

	inline bool AutoSaveLoadWorldPartition() const
	{
		return bCachedIsWorldPartition;
	}

	inline bool CanProcessWorldPartition() const
	{
		return FStreamHelpers::CanProcessWorldPartition(GetWorld());
	}

	inline bool IsInitialWorldPartitionLoading() const
	{
		return !bInitWorldPartitionLoadComplete && IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_Level, EAsyncCheckType::CT_Load, false);
	}

	inline static bool SkipInitialWorldPartitionLoad()
	{
		return UEMSPluginSettings::Get()->WorldPartitionInit == EWorldPartitionInit::Skip;
	}

	inline bool AlwaysAutoLoadWorldPartition() const
	{
		return bInitWorldPartitionLoadComplete && bLoadFromMemory;
	}

	inline bool WorldPartitionLoadComplete() const
	{
		return bInitWorldPartitionLoadComplete && !IsLevelStreaming() && !IsInitialWorldPartitionLoading();
	}
};
