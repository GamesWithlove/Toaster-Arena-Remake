/**
* Copyright (C) 2017-2022 eelDev AB
*/

#include "SteamCoreGameMode.h"
#include <GameFramework/GameSession.h>

void ASteamCoreGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	ErrorMessage = GameSession->ApproveLogin(Options);
	FGameModeEvents::GameModePreLoginEvent.Broadcast(this, UniqueId, ErrorMessage);
}
