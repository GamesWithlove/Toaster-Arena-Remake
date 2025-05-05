/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamGameServerStats
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString GameId, int32 AppId, FString RangeStart, FString RangeEnd, int32 MaxResults)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamGameServerStats", "GetGameServerPlayerStatsForGame", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("gameid", GameId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("rangestart", RangeStart);
		m_RequestString.Add("rangeend", RangeEnd);
		m_RequestString.Add("MaxResults", MaxResults);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame() = delete;
};
