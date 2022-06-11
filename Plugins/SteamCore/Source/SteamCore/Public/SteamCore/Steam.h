/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "Misc/CoreMisc.h"
#include "Runtime/Launch/Resources/Version.h"

#pragma once

THIRD_PARTY_INCLUDES_START
#include "steam/steam_api.h"
#include "steam/steam_gameserver.h"
#include "steam/isteamnetworkingutils.h"
#include "steam/isteamnetworkingsockets.h"
THIRD_PARTY_INCLUDES_END

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
	return IsRunningDedicatedServer() ? SteamGameServerApps() : SteamApps();
}
