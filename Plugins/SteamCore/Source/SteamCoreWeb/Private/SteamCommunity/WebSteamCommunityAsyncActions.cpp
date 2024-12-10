/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamCommunity
*/

#include "SteamCommunity/WebSteamCommunityAsyncActions.h"
#include "SteamCommunity/WebSteamCommunityAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionReportAbuse
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionReportAbuse* USteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionReportAbuse>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebReportAbuse(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamIdActor, SteamIdTarget, AppId, AbuseType, ContentType, Description, Gid);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
