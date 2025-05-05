/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* This is the interface used to interact with Game Notifications.
* https://partner.steamgames.com/doc/webapi/IGameNotificationsService
*
* See also: https://partner.steamgames.com/doc/features/game_notifications
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "GameNotificationsService/WebGameNotificationsService.h"
#include "GameNotificationsService/WebGameNotificationsServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebGameNotificationsService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebGameNotificationsService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebGameNotificationsService::CreateSession(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Context, FString Title, FString Users, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebCreateSession* Task = new FOnlineAsyncTaskSteamCoreWebCreateSession(this, Callback, Key, AppId, Context, Title, Users, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::UpdateSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 AppId, FString Title, FString Users, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebUpdateSession* Task = new FOnlineAsyncTaskSteamCoreWebUpdateSession(this, Callback, Key, SessionId, AppId, Title, Users, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::EnumerateSessionsForApp(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, FString SteamId, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp* Task = new FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp(this, Callback, Key, AppID, SteamId, bIncludeAllUserMessages, bIncludeAuthUserMessage, Language);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::GetSessionDetailsForApp(const FOnSteamCoreWebCallback& Callback, FString Key, FString Sessions, int32 AppId, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp* Task = new FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp(this, Callback, Key, Sessions, AppId, Language);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::RequestNotifications(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebRequestNotifications* Task = new FOnlineAsyncTaskSteamCoreWebRequestNotifications(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::DeleteSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 AppId, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebDeleteSession* Task = new FOnlineAsyncTaskSteamCoreWebDeleteSession(this, Callback, Key, SessionId, AppId, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameNotificationsService::DeleteSessionBatch(const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch* Task = new FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch(this, Callback, Key, SessionId, AppId);
	QueueAsyncTask(Task);
}
