/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamUserStatsTypes.generated.h"

class UTexture2D;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamLeaderboardDataRequest : uint8
{
	Global = 0,
	GlobalAroundUser = 1,
	Friends = 2,
	Users = 3
};

UENUM(BlueprintType)
enum class ESteamLeaderboardSortMethod : uint8
{
	None = 0,
	Ascending = 1,
	Descending = 2
};

UENUM(BlueprintType)
enum class ESteamLeaderboardDisplayType : uint8
{
	None = 0,
	Numeric = 1,
	TimeSeconds = 2,
	TimeMilliSeconds = 3
};

UENUM(BlueprintType)
enum class ESteamLeaderboardUploadScoreMethod : uint8
{
	None = 0,
	KeepBest = 1,
	ForceUpdate = 2
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamLeaderboardEntries
{
	GENERATED_BODY()
public:
	FSteamLeaderboardEntries()
		: Value(0)
	{
	}

	FSteamLeaderboardEntries(uint64 value)
		: Value(value)
	{
	}

public:
	operator uint64() const { return Value; }
private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FSteamLeaderboardEntry
{
	GENERATED_BODY()
public:
	FSteamLeaderboardEntry()
		: GlobalRank(0)
		  , Score(0)
		  , Details(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamLeaderboardEntry(const LeaderboardEntry_t& Data)
		: SteamID(Data.m_steamIDUser)
		  , GlobalRank(Data.m_nGlobalRank)
		  , Score(Data.m_nScore)
		  , Details(Data.m_cDetails)
		  , UGCHandle(Data.m_hUGC)
	{
	}

public:
	operator LeaderboardEntry_t()
	{
		LeaderboardEntry_t m_Data;
		m_Data.m_cDetails = Details;
		m_Data.m_hUGC = UGCHandle;
		m_Data.m_nGlobalRank = GlobalRank;
		m_Data.m_nScore = Score;
		m_Data.m_steamIDUser = SteamID;

		return m_Data;
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 GlobalRank;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 Score;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 Details;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamUGCHandle UGCHandle;
};

USTRUCT(BlueprintType)
struct FSteamLeaderboard
{
	GENERATED_BODY()
public:
	FSteamLeaderboard()
		: Value(0)
	{
	}

	FSteamLeaderboard(uint64 InValue)
		: Value(InValue)
	{
	}

public:
	operator uint64() const { return Value; }

private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FUserAchievementIconFetched
{
	GENERATED_BODY()
public:
	FUserAchievementIconFetched()
		: bAchieved(false)
		  , Icon(nullptr)
		  , m_nIconHandle(0)
	{
	}

#if ENABLE_STEAMCORE
	FUserAchievementIconFetched(const UserAchievementIconFetched_t& Data)
		: GameID(Data.m_nGameID)
		  , AchievementName(UTF8_TO_TCHAR(Data.m_rgchAchievementName))
		  , bAchieved(Data.m_bAchieved)
		  , Icon(nullptr)
		  , m_nIconHandle(Data.m_nIconHandle)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FString AchievementName;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bAchieved;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	UTexture2D* Icon;

	int m_nIconHandle;
};

USTRUCT(BlueprintType)
struct FUserAchievementStored
{
	GENERATED_BODY()
public:
	FUserAchievementStored()
		: bGroupAchievement(false)
		  , CurrentProgress(0)
		  , MaxProgress(0)
	{
	}

#if ENABLE_STEAMCORE
	FUserAchievementStored(const UserAchievementStored_t& Data)
		: GameID(Data.m_nGameID)
		  , bGroupAchievement(Data.m_bGroupAchievement)
		  , AchievementName(UTF8_TO_TCHAR(Data.m_rgchAchievementName))
		  , CurrentProgress(Data.m_nCurProgress)
		  , MaxProgress(Data.m_nMaxProgress)
	{
	}
#endif
	
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bGroupAchievement;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FString AchievementName;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 CurrentProgress;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 MaxProgress;
};

USTRUCT(BlueprintType)
struct FUserStatsReceived
{
	GENERATED_BODY()
public:
	FUserStatsReceived()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FUserStatsReceived(const UserStatsReceived_t& Data)
		: GameID(Data.m_nGameID)
		  , Result(_SteamResult(Data.m_eResult))
		  , SteamID(Data.m_steamIDUser)
	{
	}
#endif
	
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamID SteamID;
};

USTRUCT(BlueprintType)
struct FUserStatsStored
{
	GENERATED_BODY()
public:
	FUserStatsStored()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FUserStatsStored(const UserStatsStored_t& Data)
		: GameID(Data.m_nGameID)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FUserStatsUnloaded
{
	GENERATED_BODY()
public:
	FUserStatsUnloaded() = default;

#if ENABLE_STEAMCORE
	FUserStatsUnloaded(const UserStatsUnloaded_t& Data)
		: SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FLeaderboardScoresDownloaded
{
	GENERATED_BODY()
public:
	FLeaderboardScoresDownloaded()
		: EntryCount(0)
	{
	}

#if ENABLE_STEAMCORE
	FLeaderboardScoresDownloaded(const LeaderboardScoresDownloaded_t& Data)
		: SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , SteamLeaderboardEntries(Data.m_hSteamLeaderboardEntries)
		  , EntryCount(Data.m_cEntryCount)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboardEntries SteamLeaderboardEntries;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 EntryCount;
};

USTRUCT(BlueprintType)
struct FLeaderboardScoresDownloadedForUsers
{
	GENERATED_BODY()
public:
	FLeaderboardScoresDownloadedForUsers()
		: EntryCount(0)
	{
	}

#if ENABLE_STEAMCORE
	FLeaderboardScoresDownloadedForUsers(const LeaderboardScoresDownloaded_t& Data)
		: SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , SteamLeaderboardEntries(Data.m_hSteamLeaderboardEntries)
		  , EntryCount(Data.m_cEntryCount)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboardEntries SteamLeaderboardEntries;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 EntryCount;
};

USTRUCT(BlueprintType)
struct FRequestUserStatsData
{
	GENERATED_BODY()
public:
	FRequestUserStatsData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRequestUserStatsData(const UserStatsReceived_t& Data)
		: GameID(Data.m_nGameID)
		  , Result(_SteamResult(Data.m_eResult))
		  , SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FLeaderboardScoreUploaded
{
	GENERATED_BODY()
public:
	FLeaderboardScoreUploaded()
		: bSuccess(false)
		  , Score(0)
		  , bScoreChanged(false)
		  , GlobalRankNew(0)
		  , GlobalRankPrevious(0)
	{
	}

#if ENABLE_STEAMCORE
	FLeaderboardScoreUploaded(const LeaderboardScoreUploaded_t& Data)
		: bSuccess(Data.m_bSuccess > 0)
		  , SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , Score(Data.m_nScore)
		  , bScoreChanged(Data.m_bScoreChanged > 0)
		  , GlobalRankNew(Data.m_nGlobalRankNew)
		  , GlobalRankPrevious(Data.m_nGlobalRankPrevious)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bSuccess;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 Score;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bScoreChanged;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 GlobalRankNew;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 GlobalRankPrevious;
};

USTRUCT(BlueprintType)
struct FAttachLeaderboardUGCData
{
	GENERATED_BODY()
public:
	FAttachLeaderboardUGCData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FAttachLeaderboardUGCData(const LeaderboardUGCSet_t& Data)
		: SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FLeaderboardFindResult
{
	GENERATED_BODY()
public:
	FLeaderboardFindResult()
		: bLeaderboardFound(false)
	{
	}

#if ENABLE_STEAMCORE
	FLeaderboardFindResult(const LeaderboardFindResult_t& Data)
		: SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , bLeaderboardFound(Data.m_bLeaderboardFound > 0)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bLeaderboardFound;
};

USTRUCT(BlueprintType)
struct FFindOrCreateLeaderboardData
{
	GENERATED_BODY()
public:
	FFindOrCreateLeaderboardData()
		: bLeaderboardFound(false)
	{
	}

#if ENABLE_STEAMCORE
	FFindOrCreateLeaderboardData(const LeaderboardFindResult_t& Data)
		: SteamLeaderboard(Data.m_hSteamLeaderboard)
		  , bLeaderboardFound(Data.m_bLeaderboardFound > 0)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamLeaderboard SteamLeaderboard;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bLeaderboardFound;
};


USTRUCT(BlueprintType)
struct FNumberOfCurrentPlayers
{
	GENERATED_BODY()
public:
	FNumberOfCurrentPlayers()
		: bSuccess(false)
		  , Players(0)
	{
	}

#if ENABLE_STEAMCORE
	FNumberOfCurrentPlayers(const NumberOfCurrentPlayers_t& Data)
		: bSuccess(Data.m_bSuccess > 0)
		  , Players(Data.m_cPlayers)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	bool bSuccess;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	int32 Players;
};

USTRUCT(BlueprintType)
struct FGlobalAchievementPercentagesReady
{
	GENERATED_BODY()
public:
	FGlobalAchievementPercentagesReady()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FGlobalAchievementPercentagesReady(const GlobalAchievementPercentagesReady_t& Data)
		: GameID(Data.m_nGameID)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FGlobalStatsReceived
{
	GENERATED_BODY()
public:
	FGlobalStatsReceived()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FGlobalStatsReceived(const GlobalStatsReceived_t& Data)
		: GameID(Data.m_nGameID)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	FSteamGameID GameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UserStats")
	ESteamResult Result;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserAchievementIconFetched, const FUserAchievementIconFetched&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserAchievementStored, const FUserAchievementStored&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsReceived, const FUserStatsReceived&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsStored, const FUserStatsStored&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsUnloaded, const FUserStatsUnloaded&, Data);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadLeaderboardEntries, const FLeaderboardScoresDownloaded&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadLeaderboardEntriesForUsers, const FLeaderboardScoresDownloadedForUsers&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestUserStats, const FRequestUserStatsData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUploadLeaderboardScore, const FLeaderboardScoreUploaded&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAttachLeaderboardUGC, const FAttachLeaderboardUGCData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindLeaderboard, const FLeaderboardFindResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindOrCreateLeaderboard, const FFindOrCreateLeaderboardData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetNumberOfCurrentPlayers, const FNumberOfCurrentPlayers&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestGlobalAchievementPercentages, const FGlobalAchievementPercentagesReady&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestGlobalStats, const FGlobalStatsReceived&, Data, bool, bWasSuccessful);