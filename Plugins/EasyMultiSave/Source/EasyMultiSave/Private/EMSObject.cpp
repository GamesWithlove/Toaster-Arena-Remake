//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#include "EMSObject.h"
#include "EMSFunctionLibrary.h"
#include "EMSPluginSettings.h"
#include "EMSAsyncStream.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include "EngineUtils.h"
#include "Engine/Engine.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/GameInstance.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Serialization/ArchiveSaveCompressedProxy.h"
#include "Serialization/ArchiveLoadCompressedProxy.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Async/Async.h"
#include "Runtime/Launch/Resources/Version.h"
#include "SaveGameSystem.h"
#include "PlatformFeatures.h"
#include "ImageUtils.h"

#if EMS_ENGINE_MIN_UE53
#include "Streaming/LevelStreamingDelegates.h"
#endif

DEFINE_LOG_CATEGORY(LogEasyMultiSave);

/**
Initalization
**/

UEMSObject::UEMSObject() : 
	bLoadFromMemory(false),
	bInitWorldPartitionLoad(false),
	bLoadPartition(false),
	bSavePartition(false),
	LastSlotSaveTime(0.f) {}

UWorld* UEMSObject::GetWorld() const
{
	return GetGameInstance()->GetWorld();
}

void UEMSObject::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogEasyMultiSave, Log, TEXT("Easy Multi Save Initialized"));

	const FString VersionNum = VERSION_STRINGIFY(EMS_VERSION_NUMBER);
	UE_LOG(LogEasyMultiSave, Log, TEXT("Easy Multi Save Version: %s"), *VersionNum);

	UE_LOG(LogEasyMultiSave, Log, TEXT("Current Save Game Slot is: %s"), *GetCurrentSaveGameName());

#if EMS_ENGINE_MIN_UE53
	FWorldDelegates::OnPreWorldInitialization.AddUObject(this, &UEMSObject::OnPreWorldInit);
	FWorldDelegates::OnWorldCleanup.AddUObject(this, &UEMSObject::OnWorldCleanup);
#endif

}

void UEMSObject::Deinitialize()
{

#if EMS_ENGINE_MIN_UE53
	RemoveWorldPartitionStreamDelegates();
	FWorldDelegates::OnPreWorldInitialization.RemoveAll(this);
	FWorldDelegates::OnWorldCleanup.RemoveAll(this);
#endif

}

UEMSObject* UEMSObject::Get(UObject* WorldContextObject)
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
Custom Save Objects
**/

UEMSCustomSaveGame* UEMSObject::GetCustomSave(const TSubclassOf<UEMSCustomSaveGame>& SaveGameClass, const FString& InSlotName, const FString& InFileName)
{
	if (!SaveGameClass)
	{
		return nullptr;
	}

	const UEMSCustomSaveGame* CustomClass = Cast<UEMSCustomSaveGame>(SaveGameClass->GetDefaultObject());
	if (!CustomClass)
	{
		return nullptr;
	}

	//Allow for custom file names
	const FString CustomSaveName = [InFileName, CustomClass]() -> FString
	{
		if (InFileName.IsEmpty())
		{
			return CustomClass->SaveGameName.IsEmpty() ? CustomClass->GetName() : CustomClass->SaveGameName;
		}
		else
		{
			return InFileName;
		}
	}();

	const bool bUseSlot = CustomClass->bUseSaveSlot;
	const bool bCustomSlotName = bUseSlot && !InSlotName.IsEmpty();
	
	if (bCustomSlotName && !DoesSaveGameExist(InSlotName))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to access Custom Save: %s with invalid Slot: %s ! Please check if the Slot exists before."), *CustomSaveName, *InSlotName);
		return nullptr;
	}

	const FString ActualSlot = bCustomSlotName ? InSlotName : GetCurrentSaveGameName();
	const FString SlotName = bUseSlot ? ActualSlot : FString();
	const FString CachedRefName = CustomSaveName + SlotName;

	if (UEMSCustomSaveGame* CachedObject = CachedCustomSaves.FindRef(CachedRefName))
	{
		if (bUseSlot) CachedObject->SlotName = SlotName;
		return CachedObject;
	}

	const FString SaveFile = CustomSaveFile(CustomSaveName, SlotName);
	const FSoftClassPath SaveClass = CustomClass->GetClass();

	if (UEMSCustomSaveGame* NewObject = CreateNewSaveObject<UEMSCustomSaveGame>(SaveFile, SaveClass))
	{
		NewObject->SaveGameName = CustomSaveName;
		NewObject->SlotName = SlotName;
		CachedCustomSaves.Add(CachedRefName, NewObject);
		return NewObject;
	}

	return nullptr;
}

bool UEMSObject::SaveCustom(UEMSCustomSaveGame* SaveGame)
{
	if (!IsValid(SaveGame))
	{
		return false;
	}

	const FString CustomSaveName = SaveGame->SaveGameName;
	const FString SlotName = SaveGame->bUseSaveSlot ? SaveGame->SlotName : FString();

	if (SaveObject(*CustomSaveFile(CustomSaveName, SlotName), SaveGame))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game saved: %s"), *CustomSaveName);
		return true;
	}
	
	UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Custom Save Game: %s"), *CustomSaveName);

	return false;
}

bool UEMSObject::SaveAllCustomObjects()
{
	bool bSuccess = false;
	bool bUseSlot = false;

	for (auto& CustomObjectPair : CachedCustomSaves)
	{
		UEMSCustomSaveGame* SaveGame = CustomObjectPair.Value;
		if (!SaveGame)
		{
			continue;
		}

		if (SaveGame->bUseSaveSlot)
		{
			bUseSlot = true;
		}

		bSuccess |= SaveCustom(SaveGame);
	}

	//With at least one object using slots, we also save the slot info.
	if (bUseSlot)
	{
		SaveSlotInfoObject();
	}

	return bSuccess;
}

void UEMSObject::DeleteCustomSave(UEMSCustomSaveGame* SaveGame)
{
	if (!IsValid(SaveGame))
	{
		return;
	}

	const bool bUseSlot = SaveGame->bUseSaveSlot;
	const FString CustomSaveName = SaveGame->SaveGameName;
	const FString SlotName = bUseSlot ? SaveGame->SlotName : FString();
	const FString SaveFile = CustomSaveFile(CustomSaveName, SlotName);

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	if (SaveSystem->DoesSaveGameExist(*SaveFile, PlayerIndex))
	{
		if (SaveSystem->DeleteGame(false, *SaveFile, PlayerIndex))
		{
			const FString CachedRefName = bUseSlot ? CustomSaveName + SlotName : CustomSaveName;
			CachedCustomSaves.Remove(CachedRefName);

			UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game Deleted: %s"), *CustomSaveName);
		}
	}
}

/**
Save Slots
**/

FString UEMSObject::GetCurrentSaveGameName() const
{
	const FString DefaultName = UEMSPluginSettings::Get()->DefaultSaveGameName;

	if (CurrentSaveGameName.IsEmpty())
	{
		return DefaultName;
	}

	return CurrentSaveGameName;
}

UEMSInfoSaveGame* UEMSObject::GetSlotInfoObject(const FString& SaveGameName)
{
	//Return the cached reference or create a new slot object

	if (UEMSInfoSaveGame* CachedSlot = CachedSaveSlots.FindRef(SaveGameName))
	{
		return CachedSlot;
	}

	if (UEMSInfoSaveGame* NewSlot = MakeSlotInfoObject(SaveGameName))
	{
		CachedSaveSlots.Add(SaveGameName, NewSlot);
		return NewSlot;
	}

	return nullptr;
}

UEMSInfoSaveGame* UEMSObject::MakeSlotInfoObject(const FString& SaveGameName)
{
	const FString SaveSlotFile = SlotInfoSaveFile(SaveGameName);
	const FSoftClassPath SaveSlotClass = UEMSPluginSettings::Get()->SlotInfoSaveGameClass;
	
	if (UEMSInfoSaveGame* NewSlot = CreateNewSaveObject<UEMSInfoSaveGame>(SaveSlotFile, SaveSlotClass))
	{
		return NewSlot;
	}

	return nullptr;
}

