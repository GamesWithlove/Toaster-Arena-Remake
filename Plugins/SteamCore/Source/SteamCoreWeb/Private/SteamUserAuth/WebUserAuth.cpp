/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/IUserAuth
*/

#include "SteamUserAuth/WebUserAuth.h"
#include "SteamUserAuth/WebUserAuthAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebUserAuth::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebUserAuth::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebUserAuth::AuthenticateUser(const FOnSteamCoreWebCallback& Callback, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey)
{
	FOnlineAsyncTaskSteamCoreWebAuthenticateUser* Task = new FOnlineAsyncTaskSteamCoreWebAuthenticateUser(this, Callback, SteamId, SessionKey, EncryptedLoginKey);
	QueueAsyncTask(Task);
}

void UWebUserAuth::AuthenticateUserTicket(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Ticket)
{
	FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket* Task = new FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket(this, Callback, Key, AppId, Ticket);
	QueueAsyncTask(Task);
}
