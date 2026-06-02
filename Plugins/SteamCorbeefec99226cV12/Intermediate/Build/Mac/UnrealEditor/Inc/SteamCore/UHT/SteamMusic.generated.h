// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusic.h"

#ifdef STEAMCORE_SteamMusic_generated_h
#error "SteamMusic.generated.h already included, missing '#pragma once' in SteamMusic.h"
#endif
#define STEAMCORE_SteamMusic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamAudioPlaybackStatus : uint8;

// ********** Begin Class UMusic *******************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled);


struct Z_Construct_UClass_UMusic_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UMusic_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusic(); \
	friend struct ::Z_Construct_UClass_UMusic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UMusic_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusic, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UMusic_NoRegister) \
	DECLARE_SERIALIZER(UMusic)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusic(UMusic&&) = delete; \
	UMusic(const UMusic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMusic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMusic) \
	NO_API virtual ~UMusic();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusic;

// ********** End Class UMusic *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
