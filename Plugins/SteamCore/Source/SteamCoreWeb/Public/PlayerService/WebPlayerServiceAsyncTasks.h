/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Users.
* https://partner.steamgames.com/doc/webapi/IPlayerService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Count)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "GetRecentlyPlayedGames", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("count", Count);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetOwnedGames
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetOwnedGames : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetOwnedGames(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "GetOwnedGames", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("include_appinfo", bIncludeAppInfo);
		m_RequestString.Add("include_played_free_games", bIncludePlayedFreeGames);
		m_RequestString.Add("appids_filter", Filter);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetOwnedGames() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetSteamLevel
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetSteamLevel : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetSteamLevel(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "GetSteamLevel", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetSteamLevel() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetBadges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetBadges : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetBadges(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "GetBadges", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetBadges() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 BadgeId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "GetCommunityBadgeProgress", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("badgeid", BadgeId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppIdPlaying)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPlayerService", "IsPlayingSharedGame", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid_playing", AppIdPlaying);
	}

private:
	FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame() = delete;
};
