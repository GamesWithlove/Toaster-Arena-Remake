/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IGameServersService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebGameServersService.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebGameServersService : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebGameServersService() { SubsystemType = ESubsystemWeb::GameServers; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Gets a list of game server accounts with their logon tokens
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void GetAccountList(const FOnSteamCoreWebCallback& Callback, FString Key);

	/**
	* Creates a persistent game server account
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The app to use the account for
	* @param	Memo		The Memo to set on the new account
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void CreateAccount(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Memo);

	/**
	* This method changes the Memo associated with the game server account. Memos do not affect the account in any way.
	* The Memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the game server to set the Memo on
	* @param	Memo		The Memo to set on the new account
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void SetMemo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Memo);

	/**
	* Generates a new login token for the specified game server
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the game server to reset the login token of
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void ResetLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* Deletes a persistent game server account
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the game server account to delete
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void DeleteAccount(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* Gets public information about a given game server account
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		The SteamID of the game server to get info on
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void GetAccountPublicInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* Queries the status of the specified token, which must be owned by you
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	LoginToken		Login token to query
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void QueryLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString LoginToken);

	/**
	* performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			
	* @param	bBanned			
	* @param	banSeconds		
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void SetBanStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, bool bBanned, int32 banSeconds);

	/**
	* Gets a list of server SteamIDs given a list of IPs
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	ServerIp
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void GetServerSteamIDsByIP(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerIp);

	/**
	* Gets a list of server IP addresses given a list of SteamIDs
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	ServerSteamId
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|GameServersService")
	void GetServerIPsBySteamID(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerSteamId);
};
