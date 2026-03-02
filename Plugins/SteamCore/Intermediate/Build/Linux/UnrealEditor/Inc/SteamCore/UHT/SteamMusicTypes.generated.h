// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusicTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlaybackStatusHasChanged;
struct FVolumeHasChanged;
#ifdef STEAMCORE_SteamMusicTypes_generated_h
#error "SteamMusicTypes.generated.h already included, missing '#pragma once' in SteamMusicTypes.h"
#endif
#define STEAMCORE_SteamMusicTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FPlaybackStatusHasChanged>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FVolumeHasChanged>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_69_DELEGATE \
STEAMCORE_API void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_70_DELEGATE \
STEAMCORE_API void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h


#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> struct TIsUEnumClass<ESteamAudioPlaybackStatus> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
