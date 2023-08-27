/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamGameServerStatsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FGSStatsReceived
{
	GENERATED_BODY()
public:
	FGSStatsReceived()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FGSStatsReceived(const GSStatsReceived_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
	
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FGSStatsStored
{
	GENERATED_BODY()
public:
	FGSStatsStored()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FGSStatsStored(const GSStatsStored_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FGSStatsUnloaded
{
	GENERATED_BODY()
public:
	FGSStatsUnloaded() = default;

#if ENABLE_STEAMCORE
	FGSStatsUnloaded(const GSStatsUnloaded_t& Data)
		: SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
	
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDUser;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRequestUserStats, const FGSStatsReceived&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerStoreUserStats, const FGSStatsStored&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSStatsUnloaded, const FGSStatsUnloaded&, Data);
