/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/IUserAuth
*/

#include "SteamUserAuth/WebUserAuthAsyncActions.h"
#include "SteamUserAuth/WebUserAuthAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWeb.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionAuthenticateUser* USteamCoreWebAsyncActionAuthenticateUser::AuthenticateUserAsync(UObject* WorldContextObject, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionAuthenticateUser>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAuthenticateUser(Subsystem, AsyncObject->OnCallbackInternal, SteamId, SessionKey, EncryptedLoginKey);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionAuthenticateUserTicket* USteamCoreWebAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Ticket)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionAuthenticateUserTicket>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebAuthenticateUserTicket(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, Ticket);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
