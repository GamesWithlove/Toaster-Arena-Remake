//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSObject.h"
#include "EMSActors.h"
#include "EMSAsyncStream.h"
#include "EMSCustomSaveGame.h"
#include "EMSInfoSaveGame.h"
#include "EMSAsyncLoadGame.h"
#include "EMSAsyncSaveGame.h"
#include "EMSActorSaveInterface.h"
#include "EMSCompSaveInterface.h"
#include "EMSActorLoader.h"
#include "EngineUtils.h"
#include "Engine/Engine.h"
#include "Engine/EngineTypes.h"
#include "Engine/Level.h"
#include "Engine/World.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/GameInstance.h"
#include "Engine/LevelStreaming.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Serialization/BufferArchive.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Async/Async.h"
#include "SaveGameSystem.h"
#include "PlatformFeatures.h"
#include "Streaming/LevelStreamingDelegates.h"


/**
Initalization
**/

UEMSObject::UEMSObject() : UEMSObjectBase()
{ 
	CachedPersistentLevelName.Empty();
	WorldPartitionInitTimer = 0.f;
	StreamingSaveRequestTime = 0.f;
	bLoadFromMemory = false;
	bInitWorldPartitionLoadComplete = false;
	bTryInitWorldPartitionLoad = false;
	bSaveStreaming = false;
	bCachedIsWorldPartition = false;
	bCachedHasStreamingLevels = false;
}

void UEMSObject::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FWorldDelegates::OnPreWorldInitialization.AddUObject(this, &UEMSObject::OnPreWorldInit);
	FWorldDelegates::OnWorldCleanup.AddUObject(this, &UEMSObject::OnWorldCleanup);

	UEMSPluginSettings::BuildLevelRedirects();
}

void UEMSObject::Deinitialize()
{
	RemoveWorldStreamDelegates();
	FWorldDelegates::OnPreWorldInitialization.RemoveAll(this);
	FWorldDelegates::OnWorldCleanup.RemoveAll(this);
}

UEMSObject* UEMSObject::Get(const UObject* WorldContextObject)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (World)
	{
		const UGameInstance* GameInst = World->GetGameInstance();
		if (GameInst)
		{
			UEMSObject* EMSSubSystem = GameInst->GetSubsystem<UEMSObject>();
			if (EMSSubSystem)
			{
				return EMSSubSystem;
			}
		}
	}

	return nullptr;
}

/**
Load Level and Player Files
**/

bool UEMSObject::TryLoadPlayerFile()
{
	//Player has no load from memory, as it is loaded once at the beginning in most cases.
	const FLoadArchiveContext Context = FLoadArchiveContext(PlayerSaveFile(), EDataLoadType::DATA_Player);
	return LoadBinaryArchive(Context);
}

bool UEMSObject::TryLoadLevelFile()
{
	//Check for memory load
	if (bLoadFromMemory && HasLevelData())
	{
		return true;
	}

	const FLoadArchiveContext Context = FLoadArchiveContext(ActorSaveFile(), EDataLoadType::DATA_Level);
	const bool bDiskLoadSuccess = LoadBinaryArchive(Context);

	//We don't have data yet, but want to allow auto-saving
	if (!bDiskLoadSuccess && AutoSaveLoadWorldPartition())
	{
		bInitWorldPartitionLoadComplete = true;
	}

	//Allow loading from memory
	bLoadFromMemory = bDiskLoadSuccess;

	return bDiskLoadSuccess;
}

/**
Unpack Archive Functions
**/

bool UEMSObject::UnpackActorArchive(FMemoryReader& FromBinary, const EDataLoadType LoadType)
{
	if (LoadType == EDataLoadType::DATA_Level)
	{
		//Per-Level data must be cleared
		ClearSavedLevelActors();
		ClearStreamingData();

		return UnpackLevelArchive(FromBinary);
	}
	else if (LoadType == EDataLoadType::DATA_Player)
	{
		return UnpackPlayerArchive(FromBinary);
	}

	return false;
}

bool UEMSObject::UnpackLevelArchive(FMemoryReader& FromBinary)
{
	bool bLevelLoadSuccess = false;

	//Check for multi level saving.
	if (IsStackBasedMultiLevelSave())
	{
		FLevelStackArchive LevelStack;
		FromBinary << LevelStack;

		//Copy from disk to memory.
		if (EMS::ArrayEmpty(LevelArchiveList))
		{
			LevelArchiveList = LevelStack.Archives;
		}

		//It will only unpack the archive for the current level.
		for (const FLevelArchive& StackedArchive : LevelStack.Archives)
		{
			if (MatchesLevelName(StackedArchive.Level))
			{
				if (IsFullMultiLevelSave())
				{
					UpdateMultiLevelStreamData(StackedArchive);
				}

				UnpackLevel(StackedArchive);
			}
			else if (StackedArchive.Level == EMS::PersistentActors)
			{
				//Persistent Actors have their own sub-archive
				UnpackLevel(StackedArchive);
			}
		}

		SavedGameMode = LevelStack.SavedGameMode;
		SavedGameState = LevelStack.SavedGameState;

		bLevelLoadSuccess = true;
	}
	else
	{
		FLevelArchive LevelArchive;
		FromBinary << LevelArchive;

		//Update stream data for current level only
		if (IsStreamMultiLevelSave() && MatchesLevelName(LevelArchive.Level))
		{
			UpdateMultiLevelStreamData(LevelArchive);
		}

		if (UnpackLevel(LevelArchive))
		{
			bLevelLoadSuccess = true;
		}
	}

	return bLevelLoadSuccess;
}

bool UEMSObject::UnpackLevel(const FLevelArchive& LevelArchive)
{
	bool bLevelLoadSuccess = false;
	const bool bIsMatchingLevel = MatchesLevelName(LevelArchive.Level);

	SavedActors.Reserve(LevelArchive.SavedActors.Num());
	for (const FActorSaveData& TempSavedActor : LevelArchive.SavedActors)
	{
		//Add Actors from the current level or persistent ones
		if (FActorHelpers::IsPersistent(EActorType(TempSavedActor.Type)) || bIsMatchingLevel)
		{
			SavedActors.Add(TempSavedActor);
			bLevelLoadSuccess = true;
		}
	}

	if (bIsMatchingLevel)
	{
		SavedScripts.Append(LevelArchive.SavedScripts);
		bLevelLoadSuccess = true;
	}

	//Basic Multi-Level saving saves mode in the level stack. It is always persistent.
	if (!IsStackBasedMultiLevelSave())
	{
		if (bIsMatchingLevel)
		{
			SavedGameMode = LevelArchive.SavedGameMode;
			SavedGameState = LevelArchive.SavedGameState;
			bLevelLoadSuccess = true;
		}
	}

	return bLevelLoadSuccess;
}

bool UEMSObject::UnpackPlayerArchive(FMemoryReader& FromBinary)
{
	//Check for multi level saving.
	if (IsStackBasedMultiLevelSave())
	{
		FPlayerStackArchive PlayerStack;
		FromBinary << PlayerStack;

		//Copy from disk to memory.
		if (PlayerStackData.IsEmpty())
		{
			PlayerStackData = PlayerStack;
		}

		UnpackPlayer(PlayerStack.PlayerArchive);

		//Set transform per level
		for (auto It = PlayerStack.LevelPositions.CreateConstIterator(); It; ++It)
		{
			if (MatchesLevelName(It.Key()))
			{
				FPlayerPositionArchive PosArchive = It.Value();
				PosArchive.CopyToPlayerArchive(SavedPlayer);
				return true;
			}
		}

		//This prevents loading previous position for an unsaved level
		ClearPlayerPosition();

		return true;
	}
	else
	{
		FPlayerArchive PlayerArchive;
		FromBinary << PlayerArchive;

		if (MatchesLevelName(PlayerArchive.Level))
		{
			UnpackPlayer(PlayerArchive);
			return true;
		}
	}

	return false;
}

