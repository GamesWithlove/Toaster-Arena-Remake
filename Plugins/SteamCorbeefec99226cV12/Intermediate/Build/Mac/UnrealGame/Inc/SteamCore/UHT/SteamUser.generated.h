// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUser.h"

#ifdef STEAMCORE_SteamUser_generated_h
#error "SteamUser.generated.h already included, missing '#pragma once' in SteamUser.h"
#endif
#define STEAMCORE_SteamUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
enum class ESteamVoiceResult : uint8;
struct FSteamID;
struct FSteamTicketHandle;

// ********** Begin Class UUser ********************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthTicketForWebApi); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


struct Z_Construct_UClass_UUser_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UUser_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct ::Z_Construct_UClass_UUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UUser_NoRegister(); \
public: \
	DECLARE_CLASS2(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UUser_NoRegister) \
	DECLARE_SERIALIZER(UUser)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUser(UUser&&) = delete; \
	UUser(const UUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUser) \
	NO_API virtual ~UUser();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUser;

// ********** End Class UUser **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
