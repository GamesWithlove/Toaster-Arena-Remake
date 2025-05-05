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

#include "Apps/WebAppsAsyncActions.h"
#include "Apps/WebAppsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppBetas
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetAppBetas* USteamCoreAppsAsyncActionGetAppBetas::GetAppBetasAsync(UObject* WorldContextObject, FString Key, int32 AppID)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetAppBetas>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppBuilds
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetAppBuilds* USteamCoreAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 Count /* = 10 */)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetAppBuilds>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID, Count);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppDepotVersions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetAppDepotVersions* USteamCoreAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(UObject* WorldContextObject, FString Key, int32 AppID)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetAppDepotVersions>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetAppList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(UObject* WorldContextObject)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetAppList>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetAppList(Subsystem, AsyncObject->OnSteamCoreWebAppListCallback, "");
	AsyncObject->RegisterWithGameInstance(GameInstance);
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActioGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetCheatingReports* USteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetCheatingReports>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID, TimeBegin, TimeEnd, bIncludeReports, bIncludeBans, ReportidMin);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetPlayersBanned
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetPlayersBanned* USteamCoreAppsAsyncActionGetPlayersBanned::GetPlayersBannedAsync(UObject* WorldContextObject, FString Key, int32 AppID)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetPlayersBanned>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetServerList* USteamCoreAppsAsyncActionGetServerList::GetServerListAsync(UObject* WorldContextObject, FString Key, FString Filter, int32 Limit)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetServerList>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetServerList(Subsystem, AsyncObject->OnCallbackInternal, Key, Filter, Limit);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActioGetServersAtAddress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(UObject* WorldContextObject, FString Addr)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionGetServersAtAddress>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress(Subsystem, AsyncObject->OnCallbackInternal, Addr);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionSetAppBuildLive
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionSetAppBuildLive* USteamCoreAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionSetAppBuildLive>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive(Subsystem, AsyncObject->OnCallbackInternal, Key, AppID, BuildID, BetaKey, Description);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionUpToDateCheck
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionUpToDateCheck* USteamCoreAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(UObject* WorldContextObject, int32 AppID, int32 Version)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreAppsAsyncActionUpToDateCheck>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck(Subsystem, AsyncObject->OnCallbackInternal, AppID, Version);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
