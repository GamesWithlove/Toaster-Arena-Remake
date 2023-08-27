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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebEconServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a history of trades
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	MaxTrades				The number of trades to return information for
	* @param	StartAfterTime			The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back
	* @param	StartAfterTradeId		The tradeid shown on the previous page of results, or the ID of the first trade if navigating back
	* @param	bNavigatingBack			The user wants the previous page of results, so return the previous max_trades trades before the start time and ID
	* @param	bGetDescriptions		If set, the item display data for the items included in the returned trades will also be returned
	* @param	Language				The language to use when loading item display data
	* @param	bIncludeFailed			Include Failed
	* @param	bIncludeTotal			If set, the total number of trades the account has participated in will be included in the response
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Trade History", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(UObject* WorldContextObject, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushInventoryCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Flushes the cache for a user's inventory in a specific app context
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			User to clear cache for.
	* @param	AppId			App to clear cache for.
	* @param	ContextId		Context to clear cache for.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Flush Inventory Cache", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ContextId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushAssetAppearanceCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Flush Asset Appearance Cache", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFlushContextCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Flush Context Cache", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get a list of sent or received trade offers
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	bGetSentOffers			Request the list of sent offers.
	* @param	bGetReceivedOffers		Request the list of received offers.
	* @param	bGetDescriptions		If set, the item display data for the items included in the returned trade offers will also be returned.
	* @param	Language				The language to use when loading item display data.
	* @param	bActiveOnly				Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff
	* @param	bHistoricalOnly			Indicates we should only return offers which are not active.
	* @param	TimeHistoricalCutoff	When active_only is set, offers updated since this time will also be returned
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Trade Offers", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a specific trade offer
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Trade Offer", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get counts of pending and new trade offers
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	TimeLastVisit			The time the user last visited. If not passed, will use the time the user last visited the trade offer page.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Trade Offers Summary", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(UObject* WorldContextObject, FString Key, int32 TimeLastVisit);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Decline a trade offer someone sent to us
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	TradeOfferId
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Decline Trade Offer", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCancelTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Cancel a trade offer we sent
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	TradeOfferId
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Cancel Trade Offer"), Category = "SteamCoreWeb|EconService|Async")
	static USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId);
};
