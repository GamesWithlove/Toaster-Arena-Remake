// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInventory/SteamInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamResult : uint8;
struct FSteamID;
struct FSteamInventoryResult;
struct FSteamInventoryUpdateHandle;
struct FSteamItemDef;
struct FSteamItemDetails;
struct FSteamItemInstanceID;
#ifdef STEAMCORE_SteamInventory_generated_h
#error "SteamInventory.generated.h already included, missing '#pragma once' in SteamInventory.h"
#endif
#define STEAMCORE_SteamInventory_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPropertyFloat); \
	DECLARE_FUNCTION(execSetPropertyInt); \
	DECLARE_FUNCTION(execSetPropertyBool); \
	DECLARE_FUNCTION(execSetPropertyString); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execRequestPrices); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPropertyFloat); \
	DECLARE_FUNCTION(execSetPropertyInt); \
	DECLARE_FUNCTION(execSetPropertyBool); \
	DECLARE_FUNCTION(execSetPropertyString); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execRequestPrices); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	NO_API virtual ~UInventory();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
