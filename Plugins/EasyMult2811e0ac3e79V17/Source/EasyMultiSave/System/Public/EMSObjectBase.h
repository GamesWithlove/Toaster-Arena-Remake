//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSData.h"
#include "EMSMisc.h"
#include "EMSLevel.h"
#include "EMSVersion.h"
#include "EMSPluginSettings.h"
#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMSObjectBase.generated.h"

struct FImage;
class UTextureRenderTarget2D;
class UTexture2D;
class UBlueprintAsyncActionBase;
class UEMSInfoSaveGame;
class UEMSCustomSaveGame;
class FBufferArchive;
class FMemoryReader;
class FMemoryWriter;
class UWorld;

UCLASS(config = EmsUser, configdonotcheckdefaults, abstract, NotBlueprintType, NotBlueprintable)
class EASYMULTISAVE_API UEMSObjectBase : public UGameInstanceSubsystem
{
	GENERATED_BODY()

protected:
	UEMSObjectBase();

/** Variables  */

protected:

	const uint32 PlayerIndex = 0;

private:

	mutable FFileVersionInfo LastFileVersion;

private:

	UPROPERTY(config)
	FString CurrentSaveGameName;

	UPROPERTY(config)
	FString CurrentSaveUserName;

	UPROPERTY(Transient)
	double LastSlotSaveTime = 0.0;

	UPROPERTY(Transient)
	TMap<FString, TObjectPtr<UEMSInfoSaveGame>> CachedSaveSlots;

	UPROPERTY(Transient)
	TMap<FString, TObjectPtr<UEMSCustomSaveGame>> CachedCustomSaves;

	UPROPERTY(Transient)
	TArray<FName> MultiSaveLevels;

/** Default Implementations  */

public:

	UWorld* GetWorld() const override;

protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	//Implemented in EMSObject
	virtual bool UnpackActorArchive(FMemoryReader& FromBinary, const EDataLoadType LoadType) { return false; }
	virtual void ClearLoadFromMemory() {};

	//Implemented in EMSObjectAdv
	virtual bool ProcessObjectCollection(FMemoryReader& FromBinary, const FSaveObjects& Objects) const { return false; };

/** Save Object Creation  */

private:

	template <class TSaveGame>
	TSaveGame* CreateNewSaveObject(const FString& FullSavePath, const FSoftClassPath& InClassName);

/** Custom Saves  */

public:

	UEMSCustomSaveGame* GetCustomSave(const TSubclassOf<UEMSCustomSaveGame>& SaveGameClass, const FString& InSlotName, const FString& InFileName);
	bool SaveCustom(UEMSCustomSaveGame* SaveGame);
	bool SaveAllCustomObjects();

	FCustomSaveInfo GetCustomSaveInfo(const UEMSCustomSaveGame* SaveGame) const;
	void DeleteCustomSave(UEMSCustomSaveGame* SaveGame);
	void ResetCustomSave(UEMSCustomSaveGame* SaveGame, const EResetCustomSaveType Type);

	bool DoesCustomSaveExist(const FString& InSlotName, const FString& InFileName) const;

private:

	void ClearCustomSaveByRef(const FString& CachedRefName);
	void ClearCachedCustomSaves();
	void ClearCustomSavesDesktop(const FString& SaveGameName);
	void ClearCustomSavesConsole(const FString& SaveGameName, const bool bAddFiles, TArray<FString>& OutFiles);

/** Save Slot and User Names  */

public:

	FString GetCurrentSaveGameName() const;
	void SetCurrentSaveGameName(const FString& SaveGameName);
	TArray<FString> GetSortedSaveSlots() const;

	UEMSInfoSaveGame* GetSlotInfoObject(const FString& SaveGameName = FString());
	TArray<FSaveSlotInfo> GetSlotInfos(const TArray<FString>& SaveGameNames) const;
	TArray<FString> GetAllSaveGames() const;

	bool WasCurrentLevelSaved();
	void ClearMultiSaveLevels();

	bool HasSlotSaveTimePassed(const double InTime) const;
	bool DoesSaveSlotExist(const FString& SaveGameName) const;
	bool DoesFullSaveGameExist(const FString& SaveGameName) const;
	void DeleteAllSaveDataForSlot(const FString& SaveGameName);
	void DeleteDataFromSlot(const FString& SaveGameName, const EDeleteSlotType InData);
	void SaveSlotInfoObject(const FString& SaveGameName, const bool bOverrideLevelData = false);

	FString GetCurrentSaveUserName() const;
	void SetCurrentSaveUserName(const FString& UserName);
	void DeleteAllSaveDataForUser(const FString& UserName);
	TArray<FString> GetAllSaveUsers() const;

protected:

	bool HasSaveUserName() const;
	UEMSInfoSaveGame* MakeSlotInfoObject(const FString& SaveGameName = FString());
	void ClearCachedSlots();
	virtual void ClearUserData();

/** Save and Load Archive Functions  */

protected:

	bool LoadBinaryData(const FString& FullSavePath, TArray<uint8>& OutData, EFileValidity& OutResult) const;
	bool SaveBinaryData(const FString& FullSavePath, TArray<uint8> InData) const;
	bool SaveBinaryDataAtomic(const FString& FullSavePath, const TArray<uint8>& FinalData) const;
	bool SaveBinaryArchive(const FString& FullSavePath, FBufferArchive& BinaryData) const;

