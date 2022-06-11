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

#include "Leaderboards/WebLeaderboards.h"
#include "Leaderboards/WebLeaderboardsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebLeaderboards::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebLeaderboards::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebLeaderboards::DeleteLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name)
{
	FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard* Task = new FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard(this, Callback, Key, AppId, Name);
	QueueAsyncTask(Task);
}

void UWebLeaderboards::FindOrCreateLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name, FString sortMethod, FString displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard* Task = new FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard(this, Callback, Key, AppId, Name, sortMethod, displayType, bCreateIfNotFound, bOnlyTrustedWrites, bOnlyFriendsReads);
	QueueAsyncTask(Task);
}

void UWebLeaderboards::GetLeaderboardEntries(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries* Task = new FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries(this, Callback, Key, AppId, RangeStart, RangeEnd, LeaderboardId, DataRequest, SteamId);
	QueueAsyncTask(Task);
}

void UWebLeaderboards::GetLeaderboardsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame* Task = new FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame(this, Callback, Key, AppId);
	QueueAsyncTask(Task);
}

void UWebLeaderboards::ResetLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderboardId)
{
	FOnlineAsyncTaskSteamCoreWebResetLeaderboard* Task = new FOnlineAsyncTaskSteamCoreWebResetLeaderboard(this, Callback, Key, AppId, LeaderboardId);
	QueueAsyncTask(Task);
}

void UWebLeaderboards::SetLeaderboardScore(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderbordId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod)
{
	FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore* Task = new FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore(this, Callback, Key, AppId, LeaderbordId, SteamId, Score, ScoreMethod, Details);
	QueueAsyncTask(Task);
}
