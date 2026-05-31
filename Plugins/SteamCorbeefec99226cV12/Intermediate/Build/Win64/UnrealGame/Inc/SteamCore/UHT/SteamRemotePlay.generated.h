// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlay.h"

#ifdef STEAMCORE_SteamRemotePlay_generated_h
#error "SteamRemotePlay.generated.h already included, missing '#pragma once' in SteamRemotePlay.h"
#endif
#define STEAMCORE_SteamRemotePlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamCoreDeviceFormFactor : uint8;
struct FSteamID;

// ********** Begin Class URemotePlay **************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionSteamID); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionCount);


struct Z_Construct_UClass_URemotePlay_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemotePlay(); \
	friend struct ::Z_Construct_UClass_URemotePlay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_URemotePlay_NoRegister(); \
public: \
	DECLARE_CLASS2(URemotePlay, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_URemotePlay_NoRegister) \
	DECLARE_SERIALIZER(URemotePlay)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemotePlay(URemotePlay&&) = delete; \
	URemotePlay(const URemotePlay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemotePlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemotePlay) \
	NO_API virtual ~URemotePlay();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemotePlay;

// ********** End Class URemotePlay ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