void UEMSObject::UnpackPlayer(const FPlayerArchive& PlayerArchive)
{
	SavedPlayer.UnpackPlayer(PlayerArchive);
}

/**
Prepare Actors for Load and Save
**/

void UEMSObject::PrepareLoadAndSaveActors(const uint32 Data, const EAsyncCheckType FunctionType, const EPrepareType PrepareType)
{
	const bool bIsLoading = (FunctionType == EAsyncCheckType::CT_Load);
	const bool bFullReload = (PrepareType == EPrepareType::PT_FullReload);

	if (bIsLoading && bFullReload)
	{
		ClearLoadFromMemory();
		ClearRawObjectLevelActors();
	}

	//Player
	if (EMSFLAG::IsPlayer(Data))
	{
		PreparePlayerActors(FActorInitContext(GetPlayerController(), bIsLoading, bFullReload));
	}

	//Level
	if (EMSFLAG::IsLevel(Data))
	{
		PrepareLevelActors(FActorInitContext(bIsLoading, bFullReload));
	}
}

void UEMSObject::PreparePlayerActors(const FActorInitContext& Init)
{
	APlayerController* Controller = Cast<APlayerController>(Init.Actor);
	if (!Controller)
	{
		return;
	}

	TArray<AActor*, TInlineAllocator<3>> PlayerActors;
	PlayerActors.Add(Controller);

	if (APawn* Pawn = GetPlayerPawn(Controller))
	{
		PlayerActors.Add(Pawn);
	}

	if (APlayerState* PlayerState = Controller->PlayerState)
	{
		PlayerActors.Add(PlayerState);
	}

	//Optimized path where we dont iterate the world
	for (AActor* Actor : PlayerActors)
	{
		if (!IsValidActor(Actor) || IsSkipSave(Actor))
		{
			continue;
		}

		InitListActor(FActorInitContext(Actor, Init));
	}
}

void UEMSObject::PrepareLevelActors(const FActorInitContext& Init)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::PrepareLevelActors"));

	ClearActorList();

	const UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	for (FActorIterator It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsValidActor(Actor) || IsSkipSave(Actor))
		{
			continue;
		}

		AddActorToList(FActorInitContext(Actor, Init));
	}
}

void UEMSObject::AddActorToList(const FActorInitContext& Init)
{
	AActor* Actor = Init.Actor;
	if (!Actor)
	{
		return;
	}

	//Don't consider loaded placed Actors at all. Runtime Actors require another check, otherwise they would duplicate
	if (!Init.bFullReload)
	{
		if (Init.bIsLoading && IsPlaced(Actor) && IsLoaded(Actor))
		{
			return;
		}
	}

	/*
	bIsLevelPlayerPawn load the default pawn again with data from the level file,
	in case player was possessing a different pawn when saving. Default pawn is still possessed during prepare.
	We can only load a placed Pawn Actor. If spawned at runtime from PlayerStart, the initial/default Pawn has to be removed manually.
	EMS will respawn the saved Pawn as runtime Actor, keeping any soft-refs available.
	*/

	const EActorType Type = GetActorType(Actor);
	const bool bIsLevelPlayerPawn =  Init.bIsLoading  && IsPlaced(Actor) && Type == EActorType::AT_PlayerPawn;
	const bool bIsLevelActor = IsLevelActor(Type, true);
	const bool bIsGameMode = (Type == EActorType::AT_GameObject);

	if (!bIsLevelActor && !bIsLevelPlayerPawn && !bIsGameMode)
	{
		return;
	}

	InitListActor(Init);

	//Not relevant for game mode anymore
	if (bIsGameMode)
	{
		return;
	}

	if (Init.bIsLoading)
	{
		//Map for load
		const FString FullName = IsLevelScript(Type) ? GetActorLevelName(Actor) : GetFullActorName(Actor);
		const TArray<uint8> DataName = BytesFromString(FullName);
		ActorMap.Add(FActorByteKey(DataName), Actor);
	}
	else
	{
		//List for save
		ActorList.Add(Actor);
	}
}

void UEMSObject::InitListActor(const FActorInitContext& Init)
{
	AActor* Actor = Init.Actor;
	if (!Actor)
	{
		return;
	}

	//Structs and tags
	SerializeActorStructProperties(Init.Actor);
	Init.ApplyLoadStateTag();
}

/**
Saving Level Actors
**/

bool UEMSObject::SaveLevelActors(const bool bMemoryOnly)
{
	TArray<FActorSaveData> InActors;
	TArray<FActorSaveData> InPersistentActors;
	TArray<FLevelScriptSaveData> InScripts;
	FGameObjectSaveData InGameMode;
	FGameObjectSaveData InGameState;

	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::SaveLevelActors"));

	FScopeLock Lock(&SaveActorsScope);

	bool bCancelSave = false;

	for (const TWeakObjectPtr<AActor>& ActorWeakPtr : ActorList)
	{
		//Check if we are being interrupted(Engine shutdown etc.)
		if(FAsyncSaveHelpers::ShouldCancelSaveTask(this))
		{
			bCancelSave = true;
			break;
		}
		
		if (ActorWeakPtr.IsStale() || !ActorWeakPtr.IsValid())
		{
			continue;
		}

		//Read only
		const AActor* Actor = ActorWeakPtr.Get();
		if (!Actor || !IsValidForSaving(Actor))
		{
			continue;
		}

		const EActorType Type = GetActorType(Actor);

		switch (Type)
		{
		case EActorType::AT_Runtime:
		case EActorType::AT_Placed:
			{
				const FActorSaveData ActorArray = ParseLevelActorForSaving(Actor, Type);
				InActors.Add(ActorArray);
			}
			break;

		case EActorType::AT_Persistent:
			{
				const FActorSaveData ActorArray = ParseLevelActorForSaving(Actor, Type);
				InPersistentActors.Add(ActorArray);
			}
			break;

		case EActorType::AT_LevelScript:
			{
				const FLevelScriptSaveData ScriptArray = ParseLevelScriptForSaving(Actor);
				InScripts.Add(ScriptArray);
			}
			break;

		default:
			break;
		}
	}

	//Make sure to not overwrite old data when canceled
	if (bCancelSave)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Save Level Actors was interrupted. No new data will be written to prevent data loss or partial saves."));
		return false;
	}

	//World Partition Actors
	if (!EMS::ArrayEmpty(StreamingActors))
	{
		InActors.Append(StreamingActors.Array());
		ClearStreamingActors();
	}

	//Destroyed Actors
	if (!EMS::ArrayEmpty(DestroyedActors))
	{
		InActors.Append(DestroyedActors.Array());

		//Only clear this with when the data is carried over to the streaming archive
		if (IsContainingStreamMultiLevelSave())
		{
			ClearDestroyedActors(); 
		}
	}

	//Game Mode/State Actors
	if (const UWorld* World = GetWorld())
	{
		InGameMode = ParseGameModeObjectForSaving(World->GetAuthGameMode());
		InGameState = ParseGameModeObjectForSaving(World->GetGameState());
	}

	FLevelArchive LevelArchive;
	{
		//Stack based only has one set of data for mode and state, so skip
		if (!IsStackBasedMultiLevelSave())
		{
			LevelArchive.SavedGameMode = InGameMode;
			LevelArchive.SavedGameState = InGameState;

			//Also make sure we add persistent Actors
			InActors.Append(InPersistentActors);
		}

		LevelArchive.SavedActors = InActors;
		LevelArchive.SavedScripts = InScripts;
		LevelArchive.Level = GetLevelName();
	}

	//MLS persistent Archive, which is like a virtual level archive
	FLevelArchive PersistentArchive;
	{
		if (IsStackBasedMultiLevelSave())
		{
			PersistentArchive.SavedActors = InPersistentActors;
			PersistentArchive.Level = EMS::PersistentActors;
		}
	}

	FBufferArchive LevelData;

	//Check for multi level saving.
	if (IsNormalMultiLevelSave())
	{
		FLevelStackArchive LevelStack = AddMultiLevelStackData(LevelArchive, PersistentArchive, InGameMode, InGameState);
		LevelData << LevelStack;
	}
	else if (IsStreamMultiLevelSave())
	{
		FLevelArchive StreamArchive = AddMultiLevelStreamData(LevelArchive);
		LevelData << StreamArchive;
	}
	else if (IsFullMultiLevelSave())
	{
		const FLevelArchive StreamArchive = AddMultiLevelStreamData(LevelArchive);
		FLevelStackArchive MultiLevelStack = AddMultiLevelStackData(StreamArchive, PersistentArchive, InGameMode, InGameState);
		LevelData << MultiLevelStack;
	}
	else
	{
		LevelData << LevelArchive;
	}

	//Fail logging level
	auto LogFailedToSave = []()
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Level Actors"));
	};

	if (FSaveHelpers::HasSaveArchiveError(LevelData, ESaveErrorType::ER_Level))
	{
		LogFailedToSave();
		return false;
	}

	//Memory only automatic saving. Much faster as it skips compression etc. 
	if (bMemoryOnly)
	{
		bLoadFromMemory = true;
		UE_LOG(LogEasyMultiSave, Log, TEXT("Level and Game Actors stored in memory"));
		return true;
	}

	if (SaveBinaryArchive(ActorSaveFile(), LevelData))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Level and Game Actors have been saved"));
		return true;
	}

	LogFailedToSave();

	return false;
}

