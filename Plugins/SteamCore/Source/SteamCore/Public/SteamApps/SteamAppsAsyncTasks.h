/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "SteamAppsTypes.h"
#include "SteamCore/SteamCoreAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreAppsGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreAppsGetFileDetails : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileDetailsResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* Subsystem, FOnFileDetailsResult Callback, const FString FileName, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileName(FileName)
	{
	}

	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FString FileName, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileName(FileName)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails() = delete;
protected:
	FileDetailsResult_t m_CallbackResults;
	FString m_FileName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreAppsGetFileDetails")); }
};
#endif