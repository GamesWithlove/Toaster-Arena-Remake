/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/ISteamUserStats
*/

#include "SteamUserStats/WebUserStats.h"
#include "SteamUserStats/WebUserStatsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebUserStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebUserStats::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebUserStats::GetGlobalAchievementPercentagesForApp(const FOnSteamCoreWebCallback& Callback, FString GameId)
{
	FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp* Task = new FOnlineAsyncTaskSteamCoreWebGetGlobalAchievementPercentagesForApp(this, Callback, GameId);
	QueueAsyncTask(Task);
}

void UWebUserStats::GetGlobalStatsForGame(const FOnSteamCoreWebCallback& Callback, int32 AppId, TArray<FString> Names, int32 StartDate, int32 EndDate)
{
	FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame* Task = new FOnlineAsyncTaskSteamCoreWebGetGlobalStatsForGame(this, Callback, AppId, Names, StartDate, EndDate);
	QueueAsyncTask(Task);
}

void UWebUserStats::GetNumberOfCurrentPlayers(const FOnSteamCoreWebCallback& Callback, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers* Task = new FOnlineAsyncTaskSteamCoreWebGetNumberOfCurrentPlayers(this, Callback, AppId);
	QueueAsyncTask(Task);
}

void UWebUserStats::GetPlayerAchievements(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements* Task = new FOnlineAsyncTaskSteamCoreWebGetPlayerAchievements(this, Callback, Key, SteamId, AppId, Language);
	QueueAsyncTask(Task);
}

void UWebUserStats::GetSchemaForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebGetSchemaForGame* Task = new FOnlineAsyncTaskSteamCoreWebGetSchemaForGame(this, Callback, Key, SteamId, AppId, Language);
	QueueAsyncTask(Task);
}

void UWebUserStats::GetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame* Task = new FOnlineAsyncTaskSteamCoreWebGetUserStatsForGame(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebUserStats::SetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> Names, TArray<int32> Values)
{
	FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame* Task = new FOnlineAsyncTaskSteamCoreWebSetUserStatsForGame(this, Callback, Key, SteamId, AppId, Names, Values);
	QueueAsyncTask(Task);
}