void UEMSObject::SaveSlotInfoObject()
{
	const FString SaveGameName = GetCurrentSaveGameName();
	if (VerifyOrCreateDirectory(SaveGameName))
	{
		//Look for cached one
		UEMSInfoSaveGame* SaveGame = CachedSaveSlots.FindRef(SaveGameName);
		if (!IsValid(SaveGame))
		{
			SaveGame = MakeSlotInfoObject(SaveGameName);
		}

		if (!SaveGame)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Invalid Save Object for: %s"), *SaveGameName);
			return;
		}

		//GetSortedSaveSlots() only uses the file data, this uses actual saved data.
		SaveGame->SlotInfo.Name = SaveGameName;
		SaveGame->SlotInfo.TimeStamp = FDateTime::Now();
		SaveGame->SlotInfo.Level = GetLevelName();

		TArray<FString> PlayerNames;
		if (const AGameStateBase* GameState = GetWorld()->GetGameState())
		{
			const TArray<APlayerState*> Players = GameState->PlayerArray;
			if (!EMS::ArrayEmpty(Players))
			{
				for (const APlayerState* PlayerState : Players)
				{
					PlayerNames.Add(PlayerState->GetPlayerName());
				}

				SaveGame->SlotInfo.Players = PlayerNames;
			}
		}

		SaveObject(*SlotInfoSaveFile(), SaveGame);

		//Update cached data
		CachedSaveSlots.Add(SaveGameName, SaveGame);

		//Slot Info might save twice in some cases, but we only log once
		if (IsTimeSince(LastSlotSaveTime, EMS_SHORT_DELAY))
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Slot Info saved: %s"), *SaveGameName);
			LastSlotSaveTime = GetWorld()->GetTimeSeconds();
		}
	}
}

void UEMSObject::SetCurrentSaveGameName(const FString & SaveGameName)
{
	if (CurrentSaveGameName != SaveGameName)
	{
		//When switching slots, we want to always load from disk
		ClearLoadFromMemory();

		CurrentSaveGameName = FSavePaths::ValidateSaveName(SaveGameName);
		SaveConfig();

		UE_LOG(LogEasyMultiSave, Log, TEXT("New Current Save Game Slot is: %s"), *CurrentSaveGameName);
	}
}

TArray<FString> UEMSObject::GetSortedSaveSlots() const
{
	if (IsConsoleFileSystem())
	{
		return GetSaveSlotsConsole();
	}

	return GetSaveSlotsDesktop();
}

TArray<FString> UEMSObject::GetSaveSlotsDesktop() const
{
	TArray<FString> SaveGameNames;
	IFileManager::Get().FindFiles(SaveGameNames, *FPaths::Combine(BaseSaveDir(), TEXT("*")), false, true);

	TArray<FSaveSlotInfo> SaveSlots;

	for (const FString& SlotName : SaveGameNames)
	{
		FSaveSlotInfo SlotInfo;
		SlotInfo.Name = SlotName;

		//Use Timestamp of actual file only for sorting.
		const FString SlotPath = SlotFilePath(SlotName);
		SlotInfo.TimeStamp = IFileManager::Get().GetTimeStamp(*SlotPath);

		SaveSlots.Add(SlotInfo);
	}

	SaveSlots.Sort([](const FSaveSlotInfo& A, const FSaveSlotInfo& B)
	{
		return A.TimeStamp > B.TimeStamp;
	});

	TArray<FString> SaveSlotNames;

	for (const FSaveSlotInfo& SlotInfo : SaveSlots)
	{
		SaveSlotNames.Add(SlotInfo.Name);
	}
	
	return SaveSlotNames;
}

TArray<FString> UEMSObject::GetAllSaveGames() const
{
	TArray<FString> SaveGameNames;

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	SaveSystem->GetSaveGameNames(SaveGameNames, PlayerIndex);

	return SaveGameNames;
}

TArray<FString> UEMSObject::GetSaveSlotsConsole() const
{
	//Gather all save slot files
	const TArray<FString> SlotNames = FSavePaths::GetConsoleSlotFiles(GetAllSaveGames());

	//Fill with proper info
	TArray<FSaveSlotInfo> SaveSlots;
	for (const FString& SlotName : SlotNames)
	{	
		const FString SlotPath = SlotFilePath(SlotName);

		FSaveSlotInfo SlotInfo;
		SlotInfo.Name = SlotName;
		SlotInfo.TimeStamp = IFileManager::Get().GetTimeStamp(*SlotPath);

		SaveSlots.Add(SlotInfo);
	}

	SaveSlots.Sort([](const FSaveSlotInfo& A, const FSaveSlotInfo& B)
	{
		return A.TimeStamp > B.TimeStamp;
	});

	//Return the sorted list
	TArray<FString> SaveSlotNames;
	for (const FSaveSlotInfo& SlotInfo : SaveSlots)
	{
		SaveSlotNames.Add(SlotInfo.Name);
	}

	return SaveSlotNames;
}

bool UEMSObject::DoesSaveGameExist(const FString& SaveGameName) const
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	return SaveSystem->DoesSaveGameExist(*SlotInfoSaveFile(SaveGameName), PlayerIndex);
}

void UEMSObject::DeleteAllSaveDataForSlot(const FString& SaveGameName)
{
	bool bSuccess = false;

	TMap<FString, TObjectPtr<UEMSCustomSaveGame>> TempCustomSaves = CachedCustomSaves;

	//Console uses files and not folders
	if (IsConsoleFileSystem())
	{
		TArray<FString> AllFiles;

		const TArray<FString> SaveGameNames = GetAllSaveGames();

		//Might be empty on some platforms
		if (!EMS::ArrayEmpty(SaveGameNames))
		{
			for (const FString& FileName : SaveGameNames)
			{
				if (FileName.Contains(SaveGameName))
				{
					AllFiles.Add(FileName);
				}
			}
		}
		else
		{
			//Default files
			AllFiles = FSaveHelpers::GetDefaultSaveFiles(SaveGameName);
	
			//Custom saves
			for (auto It = TempCustomSaves.CreateIterator(); It; ++It)
			{
				if (It && It->Key.Contains(SaveGameName))
				{
					const TObjectPtr<UEMSCustomSaveGame> CustomSaveGame = It->Value;
					if (CustomSaveGame)
					{
						const FString CustomName = CustomSaveGame->SaveGameName;
						AllFiles.Add(CustomName);
						CachedCustomSaves.Remove(It->Key);
					}
				}
			}
		}

		//Use native delete 
		ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
		for (const FString& FileName : AllFiles)
		{
			if (*FileName)
			{
				SaveSystem->DeleteGame(false, *FileName, PlayerIndex);
				bSuccess = true;
			}
		}

		if (bSuccess)
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Save Game Data removed for: %s"), *SaveGameName);
		}
	}
	else
	{
		const FString SaveFile = FPaths::Combine(UEMSObject::BaseSaveDir(), SaveGameName);

		bSuccess = IFileManager::Get().DeleteDirectory(*SaveFile, true, true);
		if (bSuccess)
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Save Game Data removed for: %s"), *SaveGameName);
		}

		//Delete the cached custom save objects
		for (auto It = TempCustomSaves.CreateIterator(); It; ++It)
		{
			if (It && It->Key.Contains(SaveGameName))
			{
				CachedCustomSaves.Remove(It->Key);
			}			
		}
	}

	//Remove Cached Slot
	CachedSaveSlots.Remove(SaveGameName);
}

/***
Save Users
**/

void UEMSObject::SetCurrentSaveUserName(const FString& UserName)
{
	if (IsConsoleFileSystem())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Save Users are not supported when using the console file system."));
		return;
	}

	if (CurrentSaveUserName != UserName)
	{
		ClearUserData();

		CurrentSaveUserName = UserName;
		SaveConfig();

		UE_LOG(LogEasyMultiSave, Log, TEXT("New Current Save User Name is: %s"), *UserName);
	}
}

void UEMSObject::DeleteAllSaveDataForUser(const FString& UserName)
{
	ClearUserData();

	const FString UserSaveFile = SaveUserDir() + UserName;
	bool bSuccess = false;

	//Try removing folder	
	bSuccess = IFileManager::Get().DeleteDirectory(*UserSaveFile, true, true);
	if (bSuccess)
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Save Game User Data removed for: %s"), *UserName);
	}
}

