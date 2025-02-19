/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "SteamCoreModule.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamMatchmakingServersTypes.h"

class UServerFilter;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersServerList : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingServerListResponse
{
public:
	FOnServerUpdated m_OnSteamCallback;
	FOnServerRefreshCompleted m_OnServerRefreshCompleted;
	friend class USteamCoreMatchmakingServersAsyncActionRequestServerList;
public:
	static HServerListRequest m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(class USteamCoreSubsystem* Subsystem, FOnServerUpdated ServerUpdateCallback, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);

	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_FoundServers(0)
		  , m_AppID(AppID)
		  , m_MaxResults(MaxResults)
		  , m_RequestType(RequestType)
		  , m_bServerRefreshComplete(false)
		  , m_bIgnoreNonResponsive(bIgnoreNonResponsive)
		  , m_ElapsedTime(0)
		  , m_ServerFilter(ServerFilter)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
		m_OnServerRefreshCompleted.BindUFunction(AsyncObject, "HandleServerListFinished");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerList != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerList->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerList = this;
		}
	}

	virtual ~FOnlineAsyncTaskSteamCoreMatchmakingServersServerList() override;
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList() = delete;
protected:
	int32 m_FoundServers;
	int32 m_AppID;
	int32 m_MaxResults;
	ESteamServerListRequestType m_RequestType;
	bool m_bServerRefreshComplete;
	bool m_bIgnoreNonResponsive;
	float m_ElapsedTime;
	TWeakObjectPtr<UServerFilter> m_ServerFilter;
protected:
	virtual void Tick() override;
	virtual void Finalize() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerList"));
	}

	virtual void ServerResponded(HServerListRequest Request, int iServer) override;
	virtual void ServerFailedToRespond(HServerListRequest Request, int iServer) override;
	virtual void RefreshComplete(HServerListRequest Request, EMatchMakingServerResponse Response) override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingPingResponse
{
public:
	FOnServerPing m_OnSteamCallback;
	friend class USteamCoreMatchmakingServersAsyncActionPingServer;
public:
	HServerQuery m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* Subsystem, FOnServerPing Callback, FString IP, int32 Port, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_IP(IP)
		  , m_Port(Port)
	{
		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersPingServer != nullptr)
			{
				Subsystem->CurrentMatchmakingServersPingServer->CancelServerQuery();
			}
			
			Subsystem->CurrentMatchmakingServersPingServer = this;
		}
	}

	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, FString IP, int32 Port, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_IP(IP)
		  , m_Port(Port)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersPingServer != nullptr)
			{
				Subsystem->CurrentMatchmakingServersPingServer->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersPingServer = this;
		}
	}

private:
	virtual ~FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer() override;
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer() = delete;
protected:
	FString m_IP;
	int32 m_Port;
protected:
	virtual void Tick() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer"));
	}

	virtual void ServerResponded(gameserveritem_t& server) override;
	virtual void ServerFailedToRespond() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingRulesResponse
{
public:
	FOnServerRules m_OnSteamCallback;
	friend class USteamCoreMatchmakingServersAsyncActionServerRules;
public:
	static HServerQuery m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* Subsystem, FOnServerRules Callback, FString IP, int32 Port, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_IP(IP)
		  , m_Port(Port)
	{
		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerRules != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerRules->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerRules = this;
		}
	}

	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, FString IP, int32 Port, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_IP(IP)
		  , m_Port(Port)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerRules != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerRules->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerRules = this;
		}
	}

private:
	virtual ~FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules() override;
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules() = delete;
protected:
	FString m_IP;
	int32 m_Port;
	TArray<FGameServerRule> m_Rules;
protected:
	virtual void Tick() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules"));
	}

	virtual void RulesResponded(const char* pchRule, const char* pchValue) override;
	virtual void RulesFailedToRespond() override;
	virtual void RulesRefreshComplete() override;
};
#endif