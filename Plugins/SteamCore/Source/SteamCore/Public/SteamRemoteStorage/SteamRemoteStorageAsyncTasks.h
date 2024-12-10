/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamRemoteStorageTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileWriteAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(class USteamCoreSubsystem* Subsystem, const FOnFileWriteAsync Callback, const FString File, const TArray<uint8> Data, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_File(File)
		  , m_Data(Data)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync() = delete;
protected:
	RemoteStorageFileWriteAsyncComplete_t m_CallbackResults;
	FString m_File;
	TArray<uint8> m_Data;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileReadAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(class USteamCoreSubsystem* Subsystem, const FOnFileReadAsync Callback, const FString File, const int32 Offset, const int32 BytesToRead, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_File(File)
		  , m_Offset(Offset)
		  , m_BytesToRead(BytesToRead)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync() = delete;
protected:
	RemoteStorageFileReadAsyncComplete_t m_CallbackResults;
	FString m_File;
	int32 m_Offset;
	int32 m_BytesToRead;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileShare : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileShareAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(class USteamCoreSubsystem* Subsystem, const FOnFileShareAsync Callback, const FString File, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_File(File)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare() = delete;
protected:
	RemoteStorageFileShareResult_t m_CallbackResults;
	FString m_File;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileShare")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUGCDownloadAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload(class USteamCoreSubsystem* Subsystem, const FOnUGCDownloadAsync Callback, const FSteamUGCHandle Content, const int32 Priority, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Content(Content)
		  , m_Priority(Priority)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload() = delete;
protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle m_Content;
	int32 m_Priority;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUGCDownloadToLocationAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation(class USteamCoreSubsystem* Subsystem, const FOnUGCDownloadToLocationAsync Callback, const FSteamUGCHandle Content, const FString Location, const int32 Priority, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Content(Content)
		  , m_Location(Location)
		  , m_Priority(Priority)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation() = delete;
protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle m_Content;
	FString m_Location;
	int32 m_Priority;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation")); }
};
#endif