TArray<FString> UEMSObject::GetAllSaveUsers() const
{
	TArray<FString> SaveUserNames;
	IFileManager::Get().FindFiles(SaveUserNames, *FPaths::Combine(SaveUserDir(), TEXT("*")), false, true);

	return SaveUserNames;
}

/**
File System
**/

bool UEMSObject::VerifyOrCreateDirectory(const FString& NewDir)
{
	//Not required for console
	if (IsConsoleFileSystem())
	{
		return true;
	}

	const FString SaveFile = FPaths::Combine(BaseSaveDir(), NewDir);
	if (IFileManager::Get().DirectoryExists(*SaveFile) )
	{
		return true;
	}

	return IFileManager::Get().MakeDirectory(*SaveFile, true);
}

bool UEMSObject::SaveObject(const FString& FullSavePath, UObject* SaveGameObject)
{
	bool bSuccess = false;

	if (SaveGameObject)
	{
		TArray<uint8> Data;

		FMemoryWriter MemoryWriter(Data, true);
		FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
		SaveGameObject->Serialize(Ar);

		FBufferArchive Archive;
		WritePackageInfo(Archive);
		Archive << Data;

		bSuccess = SaveBinaryArchive(Archive, *FullSavePath);

		Archive.FlushCache();
		Archive.Close();

		MemoryWriter.FlushCache();
		MemoryWriter.Close();
	}

	return bSuccess;
}

template <class TSaveGame>
TSaveGame* UEMSObject::CreateNewSaveObject(const FString& FullSavePath, const FSoftClassPath& InClassName)
{
	if (FullSavePath.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Save path is empty"));
		return nullptr;
	}

	//Try to load the class from the provided class name
	const FSoftClassPath LocalClassName = InClassName;
	TSubclassOf<TSaveGame> Class = LocalClassName.TryLoadClass<TSaveGame>();

	if (!Class)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Invalid Save Game Object Class: %s"), *LocalClassName.ToString());
		return nullptr;
	}

	//Load save game object 
	USaveGame* SaveGame = CreateAndLoadSaveObject(FullSavePath, Class);
	if (!SaveGame)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Failed to load Save Game Object: %s"), *FullSavePath);
		return nullptr;
	}

	TSaveGame* SaveGameObject = Cast<TSaveGame>(SaveGame);
	if (!SaveGameObject)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Invalid Save Game Object: %s"), *FullSavePath);
		return nullptr;
	}

	return SaveGameObject;
}

USaveGame* UEMSObject::CreateAndLoadSaveObject(const FString& FullSavePath, TSubclassOf<USaveGame> SaveGameClass)
{
	if (*SaveGameClass && (*SaveGameClass != USaveGame::StaticClass()))
	{
		USaveGame* SaveGameObject = NewObject<USaveGame>(this, SaveGameClass);
		if (SaveGameObject)
		{
			LoadBinaryArchive(EDataLoadType::DATA_Object, FullSavePath, SaveGameObject);
			return SaveGameObject;
		}
	}

	return nullptr;
}

/**
Versioning Functions
**/

void UEMSObject::WritePackageInfo(FBufferArchive& ToBinary)
{
	//Package info is written at the beginning of the file as first entry to the top-level FBufferArchive for Player, Level, Object
	int32 FileTag = EMS::UE_SAVEGAME_FILE_TYPE_TAG;
	FPackageFileVersion Version = GPackageFileUEVersion;
	FEngineVersion EngineVersion = FEngineVersion::Current();

	ToBinary << FileTag;
	ToBinary << Version;
	ToBinary << EngineVersion;
}

void UEMSObject::ReadPackageInfo(FMemoryReader& MemoryReader, const bool bSeekInitialVersion)
{
	//This is done once when initially reading the file
	if (bSeekInitialVersion)
	{
		int32 FileTag;
		FPackageFileVersion FileVersion;
		FEngineVersion EngineVersion;

		MemoryReader << FileTag;

		//No file tag means an old file.
		if (FileTag != EMS::UE_SAVEGAME_FILE_TYPE_TAG)
		{
			//Start from beginning
			MemoryReader.Seek(0);

			LoadedPackageVersion = FSaveVersion::GetStaticOldPackageVersion();
			LoadedEngineVersion = FEngineVersion();

			UE_LOG(LogEasyMultiSave, Warning, TEXT("File version empty. Using 'Old Save Package Version': %d"), LoadedPackageVersion.ToValue());
		}
		else
		{
			MemoryReader << FileVersion;
			MemoryReader << EngineVersion;

			LoadedPackageVersion = FileVersion;
			LoadedEngineVersion = EngineVersion;
		}
	}

	//Sub-archives also require the correct version to be set, so we use the initial version globally 
	MemoryReader.SetUEVer(LoadedPackageVersion);
	MemoryReader.SetEngineVer(LoadedEngineVersion);
}

void UEMSObject::WriteGameVersionInfo(FBufferArchive& ToBinary)
{
	//Game version info is written to the end of the file
	FSaveVersionInfo GameVersion = FSaveVersion::MakeSaveFileVersion();
	ToBinary << GameVersion;
}

void UEMSObject::ReadGameVersionInfo(FMemoryReader& FromBinary)
{
	FSaveVersionInfo Version = FSaveVersionInfo();
	FromBinary << Version;
	LastReadGameVersionInfos.Add(Version);
}

void UEMSObject::CheckSaveGameVersion(const EDataLoadType Type)
{
	LastReadGameVersionInfos.Empty();

	if (Type == EDataLoadType::DATA_Object)
	{
		//Check slot
		USaveGame* SaveSlotObject = GetSlotInfoObject();
		LoadBinaryArchive(EDataLoadType::DATA_Object, SlotInfoSaveFile(), SaveSlotObject, true);	
	}
	else if (Type == EDataLoadType::DATA_Player)
	{
		LoadBinaryArchive(EDataLoadType::DATA_Player, PlayerSaveFile(), nullptr, true);
	}
	else if (Type == EDataLoadType::DATA_Level)
	{
		LoadBinaryArchive(EDataLoadType::DATA_Level, ActorSaveFile(), nullptr, true);
	}
}

bool UEMSObject::CompleteCheckSaveFile(const ESaveFileCheckType Type) const
{
	if (EMS::ArrayEmpty(LastReadGameVersionInfos))
	{
		return false;
	}

	const FSaveVersionInfo InitialInfo = LastReadGameVersionInfos[0];
	for (const FSaveVersionInfo& InInfo : LastReadGameVersionInfos)
	{
		if (InInfo != InitialInfo)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Game version signature mismatch between save files of current slot"));
			return false;
		}
	}

	UE_LOG(LogEasyMultiSave, Log, TEXT("%s - Package  -----   %d"), *EMS::VersionLogText, LoadedPackageVersion.ToValue());
	UE_LOG(LogEasyMultiSave, Log, TEXT("%s - Engine   -----   %s"), *EMS::VersionLogText, *LoadedEngineVersion.ToString());
	UE_LOG(LogEasyMultiSave, Log, TEXT("%s - Plugin   -----   %s"), *EMS::VersionLogText, *InitialInfo.Plugin);
	UE_LOG(LogEasyMultiSave, Log, TEXT("%s - Game     -----   %s"), *EMS::VersionLogText, *InitialInfo.Game);

	return FSaveVersion::IsSaveGameVersionEqual(InitialInfo);	
}

void UEMSObject::LogPackageVersion()
{
	UE_LOG(LogEasyMultiSave, Log, TEXT("Current File Package Engine Version: %d"), GPackageFileUEVersion.ToValue());
}

/**
Save and Load Archive Functions
**/

bool UEMSObject::SaveBinaryData(const TArray<uint8>& SavedData, const FString& FullSavePath) const
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	return SaveSystem->SaveGame(false, *FullSavePath, PlayerIndex, SavedData);
}

