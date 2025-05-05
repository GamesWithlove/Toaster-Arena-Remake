/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamPublishedItemSearch
*/

#include "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h"
#include "PublishedItemSearch/WebPublishedItemSearchAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWeb.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByPublicationOrder
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRankedByPublicationOrder* USteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRankedByPublicationOrder>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, Tag, UserTag);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByTrend
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRankedByTrend* USteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRankedByTrend>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRankedByTrend(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, Days, Tag, UserTag);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRankedByVote* USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRankedByVote>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRankedByVote(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, StartId, Count, bHasAppAdminAccess, FileType, Tag, UserTag);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionResultSetSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionResultSetSummary* USteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionResultSetSummary>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebResultSetSummary(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, StartId, bHasAppAdminAccess, FileType, Tag, UserTag);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
