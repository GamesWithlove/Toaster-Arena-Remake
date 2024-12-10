/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Workshop items.
* https://partner.steamgames.com/doc/webapi/IPublishedFileService
*/

#include "PublishedFileService/WebPublishedFileService.h"
#include "PublishedFileService/WebPublishedFileServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebPublishedFileService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebPublishedFileService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebPublishedFileService::QueryFiles(const FOnSteamCoreWebCallback& Callback, FString Key, int32 QueryType, int32 Page, FString Cursor, int32 NumPerPage, int32 CreatorAppId, int32 AppId, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32 FileType, FString ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetaData, int32 ReturnPlaytimeStats)
{
	FOnlineAsyncTaskSteamCoreWebQueryFiles* Task = new FOnlineAsyncTaskSteamCoreWebQueryFiles(this, Callback, Key, QueryType, Page, Cursor, NumPerPage, CreatorAppId, AppId, RequiredTags, ExcludedTags, bMatchAllTags, RequiredFlags, OmittedFlags, SearchText, FileType, ChildPublishedFileId, Days, bIncludeRecentVotesOnly, CacheMaxAgeSeconds, Language, RequiredKvTags, bTotalOnly, bIDsOnly, bReturnVoteData, bReturnTags, bReturnKvTags, bReturnPreviews, bReturnChildren, bReturnShortDescription, bReturnForSaleData, bReturnMetaData, ReturnPlaytimeStats);
	QueueAsyncTask(Task);
}

void UWebPublishedFileService::SetDeveloperMetadata(const FOnSteamCoreWebCallback& Callback, FString Key, FString publishedFileID, int32 AppId, FString MetaData)
{
	FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata* Task = new FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata(this, Callback, Key, publishedFileID, AppId, MetaData);
	QueueAsyncTask(Task);
}

void UWebPublishedFileService::UpdateBanStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString publishedFileID, int32 AppId, bool bBanned, FString Reason)
{
	FOnlineAsyncTaskSteamCoreWebUpdateBanStatus* Task = new FOnlineAsyncTaskSteamCoreWebUpdateBanStatus(this, Callback, Key, publishedFileID, AppId, bBanned, Reason);
	QueueAsyncTask(Task);
}

void UWebPublishedFileService::UpdateIncompatibleStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString publishedFileID, int32 AppId, bool bIncompatible)
{
	FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus* Task = new FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus(this, Callback, Key, publishedFileID, AppId, bIncompatible);
	QueueAsyncTask(Task);
}

void UWebPublishedFileService::UpdateTags(const FOnSteamCoreWebCallback& Callback, FString Key, FString publishedFileID, int32 AppId, FString AddTags, FString RemoveTags)
{
	FOnlineAsyncTaskSteamCoreWebUpdateTags* Task = new FOnlineAsyncTaskSteamCoreWebUpdateTags(this, Callback, Key, publishedFileID, AppId, AddTags, RemoveTags);
	QueueAsyncTask(Task);
}
