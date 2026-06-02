// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInventory/SteamInventoryAsyncActions.h"

#ifdef STEAMCORE_SteamInventoryAsyncActions_generated_h
#error "SteamInventoryAsyncActions.generated.h already included, missing '#pragma once' in SteamInventoryAsyncActions.h"
#endif
#define STEAMCORE_SteamInventoryAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
class USteamCoreInventoryAsyncActionRequestPricesResult;
class USteamCoreInventoryAsyncActionStartPurchaseResult;
struct FSteamID;
struct FSteamInventoryEligiblePromoItemDefIDs;
struct FSteamInventoryRequestPricesResult;
struct FSteamInventoryStartPurchaseResult;
struct FSteamItemDef;

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ****************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ******************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate *********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate ***********************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate *********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_19_DELEGATE \
STEAMCORE_API void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate ***********************

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs *****
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct ::Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&) = delete; \
	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) \
	NO_API virtual ~USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_24_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;

// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs *******

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult ************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult(); \
	friend struct ::Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestPricesResult)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreInventoryAsyncActionRequestPricesResult(USteamCoreInventoryAsyncActionRequestPricesResult&&) = delete; \
	USteamCoreInventoryAsyncActionRequestPricesResult(const USteamCoreInventoryAsyncActionRequestPricesResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestPricesResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestPricesResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestPricesResult) \
	NO_API virtual ~USteamCoreInventoryAsyncActionRequestPricesResult();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_50_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreInventoryAsyncActionRequestPricesResult;

// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult **************************

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult ************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPurchaseAsync);


struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult(); \
	friend struct ::Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreInventoryAsyncActionStartPurchaseResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionStartPurchaseResult)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreInventoryAsyncActionStartPurchaseResult(USteamCoreInventoryAsyncActionStartPurchaseResult&&) = delete; \
	USteamCoreInventoryAsyncActionStartPurchaseResult(const USteamCoreInventoryAsyncActionStartPurchaseResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionStartPurchaseResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionStartPurchaseResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionStartPurchaseResult) \
	NO_API virtual ~USteamCoreInventoryAsyncActionStartPurchaseResult();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreInventoryAsyncActionStartPurchaseResult;

// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
