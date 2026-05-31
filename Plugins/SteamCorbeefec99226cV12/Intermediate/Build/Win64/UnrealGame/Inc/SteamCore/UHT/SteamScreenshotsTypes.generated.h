// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshotsTypes.h"

#ifdef STEAMCORE_SteamScreenshotsTypes_generated_h
#error "SteamScreenshotsTypes.generated.h already included, missing '#pragma once' in SteamScreenshotsTypes.h"
#endif
#define STEAMCORE_SteamScreenshotsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotReady;
struct FScreenshotRequested;

// ********** Begin ScriptStruct FScreenshotHandle *************************************************
struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FScreenshotHandle;
// ********** End ScriptStruct FScreenshotHandle ***************************************************

// ********** Begin ScriptStruct FScreenshotReady **************************************************
struct Z_Construct_UScriptStruct_FScreenshotReady_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotReady_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FScreenshotReady;
// ********** End ScriptStruct FScreenshotReady ****************************************************

// ********** Begin ScriptStruct FScreenshotRequested **********************************************
struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotRequested_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FScreenshotRequested;
// ********** End ScriptStruct FScreenshotRequested ************************************************

// ********** Begin Delegate FOnScreenshotReady ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_95_DELEGATE \
STEAMCORE_API void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& Data);


// ********** End Delegate FOnScreenshotReady ******************************************************

// ********** Begin Delegate FOnScreenshotRequested ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_96_DELEGATE \
STEAMCORE_API void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested, FScreenshotRequested const& Data);


// ********** End Delegate FOnScreenshotRequested **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h

// ********** Begin Enum ESteamVRScreenshotType ****************************************************
#define FOREACH_ENUM_ESTEAMVRSCREENSHOTTYPE(op) \
	op(ESteamVRScreenshotType::None) \
	op(ESteamVRScreenshotType::Mono) \
	op(ESteamVRScreenshotType::Stereo) \
	op(ESteamVRScreenshotType::MonoCubemap) \
	op(ESteamVRScreenshotType::MonoPanorama) \
	op(ESteamVRScreenshotType::StereoPanorama) 

enum class ESteamVRScreenshotType : uint8;
template<> struct TIsUEnumClass<ESteamVRScreenshotType> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamVRScreenshotType>();
// ********** End Enum ESteamVRScreenshotType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
