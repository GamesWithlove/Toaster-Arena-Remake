//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSObjectBase.h"
#include "EMSPaths.h"
#include "EMSCustomSaveGame.h"
#include "EMSInfoSaveGame.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "ImageUtils.h"
#include "ImageCore.h"
#include "Serialization/BufferArchive.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/ArchiveSaveCompressedProxy.h"
#include "Serialization/ArchiveLoadCompressedProxy.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameSystem.h"
#include "Misc/Paths.h"
#include "UObject/Class.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFileManager.h"
#include "PlatformFeatures.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Async/TaskGraphInterfaces.h"
#include "Async/Async.h"

/**
Init
**/

UEMSObjectBase::UEMSObjectBase()
{
	LastSlotSaveTime = 0.f;
}

void UEMSObjectBase::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const FString VersionNum = VERSION_STRINGIFY(EMS_VERSION_NUMBER);
	UE_LOG(LogEasyMultiSave, Log, TEXT("Easy Multi Save Initialized | Version: %s | Current Save Game Slot: %s"),
		*VersionNum,
		*GetCurrentSaveGameName());
}

UWorld* UEMSObjectBase::GetWorld() const
{
	return GetGameInstance()->GetWorld();
}

/**
Save Object Creation
**/

template <class TSaveGame>
TSaveGame* UEMSObjectBase::CreateNewSaveObject(const FString& FullSavePath, const FSoftClassPath& InClassName)
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
	USaveGame* SaveGame = NewObject<USaveGame>(this, Class);
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

	//Load the archive, integrity check is done there
	const FLoadArchiveContext Context = FLoadArchiveContext(FullSavePath, EDataLoadType::DATA_Object, FSaveObjects(SaveGameObject));
	LoadBinaryArchive(Context);

	return SaveGameObject;
}

/**
Custom Save Objects
**/

UEMSCustomSaveGame* UEMSObjectBase::GetCustomSave(const TSubclassOf<UEMSCustomSaveGame>& SaveGameClass, const FString& InSlotName, const FString& InFileName)
{
	if (!SaveGameClass || SaveGameClass->HasAnyClassFlags(CLASS_Abstract))
	{
		if (SaveGameClass)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Custom Save Class '%s' is abstract and cannot be used."), *SaveGameClass->GetName());
		}

		return nullptr;
	}

	const UEMSCustomSaveGame* CustomClass = Cast<UEMSCustomSaveGame>(SaveGameClass->GetDefaultObject());
	if (!CustomClass)
	{
		return nullptr;
	}

	//Resolve the final save name (custom override or fallback)
	const FString ResolvedSaveName = [InFileName, CustomClass]() -> FString
	{
		const bool bEmptyFileName = InFileName.IsEmpty() || FSavePaths::HasWhitespace(InFileName);
		if (bEmptyFileName)
		{
			return CustomClass->SaveGameName.IsEmpty() ? CustomClass->GetName() : CustomClass->SaveGameName;
		}

		return InFileName;

	}();

	//Validate before usage
	const FString CustomSaveName = FSavePaths::ValidateSaveName(ResolvedSaveName);

	const bool bUseSlot = CustomClass->bUseSaveSlot;
	const bool bCustomSlotName = bUseSlot && !InSlotName.IsEmpty();

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

bool UEMSObjectBase::SaveCustom(UEMSCustomSaveGame* SaveGame)
{
	if (!IsValid(SaveGame))
	{
		return false;
	}

	const bool bUseSlot = SaveGame->bUseSaveSlot;
	const FString SlotName = bUseSlot ? SaveGame->SlotName : FString();
	const FString CustomSaveName = SaveGame->SaveGameName;

	if (SaveObject(*CustomSaveFile(CustomSaveName, SlotName), SaveGame))
	{
		if (bUseSlot)
		{
			SaveSlotInfoObject(SlotName);
			UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game saved: %s for Slot: %s"), *CustomSaveName, *SlotName);
		}
		else
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game saved: %s"), *CustomSaveName);
		}

		return true;
	}

	UE_LOG(LogEasyMultiSave, Warning, TEXT("Failed to save Custom Save Game: %s"), *CustomSaveName);

	return false;
}

bool UEMSObjectBase::SaveAllCustomObjects()
{
	bool bSuccess = false;

	for (auto& CustomObjectPair : CachedCustomSaves)
	{
		UEMSCustomSaveGame* SaveGame = CustomObjectPair.Value;
		if (!SaveGame)
		{
			continue;
		}

		//It can only auto-save objects in the current slot, but you can still manually save in other slots
		if (SaveGame->bUseSaveSlot)
		{
			if (SaveGame->SlotName != GetCurrentSaveGameName())
			{
				continue;
			}
		}

		bSuccess |= SaveCustom(SaveGame);
	}

	return bSuccess;
}


FCustomSaveInfo UEMSObjectBase::GetCustomSaveInfo(const UEMSCustomSaveGame* SaveGame) const 
{
	FCustomSaveInfo Info;  

	if (!IsValid(SaveGame))
	{
		Info.bValid = false; 
		return Info;
	}

	Info.bValid = true;
	Info.bUseSlot = SaveGame->bUseSaveSlot;
	Info.CustomSaveName = SaveGame->SaveGameName;
	Info.SlotName = Info.bUseSlot ? SaveGame->SlotName : FString();
	Info.SaveFile = CustomSaveFile(Info.CustomSaveName, Info.SlotName);
	Info.CachedRefName = Info.bUseSlot ? Info.CustomSaveName + Info.SlotName : Info.CustomSaveName;

	return Info;
}

