// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EconMarket/WebEconMarketService.h"

#ifdef STEAMCOREWEB_WebEconMarketService_generated_h
#error "WebEconMarketService.generated.h already included, missing '#pragma once' in WebEconMarketService.h"
#endif
#define STEAMCOREWEB_WebEconMarketService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebEconMarketService ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPopular); \
	DECLARE_FUNCTION(execGetAssetID); \
	DECLARE_FUNCTION(execCancelAppListingsForUser); \
	DECLARE_FUNCTION(execGetMarketEligibility);


struct Z_Construct_UClass_UWebEconMarketService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebEconMarketService(); \
	friend struct ::Z_Construct_UClass_UWebEconMarketService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebEconMarketService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebEconMarketService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebEconMarketService_NoRegister) \
	DECLARE_SERIALIZER(UWebEconMarketService)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebEconMarketService(UWebEconMarketService&&) = delete; \
	UWebEconMarketService(const UWebEconMarketService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebEconMarketService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebEconMarketService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebEconMarketService) \
	NO_API virtual ~UWebEconMarketService();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_19_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebEconMarketService;

// ********** End Class UWebEconMarketService ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
