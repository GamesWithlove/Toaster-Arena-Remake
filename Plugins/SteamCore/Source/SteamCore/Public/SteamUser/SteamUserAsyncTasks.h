/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUserTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEncryptedAppTicket m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(class USteamCoreSubsystem* Subsystem, const FOnRequestEncryptedAppTicket Callback, const TArray<uint8> DataToInclude, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Data(DataToInclude)
	{
	}

	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const TArray<uint8> DataToInclude, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Data(DataToInclude)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket() = delete;
protected:
	EncryptedAppTicketResponse_t m_CallbackResults;
	TArray<uint8> m_Data;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStoreAuthURLResponse m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(class USteamCoreSubsystem* Subsystem, const FOnStoreAuthURLResponse Callback, const FString RedirectURL, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_RedirectURL(RedirectURL)
	{
	}

	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FString RedirectURL, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_RedirectURL(RedirectURL)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL() = delete;
protected:
	StoreAuthURLResponse_t m_CallbackResults;
	FString m_RedirectURL;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL")); }
};
#endif