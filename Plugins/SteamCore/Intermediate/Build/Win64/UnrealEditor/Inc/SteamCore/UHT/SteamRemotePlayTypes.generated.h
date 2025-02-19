// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionConnected;
struct FSteamRemotePlaySessionDisconnected;
#ifdef STEAMCORE_SteamRemotePlayTypes_generated_h
#error "SteamRemotePlayTypes.generated.h already included, missing '#pragma once' in SteamRemotePlayTypes.h"
#endif
#define STEAMCORE_SteamRemotePlayTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionConnected>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionDisconnected>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_90_DELEGATE \
STEAMCORE_API void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_91_DELEGATE \
STEAMCORE_API void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h


#define FOREACH_ENUM_ESTEAMCOREDEVICEFORMFACTOR(op) \
	op(ESteamCoreDeviceFormFactor::Unknown) \
	op(ESteamCoreDeviceFormFactor::Phone) \
	op(ESteamCoreDeviceFormFactor::Tablet) \
	op(ESteamCoreDeviceFormFactor::Computer) \
	op(ESteamCoreDeviceFormFactor::TV) 

enum class ESteamCoreDeviceFormFactor : uint8;
template<> struct TIsUEnumClass<ESteamCoreDeviceFormFactor> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
