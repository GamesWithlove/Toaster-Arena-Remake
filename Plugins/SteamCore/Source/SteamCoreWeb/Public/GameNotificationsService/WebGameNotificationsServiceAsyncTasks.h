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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCreateSession : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCreateSession(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString Context, FString Title, FString Users, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "CreateSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("context", FCString::Atoi64(*Context));
		m_RequestString.AddStringField("title", Title);
		m_RequestString.AddStringField("users", Users);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebCreateSession() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebCreateSession")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebUpdateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebUpdateSession : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebUpdateSession(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 Appid, FString Title, FString Users, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "UpdateSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionID", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddStringField("title", Title);
		m_RequestString.AddStringField("users", Users);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebUpdateSession() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebUpdateSession")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString SteamId, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "EnumerateSessionsForApp", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddBoolField("include_all_user_messages", bIncludeAllUserMessages);
		m_RequestString.AddBoolField("include_auth_user_message", bIncludeAuthUserMessage);
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebEnumerateSessionsForApp")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString Sessions, int32 Appid, FString Language)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "GetSessionDetailsForApp", Key, 1, EVerb::GET)
	{
		m_RequestString.AddStringField("sessions", Sessions);
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetSessionDetailsForApp")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRequestNotifications
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRequestNotifications : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRequestNotifications(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 Appid)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "RequestNotifications", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", Appid);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRequestNotifications() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebRequestNotifications")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebDeleteSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebDeleteSession : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebDeleteSession(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 Appid, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "DeleteSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionid", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebDeleteSession() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebDeleteSession")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SessionId, int32 Appid)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameNotificationsService", "DeleteSessionBatch", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionid", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
	}

private:
	FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebDeleteSessionBatch")); }
};