/**
Actor Save Parsing 
**/

FGameObjectSaveData UEMSObject::ParseGameModeObjectForSaving(const AActor* Actor) const
{
	FGameObjectSaveData GameObjectActorData;

	if (Actor && IsValidForSaving(Actor))
	{
		SaveActorToBinary(Actor, GameObjectActorData);
	}

	return GameObjectActorData;
}

FLevelScriptSaveData UEMSObject::ParseLevelScriptForSaving(const AActor* Actor) const
{
	FLevelScriptSaveData ScriptArray;
	ScriptArray.Name = LevelScriptSaveName(Actor);
	SaveActorToBinary(Actor, ScriptArray.SaveData);

	return ScriptArray;
}

FActorSaveData UEMSObject::ParseLevelActorForSaving(const AActor* Actor, const EActorType Type) const
{
	FActorSaveData ActorArray;

	ActorArray.Type = uint8(Type);
	ActorArray.Name = BytesFromString(GetFullActorName(Actor));
	
	//Class is saved for runtime and persistent Actors
	if (FActorHelpers::IsRuntime(Type))
	{
		ActorArray.Class = BytesFromString(Actor->GetClass()->GetPathName());
	}

	//No transform for persistent Actors or if skipped
	if (!FActorHelpers::IsPersistent(Type) && FActorHelpers::CanProcessActorTransform(Actor))
	{
		ActorArray.Transform = Actor->GetActorTransform();
	}
	else
	{
		ActorArray.Transform = FTransform::Identity;
	}

	SaveActorToBinary(Actor, ActorArray.SaveData);

	return ActorArray;
}

/**
Loading Level Actors
**/

void UEMSObject::LoadGameMode()
{
	//Game Mode Actor
	if (!EMS::ArrayEmpty(SavedGameMode.Data))
	{
		AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
		if (GameMode && IsValidForLoading(GameMode))
		{
			LoadActorFromBinary(GameMode, SavedGameMode);
			UE_LOG(LogEasyMultiSave, Log, TEXT("Game Mode loaded"));
		}
	}

	//Game State Actor
	if (!EMS::ArrayEmpty(SavedGameState.Data))
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		if (GameState && IsValidForLoading(GameState))
		{
			LoadActorFromBinary(GameState, SavedGameState);
			UE_LOG(LogEasyMultiSave, Log, TEXT("Game State loaded"));
		}
	}
}

void UEMSObject::LoadLevelScripts()
{
	if (ActorMap.IsEmpty())
	{
		return;
	}

	for (const FLevelScriptSaveData& ScriptData : SavedScripts)
	{
		const FString ActorName = ScriptData.Name.ToString();
		const FActorByteKey Key(BytesFromString(ActorName)); 

		if (const TWeakObjectPtr<AActor>* ActorWeakPtr = ActorMap.Find(Key))
		{
			if (!ActorWeakPtr->IsValid())
			{
				continue;
			}

			AActor* Actor = ActorWeakPtr->Get();
			if (!IsValidForLoading(Actor))
			{
				continue;
			}

			const EActorType Type = GetActorType(Actor);
			if (!IsLevelScript(Type))
			{
				continue;
			}

			LoadActorFromBinary(Actor, ScriptData.SaveData);
			UE_LOG(LogEasyMultiSave, Log, TEXT("%s Level Blueprint loaded"), *ActorName);
		}
	}
}

void UEMSObject::LoadLevelActors(UEMSAsyncLoadGame* LoadTask)
{
	if (!LoadTask)
	{
		return;
	}

	if (EMS::ArrayEmpty(SavedActorsPruned))
	{
		LoadTask->FinishLoading();
		return;
	}

	//Start the actual loading task
	const FLoaderInitData LoaderData(false, SavedActorsPruned, ActorMap);
	LoadTask->LoadLevelActors(LoaderData);
}

void UEMSObject::PruneLevelActors()
{
	//Global copy of only pruned Actors, SaveActors is holding all unpacked Actors during session/level
	SavedActorsPruned = SavedActors;

	//Make sure we only parse Actor data for Actors that are alive
	if (HasAnyLevelStreaming() || IsContainingStreamMultiLevelSave())
	{
		FActorHelpers::PruneSavedActors(ActorMap, SavedActorsPruned);
	}

	AllocateRealLoadedActors(SavedActorsPruned.Num());
}

void UEMSObject::SpawnLevelActor(const FActorSaveData & ActorArray)
{
	if (EMS::ArrayEmpty(ActorArray.Class))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to respawn Level Actor with invalid Class"));
		FailSpawnLevelActor(ActorArray);
		return;
	}

	//Make sure to not respawn destroyed Actors from memory
	if (DestroyedActors.Contains(ActorArray))
	{
		return;
	}

	const EActorType Type = EActorType(ActorArray.Type);
	if (!FActorHelpers::IsRuntime(Type))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to respawn non-runtime Level Actor from save data"));
		FailSpawnLevelActor(ActorArray);
		return;
	}

	const FString Class = StringFromBytes(ActorArray.Class);
	UClass* SpawnClass = FSpawnHelpers::ResolveSpawnClass(Class);

	if (!SpawnClass)
	{
		const FString ActorName = StringFromBytes(ActorArray.Name);
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Spawn Class '%s' could not be loaded for Actor: %s"), *Class, *ActorName);
		return;
	}

	const FActorSpawnParameters SpawnParams = FSpawnHelpers::GetSpawnParams(this, ActorArray);
	if (SpawnParams.Name.IsNone() || !SpawnClass->ImplementsInterface(UEMSActorSaveInterface::StaticClass()))
	{
		return;
	}

	//Actually spawn and process the runtime Actor
	CreateLevelActor(SpawnClass, ActorArray, SpawnParams);
}

void UEMSObject::CreateLevelActor(UClass* SpawnClass, const FActorSaveData& ActorArray, const FActorSpawnParameters& SpawnParams)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	//Advanced Spawn checking
	if (AdvancedSpawnCheck())
	{
		if (AActor* Actor = FSpawnHelpers::CheckForExistingActor(World, ActorArray))
		{
			ProcessLevelActor(Actor, ActorArray);
			return;
		}
	}

	AActor* NewActor = World->SpawnActor(SpawnClass, &ActorArray.Transform, SpawnParams);
	if (NewActor)
	{
		ProcessLevelActor(NewActor, ActorArray);
	}
	else
	{
		FailSpawnLevelActor(ActorArray);
	}
}