void UEMSObjectBase::DeleteCustomSave(UEMSCustomSaveGame* SaveGame)
{
	const FCustomSaveInfo Info = GetCustomSaveInfo(SaveGame);
	if (!Info.bValid)
	{
		return;
	}

	if (DeleteSaveFile(Info.SaveFile))
	{
		ClearCustomSaveByRef(Info.CachedRefName);
		UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game deleted: %s"), *Info.CustomSaveName);
	}
}

void UEMSObjectBase::ResetCustomSave(UEMSCustomSaveGame* SaveGame, const EResetCustomSaveType Type)
{
	const FCustomSaveInfo Info = GetCustomSaveInfo(SaveGame);
	if (!Info.bValid)
	{
		return;
	}

	switch (Type)
	{
	case EResetCustomSaveType::Full:
		ClearCustomSaveByRef(Info.CachedRefName);
		FSaveHelpers::ResetObjectToDefaults(SaveGame, false);
		break;

	case EResetCustomSaveType::ClearMemory:
		ClearCustomSaveByRef(Info.CachedRefName);
		break;

	case EResetCustomSaveType::ResetDefault:
		FSaveHelpers::ResetObjectToDefaults(SaveGame, false);
		break;
	}

	UE_LOG(LogEasyMultiSave, Log, TEXT("Custom Save Game reset: %s with option %d"), *Info.CustomSaveName, uint8(Type));
}

void UEMSObjectBase::ClearCustomSaveByRef(const FString& CachedRefName)
{
	if (CachedRefName.IsEmpty())
	{
		return;
	}

	CachedCustomSaves.Remove(CachedRefName);
}

void UEMSObjectBase::ClearCachedCustomSaves()
{
	CachedCustomSaves.Empty();
}

void UEMSObjectBase::ClearCustomSavesDesktop(const FString& SaveGameName)
{
	//Only clears the cache
	TArray<FString> TempArray;
	ClearCustomSavesConsole(SaveGameName, false, TempArray);
}

void UEMSObjectBase::ClearCustomSavesConsole(const FString& SaveGameName, const bool bAddFiles, TArray<FString>& OutFiles)
{
	TMap<FString, TObjectPtr<UEMSCustomSaveGame>> TempCustomSaves = CachedCustomSaves;

	for (auto It = TempCustomSaves.CreateIterator(); It; ++It)
	{
		if (It->Key.Contains(SaveGameName))
		{
			const TObjectPtr<UEMSCustomSaveGame> CustomSaveGame = It->Value;
			if (CustomSaveGame)
			{
				//@TODO cannot delete if the slot is not cached, non-cached custom saves must be removed manually on console.
				//We cannot iterate the files, so we need another solution.
				if (bAddFiles)
				{
					//Used to delete custom saves for a slot with the console file system
					const FString CustomName = SaveGameName + EMS::UnderscoreInt + CustomSaveGame->SaveGameName;
					OutFiles.Add(CustomName);
				}

				CachedCustomSaves.Remove(It->Key);
			}
		}
	}
}

bool UEMSObjectBase::DoesCustomSaveExist(const FString& InSlotName, const FString& InFileName) const
{
	return DoesFileExist(CustomSaveFile(InFileName, InSlotName));
}

/**
Save Slots
**/

FString UEMSObjectBase::GetCurrentSaveGameName() const
{
	const FString DefaultName = UEMSPluginSettings::Get()->DefaultSaveGameName;

	if (CurrentSaveGameName.IsEmpty())
	{
		return DefaultName;
	}

	return CurrentSaveGameName;
}

void UEMSObjectBase::SetCurrentSaveGameName(const FString& SaveGameName)
{
	if (EMS::EqualString(SaveGameName, EMS::UserDir))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Slot name cannot be 'Users'. Keeping current slot name: %s"), *CurrentSaveGameName);
		return;
	}

	if (CurrentSaveGameName != SaveGameName)
	{
		//When switching slots, we want to always load from disk
		ClearLoadFromMemory();

		CurrentSaveGameName = FSavePaths::ValidateSaveName(SaveGameName);
		SaveConfig();

		UE_LOG(LogEasyMultiSave, Log, TEXT("New Current Save Game Slot is: %s"), *CurrentSaveGameName);
	}
}

TArray<FString> UEMSObjectBase::GetSortedSaveSlots() const
{
	TArray<FString> SaveGameNames;

	if (IsConsoleFileSystem())
	{
		//Files
		SaveGameNames = FSavePaths::GetConsoleSlotFiles(GetAllSaveGames());
	}
	else
	{
		//Folders
		IFileManager::Get().FindFiles(SaveGameNames, *FPaths::Combine(BaseSaveDir(), TEXT("*")), false, true);
	}

	//Return list sorted by time
	TArray<FSaveSlotInfo> SaveSlots = GetSlotInfos(SaveGameNames);
	return FSavePaths::GetSortedSaveSlots(SaveSlots);
}

