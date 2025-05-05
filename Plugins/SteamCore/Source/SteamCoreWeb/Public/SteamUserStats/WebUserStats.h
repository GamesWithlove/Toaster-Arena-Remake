/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/ISteamUserStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebUserStats.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebUserStats : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebUserStats() { SubsystemType = ESubsystemWeb::UserStats; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Retrieves the global achievement percentages for the specified app.
	*
	* @param	GameId		GameID to retrieve the achievement percentages for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetGlobalAchievementPercentagesForApp(const FOnSteamCoreWebCallback& Callback, FString GameId);

	/**
	* Retrieves the global stats percentages for the specified app.
	*
	* @param	Appid			AppID that we're getting global stats for
	* @param	Names			Names of stat to get data for
	* @param	StartDate		Start date for daily totals (unix epoch timestamp)
	* @param	EndDate			End date for daily totals (unix epoch timestamp)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetGlobalStatsForGame(const FOnSteamCoreWebCallback& Callback, int32 Appid, TArray<FString> Names, int32 StartDate, int32 EndDate);

	/**
	* Gets the total number of players currently active in the specified app on Steam.
	*
	* Note that this will not return players that are playing while not connected to Steam.
	*
	* @param	Appid			AppID that we're getting user count for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetNumberOfCurrentPlayers(const FOnSteamCoreWebCallback& Callback, int32 Appid);

	/**
	* Gets the list of achievements the specified user has unlocked in an app.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamID of user
	* @param	Appid			AppID to get achievements for
	* @param	Language		Language to return strings for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetPlayerAchievements(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Appid, FString Language = "english");

	/**
	* Gets the complete list of stats and achievements for the specified game.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	Appid			AppID to get achievements for
	* @param	Language		Language to return strings for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetSchemaForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Appid, FString Language = "english");

	/**
	* Gets the list of stats that the specified user has set in an app.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamID of user
	* @param	Appid			AppID to get achievements for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void GetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Appid);

	/**
	* Sets a stat for the specified user for the game.
	*
	* @param	Key				Steamworks Web API user authentication Key.
	* @param	SteamId			SteamID of user
	* @param	Appid			AppID to get achievements for
	* @param	Names			Names of stat or achievement to set
	* @param	Values			Values to set
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CloudService")
	void SetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Appid, TArray<FString> Names, TArray<int32> Values);
};
