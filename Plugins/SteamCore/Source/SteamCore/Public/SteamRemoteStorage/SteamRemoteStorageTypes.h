/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamRemoteStorageTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamRemoteStoragePlatform : uint8
{
	None = 0,
	Windows = (1 << 0),
	OSX = (1 << 1),
	PS3 = (1 << 2),
	Linux = (1 << 3),
	Reserved2 = (1 << 4),
	All = 254
};

ENUM_CLASS_FLAGS(ESteamRemoteStoragePlatform)

UENUM(BlueprintType)
enum class ESteamUGCReadAction : uint8
{
	// Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.
	// If the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.
	// This value maintains the same behavior as before the EUGCReadAction parameter was introduced.
	k_EUGCRead_ContinueReadingUntilFinished = 0,

	// Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.
	// When you are done seeking around the file, make a final call with k_EUGCRead_Close to close it.
	k_EUGCRead_ContinueReading = 1,

	// Frees the file handle.  Use this when you're done reading the content.  
	// To read the file from Steam again you will need to call UGCDownload again. 
	k_EUGCRead_Close = 2,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct STEAMCORE_API FUGCFileWriteStreamHandle
{
	GENERATED_BODY()
public:
	FUGCFileWriteStreamHandle()
		: Value(0)
	{
	}

	FUGCFileWriteStreamHandle(uint64 value)
		: Value(value)
	{
	}

public:
	uint64 GetValue() const { return Value; }
	operator uint64() const { return Value; }
	operator uint64() { return Value; }
private:
	uint64 Value;
};


USTRUCT(BlueprintType)
struct FRemoteStorageFileWriteAsyncComplete
{
	GENERATED_BODY()
public:
	FRemoteStorageFileWriteAsyncComplete()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageFileWriteAsyncComplete(const RemoteStorageFileWriteAsyncComplete_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FRemoteStorageFileReadAsyncComplete
{
	GENERATED_BODY()
public:
	FRemoteStorageFileReadAsyncComplete()
		: Result(ESteamResult::None)
		  , Offset(0)
		  , Read(0)
#if ENABLE_STEAMCORE
		  , m_hFileReadAsync(0)
#endif
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageFileReadAsyncComplete(const RemoteStorageFileReadAsyncComplete_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , Offset(Data.m_nOffset)
		  , Read(Data.m_cubRead)
		  , m_hFileReadAsync(Data.m_hFileReadAsync)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 Offset;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 Read;

#if ENABLE_STEAMCORE
	SteamAPICall_t m_hFileReadAsync;
#endif
};

USTRUCT(BlueprintType)
struct FRemoteStorageFileShareResult
{
	GENERATED_BODY()
public:
	FRemoteStorageFileShareResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageFileShareResult(const RemoteStorageFileShareResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , File(Data.m_hFile)
		  , Filename(Data.m_rgchFilename)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FSteamUGCHandle File;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FString Filename;
};

USTRUCT(BlueprintType)
struct FRemoteStorageUnsubscribePublishedFileResult
{
	GENERATED_BODY()
public:
	FRemoteStorageUnsubscribePublishedFileResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageUnsubscribePublishedFileResult(const RemoteStorageUnsubscribePublishedFileResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , PublishedFileId(Data.m_nPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FPublishedFileID PublishedFileId;
};

USTRUCT(BlueprintType)
struct FRemoteStoragePublishedFileUnsubscribed
{
	GENERATED_BODY()
public:
	FRemoteStoragePublishedFileUnsubscribed()
		: AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStoragePublishedFileUnsubscribed(const RemoteStoragePublishedFileUnsubscribed_t& Data)
		: PublishedFileId(Data.m_nPublishedFileId)
		  , AppID(Data.m_nAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FRemoteStoragePublishedFileSubscribed
{
	GENERATED_BODY()
public:
	FRemoteStoragePublishedFileSubscribed()
		: AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStoragePublishedFileSubscribed(const RemoteStoragePublishedFileSubscribed_t& Data)
		: PublishedFileId(Data.m_nPublishedFileId)
		  , AppID(Data.m_nAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FRemoteStorageDownloadUGCResult
{
	GENERATED_BODY()
public:
	FRemoteStorageDownloadUGCResult()
		: Result(ESteamResult::None)
		  , AppID(0)
		  , SizeInBytes(0)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageDownloadUGCResult(const RemoteStorageDownloadUGCResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , FileHandle(Data.m_hFile)
		  , AppID(Data.m_nAppID)
		  , SizeInBytes(Data.m_nSizeInBytes)
		  , Filename(UTF8_TO_TCHAR(Data.m_pchFileName))
		  , SteamIDOwner(Data.m_ulSteamIDOwner)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FSteamUGCHandle FileHandle; // The handle to the file that was attempted to be downloaded.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 AppID; // ID of the app that created this file.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	int32 SizeInBytes; // The size of the file that was downloaded, in bytes.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FString Filename; // The name of the file that was downloaded. 
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
	FSteamID SteamIDOwner; // Steam ID of the user who created this content.
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageUnsubscribePublishedFileResult, const FRemoteStorageUnsubscribePublishedFileResult&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageSubscribePublishedFileResult, const FRemoteStorageSubscribePublishedFileResult&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileUnsubscribed, const FRemoteStoragePublishedFileUnsubscribed&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileSubscribed, const FRemoteStoragePublishedFileSubscribed&, Data);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileWriteAsync, const FRemoteStorageFileWriteAsyncComplete&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileReadAsync, const FRemoteStorageFileReadAsyncComplete&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUGCDownloadAsync, const FRemoteStorageDownloadUGCResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUGCDownloadToLocationAsync, const FRemoteStorageDownloadUGCResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileShareAsync, const FRemoteStorageFileShareResult&, Data, bool, bWasSuccessful);