/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "SteamMatchmakingServers/SteamMatchmakingServers.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UMatchmakingServers::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMatchmakingServers::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UMatchmakingServers::RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::Favorites, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::Friends, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::History, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::Internet, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::Lan, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	LogVerbose("");

	RequestServerList(ServerCallback, AppID, Timeout, ESteamServerListRequestType::Spectator, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

void UMatchmakingServers::PingServer(const FOnServerPing& Callback, FString IP, int32 Port)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(this, Callback, IP, Port);
		QueueAsyncTask(Task);
	}
#endif
}

void UMatchmakingServers::ServerRules(const FOnServerRules& Callback, FString IP, int32 Port)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(this, Callback, IP, Port);
		QueueAsyncTask(Task);
	}
#endif
}

void UMatchmakingServers::RequestServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, ESteamServerListRequestType Type, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(this, ServerCallback, AppID, Timeout, MaxResults, Type, bIgnoreNonResponsive, ServerFilter);
		QueueAsyncTask(Task);
	}
#endif
}
