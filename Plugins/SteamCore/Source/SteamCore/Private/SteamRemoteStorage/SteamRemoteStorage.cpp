/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "SteamRemoteStorage/SteamRemoteStorage.h"
#include "SteamRemoteStorage/SteamRemoteStorageAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void URemoteStorage::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if ENABLE_STEAMCORE
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult);
	OnRemoteStorageSubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageSubscribePublishedFileResult);

	if (IsRunningDedicatedServer())
	{
		OnRemoteStorageSubscribePublishedFileResultCallback.SetGameserverFlag();
		OnRemoteStorageUnsubscribePublishedFileResultCallback.SetGameserverFlag();
	}
#endif
}

void URemoteStorage::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Unregister();
	OnRemoteStorageSubscribePublishedFileResultCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool URemoteStorage::FileDelete(FString File)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileDelete(TCHAR_TO_UTF8(*File));
	}
#endif

	return bResult;
}

bool URemoteStorage::FileExists(FString File)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileExists(TCHAR_TO_UTF8(*File));
	}
#endif

	return bResult;
}

bool URemoteStorage::FileForget(FString File)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileForget(TCHAR_TO_UTF8(*File));
	}
#endif

	return bResult;
}

bool URemoteStorage::FilePersisted(FString File)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FilePersisted(TCHAR_TO_UTF8(*File));
	}
#endif

	return bResult;
}

int32 URemoteStorage::FileRead(FString File, TArray<uint8>& OutBuffer, int32 DataToRead)
{
	LogVerbose("");

	int32 m_Result = 0;
	OutBuffer.Empty();

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		OutBuffer.SetNum(DataToRead);

		m_Result = SteamRemoteStorage()->FileRead(TCHAR_TO_UTF8(*File), OutBuffer.GetData(), OutBuffer.Num());
	}
#endif

	return m_Result;
}

void URemoteStorage::FileReadAsync(const FOnFileReadAsync& Callback, FString File, int32 Offset, int32 BytesToRead)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(this, Callback, File, Offset, BytesToRead);
		QueueAsyncTask(Task);
	}
#endif
}

bool URemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& OutBuffer, int32 BytesToRead)
{
	LogVerbose("");

	bool bResult = false;

	OutBuffer.Empty();

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		OutBuffer.SetNum(BytesToRead);

		bResult = SteamRemoteStorage()->FileReadAsyncComplete(ReadCall.m_hFileReadAsync, OutBuffer.GetData(), OutBuffer.Num());
	}
#endif

	return bResult;
}

void URemoteStorage::FileShare(const FOnFileShareAsync& Callback, FString File)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(this, Callback, File);
		QueueAsyncTask(Task);
	}
#endif
}

bool URemoteStorage::FileWrite(FString File, TArray<uint8> Data)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWrite(TCHAR_TO_UTF8(*File), Data.GetData(), Data.Num());
	}
#endif

	return bResult;
}

void URemoteStorage::FileWriteAsync(const FOnFileWriteAsync& Callback, FString File, TArray<uint8> Data)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(this, Callback, File, Data);
		QueueAsyncTask(Task);
	}
#endif
}

bool URemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamCancel(Handle);
	}
#endif

	return bResult;
}

bool URemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamClose(Handle);
	}
#endif

	return bResult;
}

FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(FString File)
{
	LogVerbose("");

	FUGCFileWriteStreamHandle Result;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = FUGCFileWriteStreamHandle(SteamRemoteStorage()->FileWriteStreamOpen(TCHAR_TO_UTF8(*File)));
	}
#endif

	return Result;
}

bool URemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamWriteChunk(Handle, Data.GetData(), Data.Num());
	}
#endif

	return bResult;
}

int32 URemoteStorage::GetCachedUGCCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetCachedUGCCount();
	}
#endif

	return Result;
}

FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 ICachedContent)
{
	LogVeryVerbose("");

	FSteamUGCHandle Result;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = FSteamUGCHandle(SteamRemoteStorage()->GetCachedUGCHandle(ICachedContent));
	}
#endif

	return Result;
}

int32 URemoteStorage::GetFileCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileCount();
	}
#endif

	return Result;
}

FString URemoteStorage::GetFileNameAndSize(int32 File, int32& OutFileSizeInBytes)
{
	LogVeryVerbose("");

	FString Result;
	OutFileSizeInBytes = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = UTF8_TO_TCHAR(SteamRemoteStorage()->GetFileNameAndSize(File, &OutFileSizeInBytes));
	}
