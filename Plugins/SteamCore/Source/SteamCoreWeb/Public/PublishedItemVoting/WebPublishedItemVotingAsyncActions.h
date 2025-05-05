/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Allows partners to access the voting information of the content in their Steam Workshop.
* https://partner.steamgames.com/doc/webapi/IPublishedItemVoting
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebPublishedItemVotingAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionItemVoteSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Item Vote Summary
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					Steam ID of user
	* @param	AppId					appID of product
	* @param	PublishedFileIds		The Published File ID who's vote details are required
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Item Vote Summary", AutoCreateRefTerm = "publishedFileIDs", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, TArray<FString> PublishedFileIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionUserVoteSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Item Vote Summary
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					Steam ID of user
	* @param	PublishedFileIds		The Published File ID who's vote details are required
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "User Vote Summary", AutoCreateRefTerm = "publishedFileIDs", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, TArray<FString> PublishedFileIds);
};
