/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#include "SteamRemotePlay/SteamRemotePlay.h"
#include "SteamCorePluginPrivatePCH.h"

void URemotePlay::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if ENABLE_STEAMCORE
	OnSteamRemotePlaySessionConnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionConnected);
	OnSteamRemotePlaySessionDisconnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionDisconnected);

	if (IsRunningDedicatedServer())
	{
		OnSteamRemotePlaySessionConnectedCallback.SetGameserverFlag();
		OnSteamRemotePlaySessionDisconnectedCallback.SetGameserverFlag();
	}
#endif
}

void URemotePlay::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnSteamRemotePlaySessionConnectedCallback.Unregister();
	OnSteamRemotePlaySessionDisconnectedCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 URemotePlay::GetSessionCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionCount();
	}
#endif

	return Result;
}

int32 URemotePlay::GetSessionID(int32 SessionIndex)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionID(SessionIndex);
	}
#endif

	return Result;
}

FSteamID URemotePlay::GetSessionSteamID(int32 SessionID)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionSteamID(SessionID);
	}
#endif

	return Result;
}

FString URemotePlay::GetSessionClientName(int32 SessionID)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = TCHAR_TO_UTF8(SteamRemotePlay()->GetSessionClientName(SessionID));
	}
#endif

	return Result;
}

ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 SessionID)
{
	LogVeryVerbose("");

	ESteamCoreDeviceFormFactor Result = ESteamCoreDeviceFormFactor::Unknown;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = static_cast<ESteamCoreDeviceFormFactor>(SteamRemotePlay()->GetSessionClientFormFactor(SessionID));
	}
#endif

	return Result;
}

bool URemotePlay::BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY)
{
	LogVeryVerbose("");

	bool Result = false;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BGetSessionClientResolution(SessionID, &ResolutionX, &ResolutionY);
	}
#endif

	return Result;
}

bool URemotePlay::BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	bool Result = false;

#if ENABLE_STEAMCORE
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BSendRemotePlayTogetherInvite(SteamIDFriend);
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void URemotePlay::OnSteamRemotePlaySessionConnected(SteamRemotePlaySessionConnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamRemotePlaySessionConnected.Broadcast(Data);
	});
}

void URemotePlay::OnSteamRemotePlaySessionDisconnected(SteamRemotePlaySessionDisconnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamRemotePlaySessionDisconnected.Broadcast(Data);
	});
}
#endif