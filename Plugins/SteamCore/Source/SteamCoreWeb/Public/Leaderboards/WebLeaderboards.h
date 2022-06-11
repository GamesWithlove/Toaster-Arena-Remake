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

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebLeaderboards.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebLeaderboards : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebLeaderboards() { SubsystemType = ESubsystemWeb::Leaderboards; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Delete Leaderboard
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		appid of game
	* @param	Name		Name of the leaderboard to delete
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void DeleteLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name);

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void FindOrCreateLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Name, FString SortMethod = "Ascending", FString DisplayType = "Numeric", bool bCreateIfNotFound = false, bool bOnlyTrustedWrites = false, bool bOnlyFriendsReads = false);

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
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetLeaderboardEntries(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId);

	/**
	* Get Leaderboards for Game
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetLeaderboardsForGame(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId);

	/**
	* Reset Leaderboard
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	* @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void ResetLeaderboard(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderboardId);

	/**
	* Set Leaderboard Score
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				appid of game
	* @param	LeaderbordId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	* @param	SteamId				SteamId to set the score for
	* @param	Score				the score to set for this user
	* @param	Details				game-specific details for how the score was earned. Up to 256 bytes.
	* @param	ScoreMethod			update method to use. Can be "KeepBest" or "ForceUpdate"
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps", meta = (AutoCreateRefTerm = "details"))
	void SetLeaderboardScore(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 LeaderbordId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod = "KeepBest");
};
