/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to the Steam Lobby methods.
* https://partner.steamgames.com/doc/webapi/ILobbyMatchmakingService
*/

#include "LobbyMatchmakingService/WebLobbyMatchmakingService.h"
#include "LobbyMatchmakingService/WebLobbyMatchmakingServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebLobbyMatchmakingService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebLobbyMatchmakingService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebLobbyMatchmakingService::CreateLobby(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, int32 MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData)
{
	FOnlineAsyncTaskSteamCoreWebCreateLobby* Task = new FOnlineAsyncTaskSteamCoreWebCreateLobby(this, Callback, Key, appID, MaxMembers, LobbyType, LobbyName, InputJson, SteamIdInvitedMembers, LobbyMetaData);
	QueueAsyncTask(Task);
}

void UWebLobbyMatchmakingService::RemoveUserFromLobby(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, FString SteamIdToRemove, FString SteamIdLobby, FString InputJson)
{
	FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby* Task = new FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby(this, Callback, Key, appID, SteamIdToRemove, SteamIdLobby, InputJson);
	QueueAsyncTask(Task);
}
