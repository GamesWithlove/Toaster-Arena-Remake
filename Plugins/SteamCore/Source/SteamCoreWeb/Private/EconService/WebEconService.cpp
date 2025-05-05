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

#include "EconService/WebEconService.h"
#include "EconService/WebEconServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebEconService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebEconService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebEconService::GetTradeHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal)
{
	FOnlineAsyncTaskSteamCoreWebGetTradeHistory* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeHistory(this, Callback, Key, MaxTrades, StartAfterTime, StartAfterTradeId, bNavigatingBack, bGetDescriptions, Language, bIncludeFailed, bIncludeTotal);
	QueueAsyncTask(Task);
}

void UWebEconService::FlushInventoryCache(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 appID, FString ContextId)
{
	FOnlineAsyncTaskSteamCoreWebFlushInventoryCache* Task = new FOnlineAsyncTaskSteamCoreWebFlushInventoryCache(this, Callback, Key, SteamId, appID, ContextId);
	QueueAsyncTask(Task);
}

void UWebEconService::FlushAssetAppearanceCache(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID)
{
	FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache* Task = new FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache(this, Callback, Key, appID);
	QueueAsyncTask(Task);
}

void UWebEconService::FlushContextCache(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID)
{
	FOnlineAsyncTaskSteamCoreWebFlushContextCache* Task = new FOnlineAsyncTaskSteamCoreWebFlushContextCache(this, Callback, Key, appID);
	QueueAsyncTask(Task);
}

void UWebEconService::GetTradeOffers(const FOnSteamCoreWebCallback& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
{
	FOnlineAsyncTaskSteamCoreWebGetTradeOffers* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffers(this, Callback, Key, bGetSentOffers, bGetReceivedOffers, bGetDescriptions, Language, bActiveOnly, bHistoricalOnly, TimeHistoricalCutoff);
	QueueAsyncTask(Task);
}

void UWebEconService::GetTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebGetTradeOffer* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffer(this, Callback, Key, TradeOfferId, Language);
	QueueAsyncTask(Task);
}

void UWebEconService::GetTradeOffersSummary(const FOnSteamCoreWebCallback& Callback, FString Key, int32 TimeLastVisit)
{
	FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary* Task = new FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary(this, Callback, Key, TimeLastVisit);
	QueueAsyncTask(Task);
}

void UWebEconService::DeclineTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId)
{
	FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer* Task = new FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer(this, Callback, Key, TradeOfferId);
	QueueAsyncTask(Task);
}

void UWebEconService::CancelTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId)
{
	FOnlineAsyncTaskSteamCoreWebCancelTradeOffer* Task = new FOnlineAsyncTaskSteamCoreWebCancelTradeOffer(this, Callback, Key, TradeOfferId);
	QueueAsyncTask(Task);
}
