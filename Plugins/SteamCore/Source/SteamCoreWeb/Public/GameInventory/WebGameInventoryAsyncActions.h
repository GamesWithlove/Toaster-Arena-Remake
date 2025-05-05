/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* The primary interface to interact with the Steam Economy.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* See also: https://partner.steamgames.com/doc/webapi/ISteamEconomy
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebGameInventoryAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a history of Commands
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	SteamId			The steam ID of the account to operate on
	* @param	Command			The Command to run on that asset
	* @param	ContextId		The context to fetch history for
	* @param	Arguments		The arguments that were provided with the Command in the first place
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get History Command Details", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|GameInventory|Async")
	static USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a history of user
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	SteamId			The Steam ID to fetch history for
	* @param	ContextId		The context to fetch history for
	* @param	StartTime		Start time of the history range to collect
	* @param	EndTime			End time of the history range to collect
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User History", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|GameInventory|Async")
	static USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionHistoryExecuteCommand
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a history of user
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	SteamId			The Steam ID to fetch history for
	* @param	ContextId		The context to fetch history for
	* @param	ActorId			A unique 32 bit ID for the support person executing the Command
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "History Execute Commands", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|GameInventory|Async")
	static USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSupportGetAssetHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets a history of user
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	AssetId			The asset ID to operate on
	* @param	ContextId		The context to fetch history for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Support Get Asset History", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|GameInventory|Async")
	static USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString AssetId, FString ContextId);
};
