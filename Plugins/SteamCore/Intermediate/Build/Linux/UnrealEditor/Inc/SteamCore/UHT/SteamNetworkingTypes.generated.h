// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworkingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionConnectFail;
struct FP2PSessionRequest;
#ifdef STEAMCORE_SteamNetworkingTypes_generated_h
#error "SteamNetworkingTypes.generated.h already included, missing '#pragma once' in SteamNetworkingTypes.h"
#endif
#define STEAMCORE_SteamNetworkingTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamP2PSessionState>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FP2PSessionRequest>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FP2PSessionConnectFail>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_137_DELEGATE \
STEAMCORE_API void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_138_DELEGATE \
STEAMCORE_API void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h


#define FOREACH_ENUM_ESTEAMP2PSEND(op) \
	op(ESteamP2PSend::Unreliable) \
	op(ESteamP2PSend::UnreliableNoDelay) \
	op(ESteamP2PSend::Reliable) \
	op(ESteamP2PSend::ReliableWithBuffering) 

enum class ESteamP2PSend : uint8;
template<> struct TIsUEnumClass<ESteamP2PSend> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSend>();

#define FOREACH_ENUM_ESTEAMP2PSESSIONERROR(op) \
	op(ESteamP2PSessionError::None) \
	op(ESteamP2PSessionError::NotRunningApp) \
	op(ESteamP2PSessionError::NoRightsToApp) \
	op(ESteamP2PSessionError::DestinationNotLoggedIn) \
	op(ESteamP2PSessionError::Timeout) \
	op(ESteamP2PSessionError::Max) 

enum class ESteamP2PSessionError : uint8;
template<> struct TIsUEnumClass<ESteamP2PSessionError> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSessionError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
