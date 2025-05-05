/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* This service allows your game to report cheats and cheaters to the VAC system and provides the toolset behind the Game Bans system. It enables two independent workflows for detecting and managing cheating in your game
* To use this interface you must first opt in to VAC support. This can be done from the Anti-Cheat Configuration page in the App Admin panel.
* https://partner.steamgames.com/doc/webapi/ICheatReportingService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "CheatReporting/WebCheatReportingAsyncActions.h"
#include "CheatReporting/WebCheatReportingAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionReportPlayerCheating
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionReportPlayerCheating* USteamCoreWebAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionReportPlayerCheating>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebReportPlayerCheating(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, SteamId, SteamIdReporter, AppData, bHeuristic, bDetection, bPlayerReport, bNoReportID, GameMode, SuspicionStartTime, Severity);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRequestPlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRequestPlayerGameBan* USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRequestPlayerGameBan>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, ReportID, CheatDescription, Duration, bDelayBan);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRemovePlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRemovePlayerGameBan* USteamCoreWebAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRemovePlayerGameBan>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetCheatingReports* USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 TimeEnd, int32 TimeBegin, FString ReportIdmin, bool bIncludeReports, bool bIncludeBans, FString SteamId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetCheatingReports>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetCheatingReports(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, TimeEnd, TimeBegin, ReportIdmin, bIncludeReports, bIncludeBans, SteamId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionReportCheatData
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionReportCheatData* USteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionReportCheatData>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebReportCheatData(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, PathAndFileName, WebCheatURL, TimeNow, TimeStarted, TimeStopped, CheatName, GameProcessId, CheatProcessId, CheatParam1, CheatParam2);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRequestVacStatusForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionRequestVacStatusForUser* USteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString SessionId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionRequestVacStatusForUser>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, SessionId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionStartSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionStartSecureMultiplayerSession* USteamCoreWebAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionStartSecureMultiplayerSession>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionEndSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionEndSecureMultiplayerSession* USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString SessionId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionEndSecureMultiplayerSession>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, SessionId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
