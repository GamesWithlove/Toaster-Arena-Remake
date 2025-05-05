/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to the Steam Market for partners.
* https://partner.steamgames.com/doc/webapi/IEconMarketService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebEconMarketServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetMarketEligibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Checks whether or not an account is allowed to use the market
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the user to check
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Market Eligibility", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconMarketService|Async")
	static USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCancelAppListingsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Cancels all of a user's listings for a specific app ID.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app making the request
	* @param	SteamId			The SteamID of the user whose listings should be canceled
	* @param	bSynchronous	Whether or not to wait until all listings have been canceled before returning the response
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Cancel App Listings for User", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconMarketService|Async")
	static USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, bool bSynchronous);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetAssetID
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Returns the asset ID of the item sold in a listing
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	* @param	ListingId (int64)	The identifier of the listing to get information for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Asset ID", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconMarketService|Async")
	static USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString ListingId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPopular
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets the most popular items
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	Language			The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	* @param	Rows				Number of rows per page
	* @param	Start				The result number to start at
	* @param	FilterAppID			If present, the app ID to limit results to
	* @param	ECurrency			If present, prices returned will be represented in this currency
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Popular", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|EconMarketService|Async")
	static USteamCoreWebAsyncActionGetPopular* GetPopularAsync(UObject* WorldContextObject, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
};