void UEMSObject::ProcessLevelActor(AActor* Actor, const FActorSaveData& ActorArray, const bool bSetupStructs)
{
	//Destroy
	if (AutoDestroyActors())
	{
		if (ActorArray.Type == uint8(EActorType::AT_Destroyed))
		{
			Actor->Destroy(false, false);
			return;
		}
	}

	//Used for runtime and WP Actors, can be skipped for placed Actors
	if (bSetupStructs)
	{
		SerializeActorStructProperties(Actor);
	}

	if (FActorHelpers::CanProcessActorTransform(Actor) && FActorHelpers::HasValidTransform(ActorArray.Transform))
	{
		Actor->SetActorTransform(ActorArray.Transform, false, nullptr, ETeleportType::TeleportPhysics);
	}

	RealLoadedActors.Add(Actor);
	RawObjectLevelActors.Add(FActorByteKey(ActorArray.Name), ActorArray);

	LoadActorFromBinary(Actor, ActorArray.SaveData);
}

void UEMSObject::LoadStreamingActor(AActor* Actor, const FActorSaveData& ActorData)
{
	FScopeLock Lock(&LoadActorScope);

	if (!IsInGameThread())
	{
		AsyncTask(ENamedThreads::GameThread, [this, Actor, ActorData]()
		{
			ProcessLevelActor(Actor, ActorData);
		});
	}
	else
	{
		ProcessLevelActor(Actor, ActorData);
	}
}

void UEMSObject::FailSpawnLevelActor(const FActorSaveData& ActorArray) const
{
	const FString ActorName = StringFromBytes(ActorArray.Name);
	UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to spawn Level Actor: %s"), *ActorName);
}

void UEMSObject::FinishLoadingLevel(const bool bHasLoadedFile)
{
	if (!bHasLoadedFile)
	{
		return;
	}

	if (HasActuallyLoadedActors())
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Level loaded with a total of %d Actors"), RealLoadedActors.Num());
	}

	//Always fire the event, to make it consistent with the OnCompleted output of the Load node.
	BroadcastOnLevelLoaded();

	if (!bInitWorldPartitionLoadComplete && AutoSaveLoadWorldPartition())
	{
		//Not relevant for automatic loading of World Partition cells
		ClearSavedLevelActors();
		bInitWorldPartitionLoadComplete = true;
	}

	//Free some memory
	ClearActorList();
}

/**
Multi-Level Saving System Functions
**/

FLevelStackArchive UEMSObject::AddMultiLevelStackData(const FLevelArchive& LevelArchive, const FLevelArchive& PersistentArchive, const FGameObjectSaveData& InGameMode, const FGameObjectSaveData& InGameState)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::AddMultiLevelStackData"));

	//Create a new Stack.
	FLevelStackArchive LevelStack;
	{
		LevelStack.AddTo(LevelArchive);
		LevelStack.SavedGameMode = InGameMode;
		LevelStack.SavedGameState = InGameState;
	}

	//Add data from memory(aka. unloaded levels) to Stack Archive.
	for (const FLevelArchive& MemoryArchive : LevelArchiveList)
	{
		if (MemoryArchive != LevelArchive && MemoryArchive != PersistentArchive)
		{
			LevelStack.AddTo(MemoryArchive);
		}
	}

	//Update the list in memory with data from current level.
	bool bFoundInList = false;
	for (FLevelArchive& ExistingArchive : LevelArchiveList)
	{
		if (ExistingArchive == LevelArchive)
		{
			ExistingArchive.ReplaceWith(LevelArchive);
			bFoundInList = true;
			break;
		}
	}

	//Add LevelArchive to the list if it was not found.
	if (!bFoundInList)
	{
		LevelArchiveList.Add(LevelArchive);
	}

	//Persistent does not need anything in memory. So LevelArchiveList is not updated.
	LevelStack.AddTo(PersistentArchive);

	return LevelStack;
}

FLevelArchive UEMSObject::AddMultiLevelStreamData(const FLevelArchive& LevelArchive)
{
	if (!HasAnyLevelStreaming())
	{
		return LevelArchive;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::AddMultiLevelStreamData"));

	//Add all Actors and Scripts from StreamData to the returned archive that is added to the stack.
	FLevelArchive NewLevelArchive = LevelArchive;
	{
		UpdateMultiLevelStreamData(LevelArchive);
		MultiLevelStreamData.CopyFrom(NewLevelArchive);
	}

	/*
	Update cached actors to avoid reloading them from disk after saving.
	This step is crucial for non-World Partition levels where
	levels are unloaded and reloaded frequently. In World Partition levels,
	the actor data is fetched directly from the multi-level stream data.
	*/
	if (bLoadFromMemory && !AutoSaveLoadWorldPartition())
	{
		ClearSavedLevelActors();
		UnpackLevel(NewLevelArchive);
	}

	return NewLevelArchive;
}

void UEMSObject::UpdateMultiLevelStreamData(const FLevelArchive& LevelArchive)
{
	if (!HasAnyLevelStreaming())
	{
		return;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::UpdateMultiLevelStreamData"));

	//Either replace or add current Actor data from the archive
	MultiLevelStreamData.CopyTo(LevelArchive);
}

/**
Saving and Loading Player
**/

bool UEMSObject::SavePlayerActors(const APlayerController* Controller, const FString& FileName)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::SavePlayerActors"));

	//Always required
	if (!Controller)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to save Player with invalid Player Controller"));
		return false;
	}

	if (FileName.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to save Player with invalid File Name"));
		return false;
	}

	bool bHasPlayerSaveData = false;

	//Controller
	FControllerSaveData InController;
	if (IsValidForSaving(Controller))
	{
		if (!IsSkipTransform(Controller))
		{
			InController.Rotation = Controller->GetControlRotation();
		}

		SaveActorToBinary(Controller, InController.SaveData);
		bHasPlayerSaveData = true;
	}

	//Pawn
	FPawnSaveData InPawn;
	const APawn* Pawn = GetPlayerPawn(Controller);
	if (Pawn && IsValidForSaving(Pawn))
	{
		if (!IsSkipTransform(Pawn))
		{
			InPawn.Position = Pawn->GetActorLocation();
			InPawn.Rotation = Pawn->GetActorRotation();
		}

		SaveActorToBinary(Pawn, InPawn.SaveData);
		bHasPlayerSaveData = true;
	}

	//Player State
	FGameObjectSaveData InPlayerState;
	const APlayerState* PlayerState = Controller->PlayerState;
	if (PlayerState && IsValidForSaving(PlayerState))
	{
		SaveActorToBinary(PlayerState, InPlayerState);
		bHasPlayerSaveData = true;
	}

	//Without any data, we can just return here
	if (!bHasPlayerSaveData)
	{
		return true;
	}

	FPlayerArchive PlayerArchive;
	{
		PlayerArchive.Controller = InController;
		PlayerArchive.Pawn = InPawn;
		PlayerArchive.State = InPlayerState;
		PlayerArchive.Level = GetLevelName();
	}

	FBufferArchive PlayerData;

	//Check for multi level saving.
	if (IsStackBasedMultiLevelSave())
	{
		PlayerStackData.ReplaceOrAdd(PlayerArchive);
		FPlayerStackArchive PlayerStack = PlayerStackData;
		PlayerData << PlayerStack;
	}
	else
	{
		PlayerData << PlayerArchive;
	}

	//Fail logging player
	auto LogFailedToSave = []()
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Player"));
	};

	if (FSaveHelpers::HasSaveArchiveError(PlayerData, ESaveErrorType::ER_Player))
	{
		LogFailedToSave();
		return false;
	}

	if (SaveBinaryArchive(FileName, PlayerData))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Actors have been saved"));
		return true;
	}

	LogFailedToSave();

	return false;
}

