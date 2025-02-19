// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/WebSteamUserTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebSteamUserTypes_generated_h
#error "WebSteamUserTypes.generated.h already included, missing '#pragma once' in WebSteamUserTypes.h"
#endif
#define STEAMCOREWEB_WebSteamUserTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h


#define FOREACH_ENUM_EVANITYURLTYPE(op) \
	op(EVanityUrlType::Individual) \
	op(EVanityUrlType::Group) \
	op(EVanityUrlType::OfficialGameGroup) 

enum class EVanityUrlType : uint8;
template<> struct TIsUEnumClass<EVanityUrlType> { enum { Value = true }; };
template<> STEAMCOREWEB_API UEnum* StaticEnum<EVanityUrlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