TArray<FString> UEMSObjectBase::GetAllSaveGames() const
{
	TArray<FString> SaveGameNames;

	//Might not be available on all platforms
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	SaveSystem->GetSaveGameNames(SaveGameNames, PlayerIndex);

	return SaveGameNames;
}

TArray<FSaveSlotInfo> UEMSObjectBase::GetSlotInfos(const TArray<FString>& SaveGameNames) const
{
	//Fill with proper info
	TArray<FSaveSlotInfo> SaveSlots;
	for (const FString& SlotName : SaveGameNames)
	{
		FSaveSlotInfo SlotInfo;
		const FString SlotPath = SlotFilePath(SlotName);
		SlotInfo.TimeStamp = IFileManager::Get().GetTimeStamp(*SlotPath);
		SlotInfo.Name = SlotName;

		SaveSlots.Add(SlotInfo);
	}

	return SaveSlots;
}

UEMSInfoSaveGame* UEMSObjectBase::GetSlotInfoObject(const FString& SaveGameName)
{
	const FString ValidSaveName = FSavePaths::ValidateSaveName(SaveGameName);

	//Try to get a cached slot or create a new one
	UEMSInfoSaveGame* Slot = CachedSaveSlots.FindRef(ValidSaveName);
	if (!Slot)
	{
		Slot = MakeSlotInfoObject(ValidSaveName);
		if (!Slot)
		{
			return nullptr;
		}

		CachedSaveSlots.Add(ValidSaveName, Slot);
	}

	//Keep level list when switching slots
	if (IsStackBasedMultiLevelSave())
	{
		Slot->KeepMultiLevelSave(MultiSaveLevels);
	}

	return Slot;
}

UEMSInfoSaveGame* UEMSObjectBase::MakeSlotInfoObject(const FString& SaveGameName)
{
	const FString SaveSlotFile = SlotInfoSaveFile(SaveGameName);

	//Workaround for when class cannot be loaded from DefaultEngine.ini in cooked builds
	FSoftClassPath SaveSlotClass = UEMSPluginSettings::Get()->SlotInfoSaveGameClass;
	if (!SaveSlotClass.IsValid())
	{
		SaveSlotClass = EMS::DefaultSlotClass;
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Slot Info Class could not be read from settings, using default."));
	}

	return CreateNewSaveObject<UEMSInfoSaveGame>(SaveSlotFile, SaveSlotClass);
}

void UEMSObjectBase::SaveSlotInfoObject(const FString& SaveGameName, const bool bOverrideLevelData)
{
	if (SaveGameName.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Trying to save slot with an empty name"));
		return;
	}

	//Custom saves (bOverrideLevelData=false) can be prevented from redundant calls
	if (!bOverrideLevelData && !HasSlotSaveTimePassed(EMS::ShortDelay))
	{
		return;
	}

	if (!VerifyOrCreateDirectory(SaveGameName))
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Failed to verify or create directory for: %s"), *SaveGameName);
		return;
	}

	//Retrieve or create save object
	UEMSInfoSaveGame* SaveGame = GetSlotInfoObject(SaveGameName);
	if (!SaveGame)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Invalid Save Object for: %s"), *SaveGameName);
		return;
	}

	//Update save info
	SaveGame->SlotInfo.Name = SaveGameName;
	SaveGame->SlotInfo.TimeStamp = FDateTime::Now();

	//Custom Saves will update slot info (date) but never write Level Name or World data
	//Only Save Game Actors are authoritative for Level Name and Players
	if (bOverrideLevelData)
	{
		SaveGame->SlotInfo.Level = GetSavedSlotLevelName();

		TArray<FString> PlayerNames;
		FSaveHelpers::ExtractPlayerNames(GetWorld(), PlayerNames);
		SaveGame->SlotInfo.Players = PlayerNames;
	}

	//Update cache, otherwise it will never overwrite the data during a session
	CachedSaveSlots.Add(SaveGameName, SaveGame);

	//Save object
	if (SaveObject(*SlotInfoSaveFile(SaveGameName), SaveGame))
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Slot Info saved: %s"), *SaveGameName);
		LastSlotSaveTime = FPlatformTime::Seconds(); //On actual write
	}
	else
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Slot Info could not be saved: %s"), *SaveGameName);
	}
}

bool UEMSObjectBase::WasCurrentLevelSaved() 
{
	//See if this level was saved once(used to prevent the wait node from waiting too long)
	const FString SaveGameName = GetCurrentSaveGameName();
	if (const UEMSInfoSaveGame* SaveGame = GetSlotInfoObject(SaveGameName))
	{
		const FName LevelName = GetSavedSlotLevelName();
		return SaveGame->HasLevel(LevelName);
	}

	return false;
}

void UEMSObjectBase::ClearMultiSaveLevels()
{
	const FString SaveGameName = GetCurrentSaveGameName();
	UEMSInfoSaveGame* SaveGame = GetSlotInfoObject(SaveGameName);
	if (SaveGame)
	{
		MultiSaveLevels.Empty();
		SaveGame->SlotInfo.Levels.Empty();
	}
}

bool UEMSObjectBase::HasSlotSaveTimePassed(const double InTime) const
{
	return (FPlatformTime::Seconds() - LastSlotSaveTime) >= InTime;
}

bool UEMSObjectBase::DoesSaveSlotExist(const FString& SaveGameName) const
{
	return DoesFileExist(SlotInfoSaveFile(SaveGameName));
}

