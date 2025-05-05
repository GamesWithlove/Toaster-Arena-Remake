/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamMatchmakingServersTypes.h"
#include "SteamMatchmakingServersAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPingServerAsyncDelegate, const FGameServerItem&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnServerUpdatedAsyncDelegate, const FGameServerItem&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnServerRuleAsyncDelegate, const TArray<FGameServerRule>&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnServerRefreshCompleteDelegate);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnPingServerAsyncDelegate OnCallback;
public:
	/**
	* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.
	*
	* @param	IP		The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	Port	The port of the game server you are querying, in host order.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Ping Server", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, FString IP, int32 Port, float Timeout = 10.f);

	/*
	* Cancel all active "Server Ping" queries
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers|Async", meta = (WorldContext = "WorldContextObject"))
	static void CancelPingQueries(UObject* WorldContextObject);
public:
	UFUNCTION()
	void HandleCallback(const FGameServerItem& Data, bool bWasSuccessful);
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnServerUpdatedAsyncDelegate OnCallback;
	// This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out.
	UPROPERTY(BlueprintAssignable)
	FOnServerRefreshCompleteDelegate OnRefreshCompleted;
public:
	/**
	* Request a new list of game servers from the 'FAVORITES' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request Favorites  Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'FRIENDS' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request Friends Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'HISTORY' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request History Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'INTERNET' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request Internet Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'LAN' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request LAN Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	AppID	The app to request the server list of.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request Spectator Server List", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/*
	 * Cancel all active "Server List" queries
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers", meta = (WorldContext = "WorldContextObject"))
	static void CancelServerListQueries(UObject* WorldContextObject);
	
private:
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestServerList(UObject* WorldContextObject, ESteamServerListRequestType RequestType, int32 AppID = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	UFUNCTION()
	void HandleCallback(const FGameServerItem& Data);
	UFUNCTION()
	void HandleServerListFinished();
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnServerRuleAsyncDelegate OnCallback;
public:
	/**
	* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)
	*
	* @param	Ip			The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	QueryPort	The port of the game server you are querying, in host order.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Server Rules", BlueprintInternalUseOnly="true"), Category = "SteamCore|MatchmakingServers|Async")
	static USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, FString Ip, int32 QueryPort, float Timeout = 10.f);

	/*
	* Cancel all active "Server Rules" queries
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers|Async", meta = (WorldContext = "WorldContextObject"))
	static void CancelServerRulesQueries(UObject* WorldContextObject);
public:
	UFUNCTION()
	void HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful);
};
