/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/ISteamUserStats
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString GameId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetGlobalAchievementPercentagesForApp", "", 2, EVerb::GET, true)
	{
		m_RequestString.Add("gameid", GameId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp() = delete;
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, int32 AppId, TArray<FString> Names, int32 StartDate, int32 EndDate)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetGlobalStatsForGame", "", 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("count", Names.Num());
		m_RequestString.Add("name", Names);
		m_RequestString.Add("startdate", StartDate);
		m_RequestString.Add("enddate", EndDate);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetNumberOfCurrentPlayers", "", 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString language)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetPlayerAchievements", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("language", language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetSchemaForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetSchemaForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetSchemaForGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString language)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetSchemaForGame", Key, 2, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("language", language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetSchemaForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "GetUserStatsForGame", Key, 2, EVerb::GET, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> Names, TArray<int32> Values)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserStats", "SetUserStatsForGame", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("count", Names.Num());
		m_RequestString.Add("name", Names);
		m_RequestString.Add("value", Values);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame() = delete;
};
