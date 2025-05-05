/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information and interact with users.
* https://partner.steamgames.com/doc/webapi/ISteamUser
*/

#pragma once

#include "WebSteamUserTypes.h"
#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebSteamUserAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCheckAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Checks if the specified user owns the app.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppID to check for ownership
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Check App Ownership", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetAppPriceInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get App Price Info
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppIds		Max: 100
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App Price Info", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(UObject* WorldContextObject, FString Key, FString SteamId, TArray<int32> AppIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetFriendList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Friend List
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	* @param	Relationship	relationship type (ex: friend)
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Friend List", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString Relationship);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPlayerBans
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Player Bans
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Player Bans", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPlayerSummaries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Player Summaries
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamIds		Max: 100
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Player Summaries", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPublisherAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get Publisher App Ownership
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Publisher App Ownership", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.
	* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.
	A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	PackageRowVersion		64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.
	* @param	CdKeyRowVersion			64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Publisher App Ownership Changes", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CdKeyRowVersion);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUserGroupList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get User Group List
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User Group List"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGrantPackage
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get User Group List
	*
	* This call will only work on packages which have "canbegrantedfromexternal" set to 1.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				SteamID of user
	* @param	packageID			PackageID to grant
	* @param	ipaddress			ip address of user in string format(xxx.xxx.xxx.xxx).
	* @param	thirdPartyKey		Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.
	* @param	thirdPartyAppID		Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Grant Package"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 packageID, FString ipaddress, FString thirdPartyKey, int32 thirdPartyAppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionResolveVanityURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Resolve Vanity URL
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	VanityURL		The vanity URL to get a SteamID for
	* @param	URLType
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Resolve Vanity URL"), Category = "SteamCoreWeb|SteamUser|Async")
	static USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType);
};
