/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworking
*/

#include "SteamNetworking/SteamNetworking.h"
#include "SteamCorePluginPrivatePCH.h"

void UNetworking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if ENABLE_STEAMCORE
	OnP2PSessionRequestCallback.Register(this, &UNetworking::OnP2PSessionRequest);
	OnP2PSessionConnectFailCallback.Register(this, &UNetworking::OnP2PSessionConnectFail);

	if (IsRunningDedicatedServer())
	{
		OnP2PSessionRequestCallback.SetGameserverFlag();
		OnP2PSessionConnectFailCallback.SetGameserverFlag();
	}
#endif
}

void UNetworking::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnP2PSessionRequestCallback.Unregister();
	OnP2PSessionConnectFailCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
bool UNetworking::AcceptP2PSessionWithUser(FSteamID SteamIDRemote)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->AcceptP2PSessionWithUser(SteamIDRemote);
	}
#endif

	return bResult;
}

bool UNetworking::AllowP2PPacketRelay(bool bAllow)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->AllowP2PPacketRelay(bAllow);
	}
#endif

	return bResult;
}

bool UNetworking::CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->CloseP2PChannelWithUser(SteamIDRemote, Channel);
	}
#endif

	return bResult;
}

bool UNetworking::CloseP2PSessionWithUser(FSteamID SteamIDRemote)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->CloseP2PSessionWithUser(SteamIDRemote);
	}
#endif

	return bResult;
}

bool UNetworking::GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState)
{
	LogVeryVerbose("");

	bool bResult = false;
	ConnectionState = FSteamP2PSessionState();

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		P2PSessionState_t SessionState;

		bResult = GetNetworking()->GetP2PSessionState(SteamIDRemote, &SessionState);

		if (bResult)
		{
			ConnectionState = SessionState;
		}
	}
#endif

	return bResult;
}

bool UNetworking::IsP2PPacketAvailable(int32& OutMessageSize, int32 Channel)
{
	LogVeryVerbose("");

	bool bResult = false;
	
	OutMessageSize = 0;
	uint32 MessageSize = 0;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->IsP2PPacketAvailable(&MessageSize, Channel);
		
		if (bResult)
		{
			OutMessageSize = MessageSize;
		}
	}

#endif

	return bResult;
}

bool UNetworking::ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel)
{
	LogVerbose("");

	bool bResult = false;
	Data.Empty();
	OutSteamIdRemote = FSteamID();

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		Data.SetNum(MessageSize);
		CSteamID SteamIdRemote;

		uint32 ReturnedMessageSize = 0;

		bResult = GetNetworking()->ReadP2PPacket(Data.GetData(), MessageSize, &ReturnedMessageSize, &SteamIdRemote, Channel);

		if (bResult)
		{
			Data.SetNum(ReturnedMessageSize);
			OutSteamIdRemote = SteamIdRemote;
		}
		else
		{
			Data.Empty();
		}
	}
#endif

	return bResult;
}

bool UNetworking::SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (GetNetworking())
	{
		bResult = GetNetworking()->SendP2PPacket(SteamIDRemote, Data.GetData(), Data.Num(), static_cast<EP2PSend>(P2PSendType), Channel);
	}
#endif

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void UNetworking::OnP2PSessionRequest(P2PSessionRequest_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		OnP2PSessionRequestDelegate.Broadcast(Data);
	});
}

void UNetworking::OnP2PSessionConnectFail(P2PSessionConnectFail_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		OnP2PSessionConnectFailDelegate.Broadcast(Data);
	});
}
#endif