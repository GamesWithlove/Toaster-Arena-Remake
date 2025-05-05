/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamPublishedItemSearch
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebPublishedItemSearch.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebSteamPublishedItemSearch() { SubsystemType = ESubsystemWeb::PublishedItemSearch; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Ranked by Publication Order
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamPublishedItemSearch", meta = (AutoCreateRefTerm="Tag,UserTag"))
	void RankedByPublicationOrder(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);

	/**
	* Ranked by Trend
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	days					Number of days for the trend period, including today
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamPublishedItemSearch", meta = (AutoCreateRefTerm = "Tag,UserTag"))
	void RankedByTrend(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 days, TArray<FString> Tag, TArray<FString> UserTag);

	/**
	* Ranked by Publication Order
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	Count					Number Requested
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamPublishedItemSearch", meta = (AutoCreateRefTerm = "Tag,UserTag"))
	void RankedByVote(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);

	/**
	* Ranked by Publication Order
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					SteamID of user
	* @param	AppId					AppId of product
	* @param	StartId					Starting index in the result set(0 based)
	* @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	* @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	* @param	Tag						Tag to filter result set
	* @param	UserTag					A user specific Tag
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamPublishedItemSearch", meta = (AutoCreateRefTerm = "Tag,UserTag"))
	void ResultSetSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};
