/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamNews
*/

#include "SteamNews/WebSteamNewsAsyncActions.h"
#include "SteamNews/WebSteamNewsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWeb.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetNewsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetNewsForApp* USteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(UObject* WorldContextObject, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetNewsForApp>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetNewsForApp(Subsystem, AsyncObject->OnCallbackInternal, AppId, MaxLength, EndDate, Feeds, Count);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetNewsForAppAuthed
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetNewsForAppAuthed* USteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate /* = 1549795233 */, int32 Count /* = 20 */)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetNewsForAppAuthed>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, MaxLength, EndDate, Feeds, Count);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
