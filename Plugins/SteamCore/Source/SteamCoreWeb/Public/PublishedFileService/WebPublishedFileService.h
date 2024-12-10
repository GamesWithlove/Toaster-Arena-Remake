/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Workshop items.
* https://partner.steamgames.com/doc/webapi/IPublishedFileService
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebPublishedFileService.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebPublishedFileService : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebPublishedFileService() { SubsystemType = ESubsystemWeb::PublishedFile; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Performs a search query for published files
	*
	* @param	Key							Steamworks Web API publisher authentication Key.
	* @param	QueryType					enumeration EPublishedFileQueryType in clientenums.h
	* @param	Page						Current page. Currently there is an upper limit of 1000.
	* @param	Cursor						Cursor to paginate through the results (set to '*' for the first request). Prefer this over using the page parameter, as it will allow you to do deep pagination. When used, the page parameter will be ignored. Use the "next_cursor" value returned in the response to set up the next query to get the next set of results.
	* @param	NumPerPage					(Optional) The number of results, per page to return.
	* @param	CreatorAppId				App that created the files
	* @param	AppId						App that consumes the files
	* @param	RequiredTags				Tags to match on. See match_all_tags parameter below
	* @param	ExcludedTags				(Optional) Tags that must NOT be present on a published file to satisfy the query.
	* @param	bMatchAllTags				If true, then items must have all the tags specified, otherwise they must have at least one of the tags.
	* @param	RequiredFlags				Required flags that must be set on any returned items
	* @param	OmittedFlags				Flags that must not be set on any returned items
	* @param	SearchText					Text to match in the item's title or description
	* @param	FileType					EPublishedFileInfoMatchingFileType
	* @param	ChildPublishedFileId		Find all items that reference the given item.
	* @param	Days						If query_type is k_PublishedFileQueryType_RankedByTrend, then this is the number of days to get votes for [1,7].
	* @param	bIncludeRecentVotesOnly		If query_type is k_PublishedFileQueryType_RankedByTrend, then limit result set just to items that have votes within the day range given
	* @param	CacheMaxAgeSeconds			Allow stale data to be returned for the specified number of seconds.
	* @param	Language					Language to search in and also what gets returned. Defaults to English.
	* @param	RequiredKvTags				Required Key-value tags to match on.
	* @param	bTotalOnly					(Optional) If true, only return the total number of files that satisfy this query.
	* @param	bIDsOnly					(Optional) If true, only return the published file ids of files that satisfy this query.
	* @param	bReturnVoteData				Return vote data
	* @param	bReturnTags					Return tags in the file details
	* @param	bReturnKvTags				Return Key-value tags in the file details
	* @param	bReturnPreviews				Return preview image and video details in the file details
	* @param	bReturnChildren				Return child item ids in the file details
	* @param	bReturnShortDescription		Populate the short_description field instead of file_description
	* @param	bReturnForSaleData			Return pricing information, if applicable
	* @param	bReturnMetaData				Populate the metadata
	* @param	ReturnPlaytimeStats			Return playtime stats for the specified number of days before today.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedFileService")
	void QueryFiles(const FOnSteamCoreWebCallback& Callback, FString Key, int32 QueryType, int32 Page, FString Cursor, int32 NumPerPage, int32 CreatorAppId, int32 AppId, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32 FileType, FString ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetaData, int32 ReturnPlaytimeStats);

	/**
	* Sets the metadata for a developer on the published file
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	PublishedFileId		
	* @param	AppId		
	* @param	MetaData	

	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedFileService")
	void SetDeveloperMetadata(const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, FString MetaData);

	/**
	* Updates the ban status on the published file
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	PublishedFileId
	* @param	AppId
	* @param	bBanned
	* @param	Reason				Reason why the item was banned. Only visible to admins.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedFileService")
	void UpdateBanStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, bool bBanned, FString Reason);

	/**
	* Updates the incompatible status on the published file. "Incompatible" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	PublishedFileId
	* @param	AppId
	* @param	bIncompatible
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedFileService")
	void UpdateIncompatibleStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, bool bIncompatible);

	/**
	* Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	PublishedFileId
	* @param	AppId
	* @param	AddTags
	* @param	RemoveTags
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedFileService")
	void UpdateTags(const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, FString AddTags, FString RemoveTags);
};
