// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServers.h"

#ifdef STEAMCORE_SteamMatchmakingServers_generated_h
#error "SteamMatchmakingServers.generated.h already included, missing '#pragma once' in SteamMatchmakingServers.h"
#endif
#define STEAMCORE_SteamMatchmakingServers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UServerFilter;

// ********** Begin Class UMatchmakingServers ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerRules); \
	DECLARE_FUNCTION(execPingServer); \
	DECLARE_FUNCTION(execRequestSpectatorServerList); \
	DECLARE_FUNCTION(execRequestLANServerList); \
	DECLARE_FUNCTION(execRequestInternetServerList); \
	DECLARE_FUNCTION(execRequestHistoryServerList); \
	DECLARE_FUNCTION(execRequestFriendsServerList); \
	DECLARE_FUNCTION(execRequestFavoritesServerList);


struct Z_Construct_UClass_UMatchmakingServers_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatchmakingServers(); \
	friend struct ::Z_Construct_UClass_UMatchmakingServers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UMatchmakingServers_NoRegister(); \
public: \
	DECLARE_CLASS2(UMatchmakingServers, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UMatchmakingServers_NoRegister) \
	DECLARE_SERIALIZER(UMatchmakingServers)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMatchmakingServers(UMatchmakingServers&&) = delete; \
	UMatchmakingServers(const UMatchmakingServers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchmakingServers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchmakingServers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMatchmakingServers) \
	NO_API virtual ~UMatchmakingServers();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMatchmakingServers;

// ********** End Class UMatchmakingServers ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
