// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamGameServerTypes.h"

#ifdef STEAMCORE_SteamGameServerTypes_generated_h
#error "SteamGameServerTypes.generated.h already included, missing '#pragma once' in SteamGameServerTypes.h"
#endif
#define STEAMCORE_SteamGameServerTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssociateWithClanResult;
struct FComputeNewPlayerCompatibilityResult;
struct FGSClientApprove;
struct FGSClientDeny;
struct FGSClientGroupStatus;
struct FGSPolicyResponse;
struct FValidateAuthTicketResponse;

// ********** Begin ScriptStruct FGSPolicyResponse *************************************************
struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGSPolicyResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGSPolicyResponse;
// ********** End ScriptStruct FGSPolicyResponse ***************************************************

// ********** Begin ScriptStruct FGSClientGroupStatus **********************************************
struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGSClientGroupStatus;
// ********** End ScriptStruct FGSClientGroupStatus ************************************************

// ********** Begin ScriptStruct FAssociateWithClanResult ******************************************
struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FAssociateWithClanResult;
// ********** End ScriptStruct FAssociateWithClanResult ********************************************

// ********** Begin ScriptStruct FComputeNewPlayerCompatibilityResult ******************************
struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FComputeNewPlayerCompatibilityResult;
// ********** End ScriptStruct FComputeNewPlayerCompatibilityResult ********************************

// ********** Begin ScriptStruct FGSClientApprove **************************************************
struct Z_Construct_UScriptStruct_FGSClientApprove_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGSClientApprove_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGSClientApprove;
// ********** End ScriptStruct FGSClientApprove ****************************************************

// ********** Begin ScriptStruct FGSClientDeny *****************************************************
struct Z_Construct_UScriptStruct_FGSClientDeny_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_151_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGSClientDeny_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGSClientDeny;
// ********** End ScriptStruct FGSClientDeny *******************************************************

// ********** Begin Delegate FOnAssociateWithClan **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_179_DELEGATE \
STEAMCORE_API void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnAssociateWithClan ****************************************************

// ********** Begin Delegate FOnComputeNewPlayerCompatibility **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_180_DELEGATE \
STEAMCORE_API void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnComputeNewPlayerCompatibility ****************************************

// ********** Begin Delegate FOnGSPolicyResponse ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_181_DELEGATE \
STEAMCORE_API void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data);


// ********** End Delegate FOnGSPolicyResponse *****************************************************

// ********** Begin Delegate FOnGSClientGroupStatus ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_182_DELEGATE \
STEAMCORE_API void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data);


// ********** End Delegate FOnGSClientGroupStatus **************************************************

// ********** Begin Delegate FOnGSValidateAuthTicketResponse ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_183_DELEGATE \
STEAMCORE_API void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data);


// ********** End Delegate FOnGSValidateAuthTicketResponse *****************************************

// ********** Begin Delegate FOnGSClientApprove ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_184_DELEGATE \
STEAMCORE_API void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data);


// ********** End Delegate FOnGSClientApprove ******************************************************

// ********** Begin Delegate FOnGSClientDeny *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_185_DELEGATE \
STEAMCORE_API void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data);


// ********** End Delegate FOnGSClientDeny *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
