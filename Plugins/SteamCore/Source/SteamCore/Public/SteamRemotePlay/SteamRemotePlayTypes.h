/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamRemotePlayTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType)
enum class ESteamCoreDeviceFormFactor : uint8
{
	Unknown = 0,
	Phone,
	Tablet,
	Computer,
	TV,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionConnected
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemotePlay")
	int32 SessionID;
public:
	FSteamRemotePlaySessionConnected()
		: SessionID(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamRemotePlaySessionConnected(const SteamRemotePlaySessionConnected_t& Data)
		: SessionID(Data.m_unSessionID)
	{
	}
#endif

public:
	operator uint32() const { return SessionID; }
	operator int32() const { return SessionID; }
	operator uint32() { return SessionID; }
	operator int32() { return SessionID; }
};

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionDisconnected
{
	GENERATED_BODY()
public:
	FSteamRemotePlaySessionDisconnected()
		: SessionID(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamRemotePlaySessionDisconnected(const SteamRemotePlaySessionDisconnected_t& Data)
		: SessionID(Data.m_unSessionID)
	{
	}
#endif

public:
	operator uint32() const { return SessionID; }
	operator int32() const { return SessionID; }
	operator uint32() { return SessionID; }
	operator int32() { return SessionID; }

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemotePlay")
	int32 SessionID;
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionConnected, const FSteamRemotePlaySessionConnected&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionDisconnected, const FSteamRemotePlaySessionDisconnected&, Data);
