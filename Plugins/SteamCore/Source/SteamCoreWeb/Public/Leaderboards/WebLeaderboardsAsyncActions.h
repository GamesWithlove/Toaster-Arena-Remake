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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebLeaderboardsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionDeleteLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Delete Leaderboard
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		appid of game
	* @param	Name		Name of the leaderboard to delete
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Leaderboard", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Find Or Create Leaderboard
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	AppId					appid of game
	* @param	Name					Name of the leaderboard to delete
	* @param	SortMethod				sort method to use for this leaderboard (defaults to Ascending)
	* @param	DisplayType				display type for this leaderboard (defaults to Numeric)
	* @param	bCreateIfNotFound		if this is true the leaderboard will be created if it doesn't exist. Defaults to true.
	* @param	bOnlyTrustedWrites		if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.
	* @param	bOnlyFriendsReads		if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Find or Create Leaderboard", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name, FString SortMethod = "Ascending", FString DisplayType = "Numeric", bool bCreateIfNotFound = false, bool bOnlyTrustedWrites = false, bool bOnlyFriendsReads = false);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Leaderboard Entries
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	* @param	RangeStart			range start or 0
	* @param	RangeEnd			range end or max LB entries
	* @param	LeaderboardId		ID of the leaderboard to view
	* @param	DataRequest			type of request: RequestGlobal, RequestAroundUser, RequestFriends
	* @param	SteamId				SteamID used for friend & around user requests
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Leaderboard Entries", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetLeaderboardsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Leaderboards for Game
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Leaderboards for Game", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionResetLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Reset Leaderboard
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	* @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Reset Leaderboard", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSetLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Set Leaderboard Score
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	* @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	* @param	SteamId				SteamId to set the score for
	* @param	Score				the score to set for this user
	* @param	Details				game-specific details for how the score was earned. Up to 256 bytes.
	* @param	ScoreMethod			update method to use. Can be "KeepBest" or "ForceUpdate"
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set Leaderboard Score", AutoCreateRefTerm = "details", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Leaderboards|Async")
	static USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod = "KeepBest");
};