bool UEMSObject::SaveBinaryArchive(FBufferArchive& BinaryData, const FString& FullSavePath)
{

#if PLATFORM_WINDOWS
	FSavePaths::CheckForReadOnly(FullSavePath);
#endif

	bool bSuccess = false;
	const bool bNoCompression = IsConsoleFileSystem();

	WriteGameVersionInfo(BinaryData);

	if (bNoCompression)
	{
		bSuccess = SaveBinaryData(BinaryData, FullSavePath);
	}
	else
	{
		//Compress and save
		TArray<uint8> CompressedData;
		FArchiveSaveCompressedProxy Compressor = FArchiveSaveCompressedProxy(CompressedData, NAME_Oodle);

		if (Compressor.GetError())
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Cannot save, compressor error: %s"), *FullSavePath);
			return false;
		}

		Compressor << BinaryData;
		Compressor.Flush();

		bSuccess = SaveBinaryData(CompressedData, FullSavePath);

		Compressor.FlushCache();
		Compressor.Close();
	}

	BinaryData.FlushCache();
	BinaryData.Empty();
	BinaryData.Close();

	return bSuccess;
}

bool UEMSObject::LoadBinaryArchive(const EDataLoadType LoadType, const FString& FullSavePath, UObject* Object, const bool bReadVersion)
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	if (!SaveSystem->DoesSaveGameExist(*FullSavePath, PlayerIndex))
	{
		return false;
	}

	TArray<uint8> BinaryData;
	if (!SaveSystem->LoadGame(false, *FullSavePath, PlayerIndex, BinaryData))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("%s could not be loaded"), *FullSavePath);
		return false;
	}

	if (EMS::ArrayEmpty(BinaryData))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("No binary data found for %s"), *FullSavePath);
		return false;
	}

	bool bSuccess = false;
	const bool bNoCompression = IsConsoleFileSystem();

	if (bNoCompression)
	{
		FMemoryReader MemoryReader = FMemoryReader(BinaryData, true);
		ReadPackageInfo(MemoryReader, true);
	
		//Unpack archive 
		bSuccess = UnpackBinaryArchive(LoadType, MemoryReader, Object);
		if (bReadVersion)
		{
			ReadGameVersionInfo(MemoryReader);
		}

		MemoryReader.FlushCache();
		MemoryReader.Close();
	}
	else
	{
		FArchiveLoadCompressedProxy Decompressor = FArchiveLoadCompressedProxy(BinaryData, NAME_Oodle);

		if (Decompressor.GetError())
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Cannot load, file might not be compressed: %s"), *FullSavePath);
			return false;
		}

		FBufferArchive DecompressedBinary;
		Decompressor << DecompressedBinary;

		FMemoryReader MemoryReader = FMemoryReader(DecompressedBinary, true);
		ReadPackageInfo(MemoryReader, true);

		//Unpack archive 
		bSuccess = UnpackBinaryArchive(LoadType, MemoryReader, Object);
		if (bReadVersion)
		{
			ReadGameVersionInfo(MemoryReader);
		}

		Decompressor.FlushCache();
		Decompressor.Close();

		DecompressedBinary.Empty();
		DecompressedBinary.Close();

		MemoryReader.FlushCache();
		MemoryReader.Close();
	}

	return bSuccess;
}

bool UEMSObject::TryLoadPlayerFile()
{
	//Player has no load from memory, as it is loaded once at the beginning in most cases.
	return LoadBinaryArchive(EDataLoadType::DATA_Player, PlayerSaveFile());
}

bool UEMSObject::TryLoadLevelFile()
{
	//Not relevant below this version
#if EMS_ENGINE_MIN_UE53
	const bool bTryLoadFromMemory = bLoadFromMemory && HasLevelData();
	if (bTryLoadFromMemory)
	{
		return true;
	}
#endif

	const bool bDiskLoadSuccess = LoadBinaryArchive(EDataLoadType::DATA_Level, ActorSaveFile());

	//We don't have data yet
	if (!bDiskLoadSuccess && AutoSaveLoadWorldPartition())
	{
		bInitWorldPartitionLoad = true;
	}

	//Allow loading from memory
	bLoadFromMemory = bDiskLoadSuccess;

	return bDiskLoadSuccess;
}

/**
Unpack Archive Functions
**/

bool UEMSObject::UnpackBinaryArchive(const EDataLoadType LoadType, FMemoryReader& FromBinary, UObject* Object)
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
	else if (LoadType == EDataLoadType::DATA_Object)
	{
		if (Object)
		{
			FBufferArchive ObjectArchive;
			FromBinary << ObjectArchive;

			FMemoryReader MemoryReader(ObjectArchive, true);
			ReadPackageInfo(MemoryReader);

			FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
			Object->Serialize(Ar);

			ObjectArchive.FlushCache();
			ObjectArchive.Close();

			MemoryReader.FlushCache();
			MemoryReader.Close();

			return true;
		}
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
			if (StackedArchive.Level == GetLevelName())
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
		if (IsStreamMultiLevelSave() && LevelArchive.Level == GetLevelName())
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

	SavedActors.Reserve(LevelArchive.SavedActors.Num());
	for (const FActorSaveData& TempSavedActor : LevelArchive.SavedActors)
	{
		if (EActorType(TempSavedActor.Type) == EActorType::AT_Persistent || LevelArchive.Level == GetLevelName())
		{
			SavedActors.Add(TempSavedActor);
			bLevelLoadSuccess = true;
		}
	}

	if (LevelArchive.Level == GetLevelName())
	{
		SavedScripts.Append(LevelArchive.SavedScripts);
		bLevelLoadSuccess = true;
	}

	//Basic Multi-Level saving saves mode in the level stack. It is always persistent.
	if (!IsStackBasedMultiLevelSave())
	{
		if (LevelArchive.Level == GetLevelName() || IsPersistentGameMode())
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
			if (It.Key() == GetLevelName())
			{
				DirectSetPlayerPosition(It.Value());
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

		if (PlayerArchive.Level == GetLevelName() || IsPersistentPlayer())
		{
			UnpackPlayer(PlayerArchive);
			return true;
		}
	}

	return false;
}

void UEMSObject::UnpackPlayer(const FPlayerArchive& PlayerArchive)
{
	SavedController = PlayerArchive.SavedController;
	SavedPawn = PlayerArchive.SavedPawn;
	SavedPlayerState = PlayerArchive.SavedPlayerState;
}

void UEMSObject::DirectSetPlayerPosition(const FPlayerPositionArchive& PosArchive)
{
	//Set location/rotation directly, no need to have the same player data per level.
	SavedPawn.Position = PosArchive.Position;
	SavedPawn.Rotation = PosArchive.Rotation;
	SavedController.Rotation = PosArchive.ControlRotation;
}

void UEMSObject::ClearPlayerPosition()
{
	SavedPawn.Position = FVector::ZeroVector;
	SavedPawn.Rotation = FRotator::ZeroRotator;
	SavedController.Rotation = FRotator::ZeroRotator;
}

/**
Prepare Actors for Load and Save
**/

void UEMSObject::PrepareLoadAndSaveActors(const uint32 Flags, const EAsyncCheckType FunctionType, const bool bFullReload)
{
	const bool bIsLoading = (FunctionType == EAsyncCheckType::CT_Load);
	const APlayerController* PC = nullptr;
	const APawn* PlayerPawn = nullptr;

	//Clear first
	ClearActorList();

	if (bIsLoading && bFullReload)
	{
		ClearLoadFromMemory();
		PC = GetPlayerController();
		PlayerPawn = GetPlayerPawn();
	}

	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;

		if (!IsValidActor(Actor))
		{
			continue;
		}

		//Skip save will fully ignore the Actor
		if (IsSkipSave(Actor))
		{
			continue;
		}

		//Load exclusive checks
		if (bIsLoading)
		{
			if (bFullReload)
			{
				PrepareFullReload(Flags, Actor, PC, PlayerPawn);
			}
			else
			{
				//Don't consider loaded placed Actors at all. Runtime Actors require another check, otherwise they would duplicate.
				if (FActorHelpers::IsPlacedActor(Actor) && IsLoaded(Actor))
				{
					continue;
				}
			}
		}

		//Fill the Actor Lists(s)
		AddActorToList(Actor, bIsLoading);
	}
}

