/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access data about applications on Steam.
* https://partner.steamgames.com/doc/webapi/ISteamApps
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "Apps/WebApps.h"
#include "Apps/WebAppsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebApps::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebApps::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebApps::GetAppBetas(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas(this, Callback, Key, AppID);
	QueueAsyncTask(Task);
}

void UWebApps::GetAppBuilds(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 Count /*= 10*/)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds(this, Callback, Key, AppID, Count);
	QueueAsyncTask(Task);
}

void UWebApps::GetAppDepotVersions(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions(this, Callback, Key, AppID);
	QueueAsyncTask(Task);
}

void UWebApps::GetAppList(const FOnSteamCoreWebAppListCallback& Callback, FString Key)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetAppList* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppList(this, Callback, Key);
	QueueAsyncTask(Task);
}

void UWebApps::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin /*= 0*/)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports(this, Callback, Key, AppID, TimeBegin, TimeEnd, bIncludeReports, bIncludeBans, ReportidMin);
	QueueAsyncTask(Task);
}

void UWebApps::GetPlayersBanned(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned(this, Callback, Key, AppID);
	QueueAsyncTask(Task);
}

void UWebApps::GetServerList(const FOnSteamCoreWebCallback& Callback, FString Key, FString Filter, int32 Limit /*= 10*/)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetServerList* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetServerList(this, Callback, Key, Filter, Limit);
	QueueAsyncTask(Task);
}

void UWebApps::GetServersAtAddress(const FOnSteamCoreWebCallback& Callback, FString Addr)
{
	FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress(this, Callback, Addr);
	QueueAsyncTask(Task);
}

void UWebApps::SetAppBuildLive(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description)
{
	FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive* Task = new FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive(this, Callback, Key, AppID, BuildID, BetaKey, Description);
	QueueAsyncTask(Task);
}

void UWebApps::UpToDateCheck(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 Version)
{
	FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck* Task = new FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck(this, Callback, AppID, Version);
	QueueAsyncTask(Task);
}
