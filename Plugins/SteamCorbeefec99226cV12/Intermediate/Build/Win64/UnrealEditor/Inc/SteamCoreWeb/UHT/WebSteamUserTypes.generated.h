// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/WebSteamUserTypes.h"

#ifdef STEAMCOREWEB_WebSteamUserTypes_generated_h
#error "WebSteamUserTypes.generated.h already included, missing '#pragma once' in WebSteamUserTypes.h"
#endif
#define STEAMCOREWEB_WebSteamUserTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h

// ********** Begin Enum EVanityUrlType ************************************************************
#define FOREACH_ENUM_EVANITYURLTYPE(op) \
	op(EVanityUrlType::Individual) \
	op(EVanityUrlType::Group) \
	op(EVanityUrlType::OfficialGameGroup) 

enum class EVanityUrlType : uint8;
template<> struct TIsUEnumClass<EVanityUrlType> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<EVanityUrlType>();
// ********** End Enum EVanityUrlType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
