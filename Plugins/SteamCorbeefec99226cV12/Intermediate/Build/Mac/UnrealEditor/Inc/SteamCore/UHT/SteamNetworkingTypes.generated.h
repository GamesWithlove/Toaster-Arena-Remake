// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworkingTypes.h"

#ifdef STEAMCORE_SteamNetworkingTypes_generated_h
#error "SteamNetworkingTypes.generated.h already included, missing '#pragma once' in SteamNetworkingTypes.h"
#endif
#define STEAMCORE_SteamNetworkingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionConnectFail;
struct FP2PSessionRequest;

// ********** Begin ScriptStruct FSteamP2PSessionState *********************************************
struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSteamP2PSessionState;
// ********** End ScriptStruct FSteamP2PSessionState ***********************************************

// ********** Begin ScriptStruct FP2PSessionRequest ************************************************
struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FP2PSessionRequest_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FP2PSessionRequest;
// ********** End ScriptStruct FP2PSessionRequest **************************************************

// ********** Begin ScriptStruct FP2PSessionConnectFail ********************************************
struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FP2PSessionConnectFail;
// ********** End ScriptStruct FP2PSessionConnectFail **********************************************

// ********** Begin Delegate FOnP2PSessionRequest **************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_137_DELEGATE \
STEAMCORE_API void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& Data);


// ********** End Delegate FOnP2PSessionRequest ****************************************************

// ********** Begin Delegate FOnP2PSessionConnectFail **********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_138_DELEGATE \
STEAMCORE_API void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& Data);


// ********** End Delegate FOnP2PSessionConnectFail ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h

// ********** Begin Enum ESteamP2PSend *************************************************************
#define FOREACH_ENUM_ESTEAMP2PSEND(op) \
	op(ESteamP2PSend::Unreliable) \
	op(ESteamP2PSend::UnreliableNoDelay) \
	op(ESteamP2PSend::Reliable) \
	op(ESteamP2PSend::ReliableWithBuffering) 

enum class ESteamP2PSend : uint8;
template<> struct TIsUEnumClass<ESteamP2PSend> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamP2PSend>();
// ********** End Enum ESteamP2PSend ***************************************************************

// ********** Begin Enum ESteamP2PSessionError *****************************************************
#define FOREACH_ENUM_ESTEAMP2PSESSIONERROR(op) \
	op(ESteamP2PSessionError::None) \
	op(ESteamP2PSessionError::NotRunningApp) \
	op(ESteamP2PSessionError::NoRightsToApp) \
	op(ESteamP2PSessionError::DestinationNotLoggedIn) \
	op(ESteamP2PSessionError::Timeout) \
	op(ESteamP2PSessionError::Max) 

enum class ESteamP2PSessionError : uint8;
template<> struct TIsUEnumClass<ESteamP2PSessionError> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamP2PSessionError>();
// ********** End Enum ESteamP2PSessionError *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
