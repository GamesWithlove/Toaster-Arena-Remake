/**
* Copyright (C) 2017-2022 eelDev AB
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebAppsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppBetas
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets all of the beta branches for the specified application.
	*
	* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*		
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	AppID		The App ID to get the betas of.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App Betas", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppBuilds
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	*�Gets an applications build history.
	*
	* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	AppID		The App ID to get the build history of.
	* @param	Count		The number of builds to retrieve, the default is 10.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App Builds", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 Count = 10);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppDepotVersions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Gets all the versions of all the depots for the specified application.
	*
	* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	AppID		The App ID to get the depot versions for.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App Depot Versions", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	USteamCoreAppsAsyncActionGetAppList()
	{
		OnSteamCoreWebAppListCallback.BindUFunction(this, "HandleCallback");
	}

	virtual ~USteamCoreAppsAsyncActionGetAppList() override
	{
		OnSteamCoreWebAppListCallback.Unbind();
	}

	UFUNCTION()
	virtual void HandleCallback(const TArray<FWebAppsGetAppList>& data, bool bWasSuccessful)
	{
		OnCallback.Broadcast(data, bWasSuccessful);
		
		SetReadyToDestroy();
	};
	
	/**
	* Gets the complete list of public apps.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App List", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject);

	UPROPERTY(BlueprintAssignable)
	FOnSteamCoreWebAppListAsyncCallback OnCallback;
	
	FOnSteamCoreWebAppListCallback OnSteamCoreWebAppListCallback;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get a list of cheating reports submitted for this app.
	*
	* Used to gather the cheating reports so that they may be reviewed and a determination made.
	* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key					Steamworks Web API publisher authentication key.
	* @param	AppID				AppID of game
	* @param	TimeBegin			Time range begin
	* @param	TimeEnd				Time range end
	* @param	bIncludeReports		include reports that were not bans
	* @param	bIncludeBans		include reports that were bans
	* @param	ReportidMin			minimum report id
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Cheating Reports", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetPlayersBanned
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key		Steamworks Web API publisher authentication key.
	* @param	AppID		AppID of game
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Players Banned", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	Filter		Query filter string
	* @param	Limit		Limit number of servers in the response
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Server List", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(UObject* WorldContextObject, FString Key, FString Filter, int32 Limit);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetServersAtAddress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* @param	Addr	IP or IP:queryport to list
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Servers at Address", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(UObject* WorldContextObject, FString Addr);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionSetAppBuildLive
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key				Steamworks Web API publisher authentication key.
	* @param	AppID			AppID of game
	* @param	BuildID			BuildID
	* @param	BetaKey			beta key, required. Use public for default branch
	* @param	Description		optional description for this build
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set App Build Live", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionUpToDateCheck
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* @param	AppID		AppID of game
	* @param	Version		The installed version of the game
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Up To Date Check", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Apps|Async")
	static USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(UObject* WorldContextObject, int32 AppID, int32 Version);
};
