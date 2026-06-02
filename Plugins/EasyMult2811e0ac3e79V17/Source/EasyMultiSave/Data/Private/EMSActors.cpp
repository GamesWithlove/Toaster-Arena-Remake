//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSActors.h"
#include "EMSData.h"  
#include "EMSMisc.h"
#include "EMSLevel.h"
#include "EMSPaths.h"
#include "EMSPluginSettings.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Engine/Level.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/LevelStreamingDynamic.h"

/**
FActorHelpers
**/

FString FActorHelpers::GetActorLevelName(const AActor* Actor)
{
	if (!Actor)
	{
		return FString();
	}

	const UWorld* World = Actor->GetWorld();
	if (!World)
	{
		return FString();
	}

	const ULevel* ActorLevel = Actor->GetLevel();
	if (!ActorLevel || !ActorLevel->GetOuter())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to return level for Actor: %s"), *Actor->GetName());
		return Actor->GetName();
	}

	const FString OuterActorLevel = ActorLevel->GetOuter()->GetName();
	const FString ActorLevelName = FRedirectHelpers::ResolveActorLevel(OuterActorLevel);

	/*
	This supports multiple streaming levels and instances(Also in streaming levels) of the same type. 
	Every streaming level and instance is a ULevelStreamingDynamic. Not for World Partition.
	For level instances, this will return the full unique ID. For levels in the 'Levels' list, this appends an index.
	*/
	if (FSettingHelpers::IsDynamicLevelStreaming() && !World->IsPartitionedWorld())
	{
		const FString InstString = FLevelHelpers::GetLevelInstanceNameAsString(Actor);
		const FString FixedInstString = FEditorPaths::StripLevelPIEPrefix(World, InstString);
		const FString PreFinalString = FixedInstString.Replace(EMS::RuntimeLevelInstance, TEXT(""));

		//Might have a duplicate name, we want to return the minimal string representation of the unique ID.
		const bool bAlreadyHasLevel = InstString.Contains(ActorLevelName);
		const FString FinalString = bAlreadyHasLevel ? PreFinalString : ActorLevelName + PreFinalString;

		return FinalString;
	}

	return ActorLevelName;
}

FString FActorHelpers::GetFullActorName(const AActor* Actor)
{
	const FString ActorName = Actor->GetName();

	//This is only valid for placed Actors. Runtime Actors are always in the persistent.
	//Can't use GetActorType here, since it would crash Multi-Thread loading.
	if (IsPlacedActor(Actor))
	{
		const FString LevelString = GetActorLevelName(Actor);
		const bool bAlreadyHas = ActorName.Contains(LevelString);
		const FString FinalString = bAlreadyHas ? ActorName : (LevelString + EMS::UnderscoreInt + ActorName);

		return FinalString;
	}

	return ActorName;
}

FString FActorHelpers::GetComponentName(const AActor* Actor, const UActorComponent* Comp)
{
	if (!Actor)
	{
		return FString();
	}

	const FString CompName = Comp->GetName();

	//Edge case where a component owned by ActorB is saved from ActorA
	const AActor* CompOwner = Comp->GetOwner();
	if (CompOwner && CompOwner != Actor)
	{
		if (CompOwner->IsChildActor() && CompOwner->GetParentComponent())
		{
			return CompOwner->GetParentComponent()->GetName() + CompName;
		}

		return GetFullActorName(CompOwner) + CompName;
	}

	return CompName;
}

bool FActorHelpers::IsMovable(const USceneComponent* SceneComp)
{
	if (SceneComp)
	{
		return SceneComp->Mobility == EComponentMobility::Movable;
	}

	return false;
}

bool FActorHelpers::HasValidTransform(const FTransform& CheckTransform)
{
	return CheckTransform.IsValid() && CheckTransform.GetLocation() != FVector::ZeroVector;
}

bool FActorHelpers::CanProcessActorTransform(const AActor* Actor)
{
	if (!Actor)
	{
		return false;
	}

	const bool bIsRuntimeActor = !IsPlacedActor(Actor);

	//For runtime Actors, we also want to properly place stationary ones
	const bool bCanBeMoved = IsMovable(Actor->GetRootComponent()) || bIsRuntimeActor;

	/*
	For runtime Actors, we want to support 'Keep World' attachment rules.
	Placed actor attachments usually won't need their transform at all.
	Since the attachment is assinged in the editor with implicit transform.
	You can still override the transform when using 'Snap To Target'
	*/
	const bool bKeepAttachment = Actor->GetAttachParentActor() == nullptr || bIsRuntimeActor;

	//Check if Actor is valid, movable, not marked to skip transform 
	return bCanBeMoved && bKeepAttachment && !IsSkipTransform(Actor);
}