bool UEMSObjectBase::DoesFullSaveGameExist(const FString& SaveGameName) const
{
	const bool bHasSlotFile = DoesFileExist(SlotInfoSaveFile(SaveGameName));
	const bool bHasPlayerFile = DoesFileExist(PlayerSaveFile(SaveGameName));
	const bool bHasLevelFile = DoesFileExist(ActorSaveFile(SaveGameName));

	return bHasSlotFile && bHasPlayerFile && bHasLevelFile;
}

void UEMSObjectBase::DeleteAllSaveDataForSlot(const FString& SaveGameName)
{
	bool bSuccess = false;

	//Console uses files and not folders
	if (IsConsoleFileSystem())
	{
		//Hardcoded default files, since we cannot iterate through them
		TArray<FString> AllFiles = FSavePaths::GetDefaultSaveFiles(SaveGameName);

		//Parse the custom save objects and clear their cache
		ClearCustomSavesConsole(SaveGameName, true, AllFiles);

		//Use native delete 
		for (const FString& FileName : AllFiles)
		{
			if (*FileName)
			{		
				bSuccess = DeleteSaveFile(FileName);
			}
		}

		if (bSuccess)
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Save Game Data removed for: %s"), *SaveGameName);
		}
	}
	else
	{
		const FString SaveFile = FPaths::Combine(BaseSaveDir(), SaveGameName);
		bSuccess = IFileManager::Get().DeleteDirectory(*SaveFile, true, true);

		if (bSuccess)
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Save Game Data removed for: %s"), *SaveGameName);
		}

		//Delete the cached custom save objects
		ClearCustomSavesDesktop(SaveGameName);
	}

	//Remove Cached Slot
	CachedSaveSlots.Remove(SaveGameName);
}

void UEMSObjectBase::DeleteDataFromSlot(const FString& SaveGameName, const EDeleteSlotType InData)
{
	if (InData == EDeleteSlotType::Full)
	{
		return;
	}

	const bool bIsPlayer = InData == EDeleteSlotType::Player;
	const FString SlotFile = bIsPlayer ? PlayerSaveFile(SaveGameName) : ActorSaveFile(SaveGameName);
	const bool bSuccess = DeleteSaveFile(SlotFile);

	if (bSuccess)
	{
		const FString DataType = bIsPlayer ? TEXT("Player") : TEXT("Level");
		UE_LOG(LogEasyMultiSave, Log, TEXT("%s Data removed for: %s"), *DataType, *SaveGameName);
	}
	
}

void UEMSObjectBase::ClearCachedSlots()
{
	CachedSaveSlots.Empty();
}

/**
Save Users
**/

FString UEMSObjectBase::GetCurrentSaveUserName() const
{
	return CurrentSaveUserName;
}

bool UEMSObjectBase::HasSaveUserName() const
{
	return !GetCurrentSaveUserName().IsEmpty();
}

void UEMSObjectBase::SetCurrentSaveUserName(const FString& UserName)
{
	const bool bIsConsole = IsConsoleFileSystem();
	const bool bRequestedEmpty = UserName.IsEmpty();

	//Both console and empty input result in clearing
	if (bIsConsole || bRequestedEmpty)
	{
		if (!CurrentSaveUserName.IsEmpty())
		{
			ClearUserData();
			CurrentSaveUserName.Reset();
			SaveConfig();
		}

		UE_LOG(LogEasyMultiSave, Log, TEXT("Save User Name Cleared"));

		if (bIsConsole)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Save Users are not supported when using the console file system."));
		}

		return;
	}

	const FString NewName = FSavePaths::ValidateSaveName(UserName);

	if (CurrentSaveUserName != NewName)
	{
		ClearUserData();
		CurrentSaveUserName = NewName;
		SaveConfig();

		UE_LOG(LogEasyMultiSave, Log, TEXT("New Current Save User Name is: %s"), *NewName);
	}
}

void UEMSObjectBase::DeleteAllSaveDataForUser(const FString& UserName)
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

TArray<FString> UEMSObjectBase::GetAllSaveUsers() const
{
	TArray<FString> SaveUserNames;
	IFileManager::Get().FindFiles(SaveUserNames, *FPaths::Combine(SaveUserDir(), TEXT("*")), false, true);

	return SaveUserNames;
}

void UEMSObjectBase::ClearUserData()
{
	ClearCachedSlots();
	ClearCachedCustomSaves();
	ClearLoadFromMemory();
}

/**
Save Archive Functions
**/

bool UEMSObjectBase::SaveBinaryArchive(const FString& FullSavePath, FBufferArchive& BinaryData) const
{

#if EMS_PLATFORM_DESKTOP
	//Ensure the file is not read-only on desktop platforms
	FSavePaths::CheckForReadOnly(FullSavePath);
#endif

	return SaveBinaryData(FullSavePath, MoveTemp(BinaryData));
}

