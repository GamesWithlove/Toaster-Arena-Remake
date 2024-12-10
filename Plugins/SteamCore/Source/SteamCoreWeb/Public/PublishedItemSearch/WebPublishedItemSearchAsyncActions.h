/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamPublishedItemSearch
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebPublishedItemSearchAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByPublicationOrder
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Ranked by Publication Order
	*
	* @param	key						Steamworks Web API publisher authentication key.
	* @param	steamid					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Ranked by Publication Order", AutoCreateRefTerm = "Tag,UserTag", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByTrend
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Ranked by Trend
	*
	* @param	key						Steamworks Web API publisher authentication key.
	* @param	steamid					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Days					Number of days for the trend period, including today
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Ranked by Trend", AutoCreateRefTerm = "Tag,UserTag", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRankedByVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Ranked by Vote
	*
	* @param	key						Steamworks Web API publisher authentication key.
	* @param	steamid					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Ranked by Vote", AutoCreateRefTerm = "Tag,UserTag", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionResultSetSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Result Set Summary
	*
	* @param	key						Steamworks Web API publisher authentication key.
	* @param	steamid					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Result Set Summary", AutoCreateRefTerm = "Tag,UserTag", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};
