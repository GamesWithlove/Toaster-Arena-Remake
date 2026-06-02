//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSLevel.h"
#include "EMSMisc.h"
#include "EMSPaths.h"
#include "EMSPluginSettings.h"
#include "UObject/Package.h"
#include "Engine/World.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Engine/Level.h"
#include "Misc/PackageName.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "WorldPartition/WorldPartitionSubsystem.h"
#include "LevelInstance/LevelInstanceTypes.h"
#include "LevelInstance/LevelInstanceLevelStreaming.h"
#include "LevelInstance/LevelInstanceInterface.h"

/**
FLevelHelpers
**/

FString FLevelHelpers::GetWorldLevelName(const UWorld* InWorld, const bool bRedirect)
{
	if (!InWorld)
	{
		return FString();
	}

	const ULevel* PersistentLevel = InWorld->PersistentLevel;
	if (!PersistentLevel)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("GetWorldLevelName has invalid PersistentLevel"));
		return FString();
	}

	//Get "full" path without PIE prefixes (Copy Package Path in Editor. Like /Game/EasyMultiSaveContent/Maps/Basic/BasicExample)
	const FString FullLevelPackagePath = PersistentLevel->GetOutermost()->GetName();
	const FString NormalLevelName = FEditorPaths::StripLevelPIEPrefix(InWorld, FullLevelPackagePath);
	const FString FinalLevelName = bRedirect ? FRedirectHelpers::ResolveWorldLevel(NormalLevelName) : NormalLevelName;

	return FinalLevelName;
}

bool FLevelHelpers::IsTransientLevelName(const FString& LevelName)
{
	if (LevelName.IsEmpty())
	{
		return true;
	}

	return
		LevelName.StartsWith(TEXT("/Engine/Transient")) ||
		LevelName.StartsWith(TEXT("Engine/Transient")) ||
		LevelName.Contains(TEXT("Transient.World")) ||
		LevelName.Equals(TEXT("Transient"), ESearchCase::IgnoreCase) ||
		LevelName.StartsWith(TEXT("/Engine/Maps/Templates/"));
}

const ULevelStreamingDynamic* FLevelHelpers::GetRuntimeLevelInstance(const AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	const UWorld* World = Actor->GetWorld();
	if (!World)
	{
		return nullptr;
	}

	//Return the associated runtime level instance
	if (FStreamHelpers::HasStreamingLevels(World))
	{
		for (const ULevelStreaming* LevelStreaming : World->GetStreamingLevels())
		{
			const ULevelStreamingDynamic* StreamingDynamic = Cast<ULevelStreamingDynamic>(LevelStreaming);
			if (StreamingDynamic && StreamingDynamic->GetLoadedLevel() == Actor->GetLevel())
			{
				return StreamingDynamic;
			}
		}
	}

	return nullptr;
}

FName FLevelHelpers::GetStableDynamicLevelInstanceID(const ILevelInstanceInterface* LevelIf, const FString& LevelAssetName)
{
	const FLevelInstanceID& InstanceID = LevelIf->GetLevelInstanceID();
	if (!InstanceID.IsValid())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Invalid Level Instance ID for: %s"), *LevelAssetName);
		return NAME_None;
	}

	//Format as 16-digit uppercase hex
	const uint64 Hash = InstanceID.GetHash();
	const FString HexString = FString::Printf(TEXT("%016llX"), Hash);
	const FString StableNameString = LevelAssetName + EMS::UnderscoreInt + HexString;

	return FName(StableNameString);
}

FName FLevelHelpers::GetFullRuntimeLevelInstanceName(const AActor* Actor)
{
	//Level instances inside streaming sub-levels.
	if (const ULevelStreamingDynamic* RuntimeLevelInstance = FLevelHelpers::GetRuntimeLevelInstance(Actor))
	{
		const FString LevelAssetName = FPackageName::GetShortName(RuntimeLevelInstance->GetWorldAssetPackageName());
		if (const ULevelStreamingLevelInstance* LI = Cast<ULevelStreamingLevelInstance>(RuntimeLevelInstance))
		{
			if (const ILevelInstanceInterface* LevelIf = LI->GetLevelInstance())
			{
				//Use helper to get the ID
				const FName StableName = GetStableDynamicLevelInstanceID(LevelIf, LevelAssetName);
				if (!StableName.IsNone())
				{
					return StableName;
				}
			}
		}

        /*
		Common streaming sub-levels. But also runtime spawned dynamic levels.
		
        Runtime spawned levels require an override name to maintain consistency. However, Unreal Engine does not allow recycling of override names.
        If you need to load and unload dynamically spawned runtime level instances, you must modify this code to use a custom class and generate a unique ID.
        This ID should be independent of the name itself. Note that dynamically spawned instances are not designed to be removed and reloaded.
        Additionally, you would need to manually remove associated Actors. This process should ideally be handled using level streaming.
        */
		const FName OverrideName = RuntimeLevelInstance->GetFName();
		if (OverrideName != NAME_None)
		{
			return OverrideName;
		}
	}

	return NAME_None;
}

