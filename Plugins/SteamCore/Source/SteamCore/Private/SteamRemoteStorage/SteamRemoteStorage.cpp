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

	OnRemoteStorageUnsubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult);
	OnRemoteStorageSubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageSubscribePublishedFileResult);

	if (IsRunningDedicatedServer())
	{
		OnRemoteStorageSubscribePublishedFileResultCallback.SetGameserverFlag();
		OnRemoteStorageUnsubscribePublishedFileResultCallback.SetGameserverFlag();
	}
}

void URemoteStorage::Deinitialize()
{
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Unregister();
	OnRemoteStorageSubscribePublishedFileResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool URemoteStorage::FileDelete(FString File)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileDelete(TCHAR_TO_UTF8(*File));
	}

	return bResult;
}

bool URemoteStorage::FileExists(FString File)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileExists(TCHAR_TO_UTF8(*File));
	}

	return bResult;
}

bool URemoteStorage::FileForget(FString File)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileForget(TCHAR_TO_UTF8(*File));
	}

	return bResult;
}

bool URemoteStorage::FilePersisted(FString File)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FilePersisted(TCHAR_TO_UTF8(*File));
	}

	return bResult;
}

int32 URemoteStorage::FileRead(FString File, TArray<uint8>& OutBuffer, int32 DataToRead)
{
	LogVerbose("");

	int32 m_Result = 0;
	OutBuffer.Empty();

	if (SteamRemoteStorage())
	{
		OutBuffer.SetNum(DataToRead);

		m_Result = SteamRemoteStorage()->FileRead(TCHAR_TO_UTF8(*File), OutBuffer.GetData(), OutBuffer.Num());
	}

	return m_Result;
}

void URemoteStorage::FileReadAsync(const FOnFileReadAsync& Callback, FString File, int32 Offset, int32 BytesToRead)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(this, Callback, File, Offset, BytesToRead);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& OutBuffer, int32 BytesToRead)
{
	LogVerbose("");

	bool bResult = false;

	OutBuffer.Empty();

	if (SteamRemoteStorage())
	{
		OutBuffer.SetNum(BytesToRead);

		bResult = SteamRemoteStorage()->FileReadAsyncComplete(ReadCall.m_hFileReadAsync, OutBuffer.GetData(), OutBuffer.Num());
	}

	return bResult;
}

void URemoteStorage::FileShare(const FOnFileShareAsync& Callback, FString File)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(this, Callback, File);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileWrite(FString File, TArray<uint8> Data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWrite(TCHAR_TO_UTF8(*File), Data.GetData(), Data.Num());
	}

	return bResult;
}

void URemoteStorage::FileWriteAsync(const FOnFileWriteAsync& Callback, FString File, TArray<uint8> Data)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(this, Callback, File, Data);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamCancel(Handle);
	}

	return bResult;
}

bool URemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamClose(Handle);
	}

	return bResult;
}

FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(FString File)
{
	LogVerbose("");

	FUGCFileWriteStreamHandle Result;

	if (SteamRemoteStorage())
	{
		Result = FUGCFileWriteStreamHandle(SteamRemoteStorage()->FileWriteStreamOpen(TCHAR_TO_UTF8(*File)));
	}

	return Result;
}

bool URemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamWriteChunk(Handle, Data.GetData(), Data.Num());
	}

	return bResult;
}

int32 URemoteStorage::GetCachedUGCCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetCachedUGCCount();
	}

	return Result;
}

FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 ICachedContent)
{
	LogVeryVerbose("");

	FSteamUGCHandle Result;

	if (SteamRemoteStorage())
	{
		Result = FSteamUGCHandle(SteamRemoteStorage()->GetCachedUGCHandle(ICachedContent));
	}

	return Result;
}

int32 URemoteStorage::GetFileCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileCount();
	}

	return Result;
}

FString URemoteStorage::GetFileNameAndSize(int32 File, int32& OutFileSizeInBytes)
{
	LogVeryVerbose("");

	FString Result;
	OutFileSizeInBytes = 0;

	if (SteamRemoteStorage())
	{
		Result = UTF8_TO_TCHAR(SteamRemoteStorage()->GetFileNameAndSize(File, &OutFileSizeInBytes));
	}

	return Result;
}

int32 URemoteStorage::GetFileSize(FString File)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileSize(TCHAR_TO_UTF8(*File));
	}

	return Result;
}

int32 URemoteStorage::GetFileTimestamp(FString File)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileTimestamp(TCHAR_TO_UTF8(*File));
	}

	return Result;
}

bool URemoteStorage::GetQuota(int32& OutTotalBytes, int32& OutAvailableBytes)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 TotalBytes = 0;
	uint64 AvailableBytes = 0;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetQuota((&TotalBytes), &AvailableBytes);
	}

	OutTotalBytes = TotalBytes;
	OutAvailableBytes = AvailableBytes;

	return bResult;
}

ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(FString File)
{
	LogVeryVerbose("");

	ESteamRemoteStoragePlatform Result = ESteamRemoteStoragePlatform::None;

	if (SteamRemoteStorage())
	{
		Result = static_cast<ESteamRemoteStoragePlatform>(SteamRemoteStorage()->GetSyncPlatforms(TCHAR_TO_UTF8(*File)));
	}

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

	return bResult;
}

void URemoteStorage::UGCDownload(const FOnUGCDownloadAsync& Callback, FSteamUGCHandle Content, int32 Priority)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload(this, Callback, Content, Priority);
		QueueAsyncTask(Task);
	}
}

int32 URemoteStorage::UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action)
{
	LogVerbose("");

	int32 Result = 0;

	OutData.Empty();
	OutData.AddUninitialized(DataToRead);

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->UGCRead(Content, OutData.GetData(), OutData.Num(), Offset, static_cast<EUGCReadAction>(Action));
	}

	return Result;
}

void URemoteStorage::UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& Callback, FSteamUGCHandle Content, FString Location, int32 Priority)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation(this, Callback, Content, Location, Priority);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& OutBytesDownloaded, int32& OutBytesExpected)
{
	LogVeryVerbose("");

	bool bResult = false;

	OutBytesDownloaded = 0;
	OutBytesExpected = 0;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetUGCDownloadProgress(Handle, &OutBytesDownloaded, &OutBytesExpected);
	}

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForAccount()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForAccount();
	}

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForApp()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForApp();
	}

	return bResult;
}

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		SteamRemoteStorage()->SetCloudEnabledForApp(bEnabled);
	}
}

bool URemoteStorage::SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->SetSyncPlatforms(TCHAR_TO_UTF8(*File), static_cast<ERemoteStoragePlatform>(RemoteStoragePlatform));
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
