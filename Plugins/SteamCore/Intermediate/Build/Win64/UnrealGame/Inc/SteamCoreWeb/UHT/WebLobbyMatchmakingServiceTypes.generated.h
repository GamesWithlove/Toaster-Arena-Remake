// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebLobbyMatchmakingServiceTypes_generated_h
#error "WebLobbyMatchmakingServiceTypes.generated.h already included, missing '#pragma once' in WebLobbyMatchmakingServiceTypes.h"
#endif
#define STEAMCOREWEB_WebLobbyMatchmakingServiceTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h


#define FOREACH_ENUM_ESTEAMCOREWEBLOBBYTYPE(op) \
	op(ESteamCoreWebLobbyType::Private) \
	op(ESteamCoreWebLobbyType::FriendsOnly) \
	op(ESteamCoreWebLobbyType::TypePublic) \
	op(ESteamCoreWebLobbyType::TypeInvisible) 

enum class ESteamCoreWebLobbyType : uint8;
template<> struct TIsUEnumClass<ESteamCoreWebLobbyType> { enum { Value = true }; };
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamCoreWebLobbyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
