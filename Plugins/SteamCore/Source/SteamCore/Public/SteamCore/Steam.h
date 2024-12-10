/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "Misc/CoreMisc.h"
#include "Runtime/Launch/Resources/Version.h"

#pragma once

THIRD_PARTY_INCLUDES_START
#if ENABLE_STEAMCORE
#include "steam/steam_api.h"
#include "steam/steam_gameserver.h"
#include "steam/isteamnetworkingutils.h"
#include "steam/isteamnetworkingsockets.h"
#endif
THIRD_PARTY_INCLUDES_END

#if ENABLE_STEAMCORE
FORCEINLINE static ISteamUGC* GetUGC()
{
	return IsRunningDedicatedServer() ? SteamGameServerUGC() : SteamUGC();
}

FORCEINLINE static ISteamNetworking* GetNetworking()
{
	return IsRunningDedicatedServer() ? SteamGameServerNetworking() : SteamNetworking();
}

FORCEINLINE static ISteamUtils* GetUtils()
{
	return IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
}

FORCEINLINE static ISteamInventory* GetInventory()
{
	return IsRunningDedicatedServer() ? SteamGameServerInventory() : SteamInventory();
}

FORCEINLINE static ISteamApps* GetApps()
{
	return SteamApps();
}
#else
FORCEINLINE static void* GetUGC()
{
	return nullptr;
}

FORCEINLINE static void* GetNetworking()
{
	return nullptr;
}

FORCEINLINE static void* GetUtils()
{
	return nullptr;
}

FORCEINLINE static void* GetInventory()
{
	return nullptr;
}

FORCEINLINE static void* GetApps()
{
	return nullptr;
}

#endif

#define STEAMCOREKEY_NUMPUBLICCONNECTIONS "NUMPUBCONN"
#define STEAMCOREKEY_NUMPRIVATECONNECTIONS "NUMPRIVCONN"
#define STEAMCOREKEY_SESSIONFLAGS "SESSIONFLAGS"
#define STEAMCOREKEY_OWNINGUSERID "OWNINGID"
#define STEAMCOREKEY_OWNINGUSERNAME "OWNINGNAME"
#define STEAMCOREKEY_NUMOPENPRIVATECONNECTIONS "NUMOPENPRIVCONN"
#define	STEAMCOREKEY_NUMOPENPUBLICCONNECTIONS "NUMOPENPUBCONN"
#define STEAMCOREKEY_BUILDUNIQUEID "BUILDID"

/** Number of keys above required for valid lobby session */
#define STEAMCOREKEY_NUMREQUIREDLOBBYKEYS 9
#define STEAMCOREKEY_NUMREQUIREDSERVERKEYS 4

/** Optional keys (depends on lobby/advertised server session) */
#define STEAMCOREKEY_HOSTIP "HOSTIP"
#define STEAMCOREKEY_HOSTPORT "HOSTPORT"
#define STEAMCOREKEY_P2PADDR "P2PADDR"
#define STEAMCOREKEY_P2PPORT "P2PPORT"
#define STEAMCOREKEY_P2PPING "P2PPING"
#define STEAMCOREKEY_CONNECTIONMETHOD "CONMETHOD"