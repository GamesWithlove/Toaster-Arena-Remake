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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebReportPlayerCheating
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebReportPlayerCheating : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebReportPlayerCheating(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "ReportPlayerCheating", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("steamidreporter", FCString::Atoi64(*SteamIdReporter));
		m_RequestString.AddStringField("appData", AppData);
		m_RequestString.AddBoolField("heuristic", bHeuristic);
		m_RequestString.AddBoolField("detection", bDetection);
		m_RequestString.AddBoolField("playerreport", bPlayerReport);
		m_RequestString.AddBoolField("noreportid", bNoReportID);
		m_RequestString.AddNumberField("gamemode", GameMode);
		m_RequestString.AddNumberField("suspicionstarttime", SuspicionStartTime);
		m_RequestString.AddNumberField("severity", Severity);
	}

private:
	FOnlineAsyncTaskSteamCoreWebReportPlayerCheating() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebReportPlayerCheating")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "RequestPlayerGameBan", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("reportid", FCString::Atoi64(*ReportID));
		m_RequestString.AddStringField("cheatdescription", CheatDescription);
		m_RequestString.AddNumberField("duration", Duration);
		m_RequestString.AddBoolField("delayban", bDelayBan);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebRequestPlayerGameBan")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "RequestPlayerGameBan", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebRemovePlayerGameBan")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetCheatingReports : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetCheatingReports(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 TimeEnd, int32 TimeBegin, FString ReportIdmin, bool bIncludeReports, bool bIncludeBans, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "GetCheatingReports", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("timeend", TimeEnd);
		m_RequestString.AddNumberField("timebegin", TimeBegin);
		m_RequestString.AddNumberField("reportidmin", FCString::Atoi64(*ReportIdmin));
		m_RequestString.AddBoolField("includereports", bIncludeReports);
		m_RequestString.AddBoolField("includebans", bIncludeBans);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetCheatingReports() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetCheatingReports")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebReportCheatData
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebReportCheatData : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebReportCheatData(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "ReportCheatData", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("pathandfilename", PathAndFileName);
		m_RequestString.AddStringField("webcheaturl", WebCheatURL);
		m_RequestString.AddNumberField("time_now", FCString::Atoi64(*TimeNow));
		m_RequestString.AddNumberField("time_started", FCString::Atoi64(*TimeStarted));
		m_RequestString.AddNumberField("time_stopped", FCString::Atoi64(*TimeStopped));
		m_RequestString.AddStringField("cheatname", CheatName);
		m_RequestString.AddNumberField("game_process_id", GameProcessId);
		m_RequestString.AddNumberField("cheat_process_id", CheatProcessId);
		m_RequestString.AddNumberField("cheat_param_1", FCString::Atoi64(*CheatParam1));
		m_RequestString.AddNumberField("cheat_param_2", FCString::Atoi64(*CheatParam2));
	}

private:
	FOnlineAsyncTaskSteamCoreWebReportCheatData() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebReportCheatData")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "RequestVacStatusForUser", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("session_id", FCString::Atoi64(*SessionId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebRequestVacStatusForUser")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "StartSecureMultiplayerSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebStartSecureMultiplayerSession")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ICheatReportingService", "EndSecureMultiplayerSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("session_id", FCString::Atoi64(*SessionId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebEndSecureMultiplayerSession")); }
};
