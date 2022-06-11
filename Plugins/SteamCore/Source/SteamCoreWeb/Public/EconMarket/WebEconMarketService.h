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

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebEconMarketService.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebEconMarketService : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebEconMarketService() { SubsystemType = ESubsystemWeb::EconMarket; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Checks whether or not an account is allowed to use the market
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the user to check
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconMarketService")
	void GetMarketEligibility(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* Cancels all of a user's listings for a specific app ID.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app making the request
	* @param	SteamId			The SteamID of the user whose listings should be canceled
	* @param	bSynchronous	Whether or not to wait until all listings have been canceled before returning the response
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconMarketService")
	void CancelAppListingsForUser(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, bool bSynchronous);

	/**
	* Returns the asset ID of the item sold in a listing
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	* @param	ListingId (int64)	The identifier of the listing to get information for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconMarketService")
	void GetAssetID(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ListingId);

	/**
	* Gets the most popular items
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	Language			The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	* @param	Rows				Number of rows per page
	* @param	Start				The result number to start at
	* @param	FilterAppId			If present, the app ID to limit results to
	* @param	ECurrency			If present, prices returned will be represented in this currency
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|EconMarketService")
	void GetPopular(const FOnSteamCoreWebCallback& Callback, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
};
