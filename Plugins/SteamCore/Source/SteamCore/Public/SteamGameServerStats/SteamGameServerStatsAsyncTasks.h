/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamGameServerStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerRequestUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(class USteamCoreSubsystem* Subsystem, const FOnServerRequestUserStats Callback, const FSteamID SteamIDUser, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDUser(SteamIDUser)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS() = delete;
protected:
	GSStatsReceived_t m_CallbackResults;
	FSteamID m_SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerStoreUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(class USteamCoreSubsystem* Subsystem, const FOnServerStoreUserStats Callback, const FSteamID SteamIDUser, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDUser(SteamIDUser)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats() = delete;
protected:
	GSStatsStored_t m_CallbackResults;
	FSteamID m_SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats")); }
};
#endif