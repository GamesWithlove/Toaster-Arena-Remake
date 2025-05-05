/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* The primary interface to interact with the Steam Economy.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* See also: https://partner.steamgames.com/doc/webapi/ISteamEconomy
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/
/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* The primary interface to interact with the Steam Economy.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* See also: https://partner.steamgames.com/doc/webapi/ISteamEconomy
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "GameInventory/WebGameInventoryAsyncActions.h"
#include "GameInventory/WebGameInventoryAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetHistoryCommandDetails* USteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetHistoryCommandDetails>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, SteamId, Command, ContextId, Arguments);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUserHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionGetUserHistory* USteamCoreWebAsyncActionGetUserHistory::GetUserHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionGetUserHistory>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebGetUserHistory(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, SteamId, ContextId, StartTime, EndTime);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionHistoryExecuteCommand
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionHistoryExecuteCommand* USteamCoreWebAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionHistoryExecuteCommand>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, SteamId, ContextId, ActorId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionSupportGetAssetHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionSupportGetAssetHistory* USteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString AssetId, FString ContextId)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionSupportGetAssetHistory>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory(Subsystem, AsyncObject->OnCallbackInternal, Key, AppId, AssetId, ContextId);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
