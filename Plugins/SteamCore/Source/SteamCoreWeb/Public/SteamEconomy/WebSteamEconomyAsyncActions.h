/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamEconomy
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebSteamEconomyAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCanTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Can trade
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				That the Key is associated with. Must be a steam economy app.
	* @param	SteamId				SteamID of user attempting to initiate a trade
	* @param	TargetId (int64)	SteamID of user that is the target of the trade invitation
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Can Trade", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionCanTrade* CanTradeAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString TargetId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFinalizeAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Finalize Asset Transaction
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The app ID the user is buying assets for
	* @param	SteamId		SteamID of the user making a purchase
	* @param	TxnId		The transaction ID
	* @param	Language	The local Language for the user
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Finalize Asset Transaction", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetAssetClassInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Asset Class Info
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app ID the user is buying assets for
	* @param	Language		The user's local Language
	* @param	ClassCount		Number of classes requested. Must be at least one.
	* @param	ClassId			Class ID of the nth class.
	* @param	InstanceId		Instance ID of the nth class.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Asset Class Info", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetAssetPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Returns prices and categories for items that users are able to purchase.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app ID the user is buying assets for
	* @param	Currency		The currency to filter for
	* @param	Language		The user's local Language
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Asset Prices", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Currency, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetExportedAssetsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Exported Assets for User
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				SteamID of user
	* @param	AppId				The app to get exported items from.
	* @param	ContextId (int64)	The context in the app to get exported items from.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Exported Assets for User", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ContextId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetMarketPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Market Prices
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app ID the user is buying assets for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Market Prices", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionStartAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Start Asset Transaction
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The app ID the user is buying assets for
	* @param	SteamId				SteamID of user making a purchase
	* @param	AssetId				The ID of the first asset the user is buying - there must be at least one
	* @param	AssetQuantity		The quantity of assetid0's the the user is buying
	* @param	Currency			The local currency for the user
	* @param	Language			The local Language for the user
	* @param	Ipaddress			The user's IP address
	* @param	Referer				The referring URL
	* @param	bClientAuth			If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Start Asset Transaction"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionStartTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Start Trade
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			The app ID the user is buying assets for
	* @param	SteamId1		SteamID of first user in the trade
	* @param	SteamId2		SteamID of second user in the trade
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Start Trade"), Category = "SteamCoreWeb|SteamEconomy|Async")
	static USteamCoreWebAsyncActionStartTrade* StartTradeAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId1, FString SteamId2);
};
