//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSVersion.h"
#include "EMSActors.h"  
#include "EMSMisc.h"
#include "EMSPaths.h"
#include "EMSPluginSettings.h"
#include "Engine/World.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/Paths.h"
#include "SaveGameSystem.h"
#include "PlatformFeatures.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"

/**
FSaveVersion
**/

FString FSaveVersion::GetEngineString(const FEngineVersion& InEngine)
{
	return InEngine.ToString(EVersionComponent::Patch);
}

FString FSaveVersion::GetSettingsGameVersion()
{
	const FString CustomVersion = FString::FromInt(UEMSPluginSettings::Get()->SaveGameVersion);
	return CustomVersion;
}

bool FSaveVersion::IsSaveGameVersionEqual(const FGameVersionInfo& SaveVersion)
{
	const uint32 GameVersion = UEMSPluginSettings::Get()->SaveGameVersion;
	return SaveVersion.GetGameVal() == GameVersion;
}

bool FSaveVersion::IsPluginVersionEqual(const FGameVersionInfo& SaveVersion)
{
	const uint32 EmsVersion = EMS_VERSION_NUMBER;
	return SaveVersion.GetPluginVal() == EmsVersion;
}

FGameVersionInfo FSaveVersion::MakeSaveGameVersion()
{
	const uint32 EmsVersion = EMS_VERSION_NUMBER;
	const uint32 GameVersion = UEMSPluginSettings::Get()->SaveGameVersion;
	const FGameVersionInfo Info = FGameVersionInfo(EmsVersion, GameVersion);
	return Info;
}

FPackageFileVersion FSaveVersion::GetStaticOldPackageVersion()
{
	//Check hardcoded legacy package file versions. Print with GPackageFileUEVersion.ToValue()
	uint32 StaticPackageVersion;

	if (UEMSPluginSettings::Get()->MigratedSaveEngineVersion == EOldPackageEngine::EN_UE40)
	{
		StaticPackageVersion = 555;
	}
	else if (UEMSPluginSettings::Get()->MigratedSaveEngineVersion == EOldPackageEngine::EN_UE54)
	{
		//From this point on, backward compat was greatly improved in UE
		StaticPackageVersion = 1012;
	}
	else
	{
		StaticPackageVersion = 1009;
	}

	return FPackageFileVersion(StaticPackageVersion, EUnrealEngineObjectUE5Version(StaticPackageVersion));
}

void FSaveVersion::HandleLegacyFileVersion(FMemoryReader& MemoryReader, FFileVersionInfo& LastFileVersion)
{
	//Check for files that have no NEW header
	if (!LastFileVersion.IsLegacyFile())
	{
		return;
	}

	FPackageFileVersion FileVersion{};
	FEngineVersion EngineVersion{};

	int32 FileTag;
	MemoryReader << FileTag;

	//Files from EMS 100 
	if (FileTag != EMS::LEGACY_SAVEGAME_FILE_TYPE_TAG)
	{
		MemoryReader.Seek(0);

		//Use static file version
		FileVersion = GetStaticOldPackageVersion();

		UE_LOG(LogEasyMultiSave, Warning, TEXT("File version empty. Using version from settings: %d"), FileVersion.ToValue());
	}
	//Files from EMS 150
	else
	{
		//Use actual version from old data
		MemoryReader << FileVersion;
		MemoryReader << EngineVersion;

		UE_LOG(LogEasyMultiSave, Log, TEXT("Legacy file Package version is: %d"), FileVersion.ToValue());
	}

	//Store the legacy version that will later be re-saved to the header to apply old package versions to Object archives
	LastFileVersion = FFileVersionInfo(FileVersion, EngineVersion);
	LastFileVersion.StoreLegacyVersion(FileVersion);
}

void FSaveVersion::ApplyFileVersionInfo(const FFileVersionInfo& InFileVersion, FMemoryReader& OutMemoryReader)
{
	//Means we did not read from a file yet. Can cause a crash on deserialize if no file is available at all. 
	if (!InFileVersion.IsValid())
	{
		return;
	}

	//All MemoryReaders require the correct version to be set.
	OutMemoryReader.SetUEVer(InFileVersion.GetPackageVer());
	OutMemoryReader.SetEngineVer(InFileVersion.GetEngineVer());
}