bool FActorHelpers::IsPlacedActor(const AActor* Actor)
{
	return Actor && (Actor->IsNetStartupActor() || Actor->HasAnyFlags(RF_WasLoaded));
}

bool FActorHelpers::IsPersistentActor(const AActor* Actor)
{
	return Actor && Actor->ActorHasTag(EMS::PersistentTag);
}

bool FActorHelpers::IsSkipTransform(const AActor* Actor)
{
	return Actor && Actor->ActorHasTag(EMS::SkipTransformTag);
}

bool FActorHelpers::IsLoaded(const AActor* Actor)
{
	return Actor && Actor->ActorHasTag(EMS::HasLoadedTag);
}

bool FActorHelpers::IsSkipSave(const AActor* Actor)
{
	return Actor && Actor->ActorHasTag(EMS::SkipSaveTag);
}

bool FActorHelpers::IsLevelActor(const EActorType Type, const bool bIncludeScripts)
{
	if (bIncludeScripts && Type == EActorType::AT_LevelScript)
	{
		return true;
	}

	return IsLevelPlaced(Type) || IsRuntime(Type);
}

bool FActorHelpers::IsLevelPlaced(const EActorType Type)
{
	return Type == EActorType::AT_Placed 
		|| Type == EActorType::AT_Destroyed;
}

bool FActorHelpers::IsRuntime(const EActorType Type)
{
	return Type == EActorType::AT_Runtime
		|| Type == EActorType::AT_Persistent;
}

bool FActorHelpers::IsMultiLevelStreamRelevant(const EActorType Type)
{
	return IsLevelPlaced(Type);
}

bool FActorHelpers::IsPersistent(const EActorType Type)
{
	return Type == EActorType::AT_Persistent;
}

bool FActorHelpers::IsLevelScript(const EActorType Type)
{
	return Type == EActorType::AT_LevelScript;
}

void FActorHelpers::SortLevelActors(TArray<FActorSaveData>& ToSort, const APlayerController* PC)
{
	const bool bShouldSort = FSettingHelpers::IsMultiThreadLoading() || FSettingHelpers::IsDeferredLoading();
	if (!bShouldSort)
	{
		return;
	}

	if (PC)
	{
		ToSort.Sort([PC](const FActorSaveData& A, const FActorSaveData& B)
		{
			return FActorHelpers::CompareDistance(A.Transform.GetLocation(), B.Transform.GetLocation(), PC);
		});
	}
}

bool FActorHelpers::CompareDistance(const FVector& VecA, const FVector& VecB, const APlayerController* PC)
{
	if (PC && PC->PlayerCameraManager)
	{
		const FVector CameraLoc = PC->PlayerCameraManager->GetCameraLocation();
		const float DistA = FVector::Dist(VecA, CameraLoc);
		const float DistB = FVector::Dist(VecB, CameraLoc);
		return DistA < DistB;
	}

	return false;
}

EActorType FActorHelpers::GetActorType(const AActor* Actor)
{
	//Runtime spawned
	if (!IsValid(Actor))
	{
		return EActorType::AT_Runtime;
	}

	//Check if the actor is a Pawn and is controlled by a player
	if (const APawn* Pawn = Cast<APawn>(Actor))
	{
		if (Pawn->IsPlayerControlled())
		{
			return EActorType::AT_PlayerPawn;
		}
	}

	if (Cast<APlayerController>(Actor) || Cast<APlayerState>(Actor))
	{
		return EActorType::AT_PlayerActor;
	}

	if (Cast<ALevelScriptActor>(Actor))
	{
		return EActorType::AT_LevelScript;
	}

	if (Cast<AGameModeBase>(Actor) || Cast<AGameStateBase>(Actor))
	{
		return EActorType::AT_GameObject;
	}

	if (IsPersistentActor(Actor))
	{
		return EActorType::AT_Persistent;
	}

	if (IsPlacedActor(Actor))
	{
		return EActorType::AT_Placed;
	}

	return EActorType::AT_Runtime;
}

