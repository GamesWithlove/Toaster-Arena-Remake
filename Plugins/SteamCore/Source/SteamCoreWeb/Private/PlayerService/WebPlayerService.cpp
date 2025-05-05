/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Users.
* https://partner.steamgames.com/doc/webapi/IPlayerService
*/

#include "PlayerService/WebPlayerService.h"
#include "PlayerService/WebPlayerServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebPlayerService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebPlayerService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebPlayerService::GetRecentlyPlayedGames(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Count)
{
	FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames* Task = new FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames(this, Callback, Key, SteamId, Count);
	QueueAsyncTask(Task);
}

void UWebPlayerService::GetOwnedGames(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter)
{
	FOnlineAsyncTaskSteamCoreWebGetOwnedGames* Task = new FOnlineAsyncTaskSteamCoreWebGetOwnedGames(this, Callback, Key, SteamId, bIncludeAppInfo, bIncludePlayedFreeGames, Filter);
	QueueAsyncTask(Task);
}

void UWebPlayerService::GetSteamLevel(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetSteamLevel* Task = new FOnlineAsyncTaskSteamCoreWebGetSteamLevel(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebPlayerService::GetBadges(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetBadges* Task = new FOnlineAsyncTaskSteamCoreWebGetBadges(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebPlayerService::GetCommunityBadgeProgress(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 BadgeId)
{
	FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress* Task = new FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress(this, Callback, Key, SteamId, BadgeId);
	QueueAsyncTask(Task);
}

void UWebPlayerService::IsPlayingSharedGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppIdPlaying)
{
	FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame* Task = new FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame(this, Callback, Key, SteamId, AppIdPlaying);
	QueueAsyncTask(Task);
}