void UEMSObject::PrepareFullReload(const uint32 Flags, AActor* Actor, const APlayerController* PC, const APawn* PlayerPawn)
{
	bool bIsPlayer = false;
	if (PC)
	{
		bIsPlayer = (Actor == PC) || (PC->PlayerState && Actor == PC->PlayerState) || (PlayerPawn && Actor == PlayerPawn);
	}

	if (Flags & ENUM_TO_FLAG(ELoadTypeFlags::LF_Player))
	{
		if (bIsPlayer)
		{
			Actor->Tags.Remove(EMS::HasLoadedTag);
		}
	}

	if (Flags & ENUM_TO_FLAG(ELoadTypeFlags::LF_Level))
	{
		if (!bIsPlayer)
		{
			Actor->Tags.Remove(EMS::HasLoadedTag);
		}
	}
}

void UEMSObject::AddActorToList(AActor* Actor, const bool bIsLoading)
{
	const EActorType Type = GetActorType(Actor);

	//For all, including player, a tick before actual save/load
	SerializeActorStructProperties(Actor);

	//Workaround to load the default pawn again with data from the level file, in case player was possessing a different pawn when saving.
	const bool bIsLevelPlayerPawn = bIsLoading && Type == EActorType::AT_PlayerPawn;

	//Real level Actors and Scripts
	const bool bIsLevelActor = FActorHelpers::IsLevelActor(Type, true);

	if (bIsLevelActor || bIsLevelPlayerPawn)
	{
		ActorList.Add(Actor);

		//Actor map for loading
		if (bIsLoading)
		{
			const FString ActorNameString = GetFullActorName(Actor);
			const FName ActorName(*ActorNameString);
			ActorMap.Add(ActorName, Actor);
		}
	}
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

	FScopeLock Lock(&SaveActorsScope);

	for (const TWeakObjectPtr<AActor>& ActorWeakPtr : ActorList)
	{
		if (!ActorWeakPtr.IsValid(false, true))
		{
			continue;
		}

		AActor* Actor = ActorWeakPtr.Get();
		if (!IsValidForSaving(Actor))
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

	//World Partition Actors
	if (!EMS::ArrayEmpty(WorldPartitionActors))
	{
		InActors.Append(WorldPartitionActors);
		ClearWorldPartitionActors();
	}

	//Destroyed Actors
	if (!EMS::ArrayEmpty(DestroyedActors))
	{
		InActors.Append(DestroyedActors);
		ClearDestroyedActors();
	}

	//Game Mode/State Actors
	InGameMode = ParseGameModeObjectForSaving(GetWorld()->GetAuthGameMode());
	InGameState = ParseGameModeObjectForSaving(GetWorld()->GetGameState());

	FBufferArchive LevelData;
	WritePackageInfo(LevelData);

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

	if (FSaveHelpers::HasSaveArchiveError(LevelData, ESaveErrorType::ER_Level))
	{
		return false;
	}

	//Optional memory only saving
	if (bMemoryOnly)
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Level and Game Actors stored in memory"));
		return true;
	}

	if (SaveBinaryArchive(LevelData, ActorSaveFile()))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Level and Game Actors have been saved"));
		return true;
	}

	UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Level Actors"));

	return false;
}

FGameObjectSaveData UEMSObject::ParseGameModeObjectForSaving(AActor* Actor)
{
	FGameObjectSaveData GameObjectActorData;

	if (Actor && IsValidForSaving(Actor))
	{
		SaveActorToBinary(Actor, GameObjectActorData);
	}

	return GameObjectActorData;
}

FLevelScriptSaveData UEMSObject::ParseLevelScriptForSaving(AActor* Actor)
{
	FLevelScriptSaveData ScriptArray;
	ScriptArray.Name = LevelScriptSaveName(Actor);
	SaveActorToBinary(Actor, ScriptArray.SaveData);

	return ScriptArray;
}

FActorSaveData UEMSObject::ParseLevelActorForSaving(AActor* Actor, const EActorType& Type)
{
	FActorSaveData ActorArray;
	const bool bIsPersistentActor = (Type == EActorType::AT_Persistent);

	if (Type == EActorType::AT_Runtime || bIsPersistentActor)
	{
		ActorArray.Class = BytesFromString(Actor->GetClass()->GetPathName());
	}

	ActorArray.Type = uint8(Type);

	//No transform for persistent Actors or if skipped
	if (!bIsPersistentActor && FActorHelpers::CanProcessActorTransform(Actor))
	{
		ActorArray.Transform = Actor->GetActorTransform();
	}
	else
	{
		ActorArray.Transform = FTransform::Identity;
	}

	ActorArray.Name = BytesFromString(GetFullActorName(Actor));

	SaveActorToBinary(Actor, ActorArray.SaveData);

	return ActorArray;
}

void UEMSObject::OnAnyActorDestroyed(AActor* Actor)
{
	//Check for placed, but add as destroyed
	if (IsValidActor(Actor) && IsPlacedActor(Actor))
	{
		FActorSaveData ActorArray;
		ActorArray.Type = uint8(EActorType::AT_Destroyed);
		ActorArray.Name = BytesFromString(GetFullActorName(Actor));
		DestroyedActors.Add(ActorArray);
	}
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
	for (const TWeakObjectPtr<AActor>& ActorWeakPtr : ActorList)
	{
		if (!ActorWeakPtr.IsValid(false, true))
		{
			continue;
		}

		AActor* Actor = ActorWeakPtr.Get();
		if (!IsValidForLoading(Actor) || GetActorType(Actor) != EActorType::AT_LevelScript)
		{
			continue;
		}

		const FName ScriptName = LevelScriptSaveName(Actor);

		for (const FLevelScriptSaveData& ScriptArray : SavedScripts)
		{
			if (ScriptArray.Name == ScriptName)
			{
				LoadActorFromBinary(Actor, ScriptArray.SaveData);
				UE_LOG(LogEasyMultiSave, Log, TEXT("%s Blueprint Loaded"), *ScriptName.ToString());
				break;  
			}
		}
	}
}

void UEMSObject::PrepareLevelActors()
{
	//For World Partition initial load, remove placed Actors that are not loaded to prevent initial overhead
	if (!bInitWorldPartitionLoad && AutoSaveLoadWorldPartition())
	{
		FSaveHelpers::PruneSavedActors(ActorMap, SavedActors);
	}

	//Distance based sorting
	const bool bShouldSort = IsMultiThreadLoading() || IsDeferredLoading();
	if (bShouldSort)
	{
		if (const APlayerController* PC = GetPlayerController())
		{
			SavedActors.Sort([PC](const FActorSaveData& A, const FActorSaveData& B)
			{
				return FActorHelpers::CompareDistance(A.Transform.GetLocation(), B.Transform.GetLocation(), PC);
			});
		}
	}
}

void UEMSObject::LoadLevelActors(UEMSAsyncLoadGame* LoadTask)
{
	if (!LoadTask)
	{
		return;
	}

	const TWeakObjectPtr<UEMSAsyncLoadGame> LoadTaskPtr = MakeWeakObjectPtr(LoadTask);

	if (IsMultiThreadLoading())
	{
		AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [this, LoadTaskPtr]()
		{
			LoadAllLevelActors(LoadTaskPtr);
		});
	}
	else if (IsDeferredLoading())
	{
		LoadTask->StartDeferredLoad();
	}
	else
	{
		LoadAllLevelActors(LoadTaskPtr);
	}
}

void UEMSObject::LoadAllLevelActors(const TWeakObjectPtr<UEMSAsyncLoadGame>& InTask)
{
	bool bSuccess = false;

	const TArray<FActorSaveData> TempActors = SavedActors;
	for (const FActorSaveData& ActorArray : TempActors)
	{
		bSuccess |= SpawnOrUpdateLevelActor(ActorArray);
	}

	UEMSAsyncLoadGame::FinishTaskThreadSafe(InTask);
}

bool UEMSObject::SpawnOrUpdateLevelActor(const FActorSaveData& ActorArray)
{
	FScopeLock Lock(&LoadActorScope);

	const EActorType Type = EActorType(ActorArray.Type);
	if (!FActorHelpers::IsLevelActor(Type, false))
	{
		return false;
	}

	const EUpdateActorResult UpdateResult = UpdateLevelActor(ActorArray);
	if (UpdateResult == EUpdateActorResult::RES_ShouldSpawnNewActor)
	{
		SpawnLevelActor(ActorArray);
	}

	return UpdateResult != EUpdateActorResult::RES_Skip;
}