/**
FSaveHeader
**/

void FSaveHeader::Build(const FFileContext& Context)
{
	Tag = EMS::HEADER_TAG;
	Version = EMS::HEADER_VERSION;

	FileVersion = FFileVersionInfo(GPackageFileUEVersion, FEngineVersion::Current());
	FileVersion.LegacyPackageVersion = Context.LegacyFileVersion;
	GameVersion = FSaveVersion::MakeSaveGameVersion();

	UnixTimeStamp = FDateTime::UtcNow().ToUnixTimestamp();

	//Add Flags
	if (FSettingHelpers::IsFileCompressionAllowed())
	{
		Flags |= EMS::FLAG_COMPRESSED;
	}

	//Save MLS mode, as it might not be compatible. Its in all files now
	MultiLevel = uint8(UEMSPluginSettings::Get()->MultiLevelSaving);
}

/**
FSaveFooter
**/

void FSaveFooter::Build(const uint32 InHash)
{
	Tag = EMS::FOOTER_TAG;
	Hash = InHash;
}

/**
FSaveFileIntegrity - Save and Load
**/

bool FSaveFileIntegrity::CheckAndSaveFile(const FFileContext& Context, const TArray<uint8>& InData)
{
	//Calculate hash from payload
	const uint32 Hash = EMS::GetHash(InData.GetData(), InData.Num());

	//Copy data
	TArray<uint8> DataCopy = InData;

	//Build header
	FSaveHeader Header{};
	Header.Build(Context);

	//Build footer
	FSaveFooter Footer{};
	Footer.Build(Hash);

	//Write everything in clear order
	FBufferArchive Archive;
	Archive << Header;
	Archive << DataCopy;
	Archive << Footer;

	return SaveToFile(Context, Archive);
}

EFileValidity FSaveFileIntegrity::CheckAndLoadFile(const FFileContext& Context, TArray<uint8>& OutData, FSaveHeader& OutHeader)
{
	TArray<uint8> RawData;
	const EFileValidity Load = LoadRawSaveData(Context, RawData);
	if (Load != EFileValidity::FILE_VALID)
	{
		return Load;
	}

	const FString InSavePath = Context.Path;

	//Handle legacy files (pre-header format)
	if (!HasFileHeaderTag(RawData))
	{
		OutHeader.bLoadedLegacyFile = true;
		OutData = MoveTemp(RawData);

		UE_LOG(LogEasyMultiSave, Log, TEXT("Processing legacy file from a version before 177 : %s"), *InSavePath);

		return EFileValidity::FILE_VALID;
	}

	//Quick check for hash before data processing
	if (!IsFileHashValid(RawData, OutHeader))
	{
		return EFileValidity::FILE_INVALID;
	}

	//Read modern file with header from start
	FMemoryReader Reader(RawData);

	//Read header
	Reader << OutHeader;

	//Apply engine versions to archive, required so data can be processed
	FSaveVersion::ApplyFileVersionInfo(OutHeader.FileVersion, Reader);

	//Read payload (automatically reads size + data)
	TArray<uint8> Payload;
	Reader << Payload;

	//Return validated data
	OutData = MoveTemp(Payload);

	return EFileValidity::FILE_VALID;
}

/**
FSaveFileIntegrity - Backup
**/

