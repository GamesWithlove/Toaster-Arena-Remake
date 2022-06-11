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

	OnSteamRemotePlaySessionConnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionConnected);
	OnSteamRemotePlaySessionDisconnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionDisconnected);

	if (IsRunningDedicatedServer())
	{
		OnSteamRemotePlaySessionConnectedCallback.SetGameserverFlag();
		OnSteamRemotePlaySessionDisconnectedCallback.SetGameserverFlag();
	}
}

void URemotePlay::Deinitialize()
{
	OnSteamRemotePlaySessionConnectedCallback.Unregister();
	OnSteamRemotePlaySessionDisconnectedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 URemotePlay::GetSessionCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionCount();
	}

	return Result;
}

int32 URemotePlay::GetSessionID(int32 SessionIndex)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionID(SessionIndex);
	}

	return Result;
}

FSteamID URemotePlay::GetSessionSteamID(int32 SessionID)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionSteamID(SessionID);
	}

	return Result;
}

FString URemotePlay::GetSessionClientName(int32 SessionID)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamRemotePlay())
	{
		Result = TCHAR_TO_UTF8(SteamRemotePlay()->GetSessionClientName(SessionID));
	}

	return Result;
}

ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 SessionID)
{
	LogVeryVerbose("");

	ESteamCoreDeviceFormFactor Result = ESteamCoreDeviceFormFactor::Unknown;

	if (SteamRemotePlay())
	{
		Result = static_cast<ESteamCoreDeviceFormFactor>(SteamRemotePlay()->GetSessionClientFormFactor(SessionID));
	}

	return Result;
}

bool URemotePlay::BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY)
{
	LogVeryVerbose("");

	bool Result = false;

	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BGetSessionClientResolution(SessionID, &ResolutionX, &ResolutionY);
	}

	return Result;
}

bool URemotePlay::BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	bool Result = false;

	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BSendRemotePlayTogetherInvite(SteamIDFriend);
	}

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
