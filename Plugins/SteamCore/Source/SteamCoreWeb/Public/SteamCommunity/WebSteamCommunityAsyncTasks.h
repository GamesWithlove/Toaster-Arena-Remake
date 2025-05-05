/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamCommunity
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebReportAbuse
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebReportAbuse : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebReportAbuse(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ISteamCommunity", "ReportAbuse", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamidActor", SteamIdActor);
		m_RequestString.Add("steamidTarget", SteamIdTarget);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("abuseType", AbuseType);
		m_RequestString.Add("contentType", ContentType);
		m_RequestString.Add("description", Description);
		m_RequestString.Add("gid", Gid);
	}

private:
	FOnlineAsyncTaskSteamCoreWebReportAbuse() = delete;
};