void UEMSObject::LoadPlayerActors(APlayerController* Controller)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::LoadPlayerActors"));

	if (!Controller)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to load Player with invalid Player Controller"));
		return;
	}

	bool bLoadSuccess = false;

	//Controller
	if (IsValidForLoading(Controller))
	{
		const FControllerSaveData ControllerData = SavedPlayer.Controller;

		if (!IsSkipTransform(Controller) && !ControllerData.Rotation.IsNearlyZero())
		{
			Controller->SetControlRotation(ControllerData.Rotation);
		}

		LoadActorFromBinary(Controller, ControllerData.SaveData);

		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Controller loaded"));
		bLoadSuccess = true;
	}

	//Pawn
	APawn* Pawn = GetPlayerPawn(Controller);
	if (Pawn && IsValidForLoading(Pawn))
	{
		const FPawnSaveData PawnData = SavedPlayer.Pawn;

		if (!IsSkipTransform(Pawn) && !PawnData.Position.IsNearlyZero())
		{
			Pawn->TeleportTo(PawnData.Position, PawnData.Rotation);
		}

		LoadActorFromBinary(Pawn, PawnData.SaveData);

		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Pawn loaded"));
		bLoadSuccess = true;
	}

	//Player State
	if (SavedPlayer.HasPlayerState())
	{
		APlayerState* PlayerState = Controller->PlayerState;
		if (PlayerState && IsValidForLoading(PlayerState))
		{
			LoadActorFromBinary(PlayerState, SavedPlayer.State);

			UE_LOG(LogEasyMultiSave, Log, TEXT("Player State loaded"))
			bLoadSuccess = true;
		}
	}

	if (bLoadSuccess)
	{
		OnPlayerLoaded.Broadcast(Controller);
	}
}

bool UEMSObject::SavePlayerActorsCustom(AController* Controller, const FString& FileName)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		PreparePlayerActors(FActorInitContext(PlayerController, false, false));

		const FString SlotName = GetCurrentSaveGameName();
		const FString CustomFileName = CustomSaveFile(FileName, SlotName);
		const bool bSavePlayer = SavePlayerActors(PlayerController, CustomFileName);

		if (bSavePlayer)
		{
			//Update slot, since data in it was modified
			SaveSlotInfoObject(SlotName);
			UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Player file was saved with name: %s"), *FileName);
		}

		return bSavePlayer;
	}

	return false;
}

bool UEMSObject::LoadPlayerActorsCustom(AController* Controller, const FString& FileName)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		PreparePlayerActors(FActorInitContext(PlayerController, true, true));

		const FString SlotFileName = CustomSaveFile(FileName, GetCurrentSaveGameName());
		const FLoadArchiveContext Context = FLoadArchiveContext(SlotFileName, EDataLoadType::DATA_Player);
		const bool bLoadFile = LoadBinaryArchive(Context);

		//Processing must be synchronous, as the data is stored globally.
		if (bLoadFile)
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Player file was loaded with name: %s"), *FileName);
			LoadPlayerActors(PlayerController);
			return true;
		}
	}

	return false;
}

bool UEMSObject::DeleteCustomPlayerFile(const FString& FileName)
{
	const FString SaveFile = CustomSaveFile(FileName, GetCurrentSaveGameName());
	if (DeleteSaveFile(SaveFile))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Player file was removed with name: %s"), *FileName);
		return true;
	}

	return false;
}

/**
Loading and Saving Components
**/

TArray<UActorComponent*> UEMSObject::GetSaveComponents(const AActor* Actor) const
{
	if (!Actor || !HasSaveInterface(Actor))
	{
		return TArray<UActorComponent*>();
	}

	AActor* ActorRef = const_cast<AActor*>(Actor);
	TArray<UActorComponent*> SourceComps;
	IEMSActorSaveInterface::Execute_ComponentsToSave(ActorRef, SourceComps);

	//Get Components with interface
	for (UActorComponent* Component : Actor->GetComponents())
	{
		if (HasComponentSaveInterface(Component))
		{
			if (SourceComps.Find(Component) == INDEX_NONE)
			{
				SourceComps.Add(Component);
			}
		}
	}

	return SourceComps;
}

void UEMSObject::SaveActorComponents(const AActor* Actor, TArray<FComponentSaveData>& OutComponents) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::SaveActorComponents"));

	const TArray<UActorComponent*> SourceComps = GetSaveComponents(Actor);
	if (EMS::ArrayEmpty(SourceComps))
	{
		return;
	}

	for (const UActorComponent* Component : SourceComps)
	{
		if (!Component || !Component->IsRegistered())
		{
			continue;
		}

		const FString CompName = FActorHelpers::GetComponentName(Actor, Component);

		FComponentSaveData ComponentArray;
		ComponentArray.Name = BytesFromString(CompName);

		if (const USceneComponent* SceneComp = Cast<USceneComponent>(Component))
		{
			ComponentArray.Transform = SceneComp->GetRelativeTransform();
		}

		if (const UChildActorComponent* ChildActorComp = Cast<UChildActorComponent>(Component))
		{
			if (AActor* ChildActor = ChildActorComp->GetChildActor())
			{
				if (!HasSaveInterface(ChildActor))
				{
					SerializeToBinary(ChildActor, ComponentArray.Data);
				}
				else
				{
					UE_LOG(LogEasyMultiSave, Warning, TEXT("Child Actor has Actor Save Interface and is already saved as Level Actor, skipping: %s"), *CompName);
				}
			}
		}
		else
		{
			const bool bInterface = HasComponentSaveInterface(Component);

			if (bInterface)
			{
				ExecuteComponentPreSave(Component);
			}

			SerializeToBinary(Component, ComponentArray.Data);

			if (bInterface)
			{
				ExecuteComponentSaved(Component);
			}
		}

		OutComponents.Add(ComponentArray);
	}
}

void UEMSObject::LoadActorComponents(const AActor* Actor, const TArray<FComponentSaveData>& InComponents) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::LoadActorComponents"));

	const TArray<UActorComponent*> SourceComps = GetSaveComponents(Actor);
	if (EMS::ArrayEmpty(SourceComps))
	{
		return;
	}

	for (UActorComponent* Component : SourceComps)
	{
		if (!Component || !Component->IsRegistered())
		{
			continue; 
		}

		for (const FComponentSaveData& ComponentArray : InComponents)
		{
			const FString CompName = FActorHelpers::GetComponentName(Actor, Component);

			if (!CompareIdentifiers(ComponentArray.Name, CompName))
			{
				continue; 
			}
			
			if (USceneComponent* SceneComp = Cast<USceneComponent>(Component))
			{
				if (FActorHelpers::IsMovable(SceneComp))
				{
					SceneComp->SetRelativeTransform(ComponentArray.Transform, false, nullptr, ETeleportType::TeleportPhysics);
				}
			}

			if (UChildActorComponent* ChildActorComp = Cast<UChildActorComponent>(Component))
			{
				if (AActor* ChildActor = ChildActorComp->GetChildActor())
				{
					if (!HasSaveInterface(ChildActor))
					{
						SerializeFromBinary(ChildActor, ComponentArray.Data);
					}
				}
			}
			else
			{
				const bool bInterface = HasComponentSaveInterface(Component);

				if (bInterface)
				{
					IEMSCompSaveInterface::Execute_ComponentPreLoad(Component);
				}

				SerializeFromBinary(Component, ComponentArray.Data);

				if (bInterface)
				{
					IEMSCompSaveInterface::Execute_ComponentLoaded(Component);
				}
			}	
		}
	}
}

/**
Loading and Saving Raw Objects
**/