bool UEMSObjectBase::SaveBinaryData(const FString& FullSavePath, TArray<uint8> InData) const
{
	//Handle automatic backup before overwriting existing data
	if (UEMSPluginSettings::Get()->bAutoBackup)
	{
		//Prevent early 'slot only' backup on first save, when SaveSlot() info is called twice in a row
		if (HasSlotSaveTimePassed(EMS::ShortDelay) || !FullSavePath.Contains(EMS::SlotSuffix))
		{
			const FFileContext Context = FFileContext(PlayerIndex, FullSavePath);
			FSaveFileIntegrity::PerformAutoBackup(Context);
		}
	}

	//See if we should compress, this will also apply a Flag to the Header
	const bool bIsFileCompressionAllowed = FSettingHelpers::IsFileCompressionAllowed();

	//Compression Logic
	TArray<uint8> DataToSave;
	if (bIsFileCompressionAllowed)
	{
		FArchiveSaveCompressedProxy Compressor(DataToSave, NAME_Oodle);
		if (Compressor.GetError())
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Compression failed for: %s"), *FullSavePath);
			return false;
		}

		Compressor << InData;
		Compressor.Flush();
		Compressor.Close();
	}
	else
	{
		//On consoles, we move the data directly without compression
		DataToSave = MoveTemp(InData);
	}

	//Actual File IO
	return SaveBinaryDataAtomic(FullSavePath, DataToSave);
}

bool UEMSObjectBase::SaveBinaryDataAtomic(const FString& FullSavePath, const TArray<uint8>& FinalData) const
{

#if EMS_PLATFORM_DESKTOP

	if (!IsConsoleFileSystem())
	{
		//Desktop: Use atomic write with temp file (Crash Protection)
		const FString TempSavePath = FullSavePath + EMS::TempType;
		const auto CleanupTempFile = [this, &TempSavePath]()
		{
			DeleteSaveFile(TempSavePath);
		};

		//Clean up old temp files first
		CleanupTempFile();

		//Write to TEMP file first
		if (!CheckAndSaveFile(*TempSavePath, FinalData))
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Failed to save temp file: %s"), *TempSavePath);
			CleanupTempFile();
			return false;
		}

		//Atomic Move(Rename) on same volume
		const FString SrcPath = BaseSavePath(TempSavePath);
		const FString DestPath = BaseSavePath(FullSavePath);
		if (IFileManager::Get().Move(*DestPath, *SrcPath, true, true, false, true))
		{
			//Move succeeded - temp file was renamed, no cleanup needed
			//Steam cloud etc. usually do not sync during file write and when running
			return true;
		}

		//Move failed - clean up and fall through to direct write
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Atomic Move failed for %s. Falling back to explicit write."), *FullSavePath);
		CleanupTempFile();
	}

#endif

	//Console/Fallback: Direct write (Platform handles integrity)
	const bool bSaveSuccess = CheckAndSaveFile(*FullSavePath, FinalData);
	if (!bSaveSuccess)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Failed to save file: %s"), *FullSavePath);
	}

	return bSaveSuccess;
}

/**
Load Archive Functions
**/

bool UEMSObjectBase::ParseArchiveData(const FLoadArchiveContext& Context, const TArray<uint8>& InData)
{
	FMemoryReader MemoryReader(InData, true);

	//Now apply version to package initially
	ApplyLastFileVersion(MemoryReader, true);

	const FString FullSavePath = Context.SavePath; 

	//Check for internal archive errors
	if (MemoryReader.IsError() || MemoryReader.IsCriticalError())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Unknown archive error. The Data is valid, but something went wrong! File: %s"), *FullSavePath);
		return false;
	}

	bool bWasLoaded = false;

	//Directly load Object
	if (Context.LoadType == EDataLoadType::DATA_Object)
	{
		bWasLoaded = LoadObject(MemoryReader, Context.GetSingleObject());
	}
	//Process Collection
	else if (Context.LoadType == EDataLoadType::DATA_Collection)
	{
		bWasLoaded = ProcessObjectCollection(MemoryReader, Context.GetObjects());
	}
	//Complex Actor archive unpacking for Level and Player
	else
	{
		bWasLoaded = UnpackActorArchive(MemoryReader, Context.LoadType);
	}

	if (!bWasLoaded)
	{
		//This only means level does not match etc. By this time, the files are valid
		UE_LOG(LogEasyMultiSave, Log,
			TEXT("Data is valid, but was not parsed for logical reasons. Usually a different Level without (Persistent or Full) Multi-Level Saving. File: %s"),
			*FullSavePath);
	}

	return bWasLoaded;
}

bool UEMSObjectBase::LoadBinaryArchive(const FLoadArchiveContext& Context)
{
	const FString& FullSavePath = Context.SavePath; //Use Reference
	if (FullSavePath.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Load Binary Archive has empty path!"));
		return false;
	}

	//Early out, as missing files are ignored and won't be restored from backup
	if (!DoesFileExist(*FullSavePath))
	{
		return false;
	}

	TArray<uint8> BinaryData;
	EFileValidity Result;
	bool bIsRestoredFromBackup = false;

	//Attempt Primary Load
	if (!LoadBinaryData(FullSavePath, BinaryData, Result))
	{
		//Stop here if the file is technically incompatible
		if (Result == EFileValidity::FILE_INCOMPATIBLE)
		{
			return false;
		}

		const FString BackupPath = FSavePaths::GetBackupSavePath(FullSavePath);
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Primary file corrupt, trying backup: %s"),*BackupPath);

		//Attempt Backup
		if (!LoadBinaryData(BackupPath, BinaryData, Result))
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Load failed: No valid data in Primary or Backup for %s"), *FullSavePath);
			return false;
		}

		bIsRestoredFromBackup = true;
	}

	//Parse Data
	const bool bParsed = ParseArchiveData(Context, BinaryData);
	if (bParsed && bIsRestoredFromBackup)
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Successfully restored data from Backup for: %s"), *FullSavePath);
	}

	return bParsed;
}

