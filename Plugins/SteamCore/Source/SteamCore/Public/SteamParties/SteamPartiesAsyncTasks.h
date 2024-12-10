/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamPartiesTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesJoinParty
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesJoinParty : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinParty m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesJoinParty(USteamCoreSubsystem* Subsystem, const FOnJoinParty Callback, const FPartyBeaconID BeaconId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_BeaconID(BeaconId)
	{
	}

	FOnlineAsyncTaskSteamCorePartiesJoinParty(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPartyBeaconID BeaconId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_BeaconID(BeaconId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCorePartiesJoinParty() = delete;
protected:
	JoinPartyCallback_t m_CallbackResults;
	FPartyBeaconID m_BeaconID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesJoinParty")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesCreateBeacon : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateBeacon m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesCreateBeacon(USteamCoreSubsystem* Subsystem, const FOnCreateBeacon Callback, const int32 OpenSlots, const FSteamPartyBeaconLocation BeaconLocation, const FString ConnectString, const FString Metadata, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_OpenSlots(OpenSlots)
		  , m_BeaconLocation(BeaconLocation)
		  , m_ConnectString(ConnectString)
		  , m_Metadata(Metadata)
	{
	}

	FOnlineAsyncTaskSteamCorePartiesCreateBeacon(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 OpenSlots, const FSteamPartyBeaconLocation BeaconLocation, const FString ConnectString, const FString Metadata, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_OpenSlots(OpenSlots)
		  , m_BeaconLocation(BeaconLocation)
		  , m_ConnectString(ConnectString)
		  , m_Metadata(Metadata)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCorePartiesCreateBeacon() = delete;
protected:
	CreateBeaconCallback_t m_CallbackResults;
	int32 m_OpenSlots;
	FSteamPartyBeaconLocation m_BeaconLocation;
	FString m_ConnectString;
	FString m_Metadata;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesCreateBeacon")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots : public FOnlineAsyncTaskSteamCore
{
public:
	FOnChangeNumOpenSlots m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(USteamCoreSubsystem* Subsystem, const FOnChangeNumOpenSlots Callback, const FPartyBeaconID Beacon, const int32 OpenSlots, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Beacon(Beacon)
		  , m_OpenSlots(OpenSlots)
	{
	}

	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPartyBeaconID Beacon, const int32 OpenSlots, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Beacon(Beacon)
		  , m_OpenSlots(OpenSlots)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots() = delete;
protected:
	ChangeNumOpenSlotsCallback_t m_CallbackResults;
	FPartyBeaconID m_Beacon;
	int32 m_OpenSlots;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots")); }
};
#endif