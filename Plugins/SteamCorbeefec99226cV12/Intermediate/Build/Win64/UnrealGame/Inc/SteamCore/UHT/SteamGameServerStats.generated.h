// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/SteamGameServerStats.h"

#ifdef STEAMCORE_SteamGameServerStats_generated_h
#error "SteamGameServerStats.generated.h already included, missing '#pragma once' in SteamGameServerStats.h"
#endif
#define STEAMCORE_SteamGameServerStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;

// ********** Begin Class UGameServerStats *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execServerStoreUserStats); \
	DECLARE_FUNCTION(execServerRequestUserStats); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement);


struct Z_Construct_UClass_UGameServerStats_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameServerStats(); \
	friend struct ::Z_Construct_UClass_UGameServerStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UGameServerStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameServerStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UGameServerStats_NoRegister) \
	DECLARE_SERIALIZER(UGameServerStats)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameServerStats(UGameServerStats&&) = delete; \
	UGameServerStats(const UGameServerStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameServerStats) \
	NO_API virtual ~UGameServerStats();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameServerStats;

// ********** End Class UGameServerStats ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
