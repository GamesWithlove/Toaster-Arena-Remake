/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "SteamUserStats/SteamUserStats.h"
#include "SteamUserStats/SteamUserStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UUserStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);
	OnUserStatsReceivedCallback.Register(this, &UUserStats::OnUserStatsReceived);
	OnUserStatsStoredCallback.Register(this, &UUserStats::OnUserStatsStored);
	OnUserAchievementStoredCallback.Register(this, &UUserStats::OnUserAchievementStored);
	OnUserStatsUnloadedCallback.Register(this, &UUserStats::OnUserStatsUnloaded);
	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);

	if (IsRunningDedicatedServer())
	{
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
		OnUserStatsReceivedCallback.SetGameserverFlag();
		OnUserStatsStoredCallback.SetGameserverFlag();
		OnUserAchievementStoredCallback.SetGameserverFlag();
		OnUserStatsUnloadedCallback.SetGameserverFlag();
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
	}
}

void UUserStats::Deinitialize()
{
	OnUserAchievementIconFetchedCallback.Unregister();
	OnUserStatsReceivedCallback.Unregister();
	OnUserStatsStoredCallback.Unregister();
	OnUserAchievementStoredCallback.Unregister();
	OnUserStatsUnloadedCallback.Unregister();
	OnUserAchievementIconFetchedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC* Task = new FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(this, Callback, SteamLeaderboard, Handle);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::ClearAchievement(FString Name)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ClearAchievement(TCHAR_TO_UTF8(*Name));
	}

	return bResult;
}

void UUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries* Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(this, Callback, SteamLeaderboard, DataRequest, RangeStart, RangeEnd);
		QueueAsyncTask(Task);
	}
}

void UUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers* Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(this, Callback, SteamLeaderboard, Users);
		QueueAsyncTask(Task);
	}
}

void UUserStats::FindLeaderboard(const FOnFindLeaderboard& Callback, FString LeaderboardName)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard* Task = new FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(this, Callback, LeaderboardName);
		QueueAsyncTask(Task);
	}
}

void UUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard* Task = new FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(this, Callback, LeaderboardName, SortMethod, DisplayType);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::GetAchievement(FString Name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievement(TCHAR_TO_UTF8(*Name), &bAchieved);
	}

	return bResult;
}

bool UUserStats::GetAchievementAchievedPercent(FString Name, float& OutPercent)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutPercent = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementAchievedPercent(TCHAR_TO_UTF8(*Name), &OutPercent);
	}

	return bResult;
}

bool UUserStats::GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& OutUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	OutUnlockTime = 0;

	if (SteamUserStats())
	{
		uint32 UnlockTime = 0;

		bResult = SteamUserStats()->GetAchievementAndUnlockTime(TCHAR_TO_UTF8(*Name), &bAchieved, &UnlockTime);

		OutUnlockTime = UnlockTime;
	}
	return bResult;
}

FString UUserStats::GetAchievementDisplayAttribute(FString Name, FString Key)
{
	LogVeryVerbose("Name (%s), Key (%s)", *Name, *Key);

	FString Result;

	if (Name.Len() == 0 || Key.Len() == 0)
	{
		return Result;
	}

	if (SteamUserStats())
	{
		const FTCHARToUTF8 ConvertedName(*Name);
		const FTCHARToUTF8 ConvertedKey(*Key);

		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementDisplayAttribute(ConvertedName.Get(), ConvertedKey.Get()));
	}

	return Result;
}

UTexture2D* UUserStats::GetAchievementIcon(FString Name)
{
	LogVeryVerbose("");

	UTexture2D* Texture = nullptr;

	if (SteamUserStats())
	{
		const int ImageData = SteamUserStats()->GetAchievementIcon(TCHAR_TO_UTF8(*Name));
		Texture = GetSteamTexture(ImageData);
	}

	return Texture;
}

bool UUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& OutLeaderboardEntry, TArray<int32> Details, TArray<int32>& OutDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutLeaderboardEntry = FSteamLeaderboardEntry();
	OutDetails.Empty();

	if (SteamUserStats())
	{
		OutDetails.SetNum(Details.Num());

		LeaderboardEntry_t LeaderboardEntry;

		bResult = SteamUserStats()->GetDownloadedLeaderboardEntry(LeaderboardEntries, Index, &LeaderboardEntry, OutDetails.GetData(), OutDetails.Num());

		if (bResult)
		{
			OutLeaderboardEntry = LeaderboardEntry;
		}
	}

	return bResult;
}

FString UUserStats::GetAchievementName(int32 Achievement)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementName(Achievement));
	}

	return Result;
}

bool UUserStats::GetGlobalStatInt(FString StatName, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0;

	if (SteamUserStats())
	{
		int64 pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*StatName), &pData);
		OutData = pData;
	}

	return bResult;
}

bool UUserStats::GetGlobalStatFloat(FString StatName, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

	if (SteamUserStats())
	{
		double pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*StatName), &pData);
		OutData = pData;
	}

	return bResult;
}

int32 UUserStats::GetGlobalStatHistoryInt(FString StatName, int32 HistoryDays, TArray<int32>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

	if (SteamUserStats())
	{
		TArray<int64> pData;
		pData.SetNum(HistoryDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*StatName), pData.GetData(), HistoryDays);

		for (auto& Element : pData)
		{
			OutData.Add(Element);
		}
	}

	return Result;
}

