/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamAppListTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamAppInstalled
{
	GENERATED_BODY()
public:
	FSteamAppInstalled()
		: AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamAppInstalled(const SteamAppInstalled_t& Data)
		: AppID(Data.m_nAppID)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "AppList")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FSteamAppUninstalled
{
	GENERATED_BODY()
public:
	FSteamAppUninstalled()
		: AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamAppUninstalled(const SteamAppUninstalled_t& Data)
		: AppID(Data.m_nAppID)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "AppList")
	int32 AppID;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppInstalled, const FSteamAppInstalled&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppUninstalled, const FSteamAppUninstalled&, Data);
