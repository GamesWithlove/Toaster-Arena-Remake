// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusicTypes.h"

#ifdef STEAMCORE_SteamMusicTypes_generated_h
#error "SteamMusicTypes.generated.h already included, missing '#pragma once' in SteamMusicTypes.h"
#endif
#define STEAMCORE_SteamMusicTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlaybackStatusHasChanged;
struct FVolumeHasChanged;

// ********** Begin ScriptStruct FPlaybackStatusHasChanged *****************************************
struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FPlaybackStatusHasChanged;
// ********** End ScriptStruct FPlaybackStatusHasChanged *******************************************

// ********** Begin ScriptStruct FVolumeHasChanged *************************************************
struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVolumeHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FVolumeHasChanged;
// ********** End ScriptStruct FVolumeHasChanged ***************************************************

// ********** Begin Delegate FOnPlaybackStatusHasChanged *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_69_DELEGATE \
STEAMCORE_API void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data);


// ********** End Delegate FOnPlaybackStatusHasChanged *********************************************

// ********** Begin Delegate FOnVolumeHasChanged ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_70_DELEGATE \
STEAMCORE_API void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data);


// ********** End Delegate FOnVolumeHasChanged *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h

// ********** Begin Enum ESteamAudioPlaybackStatus *************************************************
#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> struct TIsUEnumClass<ESteamAudioPlaybackStatus> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();
// ********** End Enum ESteamAudioPlaybackStatus ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
