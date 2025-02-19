// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAppList/SteamAppListTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamAppInstalled;
struct FSteamAppUninstalled;
#ifdef STEAMCORE_SteamAppListTypes_generated_h
#error "SteamAppListTypes.generated.h already included, missing '#pragma once' in SteamAppListTypes.h"
#endif
#define STEAMCORE_SteamAppListTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAppInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamAppInstalled>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamAppUninstalled>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_63_DELEGATE \
STEAMCORE_API void FOnSteamAppInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppInstalled, FSteamAppInstalled const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_64_DELEGATE \
STEAMCORE_API void FOnSteamAppUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppUninstalled, FSteamAppUninstalled const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
