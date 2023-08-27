/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/ISteamUserStats
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebUserStatsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Retrieves the global achievement percentages for the specified app.
	*
	* @param	GameId		GameID to retrieve the achievement percentages for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Global Achievement Percentages for App", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(UObject* WorldContextObject, FString GameId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetGlobalStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Retrieves the global stats percentages for the specified app.
	*
	* @param	AppId			AppID that we're getting global stats for
	* @param	Names			Names of stat to get data for
	* @param	StartDate		Start date for daily totals (unix epoch timestamp)
	* @param	EndDate			End date for daily totals (unix epoch timestamp)
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Global Stats for Game", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(UObject* WorldContextObject, int32 AppId, TArray<FString> Names, int32 StartDate, int32 EndDate);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets the total number of players currently active in the specified app on Steam.
	*
	* Note that this will not return players that are playing while not connected to Steam.
	*
	* @param	AppId			AppID that we're getting user count for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Number of Current Players", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPlayerAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets the list of achievements the specified user has unlocked in an app.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamId of user
	* @param	AppId			AppID to get achievements for
	* @param	language		Language to return strings for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Player Achievements", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString language = "english");
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetSchemaForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets the complete list of stats and achievements for the specified game.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	AppId			AppID to get achievements for
	* @param	language		Language to return strings for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Schema for Game", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString language = "english");
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets the list of stats that the specified user has set in an app.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamId of user
	* @param	AppId			AppID to get achievements for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User Stats for Game", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Sets a stat for the specified user for the game.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamId of user
	* @param	AppId			AppID to get achievements for
	* @param	Names			Names of stat or achievement to set
	* @param	Values			Values to set
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set User Stats for Game", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|UserStats|Async")
	static USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, TArray<FString> Names, TArray<int32> Values);
};
