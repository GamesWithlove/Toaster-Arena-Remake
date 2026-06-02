// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlayTypes.h"

#ifdef STEAMCORE_SteamRemotePlayTypes_generated_h
#error "SteamRemotePlayTypes.generated.h already included, missing '#pragma once' in SteamRemotePlayTypes.h"
#endif
#define STEAMCORE_SteamRemotePlayTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionConnected;
struct FSteamRemotePlaySessionDisconnected;

// ********** Begin ScriptStruct FSteamRemotePlaySessionConnected **********************************
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FSteamRemotePlaySessionConnected;
// ********** End ScriptStruct FSteamRemotePlaySessionConnected ************************************

// ********** Begin ScriptStruct FSteamRemotePlaySessionDisconnected *******************************
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FSteamRemotePlaySessionDisconnected;
// ********** End ScriptStruct FSteamRemotePlaySessionDisconnected *********************************

// ********** Begin Delegate FOnSteamRemotePlaySessionConnected ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_90_DELEGATE \
STEAMCORE_API void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data);


// ********** End Delegate FOnSteamRemotePlaySessionConnected **************************************

// ********** Begin Delegate FOnSteamRemotePlaySessionDisconnected *********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_91_DELEGATE \
STEAMCORE_API void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data);


// ********** End Delegate FOnSteamRemotePlaySessionDisconnected ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h

// ********** Begin Enum ESteamCoreDeviceFormFactor ************************************************
#define FOREACH_ENUM_ESTEAMCOREDEVICEFORMFACTOR(op) \
	op(ESteamCoreDeviceFormFactor::Unknown) \
	op(ESteamCoreDeviceFormFactor::Phone) \
	op(ESteamCoreDeviceFormFactor::Tablet) \
	op(ESteamCoreDeviceFormFactor::Computer) \
	op(ESteamCoreDeviceFormFactor::TV) 

enum class ESteamCoreDeviceFormFactor : uint8;
template<> struct TIsUEnumClass<ESteamCoreDeviceFormFactor> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>();
// ********** End Enum ESteamCoreDeviceFormFactor **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
