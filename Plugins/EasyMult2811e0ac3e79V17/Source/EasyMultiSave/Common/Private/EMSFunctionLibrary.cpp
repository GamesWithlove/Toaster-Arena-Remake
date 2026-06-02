//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSFunctionLibrary.h"
#include "EMSObject.h"
#include "EMSPaths.h"
#include "EMSCustomSaveGame.h"
#include "EMSInfoSaveGame.h"
#include "Kismet/KismetRenderingLibrary.h"

/**
Save Slots
**/

void UEMSFunctionLibrary::SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->SetCurrentSaveGameName(SaveGameName);
	}
}

TArray<FString> UEMSFunctionLibrary::GetSortedSaveSlots(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->GetSortedSaveSlots();
	}

	return TArray<FString>();
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		SaveGameName = EMS->GetCurrentSaveGameName();
		return EMS->GetSlotInfoObject(SaveGameName);
	}

	return nullptr;
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->GetSlotInfoObject(SaveGameName);
	}

	return nullptr;
}

bool UEMSFunctionLibrary::DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName, bool bComplete)
{
	if (SaveGameName.IsEmpty())
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (bComplete)
		{
			if (EMS->DoesFullSaveGameExist(SaveGameName))
			{
				return true;
			}

			return false;
		}

		if (EMS->DoesSaveSlotExist(SaveGameName))
		{
			return true;
		}
	}

	return false;
}

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName, EDeleteSlotType Data)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (Data == EDeleteSlotType::Full)
		{
			EMS->DeleteAllSaveDataForSlot(SaveGameName);
		}
		else
		{
			EMS->DeleteDataFromSlot(SaveGameName, Data);
		}
	}
}

/**
Save Game Users
**/

void UEMSFunctionLibrary::SetCurrentSaveUserName(UObject* WorldContextObject, const FString& UserName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->SetCurrentSaveUserName(UserName);
	}
}

FString UEMSFunctionLibrary::GetCurrentSaveUser(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->GetCurrentSaveUserName();
	}

	return FString();
}

void UEMSFunctionLibrary::DeleteSaveUser(UObject* WorldContextObject, const FString& UserName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->DeleteAllSaveDataForUser(UserName);
	}
}

TArray<FString> UEMSFunctionLibrary::GetAllSaveUsers(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->GetAllSaveUsers();
	}

	return TArray<FString>();
}

/**
Multi Level
**/

void UEMSFunctionLibrary::ClearMultiLevelSave(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->ClearMultiLevelSave();
	}
}

/**
Thumbnail Saving
Simple saving as .png from a 2d scene capture render target source.
**/

UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->ImportSaveThumbnail(SaveGameName);
	}	

	return nullptr;
}

void UEMSFunctionLibrary::ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->ExportSaveThumbnail(TextureRenderTarget, SaveGameName);
	}
}

/**
Other Functions
**/

void UEMSFunctionLibrary::SetActorSaveProperties(AActor* SaveActor, bool bSkipSave,  bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState)
{
	if (SaveActor)
	{
		if (bSkipSave)
		{
			SaveActor->Tags.AddUnique(EMS::SkipSaveTag);
		}
		else
		{
			SaveActor->Tags.Remove(EMS::SkipSaveTag);
		}

		if (bPersistent)
		{
			SaveActor->Tags.AddUnique(EMS::PersistentTag);
		}
		else
		{
			SaveActor->Tags.Remove(EMS::PersistentTag);
		}

		if (bSkipTransform)
		{
			SaveActor->Tags.AddUnique(EMS::SkipTransformTag);
		}
		else
		{
			SaveActor->Tags.Remove(EMS::SkipTransformTag);
		}

		if (LoadedState == ELoadedStateMod::Unloaded)
		{
			SaveActor->Tags.Remove(EMS::HasLoadedTag);
		}
		else if (LoadedState == ELoadedStateMod::Loaded)
		{
			SaveActor->Tags.Add(EMS::HasLoadedTag);
		}
	}
}

bool UEMSFunctionLibrary::IsSavingOrLoading(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (EMS->IsPaused())
		{
			return false;
		}

		return EMS->IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_All, EAsyncCheckType::CT_Both, false);
	}

	return false;
}

bool UEMSFunctionLibrary::IsLoadedState(AActor* Actor)
{
	if (!IsValid(Actor) || Actor->IsPendingKillPending())
	{
		return false;
	}

	if (!Actor->IsActorInitialized() || !Actor->HasActorBegunPlay())
	{
		return false;
	}

	return Actor->ActorHasTag(EMS::HasLoadedTag);
}

