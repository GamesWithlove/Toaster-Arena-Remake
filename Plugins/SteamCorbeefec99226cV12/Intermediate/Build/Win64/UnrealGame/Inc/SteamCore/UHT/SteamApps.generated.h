// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamApps.h"

#ifdef STEAMCORE_SteamApps_generated_h
#error "SteamApps.generated.h already included, missing '#pragma once' in SteamApps.h"
#endif
#define STEAMCORE_SteamApps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;

// ********** Begin Class UApps ********************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsTimedTrial); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed);


struct Z_Construct_UClass_UApps_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UApps_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApps(); \
	friend struct ::Z_Construct_UClass_UApps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UApps_NoRegister(); \
public: \
	DECLARE_CLASS2(UApps, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UApps_NoRegister) \
	DECLARE_SERIALIZER(UApps)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UApps(UApps&&) = delete; \
	UApps(const UApps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UApps) \
	NO_API virtual ~UApps();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UApps;

// ********** End Class UApps **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
