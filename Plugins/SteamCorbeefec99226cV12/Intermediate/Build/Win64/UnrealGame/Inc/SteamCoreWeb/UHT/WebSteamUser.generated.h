// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/WebSteamUser.h"

#ifdef STEAMCOREWEB_WebSteamUser_generated_h
#error "WebSteamUser.generated.h already included, missing '#pragma once' in WebSteamUser.h"
#endif
#define STEAMCOREWEB_WebSteamUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVanityUrlType : uint8;

// ********** Begin Class UWebSteamUser ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveVanityURL); \
	DECLARE_FUNCTION(execGrantPackage); \
	DECLARE_FUNCTION(execGetUserGroupList); \
	DECLARE_FUNCTION(execGetPublisherAppOwnershipChanges); \
	DECLARE_FUNCTION(execGetPublisherAppOwnership); \
	DECLARE_FUNCTION(execGetPlayerSummaries); \
	DECLARE_FUNCTION(execGetPlayerBans); \
	DECLARE_FUNCTION(execGetFriendList); \
	DECLARE_FUNCTION(execGetAppPriceInfo); \
	DECLARE_FUNCTION(execCheckAppOwnership);


struct Z_Construct_UClass_UWebSteamUser_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamUser(); \
	friend struct ::Z_Construct_UClass_UWebSteamUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebSteamUser_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSteamUser, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebSteamUser_NoRegister) \
	DECLARE_SERIALIZER(UWebSteamUser)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSteamUser(UWebSteamUser&&) = delete; \
	UWebSteamUser(const UWebSteamUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamUser) \
	NO_API virtual ~UWebSteamUser();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSteamUser;

// ********** End Class UWebSteamUser **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
