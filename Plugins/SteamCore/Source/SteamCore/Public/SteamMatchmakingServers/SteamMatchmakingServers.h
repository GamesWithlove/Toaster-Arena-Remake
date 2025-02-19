/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamMatchmakingServersTypes.h"
#include "SteamMatchmakingServers.generated.h"

UCLASS()
class STEAMCORE_API UMatchmakingServers : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UMatchmakingServers() { SubsystemType = ESteamSubsystem::MatchmakingServers; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	* 
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* This function will continue to run until it either times out or has reached @MaxResults and for every new server
	* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.
	*
	* @param	AppId					The app to request the server list of.
	* @param	Timeout					How long to run the function until we time out.
	* @param	MaxResults				Max amount of servers to get, when we reach this number the function will time out 
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	* @param	ServerFilter			Optional server filter
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
	void RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppId = 480, float Timeout = 10.f, int32 MaxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* ServerFilter = nullptr);

	/**
	* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.
	*
	* @param	Ip			The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	QueryPort	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers", meta = (AutoCreateRefTerm = "callback"))
	void PingServer(const FOnServerPing& Callback, FString Ip, int32 QueryPort);

	/**
	* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)
	*
	* @param	Ip			The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	QueryPort	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers", meta = (AutoCreateRefTerm = "callback"))
	void ServerRules(const FOnServerRules& Callback, FString Ip, int32 QueryPort);

private:
	void RequestServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, ESteamServerListRequestType Type, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
};