void FActorHelpers::PruneSavedActors(const TMap<FActorByteKey, TWeakObjectPtr<AActor>>& InActorMap, TArray<FActorSaveData>& OutSaved)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(TEXT("UEMS::PruneSavedActors"));

	if (OutSaved.IsEmpty())
	{
		return;
	}

	const int32 NumElements = OutSaved.Num();
	const int32 RemovedCount = OutSaved.RemoveAll([&InActorMap](const FActorSaveData& ActorData)
	{
		const EActorType Type = static_cast<EActorType>(ActorData.Type);
		if (!FActorHelpers::IsLevelActor(Type, false))
		{
			return false;
		}

		const FActorByteKey Key(ActorData.Name);
		const TWeakObjectPtr<AActor>* FoundPtr = InActorMap.Find(Key);

		const bool bValidPtr = FoundPtr && FoundPtr->IsValid() && FoundPtr->Get();
		const bool bWasLoaded = bValidPtr && FActorHelpers::IsLoaded(FoundPtr->Get());

		if (FActorHelpers::IsLevelPlaced(Type))
		{
			//Trim invalid or loaded actors
			return !bValidPtr || bWasLoaded;
		}
		else if (FActorHelpers::IsRuntime(Type))
		{
			//Trim loaded runtime Actors
			return bValidPtr && bWasLoaded;
		}

		return false;
	});

	if (RemovedCount > 0)
	{
		UE_LOG(LogEasyMultiSave, Verbose, TEXT("PruneSavedActors: Pruned %d actors (from %d to %d)"),
			RemovedCount, NumElements, OutSaved.Num());
	}
	else
	{
		UE_LOG(LogEasyMultiSave, Verbose, TEXT("PruneSavedActors: No pruning required"));
	}
}

bool FActorHelpers::AreWorldActorsInitialized(const UWorld* InWorld)
{
	return InWorld && InWorld->AreActorsInitialized();
}

/**
FSpawnHelpers
**/

UClass* FSpawnHelpers::StaticLoadSpawnClass(const FString& Class)
{
	//Resolve directly
	UClass* ResolvedClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *Class, nullptr, LOAD_None, nullptr));
	if (ResolvedClass)
	{
		return ResolvedClass;
	}

	//Fallback: Try as FSoftClassPath
	FSoftClassPath SoftClassPath(Class);
	return SoftClassPath.TryLoadClass<AActor>();
}

UClass* FSpawnHelpers::ResolveSpawnClass(const FString& InClass)
{
	if (InClass.IsEmpty())
	{
		return nullptr;
	}

	//Apply redirect FIRST (before FindObject)
	const FSoftObjectPath RedirectedPath = FRedirectHelpers::ResolveActorClassPath(FSoftObjectPath(InClass));
	const FString RedirectedString = RedirectedPath.ToString();

	//Now try to find the redirected class
	UClass* SpawnClass = FindObject<UClass>(nullptr, *RedirectedString);
	if (!SpawnClass)
	{
		SpawnClass = FSpawnHelpers::StaticLoadSpawnClass(RedirectedString);
	}

	return SpawnClass;
}

static FName MakeActorName(const FActorSaveData& ActorArray)
{
	return FName(FSaveHelpers::StringFromBytes(ActorArray.Name));
}

FActorSpawnParameters FSpawnHelpers::GetSpawnParams(const UObject* WorldContext, const FActorSaveData& ActorArray)
{
	FActorSpawnParameters SpawnParams;

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Name = MakeActorName(ActorArray);
	SpawnParams.NameMode = FActorSpawnParameters::ESpawnActorNameMode::Requested;
	//SpawnParams.OverrideLevel = ActorArray.Level.Get();

	return SpawnParams;
}

AActor* FSpawnHelpers::CheckForExistingActor(const UWorld* InWorld, const FActorSaveData& ActorArray)
{
	if (InWorld && InWorld->PersistentLevel)
	{
		const FName LoadedActorName = MakeActorName(ActorArray);
		AActor* NewLevelActor = Cast<AActor>(StaticFindObjectFast(nullptr, InWorld->PersistentLevel, LoadedActorName));
		if (NewLevelActor)
		{
			return NewLevelActor;
		}
	}

	return nullptr;
}
