//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "Misc/EngineVersion.h"

class FMemoryReader;
class FMemoryWriter;

/*
Legacy Version History:
- EMS 100:  No header present. Raw data only.
- EMS 150:  Intermediate header format inside Bulk data.
- EMS 177+: Future proof file format.

New File Layout:
[ SECTION: HEADER ]	- Variable Size (determined by FSaveHeader serialization)
[ SECTION: DATA   ]	- Variable Size (The actual Save Payload). Can be compressed.
[ SECTION: FOOTER ]	- Fixed Size (8 Bytes)
*/

struct FFileContext
{
	//Used to pass simple data around within the file system

public:

	const uint32 Player;
	const FString Path;

	//Can be used for header later
	const uint32 Flags = 0;

	//The legacy version passed through this 
	const FPackageFileVersion LegacyFileVersion;

	FFileContext(const uint32 InPlayer, const FString& InPath)
		: Player(InPlayer)
		, Path(InPath)
	{
	}

	FFileContext(const uint32 InPlayer, const FString& InPath, const FPackageFileVersion& InLegacyVersion)
		: Player(InPlayer)
		, Path(InPath)
		, LegacyFileVersion(InLegacyVersion)
	{
	}
};

struct FGameVersionInfo
{

private:

	uint32 Plugin;
	uint32 Game;

public:

	FGameVersionInfo() = default;
	FGameVersionInfo(const uint32& InPlugin, const uint32& InGame)
	{
		Plugin = InPlugin;
		Game = InGame;
	}

	friend FArchive& operator<<(FArchive& Ar, FGameVersionInfo& InInfo)
	{
		Ar << InInfo.Plugin;
		Ar << InInfo.Game;
		return Ar;
	}

	inline FString GetPluginVer() const
	{
		return FString::FromInt(Plugin);
	}

	inline FString GetGameVer() const
	{
		return FString::FromInt(Game);
	}

	inline uint32 GetPluginVal() const
	{
		return Plugin;
	}

	inline uint32 GetGameVal() const
	{
		return Game;
	}
};

struct FFileVersionInfo
{
	friend struct FSaveHeader;

private:

	/*
	Legacy version handling is tightly coupled to the load/save pipeline:
	- bLegacyFile is only true during the initial load of an old file.
	- When the file is re-saved, the original LegacyPackageVersion is preserved in the new header.
	- Stored version is used to correctly interpret data that has not yet been reloaded.
	- Ensures backward compatibility after upgrade to newer PackageVersion format.
	*/

	FPackageFileVersion PackageVersion;
	FPackageFileVersion LegacyPackageVersion;
	FEngineVersion EngineVersion;

	bool bLegacyFile = false;

public:

	FFileVersionInfo() = default;
	FFileVersionInfo(const FPackageFileVersion& InPack, const FEngineVersion& InEngine)
	{
		PackageVersion = InPack;
		EngineVersion = InEngine;
	}

	friend FArchive& operator<<(FArchive& Ar, FFileVersionInfo& InInfo)
	{
		Ar << InInfo.PackageVersion;
		Ar << InInfo.LegacyPackageVersion;
		Ar << InInfo.EngineVersion;

		return Ar;
	}

	inline bool IsValid() const
	{
		return !EngineVersion.IsEmpty() && PackageVersion.ToValue() > 0;
	}

	inline FPackageFileVersion GetPackageVer() const
	{
		return PackageVersion;
	}

	inline FEngineVersion GetEngineVer() const
	{
		return EngineVersion;
	}

	inline uint32 GetPackageVal() const
	{
		return PackageVersion.ToValue();
	}

	inline void StoreLegacyVersion(const FPackageFileVersion& InPack)
	{
		LegacyPackageVersion = InPack;
	}

	inline bool IsLegacyFile() const
	{
		return bLegacyFile;
	}

	inline FPackageFileVersion GetLegacyVer() const
	{
		return LegacyPackageVersion;
	}

	inline uint32 GetLegacyVal() const
	{
		return LegacyPackageVersion.ToValue();
	}
};

struct FSaveHeader
{
	friend class FSaveFileIntegrity;

private:

	uint32 Tag = 0;
	uint32 Version = 0;
	FFileVersionInfo FileVersion;
	FGameVersionInfo GameVersion;

	int64 UnixTimeStamp = 0;
	uint32 Flags = 0;

	uint8 MultiLevel = 0;
	uint8 Reserved1 = 0;
	uint8 Reserved2 = 0;
	uint8 Reserved3 = 0;