bool UEMSObjectBase::LoadBinaryData(const FString& FullSavePath, TArray<uint8>& OutBinaryData, EFileValidity& OutResult) const
{
	//Initial File Load and Integrity Check
	TArray<uint8> RawFileData;
	FSaveHeader FileHeader;
	OutResult = CheckAndLoadFile(FullSavePath, RawFileData, FileHeader);

	if (OutResult != EFileValidity::FILE_VALID)
	{
		return false;
	}

	//Allows to load uncompressed Console files and save them as compressed if Console[Compressed] is selected as file system
	const bool bIsFileDecompressionAllowed = FileHeader.IsDataCompressed() || !IsConsoleFileSystem();

	//Decompression logic
	if (bIsFileDecompressionAllowed)
	{
		FArchiveLoadCompressedProxy Decompressor(RawFileData, NAME_Oodle);
		if (Decompressor.GetError())
		{
			UE_LOG(LogEasyMultiSave, Error, TEXT("Decompression failed for: %s"), *FullSavePath);
			return false;
		}

		TArray<uint8> DecompressedBuffer;
		Decompressor << DecompressedBuffer;
		Decompressor.Close();

		//Transfer data without copying the entire array
		OutBinaryData = MoveTemp(DecompressedBuffer);
	}
	else
	{
		//Direct move on consoles where no compression is applied
		OutBinaryData = MoveTemp(RawFileData);
	}

	return !OutBinaryData.IsEmpty();
}

/**
File I/O functions 
Integrated with Versioning
**/

EFileValidity UEMSObjectBase::CheckAndLoadFile(const FString& FullSavePath, TArray<uint8>& OutData, FSaveHeader& OutHeader) const
{
	const FFileContext Context = FFileContext(PlayerIndex, FullSavePath);
	const EFileValidity File = FSaveFileIntegrity::CheckAndLoadFile(Context, OutData, OutHeader);
	const bool bIsValid = File == EFileValidity::FILE_VALID;

	if (!bIsValid)
	{
		return File;
	}

	//Early check for incompatible multi level modes, which can cause a crash. New files only.
	const bool bMultiLevelCompat = FSaveFileIntegrity::HasMultiLevelCompatibility(Context, OutHeader);
	if (!bMultiLevelCompat)
	{
		return EFileValidity::FILE_INCOMPATIBLE;
	}

	//Assign last read version, its required to keep this global for all Readers 
	OutHeader.InitVersionInfo(LastFileVersion);

	return File;
}

bool UEMSObjectBase::CheckAndSaveFile(const FString& FullSavePath, const TArray<uint8>& InData) const
{
	const FFileContext Context = FFileContext(PlayerIndex, FullSavePath, LastFileVersion.GetLegacyVer());
	return FSaveFileIntegrity::CheckAndSaveFile(Context, InData);
}

bool UEMSObjectBase::DeleteSaveFile(const FString& FullSavePath) const
{
	const FFileContext Context = FFileContext(PlayerIndex, FullSavePath);
	return FSaveFileIntegrity::DeleteSaveFile(Context);
}

 bool UEMSObjectBase::DoesFileExist(const FString& FullSavePath) const
{
	const FFileContext Context = FFileContext(PlayerIndex, FullSavePath);
	return FSaveFileIntegrity::DoesSaveExist(Context);
}

/**
Versioning Functions
**/

EIntegrityCheckResult UEMSObjectBase::CheckSaveGameIntegrity(const FString& FullSavePath, const bool bCheckVersion) const
{
	const FFileContext Context = FFileContext(PlayerIndex, FullSavePath);
	return FSaveFileIntegrity::CheckSaveGameIntegrity(Context, bCheckVersion);
}

void UEMSObjectBase::ApplyLastFileVersion(FMemoryReader& MemoryReader, const bool bHandleLegacy) const
{
	//Check for legacy versions. Must be checked here as those may be in bulk data block(now center)
	if (bHandleLegacy)
	{
		FSaveVersion::HandleLegacyFileVersion(MemoryReader, LastFileVersion);
	}

	FSaveVersion::ApplyFileVersionInfo(LastFileVersion, MemoryReader);
}

/**
Save and Load Complete Objects(Slot, Custom Save)
**/

bool UEMSObjectBase::SaveObject(const FString& FullSavePath, UObject* SaveGameObject) const
{
	if (!SaveGameObject)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("SaveObject: Invalid SaveGameObject."));
		return false;
	}

	//Serialize with version into Data
	TArray<uint8> Data;
	FMemoryWriter MemoryWriter(Data, true);
	SerializeObjectWithVersion(SaveGameObject, MemoryWriter, ESaveObjectType::CompleteObject);

	//Now wrap the filled Data with buffer archive
	FBufferArchive Archive;
	Archive << Data;

	//Check and save
	if (!FSaveHelpers::HasSaveArchiveError(Archive, ESaveErrorType::ER_Object))
	{
		return SaveBinaryArchive(*FullSavePath, Archive);
	}

	return false;
}

