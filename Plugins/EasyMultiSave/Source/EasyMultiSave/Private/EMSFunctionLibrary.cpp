//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#include "EMSFunctionLibrary.h"

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
Save Slots
**/

void UEMSFunctionLibrary::SetCurrentSaveGameName(UObject* WorldContextObject, const FString & SaveGameName)
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

bool UEMSFunctionLibrary::DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName)
{
	if (SaveGameName.IsEmpty())
	{
		return false;
	}

	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		if (EMS->DoesSaveGameExist(SaveGameName))
		{
			return true;
		}
		else
		{
			if (EMS->GetSortedSaveSlots().Contains(SaveGameName))
			{
				return true;
			}
		}
	}

	return false;
}

/**
File System
**/

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName)
{
	if (UEMSObject* EMS = UEMSObject::Get(WorldContextObject))
	{
		EMS->DeleteAllSaveDataForSlot(SaveGameName);
	}
}

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

void UEMSFunctionLibrary::SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave,  bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState)
{
	AActor* SaveActor = Cast<AActor>(WorldContextObject);
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
		if (EMS->GetWorld()->IsPaused())
		{
			return false;
		}

		return EMS->IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_All, EAsyncCheckType::CT_Both, false);
	}

	return false;
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

bool UEMSFunctionLibrary::SaveRawObject(AActor* WorldContextActor, FRawObjectSaveData Data)
{
	if (Data.IsValidData() && IsValid(WorldContextActor))
	{
		if (UEMSObject* EMS = UEMSObject::Get(WorldContextActor))
		{
			return EMS->SaveRawObject(WorldContextActor, Data);
		}
	}

	return false;
}

UObject* UEMSFunctionLibrary::LoadRawObject(AActor* WorldContextActor, FRawObjectSaveData Data)
{
	if (Data.IsValidData() && IsValid(WorldContextActor))
	{
		if (UEMSObject* EMS = UEMSObject::Get(WorldContextActor))
		{
			return EMS->LoadRawObject(WorldContextActor, Data);
		}
	}

	return nullptr;
}



