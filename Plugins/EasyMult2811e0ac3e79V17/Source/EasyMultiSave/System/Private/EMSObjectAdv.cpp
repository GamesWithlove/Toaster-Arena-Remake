//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSObjectAdv.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/BufferArchive.h"

/**
Initalization
**/

UEMSObjectAdv::UEMSObjectAdv() : UEMSObjectBase()
{
}

void UEMSObjectAdv::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UEMSObjectAdv::Deinitialize()
{
}

UEMSObjectAdv* UEMSObjectAdv::Get(const UObject* WorldContextObject)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (World)
	{
		const UGameInstance* GameInst = World->GetGameInstance();
		if (GameInst)
		{
			UEMSObjectAdv* EMSSubSystem = GameInst->GetSubsystem<UEMSObjectAdv>();
			if (EMSSubSystem)
			{
				return EMSSubSystem;
			}
		}
	}

	return nullptr;
}

/**
Object Collection
**/

bool UEMSObjectAdv::SaveObjectCollection(const TArray<FRawObjectSaveData>& Objects, bool bUseSlot, FString FileName)
{
	if (Objects.IsEmpty())
	{
		return false;
	}

	const FString FullPath = GetObjectCollectionPath(bUseSlot, FileName);

	//Add valid objects
	TMap<FString, TArray<uint8>> Serialized;
	for (const FRawObjectSaveData& Entry : Objects)
	{
		if (!Entry.IsValidData())
		{
			continue;
		}

		TArray<uint8> Data;
		FStructHelpers::SerializeStruct(Entry.Object);
		SerializeToBinary(Entry.Object, Data);

		if (!Data.IsEmpty())
		{
			Serialized.Add(Entry.Id, MoveTemp(Data));
		}
	}

	if (Serialized.IsEmpty())
	{
		return false;
	}

	FBufferArchive Archive;
	Archive << Serialized;

	//Check for error and proceed
	bool bSuccess = false;
	if (!FSaveHelpers::HasSaveArchiveError(Archive, ESaveErrorType::ER_Collection))
	{
		bSuccess = SaveBinaryArchive(*FullPath, Archive);
	}

	if (bSuccess)
	{
		//Update slot, since data in it was modified
		if (bUseSlot)
		{
			SaveSlotInfoObject(GetCurrentSaveGameName());
		}

		const FString SlotMessage = bUseSlot ? TEXT("to Slot") : TEXT("");
		UE_LOG(LogEasyMultiSave, Log, TEXT("Object Collection saved %s"), *SlotMessage);
	}

	return bSuccess;
}

bool UEMSObjectAdv::LoadObjectCollection(const TArray<FRawObjectSaveData>& Objects, bool bUseSlot, FString FileName)
{
	const FString FullPath = GetObjectCollectionPath(bUseSlot, FileName);

	FSaveObjects AllObjects;
	AllObjects.AddFromRaw(Objects);

	//Load from top level Binary archive as usual
	const FLoadArchiveContext Context = FLoadArchiveContext(FullPath, EDataLoadType::DATA_Collection, AllObjects);
	const bool bLoadBinary = LoadBinaryArchive(Context);

	if (bLoadBinary)
	{
		const FString SlotMessage = bUseSlot ? TEXT("from Slot") : TEXT("");
		UE_LOG(LogEasyMultiSave, Log, TEXT("Object Collection loaded %s"), *SlotMessage);
	}

	return bLoadBinary;
}

bool UEMSObjectAdv::ProcessObjectCollection(FMemoryReader& FromBinary, const FSaveObjects& Objects) const
{
	//Deserialze as same type
	TMap<FString, TArray<uint8>> DataWithId;
	FromBinary << DataWithId;

	if (DataWithId.IsEmpty())
	{
		return false;
	}

	bool bAnyLoaded = false;
	for (const FRawObjectSaveData& Entry : Objects.GetRawData())
	{
		if (!Entry.IsValidData())
		{
			continue;
		}

		//Find the Object by Id
		const TArray<uint8>* Binary = DataWithId.Find(Entry.Id);
		if (!Binary || Binary->IsEmpty())
		{
			continue;
		}

		FStructHelpers::SerializeStruct(Entry.Object);
		SerializeFromBinary(Entry.Object, *Binary);
		bAnyLoaded = true;
	}

	return bAnyLoaded;
}

/**
File System
**/

FString UEMSObjectAdv::GetObjectCollectionPath(const bool bUseSlot, const FString& CollectionFileName) const
{
	const FString FileName = CollectionFileName.IsEmpty() ? EMS::ObjectCollection : CollectionFileName;
	const FString SlotName = bUseSlot ? GetCurrentSaveGameName() : FString();
	const FString FullPath = CustomSaveFile(FileName, SlotName);

	return FullPath;
}