UObject* UEMSObject::LoadRawObject(const AActor* Actor, const FRawObjectSaveData& Data)
{
	if (!IsValidActor(Actor) || !Data.IsValidData())
	{
		return nullptr;
	}

	TArray<FComponentSaveData> ObjectArray;
	const EActorType Type = GetActorType(Actor);

	//Level Actors
	if (IsLevelActor(Type, false))
	{
		//Get from real Actor array, which also does not get cleared post load
		const FString FullName = GetFullActorName(Actor);
		const FActorByteKey Key(BytesFromString(FullName));
		if (const FActorSaveData* ActorData = RawObjectLevelActors.Find(Key))
		{
			if (CompareIdentifiers(ActorData->Name, FullName))
			{
				ObjectArray.Append(ActorData->SaveData.Components);
				return SerializeFromRawObject(Actor, Data, ObjectArray);
			}
		}

		return nullptr;
	}

	//Level Scripts
	if (IsLevelScript(Type))
	{
		for (const FLevelScriptSaveData& ScriptData : SavedScripts)
		{
			if (LevelScriptSaveName(Actor) == ScriptData.Name)
			{
				ObjectArray.Append(ScriptData.SaveData.Components);
				return SerializeFromRawObject(Actor, Data, ObjectArray);
			}
		}

		return nullptr;
	}

	//Other Actors
	switch (Type)
	{
	case EActorType::AT_PlayerPawn:
		ObjectArray.Append(SavedPlayer.GetPawnComps());
		break;

	case EActorType::AT_PlayerActor:
		ObjectArray.Append(SavedPlayer.GetStateComps());
		ObjectArray.Append(SavedPlayer.GetControllerComps());
		break;

	case EActorType::AT_GameObject:
		ObjectArray.Append(SavedGameMode.Components);
		ObjectArray.Append(SavedGameState.Components);
		break;

	default:
		return nullptr;
	}

	return SerializeFromRawObject(Actor, Data, ObjectArray);
}

UObject* UEMSObject::SerializeFromRawObject(const AActor* Actor, const FRawObjectSaveData& Data, const TArray<FComponentSaveData>& InputArray)
{
	if (!Actor || !Data.IsValidData() || EMS::ArrayEmpty(InputArray))
	{
		return nullptr;
	}

	const FString FullId = FSaveHelpers::GetRawObjectID(Data);

	//Check the input component array from the Actor and serialize if found
	for (const FComponentSaveData& ComponentData : InputArray)
	{
		if (CompareIdentifiers(ComponentData.Name, FullId))
		{
			FStructHelpers::SerializeStruct(Data.Object);
			SerializeFromBinary(Data.Object, ComponentData.Data);
			UpdateRawObjectData(Actor, ComponentData);
			break;
		}
	}

	return Data.Object;
}

bool UEMSObject::SaveRawObject(const AActor* Actor, const FRawObjectSaveData& Data)
{
	if (!Actor || !Data.IsValidData())
	{
		return false;
	}

	//Hijack the component struct
	FComponentSaveData ComponentData;

	const FString FullId = FSaveHelpers::GetRawObjectID(Data);
	ComponentData.Name = BytesFromString(FullId);

	FStructHelpers::SerializeStruct(Data.Object);
	SerializeToBinary(Data.Object, ComponentData.Data);
	UpdateRawObjectData(Actor, ComponentData);

	return true;
}

void UEMSObject::AppendRawObjectData(const AActor* Actor, TArray<FComponentSaveData>& OutComponents) const
{
	if (Actor && !RawObjectData.IsEmpty())
	{
		const FObjectKey ActorKey(Actor);
		if (const FGameObjectSaveData* GameObjectDataRef = RawObjectData.Find(ActorKey))
		{
			OutComponents.Append(GameObjectDataRef->Components);
		}
	}
}

void UEMSObject::UpdateRawObjectData(const AActor* Actor, const FComponentSaveData& InputData)
{
	if (!Actor)
	{
		return;
	}

	//Try to update global raw objects array
	const FObjectKey ActorKey(Actor);
	FGameObjectSaveData& GameObjectData = RawObjectData.FindOrAdd(ActorKey);
	bool bDataUpdated = false;

	for (FComponentSaveData& ExistingData : GameObjectData.Components)
	{
		if (ExistingData.Name == InputData.Name)
		{
			ExistingData = InputData;
			bDataUpdated = true;
			break;
		}
	}

	//Add if not found
	if (!bDataUpdated)
	{
		GameObjectData.Components.Add(InputData);
	}
}

/**
Interface Events
**/

void UEMSObject::ProcessSaveEvent(const TWeakObjectPtr<const UObject> WeakRef, ESaveEventType SaveType)
{
	//Check validity
	UObject* ObjectRef = const_cast<UObject*>(WeakRef.Get());
	if (!IsValid(ObjectRef))
	{
		return;
	}

	//Actors
	if (AActor* Actor = Cast<AActor>(ObjectRef))
	{
		if (HasSaveInterface(Actor))
		{
			if (SaveType == ESaveEventType::PreSave)
			{
				IEMSActorSaveInterface::Execute_ActorPreSave(Actor);
			}
			else
			{
				IEMSActorSaveInterface::Execute_ActorSaved(Actor);
			}
		}
	}

	//Components
	else if (UActorComponent* Comp = Cast<UActorComponent>(ObjectRef))
	{
		if (HasComponentSaveInterface(Comp))
		{
			if (SaveType == ESaveEventType::PreSave)
			{
				IEMSCompSaveInterface::Execute_ComponentPreSave(Comp);
			}
			else
			{
				IEMSCompSaveInterface::Execute_ComponentSaved(Comp);
			}
		}
	}
}

void UEMSObject::ExecuteSaveEvent(const UObject* InObject, const ESaveEventType SaveType) const
{
	if (!InObject)
	{
		return;
	}

	const TWeakObjectPtr<const UObject> WeakRef(InObject);

	//If already on game thread, execute directly
	if (IsInGameThread())
	{
		UEMSObject::ProcessSaveEvent(WeakRef, SaveType);
		return;
	}

	//Check if we need  GT
	const bool bNeedsGameThread = 
		(SaveType == ESaveEventType::PreSave) && UEMSPluginSettings::Get()->bPreSaveOnGameThread;

	if (!bNeedsGameThread)
	{
		//Can execute on current thread (worker thread)
		UEMSObject::ProcessSaveEvent(WeakRef, SaveType);
		return;
	}

	//Create delegate
	FSimpleDelegateGraphTask::FDelegate WorkDelegate = FSimpleDelegateGraphTask::FDelegate::CreateStatic
	(
		&UEMSObject::ProcessSaveEvent,
		WeakRef,
		SaveType
	);

	//Dispatch to GameThread
	FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
	(
		WorkDelegate,
		TStatId(),
		nullptr,
		ENamedThreads::GameThread
	);

	if (Task.IsValid())
	{
		Task->Wait();
	}
}

void UEMSObject::ExecuteActorPreSave(const AActor* Actor) const
{
	ExecuteSaveEvent(Actor, ESaveEventType::PreSave);
}

void UEMSObject::ExecuteActorSaved(const AActor* Actor) const
{
	ExecuteSaveEvent(Actor, ESaveEventType::PostSave);
}

void UEMSObject::ExecuteComponentPreSave(const UActorComponent* Comp) const
{
	ExecuteSaveEvent(Comp, ESaveEventType::PreSave);
}

void UEMSObject::ExecuteComponentSaved(const UActorComponent* Comp) const
{
	ExecuteSaveEvent(Comp, ESaveEventType::PostSave);
}

void UEMSObject::ExecuteActorPreLoad(AActor* Actor) const
{
	if (HasSaveInterface(Actor))
	{
		IEMSActorSaveInterface::Execute_ActorPreLoad(Actor);
	}
}

void UEMSObject::ExecuteActorLoaded(AActor* Actor) const
{
	if (HasSaveInterface(Actor))
	{
		IEMSActorSaveInterface::Execute_ActorLoaded(Actor);
	}
}

/**
Actor Serialize Functions
**/

void UEMSObject::SaveActorToBinary(const AActor* Actor, FGameObjectSaveData& OutData) const
{ 
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::SaveActorToBinary"));

	ExecuteActorPreSave(Actor);

	SerializeToBinary(Actor, OutData.Data);

	//Save components for non Level Scripts
	const EActorType Type = GetActorType(Actor);
	if (!IsLevelScript(Type))
	{
		SaveActorComponents(Actor, OutData.Components); 
	}

	//Store raw object data in Component array. 
	AppendRawObjectData(Actor, OutData.Components);

	ExecuteActorSaved(Actor);
}

