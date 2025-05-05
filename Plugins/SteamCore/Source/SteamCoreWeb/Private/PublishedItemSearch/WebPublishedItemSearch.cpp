/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamPublishedItemSearch
*/

#include "PublishedItemSearch/WebPublishedItemSearch.h"
#include "PublishedItemSearch/WebPublishedItemSearchAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamPublishedItemSearch::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamPublishedItemSearch::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamPublishedItemSearch::RankedByPublicationOrder(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder* Task = new FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder(this, Callback, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, Tag, UserTag);
	QueueAsyncTask(Task);
}

void UWebSteamPublishedItemSearch::RankedByTrend(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 days, TArray<FString> Tag, TArray<FString> UserTag)
{
	FOnlineAsyncTaskSteamCoreWebRankedByTrend* Task = new FOnlineAsyncTaskSteamCoreWebRankedByTrend(this, Callback, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, days, Tag, UserTag);
	QueueAsyncTask(Task);
}

void UWebSteamPublishedItemSearch::RankedByVote(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	FOnlineAsyncTaskSteamCoreWebRankedByVote* Task = new FOnlineAsyncTaskSteamCoreWebRankedByVote(this, Callback, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, Tag, UserTag);
	QueueAsyncTask(Task);
}

void UWebSteamPublishedItemSearch::ResultSetSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	FOnlineAsyncTaskSteamCoreWebResultSetSummary* Task = new FOnlineAsyncTaskSteamCoreWebResultSetSummary(this, Callback, Key, SteamId, AppId, StartId, bHasAppAdminAccess, FileType, Tag, UserTag);
	QueueAsyncTask(Task);
}