bool UEMSObjectBase::LoadObject(FMemoryReader& FromBinary, UObject* SaveGameObject) const
{
	if (!SaveGameObject)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Load Object: Invalid Object"));
		return false;
	}

	//Unwrap from buffer archive
	FBufferArchive ObjectArchive;
	FromBinary << ObjectArchive;

	//Deserialize with version
	FMemoryReader MemoryReader(ObjectArchive, true);
	DeserializeObjectWithVersion(SaveGameObject, MemoryReader, ESaveObjectType::CompleteObject);

	return true;
}

/**
Base Game-Object Serialize Functions
**/

void UEMSObjectBase::SerializeToBinary(const UObject* Object, TArray<uint8>& OutData)
{
	FMemoryWriter MemoryWriter(OutData, true);
	UObject* ObjectRef = const_cast<UObject*>(Object);
	SerializeObjectWithVersion(ObjectRef, MemoryWriter, ESaveObjectType::SaveGameOnly);

	//Debug total object data size
	if (UEMSPluginSettings::Get()->bDebugDataSize)
	{
		FSaveDebugHelpers::DebugLogDataSize(Object, OutData);
	}
}

void UEMSObjectBase::SerializeFromBinary(UObject* Object, const TArray<uint8>& InData) const
{
	FMemoryReader MemoryReader(InData, true);
	DeserializeObjectWithVersion(Object, MemoryReader, ESaveObjectType::SaveGameOnly);
}

/**
Core Serialize Helpers
**/

void UEMSObjectBase::SerializeObjectWithVersion(UObject* Object, FMemoryWriter& Writer, ESaveObjectType SaveType)
{
	uint32 ObjectTag = EMS::OBJECT_INST_TAG;
	uint32 ObjectVer = EMS::OBJECT_INST_VERSION_LATEST;
	FPackageFileVersion ObjectFileVersion = GPackageFileUEVersion;

	Writer << ObjectTag;
	Writer << ObjectVer;
	Writer << ObjectFileVersion;

	FSaveGameArchive Ar(Writer, SaveType, ObjectVer);
	Object->Serialize(Ar);
}

void UEMSObjectBase::DeserializeObjectWithVersion(UObject* Object, FMemoryReader& Reader, ESaveObjectType SaveType) const
{
	//Generic engine and file version
	ApplyLastFileVersion(Reader);

	uint32 ObjectTag = 0;
	uint32 ObjectVer = 0;

	Reader << ObjectTag;

	//Newer data with version header
	if (ObjectTag == EMS::OBJECT_INST_TAG)
	{
		Reader << ObjectVer;

		//From here on, we add the actual version
		if (ObjectVer >= EMS::OBJECT_INST_VERSION_2)
		{
			FPackageFileVersion ObjectFileVersion;
			Reader << ObjectFileVersion;
			Reader.SetUEVer(ObjectFileVersion);
		}
	}
	//Legacy data without header
	else
	{
		Reader.Seek(0);

		//This is only valid for files from 177 where Complete Objects dont have the data version yet
		if (SaveType != ESaveObjectType::CompleteObject)
		{
			Reader.SetUEVer(LastFileVersion.GetLegacyVer()); 
		}
	}

	FSaveGameArchive Ar(Reader, SaveType, ObjectVer);
	Object->Serialize(Ar);
}

/**
File System
**/

bool UEMSObjectBase::VerifyOrCreateDirectory(const FString& NewDir) const
{
	//Not required for console
	if (IsConsoleFileSystem())
	{
		return true;
	}

	const FString SaveFile = FPaths::Combine(BaseSaveDir(), NewDir);
	if (IFileManager::Get().DirectoryExists(*SaveFile))
	{
		return true;
	}

	return IFileManager::Get().MakeDirectory(*SaveFile, true);
}

FString UEMSObjectBase::SaveUserDir() const
{
	return FPaths::ProjectSavedDir() + EMS::SaveGamesFolder + EMS::UserDir + EMS::Slash;
}

FString UEMSObjectBase::UserSubDir() const
{
	//Takes into account the already defined path from ISaveGame
	return EMS::UserDir + EMS::Slash + GetCurrentSaveUserName() + EMS::Slash;
}

FString UEMSObjectBase::BaseSaveDir() const
{
	if (HasSaveUserName())
	{
		return SaveUserDir() + GetCurrentSaveUserName() + EMS::Slash;
	}

	return FPaths::ProjectSavedDir() + EMS::SaveGamesFolder;
}

FString UEMSObjectBase::BaseSavePath(const FString& FullSavePath) const
{
	//FullSavePath already will have user included. Like ActorSaveFile(). 
	//So we don't use BaseSaveDir here
	return FPaths::ProjectSavedDir() + EMS::SaveGamesFolder + FullSavePath + EMS::SaveType;
}

FString UEMSObjectBase::GetThumbnailFormat() const
{
	return FSavePaths::GetThumbnailFormat();
}

FString UEMSObjectBase::GetFolderOrFile() const
{
	//Console uses file names and not folders, "/" will automatically create a new folder.
	const bool bFile = IsConsoleFileSystem();
	const FString FolderOrFile = bFile ? EMS::UnderscoreFile : EMS::Slash;

	return FolderOrFile;
}

