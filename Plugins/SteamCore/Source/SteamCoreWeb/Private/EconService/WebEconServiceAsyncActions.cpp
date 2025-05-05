/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Additional Steam Economy methods that provide access to Steam Trading.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "EconService/WebEconServiceAsyncActions.h"
#include "EconService/WebEconServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetTradeHistory* USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(UObject* WorldContextObject, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetTradeHistory>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeHistory(Subsystem, AsyncObject->OnCallbackInternal, Key, MaxTrades, StartAfterTime, StartAfterTradeId, bNavigatingBack, bGetDescriptions, Language, bIncludeFailed, bIncludeTotal);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushInventoryCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionFlushInventoryCache* USteamCoreWebAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ContextId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionFlushInventoryCache>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebFlushInventoryCache(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, ContextId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushAssetAppearanceCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionFlushAssetAppearanceCache* USteamCoreWebAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionFlushAssetAppearanceCache>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushContextCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionFlushContextCache* USteamCoreWebAsyncActionFlushContextCache::FlushContextCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionFlushContextCache>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebFlushContextCache(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetTradeOffers* USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetTradeOffers>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffers(Subsystem, AsyncObject->OnCallbackInternal, Key, bGetSentOffers, bGetReceivedOffers, bGetDescriptions, Language, bActiveOnly, bHistoricalOnly, TimeHistoricalCutoff);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetTradeOffer* USteamCoreWebAsyncActionGetTradeOffer::GetTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetTradeOffer>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffer(Subsystem, AsyncObject->OnCallbackInternal, Key, TradeOfferId, Language);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetTradeOffersSummary* USteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(UObject* WorldContextObject, FString Key, int32 TimeLastVisit)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetTradeOffersSummary>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary(Subsystem, AsyncObject->OnCallbackInternal, Key, TimeLastVisit);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionDeclineTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionDeclineTradeOffer* USteamCoreWebAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionDeclineTradeOffer>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer(Subsystem, AsyncObject->OnCallbackInternal, Key, TradeOfferId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCancelTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionCancelTradeOffer* USteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionCancelTradeOffer>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebCancelTradeOffer(Subsystem, AsyncObject->OnCallbackInternal, Key, TradeOfferId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