EUpdateActorResult UEMSObject::UpdateLevelActor(const FActorSaveData& ActorArray)
{
	AActor* Actor = nullptr;

	if (IsMultiThreadLoading())
	{
		//Iterate over ActorList which can happen on a background thread
		for (const TWeakObjectPtr<AActor>& ActorWeakPtr : ActorList)
		{
			if (ActorWeakPtr.IsValid(false, true))
			{
				AActor* TempActor = ActorWeakPtr.Get();
				if (IsValidActor(TempActor) && CompareIdentifiers(ActorArray.Name, GetFullActorName(TempActor)))
				{
					Actor = TempActor;
					break;
				}
			}
		}
	}
	else
	{
		//Use ActorMap for fast lookup on the game thread only
		const FName ActorName = FActorHelpers::GetActorDataName(ActorArray);
		if (const TWeakObjectPtr<AActor>* ActorWeakPtr = ActorMap.Find(ActorName))
		{
			if (ActorWeakPtr->IsValid(false, true))
			{
				Actor = ActorWeakPtr->Get();
			}
		}
	}

	if (!Actor)
	{
		//Respawn runtime Actors
		return !FActorHelpers::IsRuntimeActor(ActorArray) ? EUpdateActorResult::RES_Skip : EUpdateActorResult::RES_ShouldSpawnNewActor;
	}

	if (!IsInGameThread())
	{
		bool bAlreadyLoaded = false;
		AsyncTask(ENamedThreads::GameThread, [this, Actor, ActorArray, &bAlreadyLoaded]()
		{
			if (IsLoaded(Actor))
			{
				bAlreadyLoaded = true;
				return;
			}

			ProcessLevelActor(Actor, ActorArray);
		});

		return bAlreadyLoaded ? EUpdateActorResult::RES_Skip : EUpdateActorResult::RES_Success;
	}
	else
	{
		if (IsLoaded(Actor))
		{
			return EUpdateActorResult::RES_Skip;
		}

		ProcessLevelActor(Actor, ActorArray);
		return EUpdateActorResult::RES_Success;
	}
}

void UEMSObject::SpawnLevelActor(const FActorSaveData & ActorArray)
{
	if (EMS::ArrayEmpty(ActorArray.Class))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to respawn Level Actor with invalid Class"));
		FailSpawnLevelActor(ActorArray);
		return;
	}

	if (!FActorHelpers::IsRuntimeActor(ActorArray))
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

	const FActorSpawnParameters SpawnParams = FSpawnHelpers::GetSpawnParams(ActorArray.Name);
	if (SpawnParams.Name == NAME_None || !SpawnClass->ImplementsInterface(UEMSActorSaveInterface::StaticClass()))
	{
		return;
	}

	//Actually spawn and process the runtime Actor
	if (!IsInGameThread())
	{
		AsyncTask(ENamedThreads::GameThread, [this, ActorArray, SpawnClass, SpawnParams]()
		{
			CreateLevelActor(SpawnClass, ActorArray, SpawnParams);
		});
	}
	else
	{
		CreateLevelActor(SpawnClass, ActorArray, SpawnParams);
	}
}

void UEMSObject::CreateLevelActor(UClass* SpawnClass, const FActorSaveData& ActorArray, const FActorSpawnParameters& SpawnParams)
{
	//Advanced Spawn checking
	if (AdvancedSpawnCheck())
	{
		if (AActor* Actor = FSpawnHelpers::CheckForExistingActor(GetWorld(), ActorArray))
		{
			ProcessLevelActor(Actor, ActorArray);
			return;
		}
	}

	AActor* NewActor = GetWorld()->SpawnActor(SpawnClass, &ActorArray.Transform, SpawnParams);
	if (NewActor)
	{
		ProcessLevelActor(NewActor, ActorArray);
	}
	else
	{
		FailSpawnLevelActor(ActorArray);
	}
}

void UEMSObject::ProcessLevelActor(AActor* Actor, const FActorSaveData& ActorArray)
{
	//Destroy
	if (AutoDestroyActors())
	{
		if (ActorArray.Type == uint8(EActorType::AT_Destroyed))
		{
			Actor->Destroy();
			ReduceSavedActors(ActorArray);
			return;
		}
	}

	if (FActorHelpers::CanProcessActorTransform(Actor) && FActorHelpers::HasValidTransform(ActorArray.Transform))
	{
		Actor->SetActorTransform(ActorArray.Transform, false, nullptr, ETeleportType::TeleportPhysics);
	}

	LoadActorFromBinary(Actor, ActorArray.SaveData);
	ReduceSavedActors(ActorArray);
}

void UEMSObject::FailSpawnLevelActor(const FActorSaveData& ActorArray)
{
	const FString ActorName = StringFromBytes(ActorArray.Name);
	UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to spawn Level Actor: %s"), *ActorName);
}

void UEMSObject::FinishLoadingLevel(bool bSuccess)
{
	if (!bSuccess)
	{
		return;
	}
	
	UE_LOG(LogEasyMultiSave, Log, TEXT("Level Actors loaded"));

	if (!bInitWorldPartitionLoad && AutoSaveLoadWorldPartition())
	{
		//Not relevant for automatic loading of World Partition cells and also prevents decrementing on ProcessActor
		ClearSavedLevelActors();
		bInitWorldPartitionLoad = true;
	}

	//Free some memory
	ClearActorList();
}

/**
Multi-Level Saving System Functions
**/

FLevelStackArchive UEMSObject::AddMultiLevelStackData(const FLevelArchive& LevelArchive, const FLevelArchive& PersistentArchive, const FGameObjectSaveData& InGameMode, const FGameObjectSaveData& InGameState)
{
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

	// Add LevelArchive to the list if it was not found.
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
	//Add all Actors and Scripts from StreamData to the returned archive that is added to the stack
	FLevelArchive NewLevelArchive = LevelArchive;
	{
		UpdateMultiLevelStreamData(LevelArchive);
		MultiLevelStreamData.CopyFrom(NewLevelArchive);
	}

	return NewLevelArchive;
}

void UEMSObject::UpdateMultiLevelStreamData(const FLevelArchive& LevelArchive)
{
	//Either replace or add current Actor data from the archive
	MultiLevelStreamData.CopyTo(LevelArchive);
}

/**
Saving and Loading Player
**/

bool UEMSObject::SavePlayerActors()
{
	bool bHasPlayerSaveData = false;

	//Controller
	FControllerSaveData InController;
	APlayerController* Controller = GetPlayerController();
	if (Controller && IsValidForSaving(Controller))
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
	APawn* Pawn = GetPlayerPawn();
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
	APlayerState* PlayerState = GetPlayerController()->PlayerState;
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
		PlayerArchive.SavedController = InController;
		PlayerArchive.SavedPawn = InPawn;
		PlayerArchive.SavedPlayerState = InPlayerState;
		PlayerArchive.Level = GetLevelName();
	}

	FBufferArchive PlayerData;
	WritePackageInfo(PlayerData);

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

	if (!FSaveHelpers::HasSaveArchiveError(PlayerData, ESaveErrorType::ER_Player) && SaveBinaryArchive(PlayerData, PlayerSaveFile()))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Actors have been saved"));
		return true;
	}
	else
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Player"));
	}

	return false;
}

