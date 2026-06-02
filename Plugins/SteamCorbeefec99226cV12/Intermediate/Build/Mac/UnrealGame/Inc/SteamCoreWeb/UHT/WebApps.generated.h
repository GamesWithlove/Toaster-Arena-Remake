// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Apps/WebApps.h"

#ifdef STEAMCOREWEB_WebApps_generated_h
#error "WebApps.generated.h already included, missing '#pragma once' in WebApps.h"
#endif
#define STEAMCOREWEB_WebApps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebApps *****************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpToDateCheck); \
	DECLARE_FUNCTION(execSetAppBuildLive); \
	DECLARE_FUNCTION(execGetServersAtAddress); \
	DECLARE_FUNCTION(execGetServerList); \
	DECLARE_FUNCTION(execGetPlayersBanned); \
	DECLARE_FUNCTION(execGetCheatingReports); \
	DECLARE_FUNCTION(execGetAppList); \
	DECLARE_FUNCTION(execGetAppDepotVersions); \
	DECLARE_FUNCTION(execGetAppBuilds); \
	DECLARE_FUNCTION(execGetAppBetas);


struct Z_Construct_UClass_UWebApps_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebApps(); \
	friend struct ::Z_Construct_UClass_UWebApps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebApps_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebApps, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebApps_NoRegister) \
	DECLARE_SERIALIZER(UWebApps)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebApps(UWebApps&&) = delete; \
	UWebApps(const UWebApps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebApps) \
	NO_API virtual ~UWebApps();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_11_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebApps;

// ********** End Class UWebApps *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