FString UEMSObjectBase::FullSaveDir(const FString& DataType, FString SaveGameName) const
{
	if (SaveGameName.IsEmpty())
	{
		SaveGameName = GetCurrentSaveGameName();
	}

	// *.sav is added by ISaveInterface
	const FString FullName = SaveGameName + GetFolderOrFile() + DataType;

	if (HasSaveUserName())
	{
		return UserSubDir() + FullName;
	}

	return FullName;
}

FString UEMSObjectBase::CustomSaveFile(const FString& CustomSaveName, const FString& SlotName) const
{
	//Bound to a save slot, use default dir.
	if (!SlotName.IsEmpty())
	{
		return FullSaveDir(CustomSaveName, SlotName);
	}

	//Not bound to slot, so we just save in the base folder. with user if desired.
	if (HasSaveUserName())
	{
		return UserSubDir() + CustomSaveName;
	}

	return CustomSaveName;
}

FString UEMSObjectBase::SlotInfoSaveFile(const FString& SaveGameName) const
{
	return FullSaveDir(EMS::SlotSuffix, SaveGameName);
}

FString UEMSObjectBase::ActorSaveFile(const FString& SaveGameName) const
{
	return FullSaveDir(EMS::ActorSuffix, SaveGameName);
}

FString UEMSObjectBase::PlayerSaveFile(const FString& SaveGameName) const
{
	return FullSaveDir(EMS::PlayerSuffix, SaveGameName);
}

FString UEMSObjectBase::ThumbnailSaveFile(const FString& SaveGameName) const
{
	return FullSaveDir(EMS::ThumbSuffix, SaveGameName);
}

FString UEMSObjectBase::SlotFilePath(const FString& SaveGameName) const
{
	//This is only used for sorting.
	return BaseSavePath(SlotInfoSaveFile(SaveGameName));
}

FName UEMSObjectBase::GetSavedSlotLevelName() const
{
	//Return the name without redirectors. Used for slot to always save the current level
	const FString WorldLevel = FLevelHelpers::GetWorldLevelName(GetWorld(), false);
	return FName(WorldLevel);
}

/**
Thumbnail Saving
Export from a 2d scene capture render target source.
No versioning etc. as this would be overkill.
**/

UTexture2D* UEMSObjectBase::ImportSaveThumbnail(const FString& SaveGameName) const
{
	TArray<uint8> Buffer;
	const FString SaveThumbnailName = ThumbnailSaveFile(SaveGameName);

	//Use raw load
	const FFileContext Context = FFileContext(PlayerIndex, SaveThumbnailName);
	const bool bLoadThumb = FSaveFileIntegrity::LoadRawSaveData(Context, Buffer) == EFileValidity::FILE_VALID;

	if (bLoadThumb)
	{
		UTexture2D* NewTexture = FImageUtils::ImportBufferAsTexture2D(Buffer);
		if (!NewTexture)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Import Save Thumbnail: Error creating texture for %s"), *SaveThumbnailName);
		}	

		return NewTexture;
	}

	//Try Legacy(saved as image) Thumbnail afterwards
	if (!IsConsoleFileSystem())
	{
		const FString ThumbnailPath = BaseSaveDir() + SaveGameName + GetFolderOrFile();
		const FString LegacyThumbnailName = ThumbnailPath + EMS::ThumbSuffix + FSavePaths::GetThumbnailFileExtension();

		if (FPaths::FileExists(LegacyThumbnailName))
		{
			return FImageUtils::ImportFileAsTexture2D(LegacyThumbnailName);
		}
	}

	UE_LOG(LogEasyMultiSave, Warning, TEXT("Import Save Thumbnail: Failed to load data for %s"), *SaveThumbnailName);

	return nullptr;
}

void UEMSObjectBase::ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName) const
{
	if (!TextureRenderTarget || SaveGameName.IsEmpty())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Export Save Thumbnail: Null RT or Empty Name."));
		return;
	}

	//Extract image data on the game thread NOW.
	FImage ExportImage;
	if (!FImageUtils::GetRenderTargetImage(TextureRenderTarget, ExportImage))
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Export Save Thumbnail: Failed to extract Image data."));
		return;
	}

	//Check if multi-threaded saving is enabled
	if (FSettingHelpers::IsMultiThreadSaving())
	{
		TWeakObjectPtr<const UEMSObjectBase> WeakThis(this);

		AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask,
		[WeakThis, SaveGameName, Image = MoveTemp(ExportImage)]() mutable
		{
			if (const UEMSObjectBase* StrongThis = WeakThis.Get())
			{
				StrongThis->ExecuteSaveThumbnail(SaveGameName, Image);
			}
			else
			{
				UE_LOG(LogEasyMultiSave, Verbose, TEXT("Export Save Thumbnail: Object destroyed before async save completed."));
			}
		});
	}
	else
	{
		ExecuteSaveThumbnail(SaveGameName, ExportImage);
	}
}

void UEMSObjectBase::ExecuteSaveThumbnail(const FString& InSaveName, FImage& ImageToCompress) const
{
	FBufferArchive Buffer;
	if (FSaveThumbnails::CompressImage(ImageToCompress, Buffer))
	{
		const FString SaveThumbnailName = ThumbnailSaveFile(InSaveName);
		const FFileContext Context = FFileContext(PlayerIndex, SaveThumbnailName);

		if (!FSaveFileIntegrity::SaveToFile(Context, Buffer))
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Export Save Thumbnail: SaveBinaryData failed."));
		}
	}
}