void UEMSObject::LoadPlayerActors(UEMSAsyncLoadGame* LoadTask)
{
	//Controller
	APlayerController* Controller = GetPlayerController();
	if (Controller && IsValidForLoading(Controller))
	{
		const FControllerSaveData ControllerData = SavedController;

		if (!IsPersistentPlayer() && !IsSkipTransform(Controller) && !ControllerData.Rotation.IsNearlyZero())
		{
			Controller->SetControlRotation(ControllerData.Rotation);
		}

		LoadActorFromBinary(Controller, ControllerData.SaveData);

		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Controller loaded"));
	}

	//Pawn
	APawn* Pawn = GetPlayerPawn();
	if (Pawn && IsValidForLoading(Pawn))
	{
		const FPawnSaveData PawnData = SavedPawn;

		if (!IsPersistentPlayer() && !IsSkipTransform(Pawn) && !PawnData.Position.IsNearlyZero())
		{
			Pawn->SetActorLocation(PawnData.Position, false, nullptr, ETeleportType::TeleportPhysics);
			Pawn->SetActorRotation(PawnData.Rotation, ETeleportType::TeleportPhysics);
		}

		LoadActorFromBinary(Pawn, PawnData.SaveData);

		UE_LOG(LogEasyMultiSave, Log, TEXT("Player Pawn loaded"));
	}

	//Player State
	if (!EMS::ArrayEmpty(SavedPlayerState.Data))
	{
		APlayerState* PlayerState = GetPlayerController()->PlayerState;
		if (PlayerState && IsValidForLoading(PlayerState))
		{
			LoadActorFromBinary(PlayerState, SavedPlayerState);

			UE_LOG(LogEasyMultiSave, Log, TEXT("Player State loaded"))
		}
	}
}

/**
Loading and Saving Components
**/

TArray<UActorComponent*> UEMSObject::GetSaveComponents(AActor* Actor) const
{
	TArray<UActorComponent*> SourceComps;

	IEMSActorSaveInterface::Execute_ComponentsToSave(Actor, SourceComps);

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

void UEMSObject::SaveActorComponents(AActor* Actor, TArray<FComponentSaveData>& OutComponents)
{
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

		FComponentSaveData ComponentArray;
		ComponentArray.Name = BytesFromString(Component->GetName());

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
					UE_LOG(LogEasyMultiSave, Warning, TEXT("Child Actor Component has Save Interface, skipping: %s"), *Component->GetName());
				}
			}
		}
		else
		{
			if (HasComponentSaveInterface(Component))
			{
				IEMSCompSaveInterface::Execute_ComponentPreSave(Component);
			}

			SerializeToBinary(Component, ComponentArray.Data);
		}

		OutComponents.Add(ComponentArray);
	}
}

