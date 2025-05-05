/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamGameServerStats
*/

#include "SteamGameServerStats/WebSteamGameServerStats.h"
#include "SteamGameServerStats/WebSteamGameServerStatsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamGameServerStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamGameServerStats::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamGameServerStats::GetGameServerPlayerStatsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString GameId, int32 AppId, FString RangeStart, FString RangeEnd, int32 MaxResults /*= 1000*/)
{
	FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame* Task = new FOnlineAsyncTaskSteamCoreWebGetGameServerPlayerStatsForGame(this, Callback, Key, GameId, AppId, RangeStart, RangeEnd, MaxResults);
	QueueAsyncTask(Task);
}
