// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamGameServer.h"

#ifdef STEAMCORE_SteamGameServer_generated_h
#error "SteamGameServer.generated.h already included, missing '#pragma once' in SteamGameServer.h"
#endif
#define STEAMCORE_SteamGameServer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
struct FSteamID;
struct FSteamTicketHandle;

// ********** Begin Class USteamGameServer *********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execForceHeartbeat); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execSetAdvertiseServerActive); \
	DECLARE_FUNCTION(execEnableHeartbeats); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan);


struct Z_Construct_UClass_USteamGameServer_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameServer_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameServer(); \
	friend struct ::Z_Construct_UClass_USteamGameServer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamGameServer_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamGameServer, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamGameServer_NoRegister) \
	DECLARE_SERIALIZER(USteamGameServer)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamGameServer(USteamGameServer&&) = delete; \
	USteamGameServer(const USteamGameServer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamGameServer) \
	NO_API virtual ~USteamGameServer();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamGameServer;

// ********** End Class USteamGameServer ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
