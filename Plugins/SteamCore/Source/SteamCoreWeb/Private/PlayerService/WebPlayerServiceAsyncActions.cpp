/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Users.
* https://partner.steamgames.com/doc/webapi/IPlayerService
*/

#include "PlayerService/WebPlayerServiceAsyncActions.h"
#include "PlayerService/WebPlayerServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetRecentlyPlayedGames
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetRecentlyPlayedGames* USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 Count)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetRecentlyPlayedGames>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetRecentlyPlayedGames(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, Count);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetOwnedGames
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetOwnedGames* USteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(UObject* WorldContextObject, FString Key, FString SteamId, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetOwnedGames>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetOwnedGames(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, bIncludeAppInfo, bIncludePlayedFreeGames, Filter);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetSteamLevel
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetSteamLevel* USteamCoreWebAsyncActionGetSteamLevel::GetSteamLevelAsync(UObject* WorldContextObject, FString Key, FString SteamId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetSteamLevel>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetSteamLevel(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetBadges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetBadges* USteamCoreWebAsyncActionGetBadges::GetBadgesAsync(UObject* WorldContextObject, FString Key, FString SteamId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetBadges>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetBadges(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetCommunityBadgeProgress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetCommunityBadgeProgress* USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 BadgeId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetCommunityBadgeProgress>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetCommunityBadgeProgress(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, BadgeId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionIsPlayingSharedGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionIsPlayingSharedGame* USteamCoreWebAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppIdPlaying)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionIsPlayingSharedGame>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebIsPlayingSharedGame(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppIdPlaying);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
