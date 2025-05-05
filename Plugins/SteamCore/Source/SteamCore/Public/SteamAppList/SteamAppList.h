/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamAppListTypes.h"
#include "SteamAppList.generated.h"

UCLASS()
class STEAMCORE_API UAppList : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UAppList() { SubsystemType = ESteamSubsystem::AppList; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|AppList|Delegates")
	FOnSteamAppInstalled SteamAppInstalled;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|AppList|Delegates")
	FOnSteamAppUninstalled SteamAppUninstalled;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Get Number of Installed Apps
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
	int32 GetNumInstalledApps();

	/**
	* Get Installed Apps
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
	int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);

	/**
	* Get App Name
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
	int32 GetAppName(int32 AppID, FString& Name);

	/**
	* Get app install dir
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
	int32 GetAppInstallDir(int32 AppID, FString& Directory);

	/**
	* Return the buildid of this app, may change at any time based on backend updates to the game
	*
	* @param
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
	int32 GetAppBuildId(int32 AppID);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UAppList, OnSteamAppInstalled, SteamAppInstalled_t, OnSteamAppInstalledCallback);
	STEAM_CALLBACK_MANUAL(UAppList, OnSteamAppUninstalled, SteamAppUninstalled_t, OnSteamAppUninstalledCallback);
#endif
};
