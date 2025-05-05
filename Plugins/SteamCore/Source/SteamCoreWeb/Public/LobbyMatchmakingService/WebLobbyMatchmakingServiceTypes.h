/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to the Steam Lobby methods.
* https://partner.steamgames.com/doc/webapi/ILobbyMatchmakingService
*/

#pragma once

#include "CoreMinimal.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
// lobby type description
UENUM(BlueprintType)
enum class ESteamCoreWebLobbyType : uint8
{
	Private = 0,
	FriendsOnly = 1,
	TypePublic = 2,
	TypeInvisible = 3,
};
