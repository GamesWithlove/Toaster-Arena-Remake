/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamGameServerTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAssociateWithClan m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(class USteamCoreSubsystem* Subsystem, const FOnAssociateWithClan Callback, const FSteamID SteamIDClan, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDClan(SteamIDClan)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan() = delete;
protected:
	AssociateWithClanResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility : public FOnlineAsyncTaskSteamCore
{
public:
	FOnComputeNewPlayerCompatibility m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(class USteamCoreSubsystem* Subsystem, const FOnComputeNewPlayerCompatibility Callback, const FSteamID SteamIDNewPlayer, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_SteamIDNewPlayer(SteamIDNewPlayer)
	{
	}

private:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility() = delete;
protected:
	ComputeNewPlayerCompatibilityResult_t m_CallbackResults;
	FSteamID m_SteamIDNewPlayer;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility")); }
};
#endif