	bool ParseArchiveData(const FLoadArchiveContext& Context, const TArray<uint8>& InData);
	bool LoadBinaryArchive(const FLoadArchiveContext& Context);

/** Save and Load Complete Objects  */

protected:

	bool SaveObject(const FString& FullSavePath, UObject* SaveGameObject) const;
	bool LoadObject(FMemoryReader& FromBinary, UObject* SaveGameObject) const;

/** Base Game-Object Serialize Functions  */

public:

	static void SerializeToBinary(const UObject* Object, TArray<uint8>& OutData);
	void SerializeFromBinary(UObject* Object, const TArray<uint8>& InData) const;

/**
Core Serialize Helpers
**/

private:

	static void SerializeObjectWithVersion(UObject* Object, FMemoryWriter& Writer, ESaveObjectType SaveType);
	void DeserializeObjectWithVersion(UObject* Object, FMemoryReader& Reader, ESaveObjectType SaveType) const;

/** File I/O functions   */

protected:

	EFileValidity CheckAndLoadFile(const FString& FullSavePath, TArray<uint8>& OutData, FSaveHeader& OutHeader) const;
	bool CheckAndSaveFile(const FString& FullSavePath, const TArray<uint8>& InData) const;
	bool DeleteSaveFile(const FString& FullSavePath) const;
	bool DoesFileExist(const FString& FullSavePath) const;

/** Versioning Functions  */

public:

	EIntegrityCheckResult CheckSaveGameIntegrity(const FString& FullSavePath, const bool bCheckVersion) const;
	void ApplyLastFileVersion(FMemoryReader& MemoryReader, const bool bHandleLegacy = false) const;

/** File System and Path Names  */

public:

	FString SlotInfoSaveFile(const FString& SaveGameName = FString()) const;
	FString CustomSaveFile(const FString& CustomSaveName, const FString& SlotName) const;
	FString ActorSaveFile(const FString& SaveGameName = FString()) const;
	FString PlayerSaveFile(const FString& SaveGameName = FString())  const;

protected:

	bool VerifyOrCreateDirectory(const FString& NewDir) const;

	FString SaveUserDir() const;
	FString UserSubDir() const;
	FString BaseSaveDir() const;
	FString BaseSavePath(const FString& FullSavePath) const;
	FString GetThumbnailFormat() const;

	FString GetFolderOrFile() const;
	FString FullSaveDir(const FString& DataType, FString SaveGameName = FString()) const;

	FString ThumbnailSaveFile(const FString& SaveGameName) const;
	FString SlotFilePath(const FString& SaveGameName = FString()) const;

	FName GetSavedSlotLevelName() const;

/** Thumbnails  */

public:

	UTexture2D* ImportSaveThumbnail(const FString& SaveGameName) const;
	void ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName) const;
	void ExecuteSaveThumbnail(const FString& InSaveName, FImage& ImageToCompress) const;

/** Settings Helpers  */

public:

	inline static bool IsNormalMultiLevelSave()
	{
		return FSettingHelpers::IsNormalMultiLevelSave();
	}

	inline static bool IsStreamMultiLevelSave()
	{
		return FSettingHelpers::IsStreamMultiLevelSave();
	}

	inline static bool IsFullMultiLevelSave()
	{
		return FSettingHelpers::IsFullMultiLevelSave();
	}

	inline static bool IsStackBasedMultiLevelSave()
	{
		return FSettingHelpers::IsStackBasedMultiLevelSave();
	}

	inline static bool IsContainingStreamMultiLevelSave()
	{
		return FSettingHelpers::IsContainingStreamMultiLevelSave();
	}

	inline static bool IsConsoleFileSystem()
	{
		return FSettingHelpers::IsConsoleFileSystem();
	}

	inline static bool IsMultiThreadLoading()
	{
		return FSettingHelpers::IsMultiThreadLoading();
	}

	inline static bool IsDeferredLoading()
	{
		return FSettingHelpers::IsDeferredLoading();
	}

/** Save Helpers  */

public:

	inline TArray<uint8> BytesFromString(const FString& String) const
	{
		return FSaveHelpers::BytesFromString(String);
	}

	inline FString StringFromBytes(const TArray<uint8>& Bytes) const
	{
		return FSaveHelpers::StringFromBytes(Bytes);
	}

	inline bool CompareIdentifiers(const TArray<uint8>& ArrayId, const FString& StringId) const
	{
		return FSaveHelpers::CompareIdentifiers(ArrayId, StringId);
	}

	inline bool IsAsyncSaveOrLoadTaskActive(const ESaveGameMode Mode = ESaveGameMode::MODE_All, const EAsyncCheckType CheckType = EAsyncCheckType::CT_Both, const bool bLog = true) const
	{
		return FAsyncSaveHelpers::IsAsyncSaveOrLoadTaskActive(GetWorld(), Mode, CheckType, bLog);
	}

	inline bool IsPaused() const
	{
		return GetWorld()->IsPaused();
	}
};
