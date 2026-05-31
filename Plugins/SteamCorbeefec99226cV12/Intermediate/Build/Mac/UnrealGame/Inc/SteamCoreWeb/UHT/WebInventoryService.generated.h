// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryService/WebInventoryService.h"

#ifdef STEAMCOREWEB_WebInventoryService_generated_h
#error "WebInventoryService.generated.h already included, missing '#pragma once' in WebInventoryService.h"
#endif
#define STEAMCOREWEB_WebInventoryService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModifyItemsItem;

// ********** Begin Class UWebInventoryService *****************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyItems); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execConsolidate); \
	DECLARE_FUNCTION(execGetPriceSheet); \
	DECLARE_FUNCTION(execGetItemDefs); \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execExchangeItem); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execAddPromoItem); \
	DECLARE_FUNCTION(execAddItem);


struct Z_Construct_UClass_UWebInventoryService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebInventoryService(); \
	friend struct ::Z_Construct_UClass_UWebInventoryService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebInventoryService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebInventoryService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebInventoryService_NoRegister) \
	DECLARE_SERIALIZER(UWebInventoryService)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebInventoryService(UWebInventoryService&&) = delete; \
	UWebInventoryService(const UWebInventoryService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebInventoryService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebInventoryService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebInventoryService) \
	NO_API virtual ~UWebInventoryService();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_17_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebInventoryService;

// ********** End Class UWebInventoryService *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
