/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information and interact with users.
* https://partner.steamgames.com/doc/webapi/ISteamUser
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "SteamUser/WebSteamUserTypes.h"
#include "WebSteamUser.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebSteamUser : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebSteamUser() { SubsystemType = ESubsystemWeb::SteamCoreWeb; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Checks if the specified user owns the app.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppId		AppID to check for ownership
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void CheckAppOwnership(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId);

	/**
	* Get App Price Info
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	SteamId		SteamID of user
	* @param	AppIds		Max: 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetAppPriceInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, TArray<int32> AppIds);

	/**
	* Get Friend List
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	* @param	Relationship	relationship type (ex: friend)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetFriendList(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Relationship);

	/**
	* Get Player Bans
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetPlayerBans(const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIds);

	/**
	* Get Player Summaries
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamIds		Max: 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetPlayerSummaries(const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIds);

	/**
	* Get Publisher App Ownership
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetPublisherAppOwnership(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number. 
	* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in. 
	A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	PackageRowVersion		64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.
	* @param	CDKeyRowVersion			64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetPublisherAppOwnershipChanges(const FOnSteamCoreWebCallback& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion);

	/**
	* Get User Group List
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			SteamID of user
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GetUserGroupList(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId);

	/**
	* Get User Group List
	*
	* This call will only work on packages which have "canbegrantedfromexternal" set to 1.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				SteamID of user
	* @param	PackageId			PackageID to grant
	* @param	Ipaddress			ip address of user in string format(xxx.xxx.xxx.xxx).
	* @param	ThirdPartyKey		Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.
	* @param	ThirdPartyAppId		Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void GrantPackage(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId);

	/**
	* Resolve Vanity URL
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	VanityURL		The vanity URL to get a SteamID for
	* @param	URLType			
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamUser")
	void ResolveVanityURL(const FOnSteamCoreWebCallback& Callback, FString Key, FString VanityURL, EVanityUrlType URLType);
};
