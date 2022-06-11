/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Primary interface for interacting with the Steam Workshop and User Generated Content (UGC).
* https://partner.steamgames.com/doc/webapi/IRemoteStorage
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebRemoteStorage.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebRemoteStorage : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebRemoteStorage() { SubsystemType = ESubsystemWeb::SteamCoreWeb; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Enumerate User Published Files
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppId of product
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void EnumerateUserPublishedFiles(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId);

	/**
	* Enumerate User Subscribed Files
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppId of product
	* @param	ListType	EUCMListType
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void EnumerateUserSubscribedFiles(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 ListType);

	/**
	* Get Collection Details
	*
	* @param	PublishedFileIds		collection ids to get the details for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void GetCollectionDetails(const FOnSteamCoreWebCallback& Callback, TArray<FString> PublishedFileIds);

	/**
	* Get Collection Details
	*
	* @param	publishedFileIDs		collection ids to get the details for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void GetPublishedFileDetails(const FOnSteamCoreWebCallback& Callback, FString PublishedFileIds);

	/**
	* Get UGC File Details
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	* @param	UGCID	 		ID of UGC file to get info for
	* @param	AppId			AppId of product
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void GetUGCFileDetails(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId);

	/**
	* Set UGC Used By GC
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	* @param	UGCID	 		ID of UGC file to get info for
	* @param	AppId			AppId of product
	* @param	bUsed			New state of flag
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void SetUGCUsedByGC(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId, bool bUsed);

	/**
	* Subscribe Published File
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	* @param	AppId					AppId of product
	* @param	PublishedFileIds			published file id to subscribe to
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void SubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);

	/**
	* Unsubscribe Published File
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	* @param	AppId					AppId of product
	* @param	PublishedFileIds			published file id to unsubscribe from
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|RemoteStorage")
	void UnsubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);
};
