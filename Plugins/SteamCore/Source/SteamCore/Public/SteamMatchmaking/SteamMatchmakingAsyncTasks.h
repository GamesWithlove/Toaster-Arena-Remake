/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamMatchmakingTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateLobby m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* Subsystem, FOnCreateLobby Callback, const ELobbyType LobbyType, const int32 MaxLobbyMembers, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_LobbyType(LobbyType)
		  , m_MaxLobbyMembers(MaxLobbyMembers)
	{
	}

	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const ELobbyType LobbyType, const int32 MaxLobbyMembers, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_LobbyType(LobbyType)
		  , m_MaxLobbyMembers(MaxLobbyMembers)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby() = delete;
protected:
	LobbyCreated_t m_CallbackResults;
	ELobbyType m_LobbyType;
	int32 m_MaxLobbyMembers;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRequestLobbyList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestLobbyList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* Subsystem, FOnRequestLobbyList Callback, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
	{
	}

	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreRequestLobbyList() = delete;
protected:
	LobbyMatchList_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestLobbyList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreJoinLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinLobby m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreJoinLobby(class USteamCoreSubsystem* Subsystem, FOnJoinLobby Callback, FSteamID SteamIDLobby, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDLobby(SteamIDLobby)
	{
	}

	FOnlineAsyncTaskSteamCoreJoinLobby(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, FSteamID SteamIDLobby, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamIDLobby(SteamIDLobby)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreJoinLobby() = delete;
protected:
	LobbyEnter_t m_CallbackResults;
	FSteamID m_SteamIDLobby;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreJoinLobby")); }
};
#endif