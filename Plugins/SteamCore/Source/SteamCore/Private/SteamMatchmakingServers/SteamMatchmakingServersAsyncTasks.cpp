/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncTasks.h"
#include "SteamCore/SteamUtilities.h"
#include "SteamCorePluginPrivatePCH.h"

HServerListRequest FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults = nullptr;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(USteamCoreSubsystem* Subsystem, FOnServerUpdated ServerUpdateCallback, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
	: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
	, m_OnSteamCallback(ServerUpdateCallback)
	, m_AppID(AppID)
	, m_MaxResults(MaxResults)
	, m_RequestType(RequestType)
	, m_bIgnoreNonResponsive(bIgnoreNonResponsive)
	, m_ServerFilter(ServerFilter)
{
	USteamUtilities::CancelQuery();
	USteamUtilities::ReleaseRequest();

	m_AsyncTimeout = Timeout;
}

FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::~FOnlineAsyncTaskSteamCoreMatchmakingServersServerList()
{
	USteamUtilities::CancelQuery();
	USteamUtilities::ReleaseRequest();

	m_OnSteamCallback.Unbind();
	m_OnServerRefreshCompleted.Unbind();
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	checkf(SteamUtilsPtr, TEXT("Steam API not found, make sure your Steam Client is running and that the Steam API was loaded."));

	if (bIsComplete)
	{
		return;
	}

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_FoundServers = 0;
			int32 NumFilters = 0;
			MatchMakingKeyValuePair_t* Filters = nullptr;

			if (m_ServerFilter != nullptr)
			{
				NumFilters = m_ServerFilter->GetNumFilters();
				Filters = m_ServerFilter->GetFiltersPtr();
			}

			switch (m_RequestType)
			{
			case ESteamServerListRequestType::Favorites:
				m_CallbackResults = SteamMatchmakingServers()->RequestFavoritesServerList(m_AppID, &Filters, NumFilters, this);
				break;
			case ESteamServerListRequestType::Friends:
				m_CallbackResults = SteamMatchmakingServers()->RequestFriendsServerList(m_AppID, &Filters, NumFilters, this);
				break;
			case ESteamServerListRequestType::History:
				m_CallbackResults = SteamMatchmakingServers()->RequestHistoryServerList(m_AppID, &Filters, NumFilters, this);
				break;
			case ESteamServerListRequestType::Internet:
				m_CallbackResults = SteamMatchmakingServers()->RequestInternetServerList(m_AppID, &Filters, NumFilters, this);
				break;
			case ESteamServerListRequestType::Lan:
				m_CallbackResults = SteamMatchmakingServers()->RequestLANServerList(m_AppID, this);
				break;
			case ESteamServerListRequestType::Spectator:
				m_CallbackResults = SteamMatchmakingServers()->RequestSpectatorServerList(m_AppID, &Filters, NumFilters, this);
				break;
			}

			if (m_CallbackResults == nullptr)
			{
				bIsComplete = true;
				bWasSuccessful = false;
			}

			if (m_ServerFilter != nullptr)
			{
				m_ServerFilter->SetReadyToDestroy();
			}

			bInit = true;
		}

		const bool bReachedSearchLimit = (m_FoundServers >= m_MaxResults) ? true : false;
		const bool bServerSearchComplete = (m_bServerRefreshComplete && m_ElapsedTime > 1.0f) ? true : false;

		if (bReachedSearchLimit || bTimedOut || bServerSearchComplete)
		{
			bIsComplete = true;
			bWasSuccessful = true;
		}
	}
	else
	{
		LogError("SteamUtilsPtr was nullptr");
		bIsComplete = true;
		bWasSuccessful = false;
	}

	if (bIsComplete)
	{
		m_ServerFilter.Reset();
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::Finalize()
{
	LogVerbose("");

	USteamUtilities::CancelQuery();
	USteamUtilities::ReleaseRequest();
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::ServerResponded(HServerListRequest Request, int iServer)
{
	LogVeryVerbose("");

	m_ElapsedTime = 0.0f;

	gameserveritem_t* Server = SteamMatchmakingServers()->GetServerDetails(Request, iServer);

	if (Server != nullptr)
	{
		if (Server->m_nAppID == m_AppID)
		{
			m_OnSteamCallback.ExecuteIfBound(FGameServerItem(Server));
			m_FoundServers++;
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::ServerFailedToRespond(HServerListRequest Request, int iServer)
{
	LogVeryVerbose("");

	m_ElapsedTime = 0.0f;

	if (!m_bIgnoreNonResponsive)
	{
		gameserveritem_t* Server = SteamMatchmakingServers()->GetServerDetails(Request, iServer);

		if (Server != nullptr)
		{
			if (Server->m_nAppID == m_AppID)
			{
				m_OnSteamCallback.ExecuteIfBound(FGameServerItem(Server));
				m_FoundServers++;
			}
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::RefreshComplete(HServerListRequest Request, EMatchMakingServerResponse Response)
{
	m_bServerRefreshComplete = true;
	m_OnServerRefreshCompleted.ExecuteIfBound();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
HServerQuery FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::m_CallbackResults = k_uAPICallInvalid;

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	checkf(SteamUtilsPtr, TEXT("Steam API not found, make sure your Steam Client is running and that the Steam API was loaded."));

	if (bIsComplete)
	{
		return;
	}

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			FIPv4Address NewIP;
			FIPv4Address::Parse(m_IP, NewIP);

			m_CallbackResults = SteamMatchmakingServers()->PingServer(NewIP.Value, m_Port, this);

			if (m_CallbackResults == k_uAPICallInvalid)
			{
				bIsComplete = true;
				bWasSuccessful = false;
			}

			bInit = true;
		}

		if (bIsComplete)
		{
			// Cancel further server queries (may trigger RefreshComplete delegate)
			if (m_CallbackResults != k_uAPICallInvalid)
			{
				SteamMatchmakingServers()->CancelServerQuery(m_CallbackResults);
				m_CallbackResults = k_uAPICallInvalid;
			}
		}
	}
	else
	{
		LogError("SteamUtilsPtr was nullptr");
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::ServerResponded(gameserveritem_t& server)
{
	LogVeryVerbose("");

	bIsComplete = true;
	bWasSuccessful = true;

	m_OnSteamCallback.ExecuteIfBound(&server, bWasSuccessful);
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::ServerFailedToRespond()
{
	LogVeryVerbose("");

	bIsComplete = true;
	bWasSuccessful = false;

	m_OnSteamCallback.ExecuteIfBound(FGameServerItem(), bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

HServerQuery FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::m_CallbackResults = k_uAPICallInvalid;

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	checkf(SteamUtilsPtr, TEXT("Steam API not found, make sure your Steam Client is running and that the Steam API was loaded."));

	if (bIsComplete)
	{
		return;
	}

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			FIPv4Address NewIP;
			FIPv4Address::Parse(m_IP, NewIP);

			m_CallbackResults = SteamMatchmakingServers()->ServerRules(NewIP.Value, m_Port, this);

			if (m_CallbackResults == k_uAPICallInvalid)
			{
				bIsComplete = true;
				bWasSuccessful = false;
			}

			bInit = true;
		}

		if (bIsComplete)
		{
			// Cancel further server queries (may trigger RefreshComplete delegate)
			if (m_CallbackResults != k_uAPICallInvalid)
			{
				SteamMatchmakingServers()->CancelServerQuery(m_CallbackResults);
				m_CallbackResults = k_uAPICallInvalid;
			}
		}
	}
	else
	{
		LogError("SteamUtilsPtr was nullptr");
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesResponded(const char* pchRule, const char* pchValue)
{
	LogVeryVerbose("");

	m_Rules.Add({pchRule, pchValue});
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesFailedToRespond()
{
	LogVeryVerbose("");
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesRefreshComplete()
{
	LogVerbose("");

	bIsComplete = true;
	bWasSuccessful = true;

	m_OnSteamCallback.ExecuteIfBound(m_Rules, bWasSuccessful);
}
