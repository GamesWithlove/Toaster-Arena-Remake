// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamEconomy/WebSteamEconomy.h"

#ifdef STEAMCOREWEB_WebSteamEconomy_generated_h
#error "WebSteamEconomy.generated.h already included, missing '#pragma once' in WebSteamEconomy.h"
#endif
#define STEAMCOREWEB_WebSteamEconomy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSteamEconomy *********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartTrade); \
	DECLARE_FUNCTION(execStartAssetTransaction); \
	DECLARE_FUNCTION(execGetMarketPrices); \
	DECLARE_FUNCTION(execGetExportedAssetsForUser); \
	DECLARE_FUNCTION(execGetAssetPrices); \
	DECLARE_FUNCTION(execGetAssetClassInfo); \
	DECLARE_FUNCTION(execFinalizeAssetTransaction); \
	DECLARE_FUNCTION(execCanTrade);


struct Z_Construct_UClass_UWebSteamEconomy_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamEconomy(); \
	friend struct ::Z_Construct_UClass_UWebSteamEconomy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebSteamEconomy_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSteamEconomy, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebSteamEconomy_NoRegister) \
	DECLARE_SERIALIZER(UWebSteamEconomy)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSteamEconomy(UWebSteamEconomy&&) = delete; \
	UWebSteamEconomy(const UWebSteamEconomy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamEconomy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamEconomy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamEconomy) \
	NO_API virtual ~UWebSteamEconomy();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSteamEconomy;

// ********** End Class UWebSteamEconomy ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
