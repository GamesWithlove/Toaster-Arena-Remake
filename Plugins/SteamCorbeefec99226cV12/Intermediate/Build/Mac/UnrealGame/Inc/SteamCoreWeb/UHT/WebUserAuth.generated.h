// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUserAuth/WebUserAuth.h"

#ifdef STEAMCOREWEB_WebUserAuth_generated_h
#error "WebUserAuth.generated.h already included, missing '#pragma once' in WebUserAuth.h"
#endif
#define STEAMCOREWEB_WebUserAuth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebUserAuth *************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAuthenticateUserTicket); \
	DECLARE_FUNCTION(execAuthenticateUser);


struct Z_Construct_UClass_UWebUserAuth_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebUserAuth(); \
	friend struct ::Z_Construct_UClass_UWebUserAuth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebUserAuth_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebUserAuth, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebUserAuth_NoRegister) \
	DECLARE_SERIALIZER(UWebUserAuth)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebUserAuth(UWebUserAuth&&) = delete; \
	UWebUserAuth(const UWebUserAuth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebUserAuth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebUserAuth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebUserAuth) \
	NO_API virtual ~UWebUserAuth();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebUserAuth;

// ********** End Class UWebUserAuth ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
