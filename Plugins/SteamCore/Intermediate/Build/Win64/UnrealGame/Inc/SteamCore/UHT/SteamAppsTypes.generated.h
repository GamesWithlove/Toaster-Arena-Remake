// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDLCInstalled;
struct FFileDetailsResult;
#ifdef STEAMCORE_SteamAppsTypes_generated_h
#error "SteamAppsTypes.generated.h already included, missing '#pragma once' in SteamAppsTypes.h"
#endif
#define STEAMCORE_SteamAppsTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FFileDetailsResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FDLCInstalled>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_79_DELEGATE \
STEAMCORE_API void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_80_DELEGATE \
STEAMCORE_API void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_81_DELEGATE \
STEAMCORE_API void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