void FSaveFileIntegrity::PerformAutoBackup(const FFileContext& Context)
{
	//Load Primary Data
	TArray<uint8> PrimaryRaw;
	const EFileValidity PrimaryLoadStatus = LoadRawSaveData(Context, PrimaryRaw);

	//Skip legacy
	if (!HasFileHeaderTag(PrimaryRaw))
	{
		return;
	}

	//If the primary doesn't exist yet, there is nothing to back up or recover
	if (PrimaryLoadStatus == EFileValidity::FILE_MISSING)
	{
		return;
	}

	//Setup
	const FString BackupPath = FSavePaths::GetBackupSavePath(Context.Path);
	const FFileContext BackupContext(Context.Player, BackupPath);
	FSaveHeader TempHeader;

	//Standard Flow: Primary is healthy, so update the backup
	bool bPrimaryIsHealthy = (PrimaryLoadStatus == EFileValidity::FILE_VALID) && IsFileHashValid(PrimaryRaw, TempHeader);
	if (bPrimaryIsHealthy)
	{
		if (SaveToFile(BackupContext, PrimaryRaw))
		{
			UE_LOG(LogEasyMultiSave, Log, TEXT("Auto-Backup successful: %s"), *BackupPath);
		}
		return;
	}

	//Recovery Flow: Primary is corrupt, try to restore from existing backup
	UE_LOG(LogEasyMultiSave, Warning, TEXT("Primary save is corrupt. Attempting to restore from Backup..."));

	TArray<uint8> BackupRaw;

	//Use BackupContext here to load the backup file instead of the primary again
	const EFileValidity RecoveryLoadStatus = LoadRawSaveData(BackupContext, BackupRaw);
	bool bRecoveryIsHealthy = (RecoveryLoadStatus == EFileValidity::FILE_VALID) && IsFileHashValid(BackupRaw, TempHeader);

	if (bRecoveryIsHealthy)
	{
		//Backup is Good. Use it to overwrite the corrupted Primary
		if (SaveToFile(Context, BackupRaw))
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("RECOVERY: Successfully restored valid backup to: %s"), *Context.Path);
		}
	}
	else
	{
		//Critical failure state
		UE_LOG(LogEasyMultiSave, Error, TEXT("FATAL: Both Primary and Backup are corrupted for %s"), *Context.Path);
	}
}

/**
FSaveFileIntegrity - Advanced Checks
**/

EIntegrityCheckResult FSaveFileIntegrity::CheckSaveGameIntegrity(const FFileContext& Context, const bool bCheckVersion)
{
	//This checks only happens on the local file.

	FSaveHeader Header;
	const EFileValidity ValidCheck = IsFileValidFast(Context, Header);

	if (Header.bLoadedLegacyFile)
	{
		UE_LOG(LogEasyMultiSave, Log, TEXT("Legacy file integrity check skipped and marked as valid: %s"), *Context.Path);
		return EIntegrityCheckResult::Success;
	}

	if (ValidCheck == EFileValidity::FILE_INVALID)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("File integrity invalid: %s"), *Context.Path);
		return EIntegrityCheckResult::Invalid;
	}

	//Missing file is treated as valid (nothing to load) 
	if (ValidCheck == EFileValidity::FILE_MISSING)
	{
		return EIntegrityCheckResult::Success;
	}

	UE_LOG(LogEasyMultiSave, Log, TEXT("File integrity verified for: %s"), *Context.Path);

	//Skip for legacy, would be too much
	FFileVersionInfo FileInfo; Header.InitVersionInfo(FileInfo);
	if (FileInfo.IsLegacyFile())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Game Version check and advanced info for Legacy files is not supported."));
		return EIntegrityCheckResult::Success;
	}

	//Multi level modes
	const bool bMultiLevelCompat = FSaveFileIntegrity::HasMultiLevelCompatibility(Context, Header);
	if (!bMultiLevelCompat)
	{
		return EIntegrityCheckResult::Invalid;
	}

	const FString FileEngine = FSaveVersion::GetEngineString(FileInfo.GetEngineVer());
	const FGameVersionInfo GameInfo = Header.GetGameVersion();

	UE_LOG(LogEasyMultiSave, Log, TEXT(">>> Loaded Save Version | Package: %d | Engine: %s | Plugin: %s | Game: %s ||| Legacy Package: %d"),
		FileInfo.GetPackageVal(),
		*FileEngine,
		*GameInfo.GetPluginVer(),
		*GameInfo.GetGameVer(),
		FileInfo.GetLegacyVal());

	//Additional info if versions differ
	if (FileInfo.GetEngineVer().GetMinor() != FEngineVersion::Current().GetMinor()
		|| !FSaveVersion::IsPluginVersionEqual(GameInfo)
		|| !FSaveVersion::IsSaveGameVersionEqual(GameInfo))
	{
		const FString CurEngine = FSaveVersion::GetEngineString(FEngineVersion::Current());
		const FGameVersionInfo ThisGameInfo = FSaveVersion::MakeSaveGameVersion();

		UE_LOG(LogEasyMultiSave, Log, TEXT(">>> This Unreal Version | Package: %d | Engine: %s | Plugin: %s | Game: %s"),
			GPackageFileUEVersion.ToValue(),
			*CurEngine,
			*ThisGameInfo.GetPluginVer(),
			*ThisGameInfo.GetGameVer());
	}

	//No version check
	if (!bCheckVersion)
	{
		return EIntegrityCheckResult::Success;
	}

	//Perform complex integrity check if file is valid and check is requested
	EIntegrityCheckResult Result = EIntegrityCheckResult::Success;
	if (ValidCheck == EFileValidity::FILE_VALID)
	{
		if (!FSaveVersion::IsSaveGameVersionEqual(GameInfo))
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Save Game Version mismatch: File: %s | Settings: %s"), 
				*GameInfo.GetGameVer(), *FSaveVersion::GetSettingsGameVersion());

			Result = EIntegrityCheckResult::VersionMismatch;
		}
	}

	return Result;
}

