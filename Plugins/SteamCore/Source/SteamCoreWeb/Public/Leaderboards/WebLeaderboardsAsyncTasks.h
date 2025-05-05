/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access Steam leaderboards.
* https://partner.steamgames.com/doc/webapi/ISteamLeaderboards
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "DeleteLeaderboard", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("name", Name);
	}

private:
	FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name, FString sortMethod, FString displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "FindOrCreateLeaderboard", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("name", Name);
		m_RequestString.Add("sortmethod", sortMethod);
		m_RequestString.Add("displaytype", displayType);
		m_RequestString.Add("createifnotfound", bCreateIfNotFound);
		m_RequestString.Add("onlytrustedwrites", bOnlyTrustedWrites);
		m_RequestString.Add("onlyfriendsreads", bOnlyFriendsReads);
		m_RequestString.Add("name", Name);
	}

private:
	FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "GetLeaderboardEntries", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("rangestart", RangeStart);
		m_RequestString.Add("rangeend", RangeEnd);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
		m_RequestString.Add("datarequest", DataRequest);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "GetLeaderboardsForGame", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebResetLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebResetLeaderboard : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebResetLeaderboard(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderboardId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "ResetLeaderboard", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebResetLeaderboard() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebResetLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderboardId, FString SteamId, int32 Score, FString ScoreMethod, TArray<uint8> Details)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamLeaderboards", "SetLeaderboardScore", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("score", Score);
		m_RequestString.Add("scoremethod", ScoreMethod);
		m_RequestString.Add("details", Details);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore")); }
};
