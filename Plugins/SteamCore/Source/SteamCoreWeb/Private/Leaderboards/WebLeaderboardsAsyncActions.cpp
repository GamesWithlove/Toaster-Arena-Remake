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

#include "Leaderboards/WebLeaderboardsAsyncActions.h"
#include "Leaderboards/WebLeaderboardsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionDeleteLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionDeleteLeaderboard* USteamCoreWebAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionDeleteLeaderboard>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebDeleteLeaderboard(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, Name);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionFindOrCreateLeaderboard* USteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionFindOrCreateLeaderboard>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebFindOrCreateLeaderboard(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, Name, SortMethod, DisplayType, bCreateIfNotFound, bOnlyTrustedWrites, bOnlyFriendsReads);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetLeaderboardEntries* USteamCoreWebAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetLeaderboardEntries>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetLeaderboardEntries(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, RangeStart, RangeEnd, LeaderboardId, DataRequest, SteamId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetLeaderboardsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetLeaderboardsForGame* USteamCoreWebAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(UObject* WorldContextObject, FString Key, int32 AppId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetLeaderboardsForGame>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetLeaderboardsForGame(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionResetLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionResetLeaderboard* USteamCoreWebAsyncActionResetLeaderboard::ResetLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionResetLeaderboard>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebResetLeaderboard(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, LeaderboardId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSetLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionSetLeaderboardScore* USteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionSetLeaderboardScore>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebSetLeaderboardScore(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, LeaderboardId, SteamId, Score, ScoreMethod, Details);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
