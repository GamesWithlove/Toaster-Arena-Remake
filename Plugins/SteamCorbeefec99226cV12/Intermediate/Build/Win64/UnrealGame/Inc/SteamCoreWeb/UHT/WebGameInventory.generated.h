// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInventory/WebGameInventory.h"

#ifdef STEAMCOREWEB_WebGameInventory_generated_h
#error "WebGameInventory.generated.h already included, missing '#pragma once' in WebGameInventory.h"
#endif
#define STEAMCOREWEB_WebGameInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebGameInventory ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateItemDefs); \
	DECLARE_FUNCTION(execSupportGetAssetHistory); \
	DECLARE_FUNCTION(execHistoryExecuteCommands); \
	DECLARE_FUNCTION(execGetUserHistory); \
	DECLARE_FUNCTION(execGetHistoryCommandDetails);


struct Z_Construct_UClass_UWebGameInventory_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebGameInventory(); \
	friend struct ::Z_Construct_UClass_UWebGameInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebGameInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebGameInventory, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebGameInventory_NoRegister) \
	DECLARE_SERIALIZER(UWebGameInventory)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebGameInventory(UWebGameInventory&&) = delete; \
	UWebGameInventory(const UWebGameInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebGameInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebGameInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebGameInventory) \
	NO_API virtual ~UWebGameInventory();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_21_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebGameInventory;

// ********** End Class UWebGameInventory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