bool FSaveFileIntegrity::HasMultiLevelCompatibility(const FFileContext& Context, const FSaveHeader& InHeader)
{
	//No way around it
	if (InHeader.IsLegacy())
	{
		return true;
	}

	//Early check for incompatible multi level modes, which can cause a crash! New files only.
	const bool bIsMultiLevelData = Context.Path.Contains(EMS::PlayerSuffix) || Context.Path.Contains(EMS::ActorSuffix);
	const bool bMultiLevelCompat = FSettingHelpers::IsMultiLevelSaveCompatible(InHeader.GetLoadedMultiLevelMode());

	if (bIsMultiLevelData && !bMultiLevelCompat)
	{
		const UEnum* EnumPtr = StaticEnum<EMultiLevelSaveMethod>();
		const FString LoadedStr = EnumPtr->GetNameStringByValue((uint8)InHeader.GetLoadedMultiLevelMode());
		const FString SettingsStr = EnumPtr->GetNameStringByValue((uint8)UEMSPluginSettings::Get()->MultiLevelSaving);

		UE_LOG(LogEasyMultiSave, Warning, TEXT("Save is valid, but has incompatible Multi-Level mode! Loaded: %s | Settings: %s"), *LoadedStr, *SettingsStr);
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Please change Plugin Setting to %s or load a different file!"), *LoadedStr);

		return false;
	}

	return true;
}

/**
FSaveFileIntegrity - Low Level functions
**/

bool FSaveFileIntegrity::HasFileHeaderTag(const TArray<uint8>& RawData)
{
	if (RawData.Num() < sizeof(uint32))
	{
		return false;
	}

	FMemoryReader Reader(RawData);

	uint32 FileTag = 0;
	Reader << FileTag;

	//Its a legacy file
	if (FileTag != EMS::HEADER_TAG)
	{
		return false;
	}

	return true;
}

EFileValidity FSaveFileIntegrity::IsFileValidFast(const FFileContext& Context, FSaveHeader& OutHeader)
{
	TArray<uint8> RawData;
	const EFileValidity Result = LoadRawSaveData(Context, RawData);

	if (Result != EFileValidity::FILE_VALID)
	{
		return Result;
	}

	return IsFileHashValid(RawData, OutHeader)
		? EFileValidity::FILE_VALID
		: EFileValidity::FILE_INVALID;
}