void UEMSObject::LoadActorFromBinary(AActor* Actor, const FGameObjectSaveData& InData) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::LoadActorFromBinary"));

	ExecuteActorPreLoad(Actor);

	Actor->Tags.Add(EMS::HasLoadedTag);

	SerializeFromBinary(Actor, InData.Data);

	//Load components for non Level Scripts
	const EActorType Type = GetActorType(Actor);
	if (!IsLevelScript(Type))
	{
		LoadActorComponents(Actor, InData.Components);
	}

	//Post Component Load
	ExecuteActorLoaded(Actor);
}

/**
Blueprint Struct Property Serialization
**/

void UEMSObject::SerializeActorStructProperties(const AActor* Actor) const
{
	if (!UEMSPluginSettings::Get()->bAutoSaveStructs)
	{
		return;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMSObject::SerializeActorStructProperties"));

	FStructHelpers::SerializeStruct(Actor);

	//Also for Components
	const TArray<UActorComponent*> SourceComps = GetSaveComponents(Actor);
	if (EMS::ArrayEmpty(SourceComps))
	{
		return;
	}

	for (const UActorComponent* Component : SourceComps)
	{
		if (Component)
		{
			FStructHelpers::SerializeStruct(Component);
		}
	}
}

/**
Helper Functions
**/

APlayerController* UEMSObject::GetPlayerController() const
{
	return UGameplayStatics::GetPlayerController(GetWorld(), PlayerIndex);
}

APawn* UEMSObject::GetPlayerPawn(const APlayerController* PC) const
{
	if (PC)
	{
		return PC->GetPawnOrSpectator();
	}

	return nullptr;
}

bool UEMSObject::HasValidPlayer() const
{
	const UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	//Used by async check to wait for valid player pawn
	if (const APlayerController* PC = GetPlayerController())
	{
		return IsValid(GetPlayerPawn(PC));
	}

	if (!FActorHelpers::AreWorldActorsInitialized(World))
	{
		return false;
	}

	return false;
}

bool UEMSObject::HasValidGameWorld() const
{
	const UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	//On clients, we assume the game mode is valid
	if (World->GetNetMode() == ENetMode::NM_Client)
	{
		return true;
	}

	if (!FActorHelpers::AreWorldActorsInitialized(World))
	{
		return false;
	}

	const AGameModeBase* GameMode = World->GetAuthGameMode();
	return IsValid(GameMode);
}

FTimerManager& UEMSObject::GetTimerManager() const
{
	if (const UWorld* World = GetWorld())
	{
		return World->GetTimerManager();
	}

	static FTimerManager EmptyTimerManager;
	return EmptyTimerManager;
}

/**
Actor Helper Functions
**/

FName UEMSObject::GetLevelName()
{
	//Failsave in case OnPreWorldInit doesnt have the name yet
	if (CachedPersistentLevelName.IsEmpty())
	{
		const UWorld* World = GetWorld();
		if (World)
		{
			AssignLevelName(World);
		}
	}

	return FName(*CachedPersistentLevelName);
}

void UEMSObject::AssignLevelName(const UWorld* InWorld)
{
	if (InWorld)
	{
		const FString CurrentLevelName = FLevelHelpers::GetWorldLevelName(InWorld);
		if (!FLevelHelpers::IsTransientLevelName(CurrentLevelName))
		{
			CachedPersistentLevelName = CurrentLevelName;
		}
		else
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("GetWorldLevelName is invalid, trying fallback."));
			CachedPersistentLevelName.Empty();
		}
	}
}

bool UEMSObject::MatchesLevelName(const FName& InLevelName)
{
	return InLevelName == GetLevelName();
}

FName UEMSObject::LevelScriptSaveName(const AActor* Actor)
{
	//Compare by level name, since the engine creates multiple script actors.
	return FName(GetActorLevelName(Actor));
}

FString UEMSObject::GetActorLevelName(const AActor* Actor)
{
	return FActorHelpers::GetActorLevelName(Actor);
}

FString UEMSObject::GetFullActorName(const AActor* Actor)
{
	return FActorHelpers::GetFullActorName(Actor);
}

EActorType UEMSObject::GetActorType(const AActor* Actor)
{
	return FActorHelpers::GetActorType(Actor);
}

bool UEMSObject::IsLoaded(const AActor* Actor)
{
	return FActorHelpers::IsLoaded(Actor);
}

bool UEMSObject::IsPlaced(const AActor* Actor)
{
	return FActorHelpers::IsPlacedActor(Actor);
}

bool UEMSObject::IsSkipSave(const AActor* Actor)
{
	return FActorHelpers::IsSkipSave(Actor);
}

bool UEMSObject::IsSkipTransform(const AActor* Actor)
{
	return FActorHelpers::IsSkipTransform(Actor);
}

bool UEMSObject::IsLevelScript(const EActorType Type)
{
	return FActorHelpers::IsLevelScript(Type);
}

bool UEMSObject::IsLevelActor(const EActorType Type, const bool bIncludeScripts)
{
	return FActorHelpers::IsLevelActor(Type, bIncludeScripts);
}

bool UEMSObject::HasSaveInterface(const AActor* Actor)
{
	return Actor && Actor->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass());
}

bool UEMSObject::HasComponentSaveInterface(const UActorComponent* Comp)
{
	return Comp && Comp->IsRegistered() && Comp->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass());
}

void UEMSObject::ClearLoadFromMemory()
{
	bLoadFromMemory = false;
}

/**
Actor Delegates
**/

void UEMSObject::OnActorDestroyed(AActor* Actor)
{
	//Null check only as its pending kill
	if (!Actor)
	{
		return;
	}

	if (!HasSaveInterface(Actor))
	{
		return;
	}

	//Consider all level actors
	const EActorType Type = GetActorType(Actor);
	if (IsLevelActor(Type, false))
	{
		FActorSaveData ActorArray;
		ActorArray.Type = uint8(EActorType::AT_Destroyed);
		ActorArray.Name = BytesFromString(GetFullActorName(Actor));
		ActorArray.Transform = Actor->GetActorTransform();

		DestroyedActors.Add(ActorArray);
	}
}

void UEMSObject::RemoveActorDelegates(UWorld* World)
{
	if (!World)
	{
		return;
	}

#if EMS_ENGINE_MIN_UE55
	World->RemoveOnActorDestroyedHandler(ActorDestroyedHandle);
#else
	World->RemoveOnActorDestroyededHandler(ActorDestroyedHandle);
#endif

}

/**
World Delegates
**/

void UEMSObject::OnPreWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
	if (!World)
	{
		return;
	}

	//Cache the current static level info, so we don't need to query UWorld each time
	AssignLevelName(World);
	bCachedHasStreamingLevels = FStreamHelpers::HasStreamingLevels(World);
	bCachedIsWorldPartition = FStreamHelpers::AutoSaveLoadWorldPartition(World);

	//This will work for Streaming and World Partition
	if (HasAnyLevelStreaming())
	{
		FLevelStreamingDelegates::OnLevelStreamingStateChanged.AddUObject(this, &UEMSObject::OnLevelStreamingStateChanged);
		FLevelStreamingDelegates::OnLevelBeginMakingInvisible.AddUObject(this, &UEMSObject::OnLevelBeginMakingInvisible);
	}

	if (AutoDestroyActors())
	{
		ActorDestroyedHandle = World->AddOnActorDestroyedHandler(
			FOnActorDestroyed::FDelegate::CreateUObject(this, &UEMSObject::OnActorDestroyed));
	}
}

void UEMSObject::OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources)
{
	FAsyncSaveHelpers::DestroyAsyncLoadTask();
	FAsyncSaveHelpers::DestroyStreamAutoLoadTask();
	FAsyncSaveHelpers::DestroyAsyncSaveTask();

	ClearWorldPartition();
	ClearDestroyedActors();
	ClearLoadFromMemory();
	ClearRawObjectLevelActors();

	CachedPersistentLevelName.Empty();
	bCachedIsWorldPartition = false;
	bCachedHasStreamingLevels = false;

	if(World) RemoveActorDelegates(World);
	RemoveWorldStreamDelegates();
}