/**
Custom Objects
**/

bool UEMSFunctionLibrary::SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (SaveGame)
		{
			return EMS->SaveCustom(SaveGame);
		}
		else
		{
			return EMS->SaveAllCustomObjects();
		}
	}

	return false;
}

UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass, FString SaveSlot, FString FileName)
{
	if (SaveGameClass)
	{
		if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
		{
			return EMS->GetCustomSave(SaveGameClass, SaveSlot, FileName);
		}
	}

	return nullptr;
}

void UEMSFunctionLibrary::DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->DeleteCustomSave(SaveGame);
	}
}

void UEMSFunctionLibrary::ResetCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame, EResetCustomSaveType Type)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->ResetCustomSave(SaveGame, Type);
	}
}

bool UEMSFunctionLibrary::DoesCustomSaveFileExist(UObject* WorldContextObject, FString SaveSlot, FString FileName)
{
	if (FileName.IsEmpty())
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (EMS->DoesCustomSaveExist(SaveSlot, FileName))
		{
			return true;
		}
	}

	return false;
}


/**
World Partition
**/

bool UEMSFunctionLibrary::IsWorldPartition(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->AutoSaveLoadWorldPartition();
	}

	return false;
}

void UEMSFunctionLibrary::ClearWorldPartition(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->ClearWorldPartition();
	}
}

/**
Raw Object Data
**/

AActor* UEMSFunctionLibrary::ResolveContextActor(UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		return nullptr;
	}

	if (AActor* Actor = Cast<AActor>(WorldContextObject))
	{
		return Actor;
	}

	//If Component, use Owner
	if (const UActorComponent* Component = Cast<UActorComponent>(WorldContextObject))
	{
		return Component->GetOwner();
	}

	//Fallback: traverse outer to find an Actor
	if (AActor* OuterActor = Cast<AActor>(WorldContextObject->GetOuter()))
	{
		return OuterActor;
	}

	UE_LOG(LogEasyMultiSave, Warning, TEXT("Raw Object: No valid Context found, Make sure you only call this from Actors or Components."));

	return nullptr;
}

bool UEMSFunctionLibrary::SaveRawObject(UObject* WorldContextObject, FRawObjectSaveData Data)
{
	if (!Data.IsValidData() || !WorldContextObject)
	{
		return false;
	}

	AActor* ContextActor = ResolveContextActor(WorldContextObject);
	if (!ContextActor)
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(ContextActor))
	{
		return EMS->SaveRawObject(ContextActor, Data);
	}

	return false;
}

UObject* UEMSFunctionLibrary::LoadRawObject(UObject* WorldContextObject, FRawObjectSaveData Data)
{
	if (!Data.IsValidData() || !WorldContextObject)
	{
		return nullptr;
	}

	AActor* ContextActor = ResolveContextActor(WorldContextObject);
	if (!ContextActor)
	{
		return nullptr;
	}

	if (UEMSObject* EMS = UEMSObject::Get(ContextActor))
	{
		return EMS->LoadRawObject(ContextActor, Data);
	}

	return nullptr;
}

/**
Streaming
**/

bool UEMSFunctionLibrary::IsLevelStreamingActive(UObject* WorldContextObject)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (IsWorldPartition(WorldContextObject))
		{
			return !EMS->WorldPartitionLoadComplete();
		}

		return EMS->IsLevelStreaming();
	}

	return false;
}

/**
Custom Player
**/

bool UEMSFunctionLibrary::SavePlayerActorsCustom(AController* Controller, const FString& FileName)
{
	if (FileName.IsEmpty())
	{
		return false;
	}

	if (!Controller)
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(Controller))
	{
		return EMS->SavePlayerActorsCustom(Controller, FileName);
	}

	return false;
}

bool UEMSFunctionLibrary::LoadPlayerActorsCustom(AController* Controller, const FString& FileName)
{
	if (FileName.IsEmpty())
	{
		return false;
	}

	if (!Controller)
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(Controller))
	{
		return EMS->LoadPlayerActorsCustom(Controller, FileName);
	}

	return false;
}

bool UEMSFunctionLibrary::DeleteCustomPlayerFile(UObject* WorldContextObject, const FString& FileName)
{
	if (FileName.IsEmpty())
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		return EMS->DeleteCustomPlayerFile(FileName);
	}

	return false;
}

/**
Backup
**/

FString UEMSFunctionLibrary::GetBackupName(UObject* WorldContextObject, const FString& BaseName)
{
	return FSavePaths::GetBackupFileName(BaseName);
}



