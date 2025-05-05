/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to the Steam Lobby methods.
* https://partner.steamgames.com/doc/webapi/ILobbyMatchmakingService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebLobbyMatchmakingServiceTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCreateLobby : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCreateLobby(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ILobbyMatchmakingService", "CreateLobby", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("max_members", MaxMembers);
		m_RequestString.Add("lobby_type", static_cast<int32>(LobbyType));
		m_RequestString.Add("lobby_name", LobbyName);
		m_RequestString.AddStringField("input_json", InputJson);
		TArray<TSharedPtr<FJsonValue>> Array;

		for (int32 i = 0; i < SteamIdInvitedMembers.Num(); i++)
		{
			Array.Add(MakeShared<FJsonValueString>(LexToString(SteamIdInvitedMembers[i])));
		}

		m_RequestString.AddArrayField("steamid_invited_members", Array);
		m_RequestString.AddStringField("lobby_metadata", LobbyMetaData);
	}

private:
	FOnlineAsyncTaskSteamCoreWebCreateLobby() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamIdToRemove, FString SteamIdLobby, FString InputJson)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "ILobbyMatchmakingService", "RemoveUserFromLobby", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("steamid_to_remove", FCString::Atoi64(*SteamIdToRemove));
		m_RequestString.AddNumberField("steamid_lobby", FCString::Atoi64(*SteamIdLobby));
		m_RequestString.AddStringField("input_json", InputJson);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRemoveUserFromLobby() = delete;
};
