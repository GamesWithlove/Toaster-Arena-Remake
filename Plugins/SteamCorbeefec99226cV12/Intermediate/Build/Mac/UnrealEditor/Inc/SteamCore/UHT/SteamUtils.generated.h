// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUtils/SteamUtils.h"

#ifdef STEAMCORE_SteamUtils_generated_h
#error "SteamUtils.generated.h already included, missing '#pragma once' in SteamUtils.h"
#endif
#define STEAMCORE_SteamUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamGamepadTextInputLineMode : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamUniverse : uint8;

// ********** Begin Class UUtils *******************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


struct Z_Construct_UClass_UUtils_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UUtils_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtils(); \
	friend struct ::Z_Construct_UClass_UUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UUtils_NoRegister) \
	DECLARE_SERIALIZER(UUtils)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUtils(UUtils&&) = delete; \
	UUtils(const UUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUtils) \
	NO_API virtual ~UUtils();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUtils;

// ********** End Class UUtils *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
