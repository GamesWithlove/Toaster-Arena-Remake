/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncTasks.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(UObject* WorldContextObject, FString IP, int32 Port, float Timeout)
{
	LogVerbose("");

	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				LogVerbose("PingServer had an active search query, cancelling the old one.");

				CurrentTask = nullptr;
			}
		}

		const auto AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionPingServer>();
		const auto Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(Subsystem, AsyncObject, IP, Port, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(const FGameServerItem& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionRequestServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestServerList(UObject* WorldContextObject, ESteamServerListRequestType RequestType, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	LogVerbose("");

	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != nullptr)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				LogVerbose("RequestServerList had an active search query, cancelling the old one.");
				
				CurrentTask = nullptr;
			}
		}

		const auto AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionRequestServerList>();
		const auto Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(Subsystem, AsyncObject, AppID, Timeout, MaxResults, RequestType, bIgnoreNonResponsive, ServerFilter);
		CurrentTask = Task;
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(const FGameServerItem& Data)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		OnCallback.Broadcast(Data);
	});
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this]()
	{
		OnRefreshCompleted.Broadcast();
		SetReadyToDestroy();
	});
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Internet, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Lan, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Spectator, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Favorites, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Friends, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::History, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(UObject* WorldContextObject, FString Ip, int32 QueryPort, float Timeout)
{
	LogVerbose("");

	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				LogVerbose("ServerRules had an active search query, cancelling the old one.");
				
				CurrentTask = nullptr;
			}
		}

		const auto AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionServerRules>();
		const auto Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(Subsystem, AsyncObject, Ip, QueryPort, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