FString FLevelHelpers::GetLevelInstanceNameAsString(const AActor* Actor)
{
	const FName& InstName = FLevelHelpers::GetFullRuntimeLevelInstanceName(Actor);
	return InstName.IsNone() ? FString() : InstName.ToString(); //Make sure not 'none'
}

/**
FStreamHelpers
**/

bool FStreamHelpers::AutoSaveLoadWorldPartition(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return false;
	}

	//Make sure only on Servers
	if (InWorld->GetNetMode() == NM_Client)
	{
		return false;
	}

	if (UEMSPluginSettings::Get()->WorldPartitionSaving == EWorldPartitionMethod::Disabled)
	{
		return false;
	}

	if (FSettingHelpers::IsContainingStreamMultiLevelSave())
	{
		if (InWorld->IsPartitionedWorld())
		{
			return true;
		}
	}

	return false;
}

bool FStreamHelpers::HasStreamingLevels(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return false;
	}

	if (InWorld->IsPartitionedWorld())
	{
		return false;
	}

	//Return true, as this might have Level Instances in the persistent level.
	if (FSettingHelpers::IsDynamicLevelStreaming())
	{
		return true;
	}

	return !InWorld->GetStreamingLevels().IsEmpty();
}

bool FStreamHelpers::IsLevelStillStreaming(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return true;
	}

	//World Partition
	if (AutoSaveLoadWorldPartition(InWorld))
	{
		if (UWorldPartitionSubsystem* WorldPartitionSubsystem = InWorld->GetSubsystem<UWorldPartitionSubsystem>())
		{
			//Lets just listen to Unreal and early out
			if (WorldPartitionSubsystem->IsAllStreamingCompleted())
			{
				return false;
			}
		}
		else
		{
			return false;
		}

		return true;
	}

	//Manual Level Streaming
	if (!HasStreamingLevels(InWorld))
	{
		return false;
	}
	
	for (const ULevelStreaming* StreamingLevel : InWorld->GetStreamingLevels())
	{
		if (!StreamingLevel)
		{
			continue;
		}

		const ELevelStreamingState StreamingState = StreamingLevel->GetLevelStreamingState();

		//These states are not relevant at all, since the Actors are ignored anyway.
		if (StreamingState == ELevelStreamingState::FailedToLoad
			|| StreamingState == ELevelStreamingState::Removed
			|| StreamingState == ELevelStreamingState::Unloaded
			|| StreamingState == ELevelStreamingState::LoadedNotVisible)
		{
			continue;
		}

		//All other states will block the async save/load operations.
		if (StreamingState != ELevelStreamingState::LoadedVisible)
		{
			return true;
		}
	}

	return false;
}

bool FStreamHelpers::CanProcessStreaming(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return false;
	}

	const bool bTooEarly = InWorld->TimeSeconds < EMS::ShortDelay;
	const bool bIsStreaming = FStreamHelpers::IsLevelStillStreaming(InWorld);
	const bool bIsAsync = FAsyncSaveHelpers::IsAsyncSaveOrLoadTaskActive(InWorld, ESaveGameMode::MODE_All, EAsyncCheckType::CT_Both, false);
	return !bTooEarly && !bIsStreaming && !bIsAsync;
}

bool FStreamHelpers::IsWorldPartitionInit(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return true;
	}

	return InWorld->TimeSeconds < UEMSPluginSettings::Get()->WorldPartitionInitTime;
}

bool FStreamHelpers::CanProcessWorldPartition(const UWorld* InWorld)
{
	if (!IsValid(InWorld))
	{
		return false;
	}

	const bool bInit = FStreamHelpers::IsWorldPartitionInit(InWorld);
	return !bInit && CanProcessStreaming(InWorld);
}