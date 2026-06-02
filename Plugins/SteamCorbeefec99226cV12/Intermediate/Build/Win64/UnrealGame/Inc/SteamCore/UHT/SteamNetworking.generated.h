// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworking.h"

#ifdef STEAMCORE_SteamNetworking_generated_h
#error "SteamNetworking.generated.h already included, missing '#pragma once' in SteamNetworking.h"
#endif
#define STEAMCORE_SteamNetworking_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamP2PSend : uint8;
struct FSteamID;
struct FSteamP2PSessionState;

// ********** Begin Class UNetworking **************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendP2PPacket); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser);


struct Z_Construct_UClass_UNetworking_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UNetworking_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworking(); \
	friend struct ::Z_Construct_UClass_UNetworking_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UNetworking_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UNetworking_NoRegister) \
	DECLARE_SERIALIZER(UNetworking)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworking(UNetworking&&) = delete; \
	UNetworking(const UNetworking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworking) \
	NO_API virtual ~UNetworking();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworking;

// ********** End Class UNetworking ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
