// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"

#ifdef STEAMCOREWEB_WebLobbyMatchmakingServiceTypes_generated_h
#error "WebLobbyMatchmakingServiceTypes.generated.h already included, missing '#pragma once' in WebLobbyMatchmakingServiceTypes.h"
#endif
#define STEAMCOREWEB_WebLobbyMatchmakingServiceTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h

// ********** Begin Enum ESteamCoreWebLobbyType ****************************************************
#define FOREACH_ENUM_ESTEAMCOREWEBLOBBYTYPE(op) \
	op(ESteamCoreWebLobbyType::Private) \
	op(ESteamCoreWebLobbyType::FriendsOnly) \
	op(ESteamCoreWebLobbyType::TypePublic) \
	op(ESteamCoreWebLobbyType::TypeInvisible) 

enum class ESteamCoreWebLobbyType : uint8;
template<> struct TIsUEnumClass<ESteamCoreWebLobbyType> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreWebLobbyType>();
// ********** End Enum ESteamCoreWebLobbyType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
