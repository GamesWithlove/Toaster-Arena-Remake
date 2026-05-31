// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNews/WebSteamNews.h"

#ifdef STEAMCOREWEB_WebSteamNews_generated_h
#error "WebSteamNews.generated.h already included, missing '#pragma once' in WebSteamNews.h"
#endif
#define STEAMCOREWEB_WebSteamNews_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSteamNews ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNewsForAppAuthed); \
	DECLARE_FUNCTION(execGetNewsForApp);


struct Z_Construct_UClass_UWebSteamNews_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamNews(); \
	friend struct ::Z_Construct_UClass_UWebSteamNews_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebSteamNews_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSteamNews, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebSteamNews_NoRegister) \
	DECLARE_SERIALIZER(UWebSteamNews)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSteamNews(UWebSteamNews&&) = delete; \
	UWebSteamNews(const UWebSteamNews&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamNews); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamNews); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamNews) \
	NO_API virtual ~UWebSteamNews();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSteamNews;

// ********** End Class UWebSteamNews **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