	bool bLoadedLegacyFile = false;

public:

	friend FArchive& operator<<(FArchive& Ar, FSaveHeader& In)
	{
		Ar << In.Tag;
		Ar << In.Version;
		Ar << In.FileVersion;
		Ar << In.GameVersion;

		Ar << In.UnixTimeStamp;

		//Used for booleans
		Ar << In.Flags;

		//Used for enums
		Ar << In.MultiLevel;
		Ar << In.Reserved1;
		Ar << In.Reserved2;
		Ar << In.Reserved3;

		return Ar;
	}

	void Build(const FFileContext& Context);

	inline void InitVersionInfo(FFileVersionInfo& OutFileVersionInfo)
	{
		OutFileVersionInfo = FileVersion;
		OutFileVersionInfo.bLegacyFile = bLoadedLegacyFile;
	}

	inline FPackageFileVersion GetPackageVer() const
	{
		return FileVersion.PackageVersion;
	}

	inline FEngineVersion GetEngineVer() const
	{
		return FileVersion.EngineVersion;
	}

	inline FGameVersionInfo GetGameVersion() const
	{
		return GameVersion;
	}

	inline bool IsLegacy() const
	{
		return bLoadedLegacyFile;
	}

	inline bool IsDataCompressed() const
	{
		return Flags & EMS::FLAG_COMPRESSED;
	}

	inline EMultiLevelSaveMethod GetLoadedMultiLevelMode() const
	{
		return EMultiLevelSaveMethod(MultiLevel);
	}

	inline int64 GetTime() const
	{
		return UnixTimeStamp;
	}

	inline uint32 GetHeaderVer() const
	{
		return Version;
	}
};

struct FSaveFooter
{
	friend class FSaveFileIntegrity;

private:

	uint32 Tag = 0;
	uint32 Hash = 0;

public:

	friend FArchive& operator<<(FArchive& Ar, FSaveFooter& In)
	{
		Ar << In.Tag;
		Ar << In.Hash;

		return Ar;
	}

	void Build(const uint32 InHash);

	static constexpr int32 GetStaticFooterSize()
	{
		/*
		Returns the exact binary size of the footer on disk (8 bytes).
		We avoid sizeof(FSaveFooter) to prevent compiler padding issues.
		*/
		return (sizeof(uint32) * 2);
	}
};

class EASYMULTISAVE_API FSaveVersion
{

public:

	static FString GetEngineString(const FEngineVersion& InEngine);
	static FString GetSettingsGameVersion();
	static bool IsSaveGameVersionEqual(const FGameVersionInfo& SaveVersion);
	static bool IsPluginVersionEqual(const FGameVersionInfo& SaveVersion);
	static FGameVersionInfo MakeSaveGameVersion();

	static FPackageFileVersion GetStaticOldPackageVersion();
	static void HandleLegacyFileVersion(FMemoryReader& MemoryReader, FFileVersionInfo& LastFileVersion);

	static void ApplyFileVersionInfo(const FFileVersionInfo& InFileVersion, FMemoryReader& OutMemoryReader);
};

class EASYMULTISAVE_API FSaveFileIntegrity
{

public:

	static bool CheckAndSaveFile(const FFileContext& Context, const TArray<uint8>& InData);
	static EFileValidity CheckAndLoadFile(const FFileContext& Context, TArray<uint8>& OutData, FSaveHeader& OutHeader);

	static bool HasFileHeaderTag(const TArray<uint8>& RawData); 
	static EFileValidity IsFileValidFast(const FFileContext& Context, FSaveHeader& OutHeader);
	static bool IsFileHashValid(const TArray<uint8>& RawData, FSaveHeader& OutHeader);

	static bool SaveToFile(const FFileContext& Context, const TArray<uint8>& InData);
	static EFileValidity LoadRawSaveData(const FFileContext& Context, TArray<uint8>& OutRawData);
	static bool IsZeroData(const FString& InSavePath, const TArray<uint8>& InRawData);
	static bool DeleteSaveFile(const FFileContext& Context);
	static bool DoesSaveExist(const FFileContext& Context);

	static EIntegrityCheckResult CheckSaveGameIntegrity(const FFileContext& Context, const bool bCheckVersion);
	static bool HasMultiLevelCompatibility(const FFileContext& Context, const FSaveHeader& InHeader);
	static void PerformAutoBackup(const FFileContext& Context);
};