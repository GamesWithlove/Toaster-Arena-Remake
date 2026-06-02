// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVideo/SteamVideoTypes.h"

#ifdef STEAMCORE_SteamVideoTypes_generated_h
#error "SteamVideoTypes.generated.h already included, missing '#pragma once' in SteamVideoTypes.h"
#endif
#define STEAMCORE_SteamVideoTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetOPFSettingsResult;
struct FGetVideoURLResult;

// ********** Begin ScriptStruct FGetOPFSettingsResult *********************************************
struct Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGetOPFSettingsResult;
// ********** End ScriptStruct FGetOPFSettingsResult ***********************************************

// ********** Begin ScriptStruct FGetVideoURLResult ************************************************
struct Z_Construct_UScriptStruct_FGetVideoURLResult_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetVideoURLResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGetVideoURLResult;
// ********** End ScriptStruct FGetVideoURLResult **************************************************

// ********** Begin Delegate FOnGetOPFSettingsResult ***********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_98_DELEGATE \
STEAMCORE_API void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FGetOPFSettingsResult const& Data);


// ********** End Delegate FOnGetOPFSettingsResult *************************************************

// ********** Begin Delegate FOnGetVideoURLResult **************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_99_DELEGATE \
STEAMCORE_API void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FGetVideoURLResult const& Data);


// ********** End Delegate FOnGetVideoURLResult ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h

// ********** Begin Enum ESteamBroadcastUploadResult ***********************************************
#define FOREACH_ENUM_ESTEAMBROADCASTUPLOADRESULT(op) \
	op(ESteamBroadcastUploadResult::None) \
	op(ESteamBroadcastUploadResult::OK) \
	op(ESteamBroadcastUploadResult::InitFailed) \
	op(ESteamBroadcastUploadResult::FrameFailed) \
	op(ESteamBroadcastUploadResult::Timeout) \
	op(ESteamBroadcastUploadResult::BandwidthExceeded) \
	op(ESteamBroadcastUploadResult::LowFPS) \
	op(ESteamBroadcastUploadResult::MissingKeyFrames) \
	op(ESteamBroadcastUploadResult::NoConnection) \
	op(ESteamBroadcastUploadResult::RelayFailed) \
	op(ESteamBroadcastUploadResult::SettingsChanged) \
	op(ESteamBroadcastUploadResult::MissingAudio) \
	op(ESteamBroadcastUploadResult::TooFarBehind) \
	op(ESteamBroadcastUploadResult::TranscodeBehind) 

enum class ESteamBroadcastUploadResult : uint8;
template<> struct TIsUEnumClass<ESteamBroadcastUploadResult> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamBroadcastUploadResult>();
// ********** End Enum ESteamBroadcastUploadResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