void UEMSObject::OnLevelStreamingStateChanged(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLevelIfLoaded, 
	ELevelStreamingState PreviousState, ELevelStreamingState NewState)
{
	if (NewState == ELevelStreamingState::LoadedVisible && PreviousState == ELevelStreamingState::MakingVisible)
	{
		HandleStreamingPersistence(InWorld, InLevelIfLoaded, true);
	}
}

void UEMSObject::OnLevelBeginMakingInvisible(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLoadedLevel)
{
	HandleStreamingPersistence(InWorld, InLoadedLevel, false);
}

void UEMSObject::RemoveWorldStreamDelegates()
{
	FLevelStreamingDelegates::OnLevelStreamingStateChanged.RemoveAll(this);
	FLevelStreamingDelegates::OnLevelBeginMakingInvisible.RemoveAll(this);
}

/**
General Streaming Functions 
Used for world partition and manual streaming
**/

void UEMSObject::HandleStreamingPersistence(const UWorld* InWorld, const ULevel* InLevel, const bool bIsLoading)
{
	if (!InWorld || !InLevel)
	{
		return;
	}

	//World Partition Logic
	if (AutoSaveLoadWorldPartition())
	{
		if (bIsLoading)
		{
			WorldPartitionLoadLevel(InLevel);
		}
		else
		{
			WorldPartitionSaveLevel(InWorld, InLevel);
		}
	}
	//Manual Streaming Logic
	else if (AutoSaveLoadStreamingLevels())
	{
		if (bIsLoading)
		{
			StartStreamingLoad(InLevel);
		}
		else
		{
			StartStreamingSave(InLevel);
		}
	}
}

bool UEMSObject::ProcessSaveStreamingActors(const ULevel* InLoadedLevel)
{
	if (!InLoadedLevel)
	{
		return false;
	}

	//Check when a auto-loading process is still ongoing, otherwise it might write the unloaded data
	if (FAsyncSaveHelpers::IsStreamAutoLoadActive(InLoadedLevel))
	{
		FAsyncSaveHelpers::DestroyStreamAutoLoadTask(InLoadedLevel);
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Skipped saving partially loaded streaming level to prevent invalid data."));
		return false; 
	}

	TArray<FActorSaveData> InActors;
	InActors.Reserve(InLoadedLevel->Actors.Num());

	//Collect placed Actors from level. They don't need to be valid anymore when saving, the data is parsed here
	for (AActor* Actor : InLoadedLevel->Actors)
	{
		if (IsValidForSaving(Actor) && IsPlaced(Actor))
		{
			SerializeActorStructProperties(Actor);

			const FActorSaveData ActorArray = ParseLevelActorForSaving(Actor, EActorType::AT_Placed);
			InActors.Add(ActorArray);

			//This will prevent false pruning of Actors, for some reason Tags are kept when the Actor is streamed out
			Actor->Tags.Remove(EMS::HasLoadedTag);
		}
	}

	//We need to proceed, even if we only have Destroyed Actors
	if (!EMS::ArrayEmpty(InActors) || !EMS::ArrayEmpty(DestroyedActors))
	{
		//Add to global array, that will be processed async in SaveLevelActors
		StreamingActors.Append(MoveTemp(InActors));
		return true;
	}

	return false;
}

void UEMSObject::TryAccumulatedStreamingSave()
{
	if (!GetWorld())
	{
		return;
	}

	GetTimerManager().SetTimerForNextTick([this]()
	{
		bool bCanProcess = false;

		//World Partition
		if (AutoSaveLoadWorldPartition())
		{
			//Init check, can't save at all before init  
			if (!bInitWorldPartitionLoadComplete)
			{
				bSaveStreaming = false;
				return;
			}

			bCanProcess = CanProcessWorldPartition();
		}
		//Manual Streaming
		else
		{
			//Make sure we wait a bit for manual streaming
			const float Elapsed = GetWorld()->GetTimeSeconds() - StreamingSaveRequestTime;
			bCanProcess = CanProcessStreaming() && (Elapsed >= UEMSPluginSettings::Get()->StreamingSaveThreshold);
		}

		//Proceed with saving
		if (bCanProcess)
		{
			UEMSAsyncSaveGame::AutoSaveLevelActors(this);
			bSaveStreaming = false;
		}
		else
		{
			TryAccumulatedStreamingSave();
		}
	});
}

void UEMSObject::StartStreamingSave(const ULevel* InLoadedLevel)
{
	//Parse the streaming level and proceed with accumulated save
	if (ProcessSaveStreamingActors(InLoadedLevel))
	{
		if (!bSaveStreaming)
		{
			TryAccumulatedStreamingSave();
			bSaveStreaming = true;
		}

		StreamingSaveRequestTime = GetWorld()->GetTimeSeconds();
	}
}

void UEMSObject::StartStreamingLoad(const ULevel* InLoadedLevel)
{
	UEMSAsyncStream::InitStreamingLoadTask(this, InLoadedLevel);
}

/**
World Partition
**/

void UEMSObject::WorldPartitionLoadLevel(const ULevel* InLoadedLevel)
{
	//Optimized loading of placed Actors only after full initialization
	if (AlwaysAutoLoadWorldPartition())
	{
		StartStreamingLoad(InLoadedLevel);
		return;
	}

	//Skip initial loading and wait until the game was manually loaded
	if (!bInitWorldPartitionLoadComplete)
	{
		if (SkipInitialWorldPartitionLoad())
		{
			return;
		}

		//New cell streamed in, unable to process all Actors. Edge case. 
		if (IsInitialWorldPartitionLoading())
		{
			UE_LOG(LogEasyMultiSave, Warning,
				TEXT("Level streamed in during initial World Partition load. Unable to parse all Actors. You might lock Player movement."));
			return;
		}
	}

	//Initial load will happen in a conventional way
	if (!bTryInitWorldPartitionLoad)
	{
		TryInitWorldPartition();
		bTryInitWorldPartitionLoad = true;
	}
}

void UEMSObject::TryInitWorldPartition()
{
	//If the loop hangs for some reason, we want to cancel it.
	if (AlwaysAutoLoadWorldPartition())
	{
		return;
	}

	//Check to see if we can start the initial loading process.
	FTimerHandle TimerHandle;
	const float PollingRate = UEMSPluginSettings::Get()->WorldPartitionInitPollingRate;
	GetTimerManager().SetTimer(TimerHandle, this, &UEMSObject::PollInitWorldPartition, PollingRate, false);
}

void UEMSObject::PollInitWorldPartition()
{
	if (CanProcessWorldPartition())
	{
		const float PollingRate = UEMSPluginSettings::Get()->WorldPartitionInitPollingRate;
		const float CheckTime = UEMSPluginSettings::Get()->WorldPartitionInitThreshold;
		WorldPartitionInitTimer += PollingRate;

		if (WorldPartitionInitTimer >= CheckTime)
		{
			UEMSAsyncLoadGame::AutoLoadLevelActors(this);
			bTryInitWorldPartitionLoad = false;
			return;
		}
	}
	else
	{
		WorldPartitionInitTimer = 0.f;
	}

	TryInitWorldPartition();
}

void UEMSObject::WorldPartitionSaveLevel(const UWorld* InWorld, const ULevel* InLoadedLevel)
{
	//Not relevant if load only
	if (FSettingHelpers::IsStreamingLoadOnly())
	{
		return;
	}

	//Block on init
	if (FStreamHelpers::IsWorldPartitionInit(InWorld))
	{
		return;
	}

	//We need to load at least once before we can auto-save in any way
	if (!bInitWorldPartitionLoadComplete)
	{
		//Destroy load task to prevent it getting stuck 
		if (IsInitialWorldPartitionLoading())
		{
			FAsyncSaveHelpers::DestroyAsyncLoadTask();
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Level streamed out during initial World Partition load. Async operation stopped."));		
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Please load manually or stream in another cell to continue."));
		}

		return;
	}

	StartStreamingSave(InLoadedLevel);
}
