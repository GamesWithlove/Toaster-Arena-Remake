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

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebGameInventory.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebGameInventory : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebGameInventory() { SubsystemType = ESubsystemWeb::GameInventory; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameInventory")
	void GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments);

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameInventory")
	void GetUserHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime);

	/**
	* Gets a history of user
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	SteamId			The Steam ID to fetch history for
	* @param	ContextId		The context to fetch history for
	* @param	ActorId			A unique 32 bit ID for the support person executing the Command
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameInventory")
	void HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId);

	/**
	* Gets a history of user
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			appid of game
	* @param	AssetId			The asset ID to operate on
	* @param	ContextId		The context to fetch history for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameInventory")
	void SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString AssetId, FString ContextId);

	/**
	* FUNCTION NOT SUPPORTED
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameInventory")
	void UpdateItemDefs();
};
