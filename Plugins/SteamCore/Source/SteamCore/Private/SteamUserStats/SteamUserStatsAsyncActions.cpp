/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "SteamUserStats/SteamUserStatsAsyncActions.h"
#include "SteamUserStats/SteamUserStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionFindLeaderboard* USteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(UObject* WorldContextObject, FString LeaderboardName, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionFindLeaderboard>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(Subsystem, AsyncObject, LeaderboardName, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;

		Subsystem->QueueAsyncTask(Task);

		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(const FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest dataRequest, int32 RangeStart, int32 RangeEnd, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(Subsystem, AsyncObject, SteamLeaderboard, dataRequest, RangeStart, RangeEnd, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(UObject* WorldContextObject, int32 HistoryDays, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(Subsystem, AsyncObject, HistoryDays, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(const FGlobalStatsReceived& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(Subsystem, AsyncObject, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(Subsystem, AsyncObject, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;

		Subsystem->QueueAsyncTask(Task);

		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionUploadLeaderboardScore* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionUploadLeaderboardScore>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(Subsystem, AsyncObject, SteamLeaderboard, UploadScoreMethod, Score, ScoreDetails, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(Subsystem, AsyncObject, LeaderboardName, SortMethod, DisplayType, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionRequestUserStats* USteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionRequestUserStats>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(Subsystem, AsyncObject, SteamID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(const FRequestUserStatsData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(Subsystem, AsyncObject, SteamLeaderboard, Users, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUserStatsAsyncActionAttachLeaderboardUGC>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(Subsystem, AsyncObject, SteamLeaderboard, Handle, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(const FAttachLeaderboardUGCData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
