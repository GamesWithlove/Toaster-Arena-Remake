/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamUserStatsTypes.h"
#include "SteamUserStats.generated.h"

UCLASS()
class STEAMCORE_API UUserStats : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUserStats() { SubsystemType = ESteamSubsystem::UserStats; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
	FOnUserAchievementIconFetched UserAchievementIconFetched;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
	FOnUserAchievementStored UserAchievementStored;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
	FOnUserStatsReceived UserStatsReceived;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
	FOnUserStatsStored UserStatsStored;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
	FOnUserStatsUnloaded UserStatsUnloaded;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Attaches a piece of user generated content the current user's entry on a leaderboard.
	*
	* This content could be a replay of the user achieving the score or a ghost to race against. The attached Handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.
	* Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.
	* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	Handle				Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);

	/**
	* Resets the unlock status of an achievement.
	*
	* This is primarily only ever used for testing.
	* ou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	* This call only modifies Steam's in-memory state so it is quite cheap. 
	* To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.
	*
	* @param	Name	The 'API Name' of the Achievement to reset.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool ClearAchievement(FString Name);

	/**
	* Fetches a series of leaderboard entries for a specified leaderboard.
	*
	* You can ask for more entries than exist, then this will return as many as do exist.
	* If you want to download entries for an arbitrary set of users, such as all of 
	* the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	DataRequest			The type of data request to make.
	* @param	RangeStart			The index to start downloading entries relative to eLeaderboardDataRequest.
	* @param	RangeEnd			The last index to retrieve entries for relative to eLeaderboardDataRequest.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd);

	/**
	* Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.
	*
	* A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.
	* If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.
	* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	Users				An array of Steam IDs to get the leaderboard entries for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users);

	/**
	* Gets a leaderboard by name.
	*
	* You must call either this or FindOrCreateLeaderboard to obtain the leaderboard Handle which is valid for the game session for
	* each leaderboard you wish to access prior to calling any other Leaderboard functions.
	*
	* @param	LeaderboardName		The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void FindLeaderboard(const FOnFindLeaderboard& Callback, FString LeaderboardName);

	/**
	* Gets a leaderboard by name, it will create it if it's not yet created.
	*
	* You must call either this or FindLeaderboard to obtain the leaderboard Handle which is valid for the
	* game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.
	* Leaderboards created with this function will not automatically show up in the Steam Community.
	* You must manually set the Community Name field in the App Admin panel of the Steamworks website.
	* As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks
	* website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.
	* You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone
	* for eLeaderboardDisplayType as this is undefined behavior.
	*
	* @param	LeaderboardName		The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.
	* @param	SortMethod			The sort order of the new leaderboard if it's created.
	* @param	DisplayType			The display type (used by the Steam Community web site) of the new leaderboard if it's created.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType);

	/**
	* Gets the unlock status of the Achievement.
	*
	* The equivalent function for other users is GetUserAchievement.
	*
	* @param	Name		The 'API Name' of the achievement.
	* @param	bAchieved	Returns the unlock status of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetAchievement(FString Name, bool& bAchieved);

	/**
	* Returns the percentage of users who have unlocked the specified achievement.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	Name		The 'API Name' of the achievement.
	* @param	Percent		Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetAchievementAchievedPercent(FString Name, float& Percent);

	/**
	* Gets the achievement status, and the time it was unlocked if unlocked.
	*
	* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.
	* The equivalent function for other users is GetUserAchievementAndUnlockTime.
	*
	* @param	Name		The 'API Name' of the achievement.
	* @param	bAchieved	Returns whether the current user has unlocked the achievement.
	* @param	UnlockTime	Returns the time that the unchievement was unlocked; if pbAchieved is true.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& UnlockTime);

	/**
	* Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.
	*
	* This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.
	*
	* This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.
	*
	* @param	Name		The 'API Name' of the achievement.
	* @param	Key			The 'key' to get a value for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static FString GetAchievementDisplayAttribute(FString Name, FString Key);

	/**
	* Gets the icon for an achievement.
	*
	* @param	Name	The 'API Name' of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static UTexture2D* GetAchievementIcon(FString Name);

	/**
	* Gets the 'API name' for an achievement index between 0 and GetNumAchievements.
	*
	* This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.
	* In general games should not need these functions as they should have the list of achievements compiled into them.
	*
	* @param	Achievement			index of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static FString GetAchievementName(int32 Achievement);

	/**
	* Retrieves the data for a single leaderboard entry.
	*
	* You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.
	* Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t Handle will become invalid.
	* Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.
	*
	* @param	LeaderboardEntries		A leaderboard entries Handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.
	* @param	Index					The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.
	* @param	LeaderboardEntry		Variable where the entry will be returned to.
	* @param	Details					A preallocated array where the details of this entry get returned into.
	* @param outDetails
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Details"))
	static bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32> Details, TArray<int32>& outDetails);

	/**
	* Gets the lifetime totals for an aggregated stat.
	*
	* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	StatName	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetGlobalStatInt(FString StatName, int32& Data);

	/**
	* Gets the lifetime totals for an aggregated stat.
	*
	* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	StatName	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetGlobalStatFloat(FString StatName, float& Data);

	/**
	* Gets the daily history for an aggregated stat.
	*
	* pData will be filled with daily values, starting with today.
	* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.
	* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	StatName		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	HistoryDays		The total size in bytes of the pData array.
	* @param	Data			Array that the daily history will be returned into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetGlobalStatHistoryInt(FString StatName, int32 HistoryDays, TArray<int32>& Data);

	/**
	* Gets the daily history for an aggregated stat.
	*
	* pData will be filled with daily values, starting with today.
	* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.
	* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	StatName		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	HistoryDays		The total size in bytes of the pData array.
	* @param	Data			Array that the daily history will be returned into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetGlobalStatHistoryFloat(FString StatName, int32 HistoryDays, TArray<float>& Data);

	/**
	* For achievements that have related Progress stats, use this to query what the bounds of that progress are.
	* You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress
	* have been made, to show a progress notification to the user.
	*
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetAchievementProgressLimits(FString Name, int32& MinProgress, int32& MaxProgress);

	/**
	* For achievements that have related Progress stats, use this to query what the bounds of that progress are.
	* You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress
	* have been made, to show a progress notification to the user.
	*
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress);

	/**
	* Returns the display type of a leaderboard Handle.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard);

	/**
	* Returns the total number of entries in a leaderboard.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard);

	/**
	* Returns the name of a leaderboard Handle.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard);

	/**
	* Returns the sort order of a leaderboard Handle.
	*
	* @param	SteamLeaderboard	A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard);

	/**
	* Gets the info on the most achieved achievement for the game.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	Name			String buffer to return the 'API Name' of the achievement into.
	* @param	Percent			Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	* @param	bAchieved		Variable to return whether the current user has unlocked this achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved);

	/**
	* Gets the info on the next most achieved achievement for the game.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	Name			String buffer to return the 'API Name' of the achievement into.
	* @param	Percent			Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	* @param	bAchieved		Variable to return whether the current user has unlocked this achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved);

	/**
	* Get the number of achievements defined in the App Admin panel of the Steamworks website.
	*
	* This is used for iterating through all of the achievements with GetAchievementName.
	* In general games should not need these functions because they should have a list of existing achievements compiled into them.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static int32 GetNumAchievements();

	/**
	* Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	SteamIDUser	The Steam ID of the user to get the stat for.
	* @param	Name		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32& Data);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	SteamIDUser	The Steam ID of the user to get the stat for.
	* @param	Name		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);

	/**
	* Gets the unlock status of the Achievement.
	*
	* The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.
	*
	* @param	SteamIDUser		The Steam ID of the user to get the achievement for.
	* @param	Name			The 'API Name' of the achievement.
	* @param	bAchieved		Returns the unlock status of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);

	/**
	* Gets the achievement status, and the time it was unlocked if unlocked.
	*
	* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.
	* The equivalent function for the local user is GetAchievementAndUnlockTime.
	*
	* @param	SteamIDUser		The Steam ID of the user to get the achievement for.
	* @param	Name			The 'API Name' of the achievement.
	* @param	bAchieved		Returns the unlock status of the achievement.
	* @param	UnlockTime		Returns the time that the unchievement was unlocked; if pbAchieved is true.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32& UnlockTime);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	Name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data	The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetStatInt(FString Name, int32& Data);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	Name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data	The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool GetStatFloat(FString Name, float& Data);

	/**
	* Shows the user a pop-up notification with the current progress of an achievement.
	*
	* Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!
	*
	* @param	The 'API Name' of the achievement.
	* @param	The current progress.
	* @param	The progress required to unlock the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress);

	/**
	* Asynchronously request the user's current stats and achievements from the server.
	*
	* You must always call this first to get the initial status of stats and achievements.
	* Only after the resulting Callback comes back can you start calling the rest of the stats and achievement functions for the current user.
	* The equivalent function for other users is RequestUserStats.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool RequestCurrentStats();

	/**
	* Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback);

	/**
	* Asynchronously fetches global stats data, which is available for stats marked as "aggregated" in the App Admin panel of the Steamworks website.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.
	*
	* @param	HistoryDays		How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays);

	/**
	* Asynchronously downloads stats and achievements for the specified user from the server.
	*
	* These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.
	* To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a
	* UserStatsUnloaded_t Callback is sent. After receiving this Callback the user's stats will be unavailable until this function is called again.
	* The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.
	*
	* @param	SteamID		The Steam ID of the user to request stats for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback"))
	void RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID);

	/**
	* Resets the current users stats and, optionally achievements.
	*
	* This automatically calls StoreStats to persist the changes to the server.
	* This should typically only be used for testing purposes during development.
	* Ensure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.
	*
	* @param	bAchievementsToo	Also reset the user's achievements?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool ResetAllStats(bool bAchievementsToo);

	/**
	* Unlocks an achievement.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	* You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.
	* This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.
	*
	* @param	Name	The 'API Name' of the Achievement to unlock.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool SetAchievement(FString Name);

	/**
	* Sets / updates the value of a given stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	Name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data	The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool SetStatInt(FString Name, int32 Data);

	/**
	* Sets / updates the value of a given stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	Name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data	The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool SetStatFloat(FString Name, float Data);

	/**
	* Send the changed stats and achievements data to the server for permanent storage.
	*
	* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.
	* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.
	* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.
	* This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.
	* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.
	*
	* You can find additional debug information written to the %steam_install%\logs\stats_log.txt file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool StoreStats();

	/**
	* Updates an AVGRATE stat with new values.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	Name				The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	CountThisSession	The value accumulation since the last call to this function.
	* @param	SessionLength		The amount of time in seconds since the last call to this function.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
	static bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);

	/**
	* Uploads a user score to a specified leaderboard.
	*
	* Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard 
	* you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.
	* Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.
	*
	* @param	SteamLeaderboard		A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	UploadScoreMethod		Do you want to force the score to change, or keep the previous score if it was better?
	* @param	Score					The score to upload.
	* @param	ScoreDetails			Optional: Array containing the details surrounding the unlocking of this score.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "Callback, scoreDetails"))
	void UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserAchievementIconFetched, UserAchievementIconFetched_t, OnUserAchievementIconFetchedCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsReceived, UserStatsReceived_t, OnUserStatsReceivedCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsStored, UserStatsStored_t, OnUserStatsStoredCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserAchievementStored, UserAchievementStored_t, OnUserAchievementStoredCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsUnloaded, UserStatsUnloaded_t, OnUserStatsUnloadedCallback);
#endif
};