void UEMSObject::LoadActorComponents(AActor* Actor, const TArray<FComponentSaveData>& InComponents)
{
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
			if (!CompareIdentifiers(ComponentArray.Name, Component->GetName()))
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
				SerializeFromBinary(Component, ComponentArray.Data);

				if (HasComponentSaveInterface(Component))
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

UObject* UEMSObject::LoadRawObject(AActor* Actor, const FRawObjectSaveData& Data)
{
	if (!Actor || !Data.IsValidData())
	{
		return nullptr;
	}

	TArray<FComponentSaveData> ObjectArray;
	const EActorType Type = GetActorType(Actor);

	//Skip Level Actors for now
	if (FActorHelpers::IsLevelActor(Type, true))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to save Raw Objects with unsupported Actor type: %s"), *Actor->GetName());
		return nullptr;
	}

	//Add to component array based on the type
	switch (Type)
	{
	case EActorType::AT_PlayerPawn:
		ObjectArray.Append(SavedPawn.SaveData.Components);
		break;

	case EActorType::AT_PlayerActor:
		ObjectArray.Append(SavedPlayerState.Components);
		ObjectArray.Append(SavedController.SaveData.Components);
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

UObject* UEMSObject::SerializeFromRawObject(AActor* Actor, const FRawObjectSaveData& Data, const TArray<FComponentSaveData>& InputArray)
{
	if (!Actor || !Data.IsValidData() || EMS::ArrayEmpty(InputArray))
	{
		return nullptr;
	}

	const FString FullId = FActorHelpers::GetRawObjectID(Data);

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

bool UEMSObject::SaveRawObject(AActor* Actor, const FRawObjectSaveData& Data)
{
	if (!Actor || !Data.IsValidData())
	{
		return false;
	}

	//Hijack the component struct
	FComponentSaveData ComponentData;

	const FString FullId = FActorHelpers::GetRawObjectID(Data);
	ComponentData.Name = BytesFromString(FullId);

	FStructHelpers::SerializeStruct(Data.Object);
	SerializeToBinary(Data.Object, ComponentData.Data);
	UpdateRawObjectData(Actor, ComponentData);

	return true;
}

void UEMSObject::AppendRawObjectData(AActor* Actor, TArray<FComponentSaveData>& OutComponents)
{
	if (Actor && !RawObjectData.IsEmpty())
	{
		if (const FGameObjectSaveData* GameObjectDataRef = RawObjectData.Find(Actor))
		{
			OutComponents.Append(GameObjectDataRef->Components);
		}
	}
}

void UEMSObject::UpdateRawObjectData(AActor* Actor, const FComponentSaveData& InputData)
{
	if (!Actor)
	{
		return;
	}

	//Try to update global raw objects array
	FGameObjectSaveData& GameObjectData = RawObjectData.FindOrAdd(Actor);
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
Serialize Functions
**/

void UEMSObject::SaveActorToBinary(AActor* Actor, FGameObjectSaveData& OutData)
{
	IEMSActorSaveInterface::Execute_ActorPreSave(Actor);

	SerializeToBinary(Actor, OutData.Data);

	const EActorType Type = GetActorType(Actor);
	if (Type != EActorType::AT_LevelScript)
	{
		SaveActorComponents(Actor, OutData.Components); 
	}

	//Store raw object data in Component array. 
	AppendRawObjectData(Actor, OutData.Components);

	//This prevents re-loading without 'Full Reload' directly after saving
	Actor->Tags.Add(EMS::HasLoadedTag);

	IEMSActorSaveInterface::Execute_ActorSaved(Actor);
}

void UEMSObject::LoadActorFromBinary(AActor* Actor, const FGameObjectSaveData& InData)
{
	const EActorType Type = GetActorType(Actor);

	//For runtime Actors we need to parse the structs separately
	if (Type == EActorType::AT_Runtime || Type == EActorType::AT_Persistent)
	{
		SerializeActorStructProperties(Actor);
	}

	Actor->Tags.Add(EMS::HasLoadedTag);

	SerializeFromBinary(Actor, InData.Data);

	if (Type != EActorType::AT_LevelScript)
	{
		LoadActorComponents(Actor, InData.Components);
	}

	//Post Component Load
	IEMSActorSaveInterface::Execute_ActorLoaded(Actor);
}

void UEMSObject::SerializeToBinary(UObject* Object, TArray<uint8>& OutData)
{
	FMemoryWriter MemoryWriter(OutData, true);
	FSaveGameArchive Ar(MemoryWriter);
	Object->Serialize(Ar);

	//Write Multi-Level package tag
	if (FSaveVersion::RequiresPerObjectPackageTag(Object))
	{
		FSaveVersion::WriteObjectPackageTag(OutData);
	}

	MemoryWriter.FlushCache();
	MemoryWriter.Close();
}

void UEMSObject::SerializeFromBinary(UObject* Object, const TArray<uint8>& InData)
{
	FMemoryReader MemoryReader(InData, true);
	ReadPackageInfo(MemoryReader);
	
	//Check for Multi-Level package version tag
	if (FSaveVersion::RequiresPerObjectPackageTag(Object))
	{
		if (!FSaveVersion::CheckObjectPackageTag(InData))
		{
			//Without tag, we assume the old package version.
			const FPackageFileVersion OldPackage = FSaveVersion::GetStaticOldPackageVersion();
			MemoryReader.SetUEVer(OldPackage);
		}
	}
			
	FSaveGameArchive Ar(MemoryReader);
	Object->Serialize(Ar);

	MemoryReader.FlushCache();
	MemoryReader.Close();
}

/**
Blueprint Struct Property Serialization
**/

void UEMSObject::SerializeActorStructProperties(AActor* Actor)
{
	if (!UEMSPluginSettings::Get()->bAutoSaveStructs)
	{
		return;
	}

	FStructHelpers::SerializeStruct(Actor);

	//Also for Components
	const TArray<UActorComponent*> SourceComps = GetSaveComponents(Actor);
	if (EMS::ArrayEmpty(SourceComps))
	{
		return;
	}

	for (UActorComponent* Component : SourceComps)
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

APawn* UEMSObject::GetPlayerPawn() const
{
	if (const APlayerController* PC = GetPlayerController())
	{
		return PC->GetPawnOrSpectator();
	}

	return nullptr;
}

bool UEMSObject::HasValidGameMode() const
{
	//On clients, we assume the game mode is valid
	if (GetWorld()->GetNetMode() == ENetMode::NM_Client)
	{
		return true;
	}

	const AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	return IsValid(GameMode);
}

bool UEMSObject::HasValidPlayer() const
{
	return IsValid(GetPlayerPawn());
}

FTimerManager& UEMSObject::GetTimerManager() const
{
	return GetWorld()->GetTimerManager();
}

/**
World Delegates
**/

#if EMS_ENGINE_MIN_UE53

void UEMSObject::OnPreWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
	if (!World)
	{
		return;
	}

	if (AutoSaveLoadWorldPartition(World))
	{
		FLevelStreamingDelegates::OnLevelStreamingStateChanged.AddUObject(this, &UEMSObject::OnLevelStreamingStateChanged);

		if (UEMSPluginSettings::Get()->WorldPartitionSaving != EWorldPartitionMethod::LoadOnly)
		{
			FLevelStreamingDelegates::OnLevelBeginMakingInvisible.AddUObject(this, &UEMSObject::OnLevelBeginMakingInvisible);
		}
	}

	if (AutoDestroyActors())
	{
		ActorDestroyedDelegate = World->AddOnActorDestroyedHandler(FOnActorDestroyed::FDelegate::CreateUObject(this, &UEMSObject::OnAnyActorDestroyed));
	}
}

void UEMSObject::OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources)
{
	ClearWorldPartition();
	RemoveWorldPartitionStreamDelegates();

	ClearDestroyedActors();
	if (World) World->RemoveOnActorDestroyededHandler(ActorDestroyedDelegate);

	ClearLoadFromMemory(); 
}

/**
World Partition
**/

void UEMSObject::RemoveWorldPartitionStreamDelegates()
{
	FLevelStreamingDelegates::OnLevelStreamingStateChanged.RemoveAll(this);
	FLevelStreamingDelegates::OnLevelBeginMakingInvisible.RemoveAll(this);
}

void UEMSObject::OnLevelStreamingStateChanged(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLevelIfLoaded, ELevelStreamingState PreviousState, ELevelStreamingState NewState)
{
	if (!InWorld || !InLevelIfLoaded)
	{
		return;
	}

	if (NewState == ELevelStreamingState::LoadedVisible && PreviousState == ELevelStreamingState::MakingVisible)
	{
		//Check for optimized loading of placed Actors only
		if (bInitWorldPartitionLoad && bLoadFromMemory)
		{
			UEMSAsyncStream::InitStreamingLoadTask(this, InLevelIfLoaded);
			return;
		}

		//Check if we should skip initial loading and wait until the game was manually loaded
		if (!bInitWorldPartitionLoad)
		{
			const bool bSkipInitialLoad = (UEMSPluginSettings::Get()->WorldPartitionInit == EWorldPartitionInit::Skip);
			if (bSkipInitialLoad)
			{
				return;
			}
		}

		//Initial load. Will happen in a conventional way
		if (!bLoadPartition)
		{
			TryLoadWorldPartition();
			bLoadPartition = true;
		}
	}
}

void UEMSObject::TryLoadWorldPartition()
{
	GetTimerManager().SetTimerForNextTick(this, &UEMSObject::AccumulatedLoadWorldPartition);
}

void UEMSObject::AccumulatedLoadWorldPartition()
{
	const bool bInital = FStreamHelpers::IsWorldPartitionInit(GetWorld());
	const bool bIsStreaming = FStreamHelpers::IsLevelStillStreaming(GetWorld());
	const bool bIsSaving = IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_All, EAsyncCheckType::CT_Save, false);

	if (!bInital && !bIsStreaming && !bIsSaving)
	{
		UEMSAsyncLoadGame::AutoLoadLevelActors(this);
		bLoadPartition = false;	
	}
	else
	{
		TryLoadWorldPartition();
	}
}

void UEMSObject::LoadStreamingActor(AActor* Actor, const FActorSaveData& ActorData)
{
	FScopeLock Lock(&LoadActorScope);

	if (!IsInGameThread())
	{
		AsyncTask(ENamedThreads::GameThread, [this, Actor, ActorData]()
		{
			SerializeActorStructProperties(Actor);
			ProcessLevelActor(Actor, ActorData);
		});
	}
	else
	{
		SerializeActorStructProperties(Actor);
		ProcessLevelActor(Actor, ActorData);
	}
}

void UEMSObject::OnLevelBeginMakingInvisible(UWorld* InWorld, const ULevelStreaming* InStreamingLevel, ULevel* InLoadedLevel)
{
	if (!InWorld || !InLoadedLevel || !bInitWorldPartitionLoad)
	{
		return;
	}

	if (FStreamHelpers::IsWorldPartitionInit(GetWorld()))
	{
		return;
	}

	//Prevent saving when a auto-loading process is still ongoing, otherwise it might write zero data
	if (FAsyncSaveHelpers::IsStreamAutoLoadActive())
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Skipped saving streaming level while async loading to prevent invalid data"));
		return;
	}

	TArray<FActorSaveData> InActors;
	InActors.Reserve(InLoadedLevel->Actors.Num());

	//Collect placed Actors from level. They don't need to be valid anymore when saving, the data is parsed here
	for (AActor* Actor : InLoadedLevel->Actors)
	{
		if (IsValidForSaving(Actor) && IsPlacedActor(Actor))
		{
			SerializeActorStructProperties(Actor);

			const FActorSaveData ActorArray = ParseLevelActorForSaving(Actor, EActorType::AT_Placed);
			InActors.Add(ActorArray);
		}
	}

	//We need to proceed, even if we only have Destroyed Actors
	if (!EMS::ArrayEmpty(InActors) || !EMS::ArrayEmpty(DestroyedActors))
	{
		WorldPartitionActors.Append(InActors);

		if (!bSavePartition)
		{
			TrySaveWorldPartition();
			bSavePartition = true;
		}
	}
}

void UEMSObject::TrySaveWorldPartition()
{
	GetTimerManager().SetTimerForNextTick(this, &UEMSObject::AccumulatedSaveWorldPartition);
}

void UEMSObject::AccumulatedSaveWorldPartition()
{
	//Otherwise this could lead to an infinite loop when switching levels
	if (!bInitWorldPartitionLoad)
	{
		return;
	}

	const bool bIsStreaming = FStreamHelpers::IsLevelStillStreaming(GetWorld());
	const bool bIsSavingOrLoading = IsAsyncSaveOrLoadTaskActive(ESaveGameMode::MODE_All, EAsyncCheckType::CT_Both, false);

	if (!bIsStreaming && !bIsSavingOrLoading)
	{
		UEMSAsyncSaveGame::AutoSaveLevelActors(this);
		bSavePartition = false;
	}
	else
	{
		TrySaveWorldPartition();
	}
}

#endif

/**
Thumbnail Saving
Export from a 2d scene capture render target source.
**/

UTexture2D* UEMSObject::ImportSaveThumbnail(const FString& SaveGameName)
{
	const FString SaveThumbnailName = ThumbnailSaveFile(SaveGameName);

	//Suppress warning messages when we dont have a thumb yet.
	if (FPaths::FileExists(SaveThumbnailName))
	{
		return FImageUtils::ImportFileAsTexture2D(SaveThumbnailName);
	}
	
	return nullptr;
}

void UEMSObject::ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName)
{
	if (!TextureRenderTarget)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("ExportSaveThumbnailRT: TextureRenderTarget must be non-null"));
	}
	else if (!FSaveThumbnails::HasRenderTargetResource(TextureRenderTarget))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("ExportSaveThumbnailRT: Render target has been released"));
	}
	else if (SaveGameName.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("ExportSaveThumbnailRT: FileName must be non-empty"));
	}
	else
	{
		const FString SaveThumbnailName = ThumbnailSaveFile(SaveGameName);
		const bool bSuccess = FSaveThumbnails::ExportRenderTarget(TextureRenderTarget, SaveThumbnailName);

		if (!bSuccess)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("ExportSaveThumbnailRT: FileWrite failed to create"));
		}
	}
}


