/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUserStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindLeaderboard m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(class USteamCoreSubsystem* Subsystem, const FOnFindLeaderboard Callback, const FString LeaderboardName, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_LeaderboardName(LeaderboardName)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FString LeaderboardName, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_LeaderboardName(LeaderboardName)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard() = delete;
protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntries m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* Subsystem, const FOnDownloadLeaderboardEntries Callback, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardDataRequest DataRequest, const int32 RangeStart, const int32 RangeEnd, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_DataRequest(DataRequest)
		  , m_RangeStart(RangeStart)
		  , m_RangeEnd(RangeEnd)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, FSteamLeaderboard Leaderboard, const ESteamLeaderboardDataRequest DataRequest, const int32 RangeStart, const int32 RangeEnd, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_DataRequest(DataRequest)
		  , m_RangeStart(RangeStart)
		  , m_RangeEnd(RangeEnd)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries() = delete;
protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardDataRequest m_DataRequest;
	int32 m_RangeStart;
	int32 m_RangeEnd;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(class USteamCoreSubsystem* Subsystem, const FOnRequestGlobalStats Callback, const int32 HistoryDays, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_HistoryDays(HistoryDays)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 HistoryDays, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_HistoryDays(HistoryDays)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats() = delete;
protected:
	GlobalStatsReceived_t m_CallbackResults;
	int32 m_HistoryDays;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalAchievementPercentages m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(class USteamCoreSubsystem* Subsystem, const FOnRequestGlobalAchievementPercentages Callback, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages() = delete;
protected:
	GlobalAchievementPercentagesReady_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetNumberOfCurrentPlayers m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(class USteamCoreSubsystem* Subsystem, const FOnGetNumberOfCurrentPlayers Callback, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers() = delete;
protected:
	NumberOfCurrentPlayers_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUploadLeaderboardScore m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(class USteamCoreSubsystem* Subsystem, const FOnUploadLeaderboardScore Callback, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardUploadScoreMethod UploadMethod, const int32 Score, const TArray<int32> ScoreDetails, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_UploadScoreMethod(UploadMethod)
		  , m_Score(Score)
		  , m_ScoreDetails(ScoreDetails)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardUploadScoreMethod UploadMethod, const int32 Score, const TArray<int32> ScoreDetails, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_UploadScoreMethod(UploadMethod)
		  , m_Score(Score)
		  , m_ScoreDetails(ScoreDetails)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore() = delete;
protected:
	LeaderboardScoreUploaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardUploadScoreMethod m_UploadScoreMethod;
	int32 m_Score;
	TArray<int32> m_ScoreDetails;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindOrCreateLeaderboard m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* Subsystem, const FOnFindOrCreateLeaderboard Callback, const FString LeaderboardName, const ESteamLeaderboardSortMethod SortMethod, const ESteamLeaderboardDisplayType DisplayType, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_LeaderboardName(LeaderboardName)
		  , m_SortMethod(SortMethod)
		  , m_DisplayType(DisplayType)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FString LeaderboardName, const ESteamLeaderboardSortMethod SortMethod, const ESteamLeaderboardDisplayType DisplayType, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_LeaderboardName(LeaderboardName)
		  , m_SortMethod(SortMethod)
		  , m_DisplayType(DisplayType)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard() = delete;
protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;
	ESteamLeaderboardSortMethod m_SortMethod = ESteamLeaderboardSortMethod::None;
	ESteamLeaderboardDisplayType m_DisplayType = ESteamLeaderboardDisplayType::None;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* Subsystem, const FOnRequestUserStats Callback, const FSteamID SteamID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamID(SteamID)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamID(SteamID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats() = delete;
protected:
	UserStatsReceived_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntriesForUsers m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(class USteamCoreSubsystem* Subsystem, const FOnDownloadLeaderboardEntriesForUsers Callback, const FSteamLeaderboard Leaderboard, const TArray<FSteamID> Users, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_Users(Users)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const TArray<FSteamID> Users, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_Users(Users)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers() = delete;
protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	TArray<FSteamID> m_Users;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAttachLeaderboardUGC m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* Subsystem, const FOnAttachLeaderboardUGC Callback, const FSteamLeaderboard Leaderboard, const FSteamUGCHandle Handle, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_UGCHandle(Handle)
	{
	}

	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const FSteamUGCHandle Handle, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Leaderboard(Leaderboard)
		  , m_UGCHandle(Handle)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC() = delete;
protected:
	LeaderboardUGCSet_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	FSteamUGCHandle m_UGCHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC")); }
};
#endif