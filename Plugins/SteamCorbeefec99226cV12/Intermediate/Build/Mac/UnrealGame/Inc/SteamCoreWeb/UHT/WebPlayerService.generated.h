// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerService/WebPlayerService.h"

#ifdef STEAMCOREWEB_WebPlayerService_generated_h
#error "WebPlayerService.generated.h already included, missing '#pragma once' in WebPlayerService.h"
#endif
#define STEAMCOREWEB_WebPlayerService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebPlayerService ********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlayingSharedGame); \
	DECLARE_FUNCTION(execGetCommunityBadgeProgress); \
	DECLARE_FUNCTION(execGetBadges); \
	DECLARE_FUNCTION(execGetSteamLevel); \
	DECLARE_FUNCTION(execGetOwnedGames); \
	DECLARE_FUNCTION(execGetRecentlyPlayedGames);


struct Z_Construct_UClass_UWebPlayerService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPlayerService(); \
	friend struct ::Z_Construct_UClass_UWebPlayerService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebPlayerService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebPlayerService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebPlayerService_NoRegister) \
	DECLARE_SERIALIZER(UWebPlayerService)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebPlayerService(UWebPlayerService&&) = delete; \
	UWebPlayerService(const UWebPlayerService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPlayerService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPlayerService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPlayerService) \
	NO_API virtual ~UWebPlayerService();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebPlayerService;

// ********** End Class UWebPlayerService **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