int32 UUserStats::GetGlobalStatHistoryFloat(FString StatName, int32 HistoryDays, TArray<float>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

	if (SteamUserStats() && HistoryDays > 0)
	{
		TArray<double> DataArray;
		DataArray.SetNum(HistoryDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*StatName), DataArray.GetData(), DataArray.Num());

		for (auto& Element : DataArray)
		{
			OutData.Add(Element);
		}
	}

	return Result;
}

bool UUserStats::GetAchievementProgressLimits(FString Name, int32& MinProgress, int32& MaxProgress)
{
	LogVeryVerbose("");

	bool bResult = false;
	MinProgress = 0;
	MaxProgress = 0;

#if STEAM_VERSION >= 151
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementProgressLimits(TCHAR_TO_UTF8(*Name), &MinProgress, &MaxProgress);
	}
#endif

	return bResult;
}

bool UUserStats::GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress)
{
	LogVeryVerbose("");

	bool bResult = false;
	MinProgress = 0.0f;
	MaxProgress = 0.0f;

#if STEAM_VERSION >= 151
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementProgressLimits(TCHAR_TO_UTF8(*Name), &MinProgress, &MaxProgress);
	}
#endif

	return bResult;
}

ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardDisplayType Result = ESteamLeaderboardDisplayType::None;

	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardDisplayType>(SteamUserStats()->GetLeaderboardDisplayType(SteamLeaderboard));
	}

	return Result;
}

int32 UUserStats::GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetLeaderboardEntryCount(SteamLeaderboard);
	}

	return Result;
}

FString UUserStats::GetLeaderboardName(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetLeaderboardName(SteamLeaderboard));
	}

	return Result;
}

ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardSortMethod Result = ESteamLeaderboardSortMethod::None;

	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardSortMethod>(SteamUserStats()->GetLeaderboardSortMethod(SteamLeaderboard));
	}

	return Result;
}

int32 UUserStats::GetMostAchievedAchievementInfo(FString& Name, float& OutPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	Name.Empty();
	OutPercent = 0.0f;
	bAchieved = false;

	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetMostAchievedAchievementInfo(DataArray.GetData(), 128, &OutPercent, &bAchieved);

		Name = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& OutPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	Name.Empty();
	OutPercent = 0.0f;
	bAchieved = false;

	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetNextMostAchievedAchievementInfo(IteratorPrevious, DataArray.GetData(), 128, &OutPercent, &bAchieved);

		Name = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UUserStats::GetNumAchievements()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetNumAchievements();
	}

	return Result;
}

void UUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback)
{
	LogVeryVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers* Task = new FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(this, Callback);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;

	OutData = 0;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UUserStats::GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UUserStats::GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved);
	}

	return bResult;
}

bool UUserStats::GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32& OutUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	OutUnlockTime = 0;
	uint32 UnlockTime = 0;

	if (SteamUserStats())
	{
		SteamUserStats()->GetUserAchievementAndUnlockTime(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved, &UnlockTime);
	}

	OutUnlockTime = UnlockTime;

	return bResult;
}

bool UUserStats::GetStatInt(FString Name, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UUserStats::GetStatFloat(FString Name, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UUserStats::IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->IndicateAchievementProgress(TCHAR_TO_UTF8(*Name), CurrentProgress, MaxProgress);
	}

	return bResult;
}

bool UUserStats::RequestCurrentStats()
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->RequestCurrentStats();
	}

	return bResult;
}

void UUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(this, Callback);
		QueueAsyncTask(Task);
	}
}

void UUserStats::RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(this, Callback, HistoryDays);
		QueueAsyncTask(Task);
	}
}

void UUserStats::RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(this, Callback, SteamID);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::ResetAllStats(bool bAchievementsToo)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ResetAllStats(bAchievementsToo);
	}

	return bResult;
}

bool UUserStats::SetAchievement(FString Name)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetAchievement(TCHAR_TO_UTF8(*Name));
	}

	return bResult;
}

bool UUserStats::SetStatInt(FString Name, int32 Data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*Name), Data);
	}

	return bResult;
}

bool UUserStats::SetStatFloat(FString Name, float Data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*Name), Data);
	}

	return bResult;
}

bool UUserStats::StoreStats()
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->StoreStats();
	}

	return bResult;
}

bool UUserStats::UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->UpdateAvgRateStat(TCHAR_TO_UTF8(*Name), CountThisSession, SessionLength);
	}

	return bResult;
}

void UUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore* Task = new FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(this, Callback, SteamLeaderboard, UploadScoreMethod, Score, ScoreDetails);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsReceived.Broadcast(Data);
	});
}

void UUserStats::OnUserStatsStored(UserStatsStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsStored.Broadcast(Data);
	});
}

void UUserStats::OnUserAchievementStored(UserAchievementStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserAchievementStored.Broadcast(Data);
	});
}

void UUserStats::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsUnloaded.Broadcast(Data);
	});
}

void UUserStats::OnUserAchievementIconFetched(UserAchievementIconFetched_t* pParam)
{
	LogVerbose("");

	FUserAchievementIconFetched Data = *pParam;
	Data.Icon = GetSteamTexture(Data.m_nIconHandle);
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserAchievementIconFetched.Broadcast(Data);
	});
}
