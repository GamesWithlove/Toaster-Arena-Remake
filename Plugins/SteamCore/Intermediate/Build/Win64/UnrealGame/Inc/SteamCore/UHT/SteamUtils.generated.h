// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUtils/SteamUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamGamepadTextInputLineMode : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamUniverse : uint8;
#ifdef STEAMCORE_SteamUtils_generated_h
#error "SteamUtils.generated.h already included, missing '#pragma once' in SteamUtils.h"
#endif
#define STEAMCORE_SteamUtils_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningOnSteamDeck); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningOnSteamDeck); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtils(); \
	friend struct Z_Construct_UClass_UUtils_Statics; \
public: \
	DECLARE_CLASS(UUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUtils)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUtils(); \
	friend struct Z_Construct_UClass_UUtils_Statics; \
public: \
	DECLARE_CLASS(UUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUtils)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtils(UUtils&&); \
	NO_API UUtils(const UUtils&); \
public: \
	NO_API virtual ~UUtils();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtils(UUtils&&); \
	NO_API UUtils(const UUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUtils) \
	NO_API virtual ~UUtils();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
