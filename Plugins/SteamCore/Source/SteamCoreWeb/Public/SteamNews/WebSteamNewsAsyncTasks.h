/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamNews
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetNewsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetNewsForApp : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetNewsForApp(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, int32 AppId, int32 MaxLength, int32 EndDate, TArray<FString> Feeds, int32 Count)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamNews", "GetNewsForApp", "", 2, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("maxlength", MaxLength);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("count", Count);

		FString m_Feeds = "";

		for (int32 i = 0; i < Feeds.Num(); i++)
		{
			m_Feeds.Append(FString::Printf(TEXT(",%s"), *Feeds[i]));
		}

		m_RequestString.Add("feeds", m_Feeds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetNewsForApp() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 MaxLength, int32 EndDate, TArray<FString> Feeds, int32 Count)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamNews", "GetNewsForAppAuthed", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("maxlength", MaxLength);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("count", Count);

		FString m_Feeds = "";

		for (int32 i = 0; i < Feeds.Num(); i++)
		{
			m_Feeds.Append(FString::Printf(TEXT(",%s"), *Feeds[i]));
		}

		m_RequestString.Add("feeds", m_Feeds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed() = delete;
};
