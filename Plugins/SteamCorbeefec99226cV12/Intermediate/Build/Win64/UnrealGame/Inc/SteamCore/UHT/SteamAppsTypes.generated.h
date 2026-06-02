// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsTypes.h"

#ifdef STEAMCORE_SteamAppsTypes_generated_h
#error "SteamAppsTypes.generated.h already included, missing '#pragma once' in SteamAppsTypes.h"
#endif
#define STEAMCORE_SteamAppsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDLCInstalled;
struct FFileDetailsResult;
struct FTimedTrialStatus;

// ********** Begin ScriptStruct FTimedTrialStatus *************************************************
struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimedTrialStatus_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FTimedTrialStatus;
// ********** End ScriptStruct FTimedTrialStatus ***************************************************

// ********** Begin ScriptStruct FFileDetailsResult ************************************************
struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FFileDetailsResult;
// ********** End ScriptStruct FFileDetailsResult **************************************************

// ********** Begin ScriptStruct FDLCInstalled *****************************************************
struct Z_Construct_UScriptStruct_FDLCInstalled_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FDLCInstalled;
// ********** End ScriptStruct FDLCInstalled *******************************************************

// ********** Begin Delegate FOnFileDetailsResult **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_115_DELEGATE \
STEAMCORE_API void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileDetailsResult ****************************************************

// ********** Begin Delegate FOnDLCInstalled *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_116_DELEGATE \
STEAMCORE_API void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data);


// ********** End Delegate FOnDLCInstalled *********************************************************

// ********** Begin Delegate FOnFileDetailsResultDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_117_DELEGATE \
STEAMCORE_API void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data);


// ********** End Delegate FOnFileDetailsResultDelegate ********************************************

// ********** Begin Delegate FOnNewUrlLaunchParametersDelegate *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_118_DELEGATE \
STEAMCORE_API void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate);


// ********** End Delegate FOnNewUrlLaunchParametersDelegate ***************************************

// ********** Begin Delegate FOnTimedTrialStatusDelegate *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_119_DELEGATE \
STEAMCORE_API void FOnTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTimedTrialStatusDelegate, FTimedTrialStatus const& Data);


// ********** End Delegate FOnTimedTrialStatusDelegate *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