bool FSaveFileIntegrity::IsFileHashValid(const TArray<uint8>& RawData, FSaveHeader& OutHeader)
{
	//Fast check for hash only that skips actual payload

	if (RawData.Num() < FSaveFooter::GetStaticFooterSize())
	{
		return false;
	}

	if (!HasFileHeaderTag(RawData))
	{
		OutHeader = FSaveHeader{};
		OutHeader.bLoadedLegacyFile = true;
		return false;
	}

	FMemoryReader Reader(RawData);

	//Parse header, so we are at the pos where Payload starts
	Reader << OutHeader;

	//TArray writes its count as first entry
	int32 PayloadCount = 0;
	Reader << PayloadCount;

	if (PayloadCount < 0)
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Invalid payload size."));
		return false;
	}

	//Skip the payload
	const int64 PayloadStart = Reader.Tell();
	const int64 PayloadSize = (int64)PayloadCount;
	const int64 FooterStart = PayloadStart + PayloadSize;

	//Safety Check: Ensure the file actually contains the amount of data the header claims
	const int64 TotalSize = FooterStart + FSaveFooter::GetStaticFooterSize();
	if (TotalSize > RawData.Num())
	{
		UE_LOG(LogEasyMultiSave, Warning, TEXT("File truncated or size mismatch."));
		return false;
	}

	//Jump to end
	Reader.Seek(FooterStart);

	FSaveFooter Footer;
	Reader << Footer;

	if (Footer.Tag != EMS::FOOTER_TAG)
	{
		return false;
	}

	const uint8* PayloadPtr = RawData.GetData() + PayloadStart;
	const uint32 CalculatedHash = EMS::GetHash(PayloadPtr, PayloadSize);

	if (CalculatedHash == Footer.Hash)
	{
		return true;
	}
	else
	{
		//This will tell you if the hashes are close or completely different
		UE_LOG(LogEasyMultiSave, Warning, TEXT("Hash Mismatch: Stored [%u] vs Calculated [%u]"), Footer.Hash, CalculatedHash);
	}

	return false;
}

/**
FSaveFileIntegrity - Basic Save System
**/

bool FSaveFileIntegrity::SaveToFile(const FFileContext& Context, const TArray<uint8>& InData)
{
	const uint32 PlayerIndex = Context.Player;
	const FString InSavePath = Context.Path;

	//Check minimum size or zero file
	if (IsZeroData(InSavePath, InData))
	{
		return false;
	}

	//Save to disk
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	const bool bSaved = SaveSystem->SaveGame(false, *InSavePath, PlayerIndex, InData);
	if (!bSaved)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Failed to save file: %s"), *InSavePath);
	}

	return bSaved;
}

EFileValidity FSaveFileIntegrity::LoadRawSaveData(const FFileContext& Context, TArray<uint8>& OutRawData)
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	if (!SaveSystem)
	{
		return EFileValidity::FILE_INVALID;
	}

	const uint32 PlayerIndex = Context.Player;
	const FString InSavePath = Context.Path;

	if (!SaveSystem->DoesSaveGameExist(*InSavePath, PlayerIndex))
	{
		return EFileValidity::FILE_MISSING;
	}

	//Load raw buffer from disk
	if (!SaveSystem->LoadGame(false, *InSavePath, PlayerIndex, OutRawData))
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Save file unreadable: %s"), *InSavePath);
		return EFileValidity::FILE_INVALID;
	}

	//Check minimum size or zero file
	if (IsZeroData(InSavePath, OutRawData))
	{
		return EFileValidity::FILE_INVALID;
	}

	return EFileValidity::FILE_VALID;
}

bool FSaveFileIntegrity::IsZeroData(const FString& InSavePath, const TArray<uint8>& InRawData)
{
	uint32 FirstBytes = 0;

	//Check minimum size (minimum 4 bytes for a tag)
	if (InRawData.Num() < sizeof(FirstBytes))
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Save data has NULL header: %s"), *InSavePath);
		return true;
	}

	//Check for zeroes
	FMemory::Memcpy(&FirstBytes, InRawData.GetData(), sizeof(FirstBytes));
	if (!FirstBytes)
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("Save file has zero byte data or is corrupt: %s"), *InSavePath);
		return true;
	}

	return false;
}

bool FSaveFileIntegrity::DeleteSaveFile(const FFileContext& Context)
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	if (SaveSystem->DoesSaveGameExist(*Context.Path, Context.Player))
	{
		return SaveSystem->DeleteGame(false, *Context.Path, Context.Player);
	}

	return false;
}

bool FSaveFileIntegrity::DoesSaveExist(const FFileContext& Context)
{
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	return SaveSystem->DoesSaveGameExist(*Context.Path, Context.Player);
}