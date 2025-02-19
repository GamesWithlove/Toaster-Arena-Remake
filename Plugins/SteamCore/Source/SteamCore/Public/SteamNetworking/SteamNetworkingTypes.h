/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworking
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "SteamNetworkingTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType)
enum class ESteamP2PSend : uint8
{
	Unreliable = 0,
	UnreliableNoDelay = 1,
	Reliable = 2,
	ReliableWithBuffering = 3
};

UENUM(BlueprintType)
enum class ESteamP2PSessionError : uint8
{
	None = 0,
	NotRunningApp = 1,
	NoRightsToApp = 2,
	DestinationNotLoggedIn = 3,
	Timeout = 4,
	Max = 5
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamP2PSessionState
{
	GENERATED_BODY()
public:
	FSteamP2PSessionState()
		: bConnectionActive(false)
		  , bConnecting(false)
		  , P2PSessionError()
		  , bUsingRelay(false)
		  , BytesQueuedForSend(0)
		  , PacketsQueuedForSend(0)
		  , RemotePort(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamP2PSessionState(const P2PSessionState_t& Data)
		: bConnectionActive(Data.m_bConnectionActive > 0)
		  , bConnecting(Data.m_bConnecting > 0)
		  , P2PSessionError(static_cast<ESteamP2PSessionError>(Data.m_eP2PSessionError))
		  , bUsingRelay(Data.m_bUsingRelay > 0)
		  , BytesQueuedForSend(Data.m_nBytesQueuedForSend)
		  , PacketsQueuedForSend(Data.m_nPacketsQueuedForSend)
		  , RemoteIP(FIPv4Address(Data.m_nRemoteIP).ToString())
		  , RemotePort(Data.m_nRemotePort)
	{
	}
#endif

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	bool bConnectionActive;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	bool bConnecting;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	ESteamP2PSessionError P2PSessionError;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	bool bUsingRelay;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	int32 BytesQueuedForSend;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	int32 PacketsQueuedForSend;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	FString RemoteIP;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	int32 RemotePort;
};

USTRUCT(BlueprintType)
struct FP2PSessionRequest
{
	GENERATED_BODY()
public:
	FP2PSessionRequest() = default;

#if ENABLE_STEAMCORE
	FP2PSessionRequest(const P2PSessionRequest_t& Data)
		: SteamIDRemote(Data.m_steamIDRemote)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	FSteamID SteamIDRemote;
};

USTRUCT(BlueprintType)
struct FP2PSessionConnectFail
{
	GENERATED_BODY()
public:
	FP2PSessionConnectFail()
		: P2PSessionError(ESteamP2PSessionError::None)
	{
	}

#if ENABLE_STEAMCORE
	FP2PSessionConnectFail(const P2PSessionConnectFail_t& Data)
		: SteamIDRemote(Data.m_steamIDRemote)
		  , P2PSessionError(static_cast<ESteamP2PSessionError>(Data.m_eP2PSessionError))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	FSteamID SteamIDRemote;
	UPROPERTY(BlueprintReadWrite, Category = "Networking")
	ESteamP2PSessionError P2PSessionError;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnP2PSessionRequest, const FP2PSessionRequest&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnP2PSessionConnectFail, const FP2PSessionConnectFail&, Data);
