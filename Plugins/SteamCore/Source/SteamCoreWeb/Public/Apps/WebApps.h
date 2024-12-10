/**
* Copyright (C) 2017-2022 eelDev AB
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebApps.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebApps : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebApps() { SubsystemType = ESubsystemWeb::Apps; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Gets all of the beta branches for the specified application.
	*
	* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppID		The App ID to get the betas of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetAppBetas(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID);

	/**
	*�Gets an applications build history.
	*
	* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppID		The App ID to get the build history of.
	* @param	Count		The number of builds to retrieve, the default is 10.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetAppBuilds(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 Count = 10);

	/**
	* Gets all the versions of all the depots for the specified application.
	*
	* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppID		The App ID to get the depot versions for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetAppDepotVersions(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID);

	/**
	* Gets the complete list of public apps.
	*
	* @param	Key		Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetAppList(const FOnSteamCoreWebAppListCallback& Callback, FString Key);

	/**
	* Get a list of cheating reports submitted for this app.
	*
	* Used to gather the cheating reports so that they may be reviewed and a determination made.
	* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppID				AppID of game
	* @param	TimeBegin			Time range begin
	* @param	TimeEnd				Time range end
	* @param	bIncludeReports		include reports that were not bans
	* @param	bIncludeBans		include reports that were bans
	* @param	ReportidMin			minimum report id
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetCheatingReports(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin = 0);

	/**
	* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key		Steamworks Web API publisher authentication Key.
	* @param	AppID		AppID of game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetPlayersBanned(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID);

	/**
	* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	Filter		Query filter string
	* @param	Limit		Limit number of servers in the response
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetServerList(const FOnSteamCoreWebCallback& Callback, FString Key, FString Filter, int32 Limit = 10);

	/**
	* @param	Addr	IP or IP:queryport to list
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void GetServersAtAddress(const FOnSteamCoreWebCallback& Callback, FString Addr);

	/**
	* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppID			AppID of game
	* @param	BuildID			BuildID
	* @param	BetaKey			beta Key, required. Use public for default branch
	* @param	Description		optional description for this build
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void SetAppBuildLive(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);

	/**
	* @param	AppID		AppID of game
	* @param	Version		The installed version of the game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Apps")
	void UpToDateCheck(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 Version);
};
