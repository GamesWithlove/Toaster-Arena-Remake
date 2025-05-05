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

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebEconService.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebEconService : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebEconService() { SubsystemType = ESubsystemWeb::Econ; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void GetTradeHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal);

	/**
	* Flushes the cache for a user's inventory in a specific app context
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			User to clear cache for.
	* @param	AppId			App to clear cache for.
	* @param	ContextId		Context to clear cache for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void FlushInventoryCache(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId);

	/**
	* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void FlushAssetAppearanceCache(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId);

	/**
	* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void FlushContextCache(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId);

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void GetTradeOffers(const FOnSteamCoreWebCallback& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);

	/**
	* Gets a specific trade offer
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void GetTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId, FString Language);

	/**
	* Get counts of pending and new trade offers
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	TimeLastVisit			The time the user last visited. If not passed, will use the time the user last visited the trade offer page.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void GetTradeOffersSummary(const FOnSteamCoreWebCallback& Callback, FString Key, int32 TimeLastVisit);

	/**
	* Decline a trade offer someone sent to us
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	TradeOfferId
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void DeclineTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId);

	/**
	* Cancel a trade offer we sent
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	TradeOfferId		
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconService")
	void CancelTradeOffer(const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId);
};
