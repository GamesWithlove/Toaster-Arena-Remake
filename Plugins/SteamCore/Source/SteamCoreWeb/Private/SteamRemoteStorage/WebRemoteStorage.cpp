/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Primary interface for interacting with the Steam Workshop and User Generated Content (UGC).
* https://partner.steamgames.com/doc/webapi/IRemoteStorage
*/

#include "SteamRemoteStorage/WebRemoteStorage.h"
#include "SteamRemoteStorage/WebRemoteStorageAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebRemoteStorage::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebRemoteStorage::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebRemoteStorage::EnumerateUserPublishedFiles(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles* Task = new FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::EnumerateUserSubscribedFiles(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 ListType)
{
	FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles* Task = new FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles(this, Callback, Key, SteamId, AppId, ListType);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::GetCollectionDetails(const FOnSteamCoreWebCallback& Callback, TArray<FString> PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebGetCollectionDetails* Task = new FOnlineAsyncTaskSteamCoreWebGetCollectionDetails(this, Callback, PublishedFileIds);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::GetPublishedFileDetails(const FOnSteamCoreWebCallback& Callback, FString PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails* Task = new FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails(this, Callback, PublishedFileIds);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::GetUGCFileDetails(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails* Task = new FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails(this, Callback, Key, SteamId, UGCID, AppId);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::SetUGCUsedByGC(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId, bool bUsed)
{
	FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC* Task = new FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC(this, Callback, Key, SteamId, UGCID, AppId, bUsed);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::SubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile* Task = new FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile(this, Callback, Key, SteamId, AppId, PublishedFileIds);
	QueueAsyncTask(Task);
}

void UWebRemoteStorage::UnsubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile* Task = new FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile(this, Callback, Key, SteamId, AppId, PublishedFileIds);
	QueueAsyncTask(Task);
}
