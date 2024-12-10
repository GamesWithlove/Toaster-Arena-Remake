/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/IUserAuth
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAuthenticateUser : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAuthenticateUser(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserAuth", "AuthenticateUser", "", 1, EVerb::POST, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("sessionkey", SessionKey);
		m_RequestString.Add("encrypted_loginkey", EncryptedLoginKey);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAuthenticateUser() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Ticket)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUserAuth", "AuthenticateUserTicket", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("ticket", Ticket);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket() = delete;
};
