/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Primary interface for interacting with the Steam Workshop and User Generated Content (UGC).
* https://partner.steamgames.com/doc/webapi/IRemoteStorage
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebRemoteStorageAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionEnumerateUserPublishedFiles
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Enumerate User Published Files
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppId of product
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Enumerate User Published Files"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionEnumerateUserSubscribedFiles
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Enumerate User Subscribed Files
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppId of product
	* @param	ListType	EUCMListType
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Enumerate User Subscribed Files"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 ListType);
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetCollectionDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Collection Details
	*
	* @param	PublishedFileIds		collection ids to get the details for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Collection Details", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(UObject* WorldContextObject, TArray<FString> PublishedFileIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPublishedFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Collection Details
	*
	* @param	publishedFileIDs		collection ids to get the details for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Published File Details", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(UObject* WorldContextObject, FString PublishedFileIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUGCFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get UGC File Details
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	* @param	UGCID	 		ID of UGC file to get info for
	* @param	AppId			AppId of product
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get UGC File Details", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString UGCID, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSetUGCUsedByGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Set UGC Used By GC
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	* @param	UGCID	 		ID of UGC file to get info for
	* @param	AppId			AppId of product
	* @param	bUsed			New state of flag
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set UGC Used By GC", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString UGCID, int32 AppId, bool bUsed);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSubscribePublishedFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Subscribe Published File
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	* @param	AppId					AppId of product
	* @param	PublishedFileIds			published file id to subscribe to
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Subscribe Published File", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionUnsubscribePublishedFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Unsubscribe Published File
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	* @param	AppId					AppId of product
	* @param	PublishedFileIds			published file id to unsubscribe from
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Unsubscribe Published File", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);
};
