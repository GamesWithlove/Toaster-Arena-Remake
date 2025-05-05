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

#include "CheatReporting/WebCheatReporting.h"
#include "CheatReporting/WebCheatReportingAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebCheatReporting::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebCheatReporting::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebCheatReporting::ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
{
	FOnlineAsyncTaskSteamCoreWebReportPlayerCheating* Task = new FOnlineAsyncTaskSteamCoreWebReportPlayerCheating(this, Callback, Key, AppId, SteamId, SteamIdReporter, AppData, bHeuristic, bDetection, bPlayerReport, bNoReportID, GameMode, SuspicionStartTime, Severity);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan)
{
	FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan* Task = new FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan(this, Callback, Key, SteamId, AppId, ReportID, CheatDescription, Duration, bDelayBan);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan* Task = new FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 TimeEnd, int32 TimeBegin, FString ReportIdmin, bool bIncludeReports, bool bIncludeBans, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetCheatingReports* Task = new FOnlineAsyncTaskSteamCoreWebGetCheatingReports(this, Callback, Key, AppId, TimeEnd, TimeBegin, ReportIdmin, bIncludeReports, bIncludeBans, SteamId);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::ReportCheatData(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2)
{
	FOnlineAsyncTaskSteamCoreWebReportCheatData* Task = new FOnlineAsyncTaskSteamCoreWebReportCheatData(this, Callback, Key, SteamId, AppId, PathAndFileName, WebCheatURL, TimeNow, TimeStarted, TimeStopped, CheatName, GameProcessId, CheatProcessId, CheatParam1, CheatParam2);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionID)
{
	FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser* Task = new FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser(this, Callback, Key, SteamId, AppId, SessionID);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession* Task = new FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebCheatReporting::EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionID)
{
	FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession* Task = new FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession(this, Callback, Key, SteamId, AppId, SessionID);
	QueueAsyncTask(Task);
}