#endif

	return Result;
}

int32 URemoteStorage::GetFileSize(FString File)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileSize(TCHAR_TO_UTF8(*File));
	}
#endif

	return Result;
}

int32 URemoteStorage::GetFileTimestamp(FString File)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileTimestamp(TCHAR_TO_UTF8(*File));
	}
#endif

	return Result;
}

bool URemoteStorage::GetQuota(int32& OutTotalBytes, int32& OutAvailableBytes)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 TotalBytes = 0;
	uint64 AvailableBytes = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetQuota((&TotalBytes), &AvailableBytes);
	}

	OutTotalBytes = TotalBytes;
	OutAvailableBytes = AvailableBytes;
#endif

	return bResult;
}

ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(FString File)
{
	LogVeryVerbose("");

	ESteamRemoteStoragePlatform Result = ESteamRemoteStoragePlatform::None;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = static_cast<ESteamRemoteStoragePlatform>(SteamRemoteStorage()->GetSyncPlatforms(TCHAR_TO_UTF8(*File)));
	}
#endif

	return Result;
}

bool URemoteStorage::GetUGCDetails(FSteamUGCHandle Handle, int32& OutAppID, FString& OutName, int32& OutFileSizeInBytes, FSteamID& OutSteamIdOwner)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint32 AppId = 0;
	OutName.Empty();
	OutFileSizeInBytes = 0;
	OutSteamIdOwner = FSteamID();

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		CSteamID SteamIdOwner;
		char* Name = new char[256];
		int32 FileSizeInBytes = 0;

		bResult = SteamRemoteStorage()->GetUGCDetails(Handle, &AppId, &Name, &FileSizeInBytes, &SteamIdOwner);

		if (bResult)
		{
			OutFileSizeInBytes = FileSizeInBytes;
			OutSteamIdOwner = SteamIdOwner;
			OutAppID = AppId;
			OutName = UTF8_TO_TCHAR(Name);
		}

		delete[] Name;
	}
#endif

	return bResult;
}

void URemoteStorage::UGCDownload(const FOnUGCDownloadAsync& Callback, FSteamUGCHandle Content, int32 Priority)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload(this, Callback, Content, Priority);
		QueueAsyncTask(Task);
	}
#endif
}

int32 URemoteStorage::UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action)
{
	LogVerbose("");

	int32 Result = 0;

	OutData.Empty();
	OutData.AddUninitialized(DataToRead);

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->UGCRead(Content, OutData.GetData(), OutData.Num(), Offset, static_cast<EUGCReadAction>(Action));
	}
#endif

	return Result;
}

void URemoteStorage::UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& Callback, FSteamUGCHandle Content, FString Location, int32 Priority)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation(this, Callback, Content, Location, Priority);
		QueueAsyncTask(Task);
	}
#endif
}

bool URemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& OutBytesDownloaded, int32& OutBytesExpected)
{
	LogVeryVerbose("");

	bool bResult = false;

	OutBytesDownloaded = 0;
	OutBytesExpected = 0;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetUGCDownloadProgress(Handle, &OutBytesDownloaded, &OutBytesExpected);
	}
#endif

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForAccount()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForAccount();
	}
#endif

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForApp()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForApp();
	}
#endif

	return bResult;
}

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		SteamRemoteStorage()->SetCloudEnabledForApp(bEnabled);
	}
#endif
}

bool URemoteStorage::SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->SetSyncPlatforms(TCHAR_TO_UTF8(*File), static_cast<ERemoteStoragePlatform>(RemoteStoragePlatform));
	}
#endif

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult(RemoteStorageUnsubscribePublishedFileResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RemoteStorageUnsubscribePublishedFileResult.Broadcast(Data);
	});
}

void URemoteStorage::OnRemoteStorageSubscribePublishedFileResult(RemoteStorageSubscribePublishedFileResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RemoteStorageSubscribePublishedFileResult.Broadcast(Data);
	});
}

void URemoteStorage::OnRemoteStoragePublishedFileUnsubscribed(RemoteStoragePublishedFileUnsubscribed_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RemoteStoragePublishedFileUnsubscribed.Broadcast(Data);
	});
}

void URemoteStorage::OnRemoteStoragePublishedFileSubscribed(RemoteStoragePublishedFileSubscribed_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RemoteStoragePublishedFileSubscribed.Broadcast(Data);
	});
}
#endif