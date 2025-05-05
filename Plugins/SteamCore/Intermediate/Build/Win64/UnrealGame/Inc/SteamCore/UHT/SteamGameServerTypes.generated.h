// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamGameServerTypes.h"
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
#ifdef STEAMCORE_SteamGameServerTypes_generated_h
#error "SteamGameServerTypes.generated.h already included, missing '#pragma once' in SteamGameServerTypes.h"
#endif
#define STEAMCORE_SteamGameServerTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSPolicyResponse>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientGroupStatus>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FAssociateWithClanResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FComputeNewPlayerCompatibilityResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientApprove_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientApprove>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientDeny_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientDeny>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_179_DELEGATE \
STEAMCORE_API void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_180_DELEGATE \
STEAMCORE_API void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_181_DELEGATE \
STEAMCORE_API void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_182_DELEGATE \
STEAMCORE_API void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_183_DELEGATE \
STEAMCORE_API void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_184_DELEGATE \
STEAMCORE_API void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_185_DELEGATE \
STEAMCORE_API void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
