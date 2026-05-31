// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUserStats/SteamUserStats.h"

#ifdef STEAMCORE_SteamUserStats_generated_h
#error "SteamUserStats.generated.h already included, missing '#pragma once' in SteamUserStats.h"
#endif
#define STEAMCORE_SteamUserStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ESteamLeaderboardDataRequest : uint8;
enum class ESteamLeaderboardDisplayType : uint8;
enum class ESteamLeaderboardSortMethod : uint8;
enum class ESteamLeaderboardUploadScoreMethod : uint8;
struct FSteamID;
struct FSteamLeaderboard;
struct FSteamLeaderboardEntries;
struct FSteamLeaderboardEntry;
struct FSteamUGCHandle;

// ********** Begin Class UUserStats ***************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUploadLeaderboardScore); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInteger); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetAchievementProgressLimitsFloat); \
	DECLARE_FUNCTION(execGetAchievementProgressLimits); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execAttachLeaderboardUGC);


struct Z_Construct_UClass_UUserStats_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UUserStats_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserStats(); \
	friend struct ::Z_Construct_UClass_UUserStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UUserStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UUserStats_NoRegister) \
	DECLARE_SERIALIZER(UUserStats)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserStats(UUserStats&&) = delete; \
	UUserStats(const UUserStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUserStats) \
	NO_API virtual ~UUserStats();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserStats;

// ********** End Class UUserStats *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
