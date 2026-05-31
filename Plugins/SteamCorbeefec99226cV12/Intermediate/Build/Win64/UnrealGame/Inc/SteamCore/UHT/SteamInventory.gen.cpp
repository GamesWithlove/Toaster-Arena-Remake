// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInventory/SteamInventory.h"
#include "Engine/GameInstance.h"
#include "SteamCore/SteamTypes.h"
#include "SteamInventory/SteamInventoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamInventory() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UInventory();
STEAMCORE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventory Function AddPromoItem *****************************************
struct Z_Construct_UFunction_UInventory_AddPromoItem_Statics
{
	struct Inventory_eventAddPromoItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ItemDef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to \n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. \n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09ItemDef\x09\x09The ItemDef to grant the player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        ItemDef         The ItemDef to grant the player." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItem constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItem Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
void Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItem", 	Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Inventory_eventAddPromoItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Inventory_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execAddPromoItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::AddPromoItem(Z_Param_Out_Result,Z_Param_ItemDef);
	P_NATIVE_END;
}
// ********** End Class UInventory Function AddPromoItem *******************************************

// ********** Begin Class UInventory Function AddPromoItems ****************************************
struct Z_Construct_UFunction_UInventory_AddPromoItems_Statics
{
	struct Inventory_eventAddPromoItems_Parms
	{
		FSteamInventoryResult OutResult;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions.\n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09\x09The list of items to grant the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        ItemDefs                        The list of items to grant the user." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, OutResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
void Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItems", 	Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Inventory_eventAddPromoItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Inventory_eventAddPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_AddPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execAddPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_OutResult);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::AddPromoItems(Z_Param_Out_OutResult,Z_Param_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UInventory Function AddPromoItems ******************************************

// ********** Begin Class UInventory Function CheckResultSteamID ***********************************
struct Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics
{
	struct Inventory_eventCheckResultSteamID_Parms
	{
		FSteamInventoryResult Handle;
		FSteamID SteamIDExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09*\n\x09* This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to check the Steam ID on.\n\x09* @param\x09steamID\x09\x09The Steam ID to verify.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\n\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        Handle          The inventory result handle to check the Steam ID on.\n@param        steamID         The Steam ID to verify." },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckResultSteamID constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckResultSteamID constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckResultSteamID Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected = { "SteamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, SteamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers) < 2048);
// ********** End Function CheckResultSteamID Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "CheckResultSteamID", 	Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Inventory_eventCheckResultSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Inventory_eventCheckResultSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_CheckResultSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execCheckResultSteamID)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::CheckResultSteamID(Z_Param_Handle,Z_Param_SteamIDExpected);
	P_NATIVE_END;
}
// ********** End Class UInventory Function CheckResultSteamID *************************************

// ********** Begin Class UInventory Function ConsumeItem ******************************************
struct Z_Construct_UFunction_UInventory_ConsumeItem_Statics
{
	struct Inventory_eventConsumeItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemConsume;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09*\n\x09* Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended. \n\x09* ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09*\n\x09* @param\x09ItemConsume\x09\x09\x09The item instance id to consume.\n\x09* @param\x09Quantity\x09\x09The number of items in that stack to consume.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\n@param        ItemConsume                     The item instance id to consume.\n@param        Quantity                The number of items in that stack to consume." },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeItem constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemConsume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeItem constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeItem Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ItemConsume = { "ItemConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, ItemConsume), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventConsumeItem_Parms), &Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ItemConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers) < 2048);
// ********** End Function ConsumeItem Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ConsumeItem", 	Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Inventory_eventConsumeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Inventory_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execConsumeItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemConsume);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::ConsumeItem(Z_Param_Out_Result,Z_Param_ItemConsume,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventory Function ConsumeItem ********************************************

// ********** Begin Class UInventory Function DeserializeResult ************************************
struct Z_Construct_UFunction_UInventory_DeserializeResult_Statics
{
	struct Inventory_eventDeserializeResult_Parms
	{
		FSteamInventoryResult Result;
		TArray<uint8> Buffer;
		bool bReservedMustBeFalse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Deserializes a result set and verifies the signature bytes.\n\x09*\n\x09* This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. \n\x09* The \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. \n\x09* You could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, \n\x09* or you could request the player with expired data to send an updated result set.\n\x09* You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09""Buffer\x09\x09\x09\x09\x09The buffer to deserialize.\n\x09* @param\x09""bReservedMustBeFalse\x09This must be false!\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\n\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode.\nThe \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated.\nYou could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal,\nor you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        Buffer                                  The buffer to deserialize.\n@param        bReservedMustBeFalse    This must be false!" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeserializeResult constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_bReservedMustBeFalse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReservedMustBeFalse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeserializeResult constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeserializeResult Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit(void* Obj)
{
	((Inventory_eventDeserializeResult_Parms*)Obj)->bReservedMustBeFalse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse = { "bReservedMustBeFalse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers) < 2048);
// ********** End Function DeserializeResult Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DeserializeResult", 	Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Inventory_eventDeserializeResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Inventory_eventDeserializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_DeserializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execDeserializeResult)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(uint8,Z_Param_Buffer);
	P_GET_UBOOL(Z_Param_bReservedMustBeFalse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::DeserializeResult(Z_Param_Out_Result,Z_Param_Buffer,Z_Param_bReservedMustBeFalse);
	P_NATIVE_END;
}
// ********** End Class UInventory Function DeserializeResult **************************************

// ********** Begin Class UInventory Function DestroyResult ****************************************
struct Z_Construct_UFunction_UInventory_DestroyResult_Statics
{
	struct Inventory_eventDestroyResult_Parms
	{
		FSteamInventoryResult Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Destroys a result handle and frees all associated memory.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param        Handle          The inventory result handle to destroy." },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyResult constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyResult constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyResult Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventDestroyResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers) < 2048);
// ********** End Function DestroyResult Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DestroyResult", 	Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Inventory_eventDestroyResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Inventory_eventDestroyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_DestroyResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execDestroyResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInventory::DestroyResult(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInventory Function DestroyResult ******************************************

// ********** Begin Class UInventory Function ExchangeItems ****************************************
struct Z_Construct_UFunction_UInventory_ExchangeItems_Statics
{
	struct Inventory_eventExchangeItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ArrayGenerate;
		TArray<int32> ArrayGenerateQuantity;
		TArray<FSteamItemInstanceID> ArrayDestroy;
		TArray<int32> ArrayDestroyQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant one item in exchange for a set of other items.\n\x09*\n\x09* This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\n\x09* The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. \n\x09* The API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\n\x09* Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. \n\x09* Exchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\x09*\n\x09* @param\x09""ArrayGenerate\x09\x09\x09\x09\x09The list of items that will be created by this call. Currently can only be 1 item!\n\x09* @param\x09""ArrayGenerateQuantity\x09\x09\x09The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n\x09* @param\x09""ArrayDestroy\x09\x09\x09\x09\x09The list of items that will be destroyed by this call.\n\x09* @param\x09""ArrayDestroyQuantity\x09\x09\x09The quantity of each item in pArrayDestroy to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant one item in exchange for a set of other items.\n\nThis can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\nThe caller of this API passes in the requested item and an array of existing items and quantities to exchange for it.\nThe API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\nAny items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item.\nExchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\n@param        ArrayGenerate                                   The list of items that will be created by this call. Currently can only be 1 item!\n@param        ArrayGenerateQuantity                   The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n@param        ArrayDestroy                                    The list of items that will be destroyed by this call.\n@param        ArrayDestroyQuantity                    The quantity of each item in pArrayDestroy to destroy." },
	};
#endif // WITH_METADATA

// ********** Begin Function ExchangeItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayGenerate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayGenerateQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerateQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayDestroy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayDestroyQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroyQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExchangeItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExchangeItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayDestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventExchangeItems_Parms), &Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers) < 2048);
// ********** End Function ExchangeItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ExchangeItems", 	Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Inventory_eventExchangeItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Inventory_eventExchangeItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_ExchangeItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execExchangeItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ArrayGenerate);
	P_GET_TARRAY(int32,Z_Param_ArrayGenerateQuantity);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_ArrayDestroy);
	P_GET_TARRAY(int32,Z_Param_ArrayDestroyQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::ExchangeItems(Z_Param_Out_Result,Z_Param_ArrayGenerate,Z_Param_ArrayGenerateQuantity,Z_Param_ArrayDestroy,Z_Param_ArrayDestroyQuantity);
	P_NATIVE_END;
}
// ********** End Class UInventory Function ExchangeItems ******************************************

// ********** Begin Class UInventory Function GenerateItems ****************************************
struct Z_Construct_UFunction_UInventory_GenerateItems_Statics
{
	struct Inventory_eventGenerateItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grants specific items to the current user, for developers only.\n\x09*\n\x09* This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\n\x09* You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The list of items to grant the user.\n\x09* @param\x09Quantity\x09\x09The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grants specific items to the current user, for developers only.\n\nThis API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\nYou can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\n@param        ItemDefs                The list of items to grant the user.\n@param        Quantity                The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item." },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGenerateItems_Parms), &Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers) < 2048);
// ********** End Function GenerateItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GenerateItems", 	Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Inventory_eventGenerateItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Inventory_eventGenerateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GenerateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGenerateItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GenerateItems(Z_Param_Out_Result,Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GenerateItems ******************************************

// ********** Begin Class UInventory Function GetAllItems ******************************************
struct Z_Construct_UFunction_UInventory_GetAllItems_Statics
{
	struct Inventory_eventGetAllItems_Parms
	{
		FSteamInventoryResult Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Start retrieving all items in the current users inventory.\n\x09*\n\x09* Calls to this function are subject to rate limits and may return cached results if called too frequently. \n\x09* It is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\x09* \n\x09* @param\x09Handle\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nCalls to this function are subject to rate limits and may return cached results if called too frequently.\nIt is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\n@param        Handle          Returns a new inventory result handle." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllItems constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllItems Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetAllItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
void Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetAllItems_Parms), &Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers) < 2048);
// ********** End Function GetAllItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetAllItems", 	Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Inventory_eventGetAllItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Inventory_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetAllItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetAllItems(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetAllItems ********************************************

// ********** Begin Class UInventory Function GetEligiblePromoItemDefinitionIDs ********************
struct Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics
{
	struct Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms
	{
		FSteamID SteamID;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the list of item definition ids that a user can be granted.\n\x09*\n\x09* You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09* @param\x09ItemDefs\x09Returns the item definition ids by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\n\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param        SteamID         The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param        ItemDefs        Returns the item definition ids by copying them into this array." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEligiblePromoItemDefinitionIDs constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEligiblePromoItemDefinitionIDs constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEligiblePromoItemDefinitionIDs Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
void Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers) < 2048);
// ********** End Function GetEligiblePromoItemDefinitionIDs Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", 	Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetEligiblePromoItemDefinitionIDs)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetEligiblePromoItemDefinitionIDs **********************

// ********** Begin Class UInventory Function GetItemDefinitionIDs *********************************
struct Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics
{
	struct Inventory_eventGetItemDefinitionIDs_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09*\n\x09* These item definitions may not necessarily be contiguous integers.\n\x09* This should be called in response to a SteamInventoryDefinitionUpdate_t callback. \n\x09* There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*\n\x09* @param\x09ItemDefs\x09Returns the item definitions by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback.\nThere is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\n@param        ItemDefs        Returns the item definitions by copying them into this array." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefinitionIDs constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefinitionIDs constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefinitionIDs Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
void Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefinitionIDs Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionIDs", 	Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Inventory_eventGetItemDefinitionIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Inventory_eventGetItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemDefinitionIDs)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetItemDefinitionIDs(Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetItemDefinitionIDs ***********************************

// ********** Begin Class UInventory Function GetItemDefinitionProperty ****************************
struct Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics
{
	struct Inventory_eventGetItemDefinitionProperty_Parms
	{
		FSteamItemDef ItemDef;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets a string property from the specified item definition.\n\x09*\n\x09* Gets a property value for a specific item definition.\n\x09* Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09* Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09*\n\x09* @param\x09ItemDef\x09\x09\x09\x09The item definition to get the properties for.\n\x09* @param\x09PropertyName\x09\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the value associated with pchPropertyName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets a string property from the specified item definition.\n\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param        ItemDef                         The item definition to get the properties for.\n@param        PropertyName            The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param        Value                           Returns the value associated with pchPropertyName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefinitionProperty constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefinitionProperty constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefinitionProperty Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefinitionProperty Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionProperty", 	Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Inventory_eventGetItemDefinitionProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Inventory_eventGetItemDefinitionProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemDefinitionProperty)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetItemDefinitionProperty(Z_Param_ItemDef,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetItemDefinitionProperty ******************************

// ********** Begin Class UInventory Function GetItemPrice *****************************************
struct Z_Construct_UFunction_UInventory_GetItemPrice_Statics
{
	struct Inventory_eventGetItemPrice_Parms
	{
		FSteamItemDef ItemDef;
		int32 Price;
		int32 BasePrice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09ItemDef\x09\x09The item definition id to retrieve the price for\n\x09* @param\x09Price\x09\x09The price pointer to populate. Prices are rendered in the user's local currency.\n\x09* @param\x09""BasePrice\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        ItemDef         The item definition id to retrieve the price for\n@param        Price           The price pointer to populate. Prices are rendered in the user's local currency.\n@param        BasePrice       (Steam SDK 1.46 only)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemPrice constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemPrice constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemPrice Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, Price), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_BasePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers) < 2048);
// ********** End Function GetItemPrice Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemPrice", 	Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Inventory_eventGetItemPrice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Inventory_eventGetItemPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemPrice)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Price);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BasePrice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetItemPrice(Z_Param_ItemDef,Z_Param_Out_Price,Z_Param_Out_BasePrice);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetItemPrice *******************************************

// ********** Begin Class UInventory Function GetItemsByID *****************************************
struct Z_Construct_UFunction_UInventory_GetItemsByID_Statics
{
	struct Inventory_eventGetItemsByID_Parms
	{
		FSteamInventoryResult InventoryResult;
		TArray<FSteamItemInstanceID> InstanceIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the state of a subset of the current user's inventory.\n\x09*\n\x09* The subset is specified by an array of item instance IDs.\n\x09* The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09* \n\x09* @param\x09InstanceIDs\x09\x09""A list of the item instance ids to update the state of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\n\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\n@param        InstanceIDs             A list of the item instance ids to update the state of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemsByID constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemsByID constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemsByID Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2960996927
void Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers) < 2048);
// ********** End Function GetItemsByID Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsByID", 	Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Inventory_eventGetItemsByID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Inventory_eventGetItemsByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemsByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemsByID)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_InstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetItemsByID(Z_Param_Out_InventoryResult,Z_Param_InstanceIDs);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetItemsByID *******************************************

// ********** Begin Class UInventory Function GetItemsWithPrices ***********************************
struct Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics
{
	struct Inventory_eventGetItemsWithPrices_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Prices;
		TArray<int32> BasePrices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids to populate\n\x09* @param\x09Prices\x09\x09The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n\x09* @param\x09""BasePrices\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        ItemDefs                The array of item definition ids to populate\n@param        Prices          The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n@param        BasePrices      (Steam SDK 1.46 only)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemsWithPrices constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Prices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Prices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasePrices;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemsWithPrices constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemsWithPrices Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner = { "BasePrices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices = { "BasePrices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, BasePrices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers) < 2048);
// ********** End Function GetItemsWithPrices Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsWithPrices", 	Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Inventory_eventGetItemsWithPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Inventory_eventGetItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemsWithPrices)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Prices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BasePrices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetItemsWithPrices(Z_Param_Out_ItemDefs,Z_Param_Out_Prices,Z_Param_Out_BasePrices);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetItemsWithPrices *************************************

// ********** Begin Class UInventory Function GetNumItemsWithPrices ********************************
struct Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics
{
	struct Inventory_eventGetNumItemsWithPrices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumItemsWithPrices constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumItemsWithPrices constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumItemsWithPrices Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers) < 2048);
// ********** End Function GetNumItemsWithPrices Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetNumItemsWithPrices", 	Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Inventory_eventGetNumItemsWithPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Inventory_eventGetNumItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetNumItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetNumItemsWithPrices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInventory::GetNumItemsWithPrices();
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetNumItemsWithPrices **********************************

// ********** Begin Class UInventory Function GetResultItemProperty ********************************
struct Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics
{
	struct Inventory_eventGetResultItemProperty_Parms
	{
		FSteamInventoryResult Handle;
		int32 ItemIndex;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the dynamic properties from an item in an inventory result set.\n\x09*\n\x09* Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09* If the results do not fit in the given buffer, partial results may be copied.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The result handle containing the item to get the properties of.\n\x09* @param\x09ItemIndex\x09\n\x09* @param\x09PropertyName\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\n\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param        Handle                  The result handle containing the item to get the properties of.\n@param        ItemIndex\n@param        PropertyName    The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultItemProperty constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultItemProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultItemProperty Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers) < 2048);
// ********** End Function GetResultItemProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItemProperty", 	Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Inventory_eventGetResultItemProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Inventory_eventGetResultItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetResultItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetResultItemProperty)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetResultItemProperty(Z_Param_Handle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetResultItemProperty **********************************

// ********** Begin Class UInventory Function GetResultItems ***************************************
struct Z_Construct_UFunction_UInventory_GetResultItems_Statics
{
	struct Inventory_eventGetResultItems_Parms
	{
		FSteamInventoryResult Handle;
		TArray<FSteamItemDetails> Items;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the items associated with an inventory result handle.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to get the items for.\n\x09* @param\x09Items\x09\x09The details are returned by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param        Handle          The inventory result handle to get the items for.\n@param        Items           The details are returned by copying them into this array." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultItems constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultItems constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultItems Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(0, nullptr) }; // 2917435522
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2917435522
void Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGetResultItems_Parms), &Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers) < 2048);
// ********** End Function GetResultItems Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItems", 	Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Inventory_eventGetResultItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Inventory_eventGetResultItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetResultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetResultItems)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GetResultItems(Z_Param_Handle,Z_Param_Out_Items);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetResultItems *****************************************

// ********** Begin Class UInventory Function GetResultStatus **************************************
struct Z_Construct_UFunction_UInventory_GetResultStatus_Statics
{
	struct Inventory_eventGetResultStatus_Parms
	{
		FSteamInventoryResult Handle;
		ESteamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Find out the status of an asynchronous inventory result handle.\n\x09*\n\x09* This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to get the status for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\n\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param        Handle          The inventory result handle to get the status for." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultStatus constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultStatus constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultStatus Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(0, nullptr) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers) < 2048);
// ********** End Function GetResultStatus Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultStatus", 	Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Inventory_eventGetResultStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Inventory_eventGetResultStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetResultStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetResultStatus)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamResult*)Z_Param__Result=UInventory::GetResultStatus(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetResultStatus ****************************************

// ********** Begin Class UInventory Function GetResultTimestamp ***********************************
struct Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics
{
	struct Inventory_eventGetResultTimestamp_Parms
	{
		FSteamInventoryResult Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the server time at which the result was generated.\n\x09*\x09\n\x09* @param\x09Handle\x09The inventory result handle to get the timestamp for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param        Handle  The inventory result handle to get the timestamp for." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultTimestamp constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultTimestamp constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultTimestamp Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers) < 2048);
// ********** End Function GetResultTimestamp Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultTimestamp", 	Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Inventory_eventGetResultTimestamp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Inventory_eventGetResultTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetResultTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetResultTimestamp)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInventory::GetResultTimestamp(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GetResultTimestamp *************************************

// ********** Begin Class UInventory Function GrantPromoItems **************************************
struct Z_Construct_UFunction_UInventory_GrantPromoItems_Statics
{
	struct Inventory_eventGrantPromoItems_Parms
	{
		FSteamInventoryResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant all potential one-time promotional items to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. \n\x09* One of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. \n\x09* For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09Result\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs.\nOne of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client.\nFor example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        Result          Returns a new inventory result handle." },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantPromoItems constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantPromoItems constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantPromoItems Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGrantPromoItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
void Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers) < 2048);
// ********** End Function GrantPromoItems Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GrantPromoItems", 	Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Inventory_eventGrantPromoItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Inventory_eventGrantPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GrantPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGrantPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::GrantPromoItems(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UInventory Function GrantPromoItems ****************************************

// ********** Begin Class UInventory Function LoadItemDefinitions **********************************
struct Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics
{
	struct Inventory_eventLoadItemDefinitions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Triggers an asynchronous load and refresh of item definitions.\n\x09*\n\x09* Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. \n\x09* Some of these properties are required to display items on the Steam community web site. Other properties can be defined by applications. \n\x09* There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\n\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties.\nSome of these properties are required to display items on the Steam community web site. Other properties can be defined by applications.\nThere is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch." },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadItemDefinitions constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadItemDefinitions constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadItemDefinitions Property Definitions ******************************
void Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers) < 2048);
// ********** End Function LoadItemDefinitions Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "LoadItemDefinitions", 	Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Inventory_eventLoadItemDefinitions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Inventory_eventLoadItemDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_LoadItemDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execLoadItemDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::LoadItemDefinitions();
	P_NATIVE_END;
}
// ********** End Class UInventory Function LoadItemDefinitions ************************************

// ********** Begin Class UInventory Function RemoveProperty ***************************************
struct Z_Construct_UFunction_UInventory_RemoveProperty_Statics
{
	struct Inventory_eventRemoveProperty_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Removes a dynamic property for the given item.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09The dynamic property being removed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Removes a dynamic property for the given item.\n\n@param        Handle                  The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                  ID of the item being modified.\n@param        PropertyName    The dynamic property being removed." },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveProperty constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveProperty constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveProperty Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers) < 2048);
// ********** End Function RemoveProperty Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveProperty", 	Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Inventory_eventRemoveProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Inventory_eventRemoveProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RemoveProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRemoveProperty)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::RemoveProperty(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UInventory Function RemoveProperty *****************************************

// ********** Begin Class UInventory Function RequestEligiblePromoItemDefinitionsIDs ***************
struct Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics
{
	struct Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09*\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        SteamID         The Steam ID of the user to request the eligible promo items for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEligiblePromoItemDefinitionsIDs constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDs Property Definitions ***********
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 680045302
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
// ********** End Function RequestEligiblePromoItemDefinitionsIDs Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestEligiblePromoItemDefinitionsIDs", 	Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestEligiblePromoItemDefinitionsIDs)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEligiblePromoItemDefinitionsIDs(FOnRequestEligiblePromoItemDefinitionsIDs(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UInventory Function RequestEligiblePromoItemDefinitionsIDs *****************

// ********** Begin Class UInventory Function RequestPrices ****************************************
struct Z_Construct_UFunction_UInventory_RequestPrices_Statics
{
	struct Inventory_eventRequestPrices_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency. \n\x09*\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. \n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\n\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPrices constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPrices constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPrices Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2935338332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers) < 2048);
// ********** End Function RequestPrices Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestPrices", 	Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Inventory_eventRequestPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Inventory_eventRequestPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestPrices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPrices(FOnSteamInventoryRequestPricesResult(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UInventory Function RequestPrices ******************************************

// ********** Begin Class UInventory Function SerializeResult **************************************
struct Z_Construct_UFunction_UInventory_SerializeResult_Statics
{
	struct Inventory_eventSerializeResult_Parms
	{
		FSteamInventoryResult Handle;
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09*\n\x09* A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. \n\x09* This is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. \n\x09* The size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09* Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09* If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to serialize.\n\x09* @param\x09""Buffer\x09\x09The buffer that the serialized result will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players.\nThis is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer.\nThe size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param        Handle          The inventory result handle to serialize.\n@param        Buffer          The buffer that the serialized result will be copied into." },
	};
#endif // WITH_METADATA

// ********** Begin Function SerializeResult constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SerializeResult constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SerializeResult Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSerializeResult_Parms), &Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers) < 2048);
// ********** End Function SerializeResult Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SerializeResult", 	Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Inventory_eventSerializeResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Inventory_eventSerializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SerializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSerializeResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SerializeResult(Z_Param_Handle,Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SerializeResult ****************************************

// ********** Begin Class UInventory Function SetPropertyBool **************************************
struct Z_Construct_UFunction_UInventory_SetPropertyBool_Statics
{
	struct Inventory_eventSetPropertyBool_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool bValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09""bValue\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        bValue                          The string value being set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPropertyBool constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPropertyBool constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPropertyBool Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((Inventory_eventSetPropertyBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers) < 2048);
// ********** End Function SetPropertyBool Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyBool", 	Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Inventory_eventSetPropertyBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Inventory_eventSetPropertyBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SetPropertyBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSetPropertyBool)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SetPropertyBool(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_bValue);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SetPropertyBool ****************************************

// ********** Begin Class UInventory Function SetPropertyFloat *************************************
struct Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics
{
	struct Inventory_eventSetPropertyFloat_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPropertyFloat constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPropertyFloat constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPropertyFloat Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers) < 2048);
// ********** End Function SetPropertyFloat Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyFloat", 	Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Inventory_eventSetPropertyFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Inventory_eventSetPropertyFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SetPropertyFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSetPropertyFloat)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SetPropertyFloat(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SetPropertyFloat ***************************************

// ********** Begin Class UInventory Function SetPropertyInt ***************************************
struct Z_Construct_UFunction_UInventory_SetPropertyInt_Statics
{
	struct Inventory_eventSetPropertyInt_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPropertyInt constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPropertyInt constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPropertyInt Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers) < 2048);
// ********** End Function SetPropertyInt Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyInt", 	Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Inventory_eventSetPropertyInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Inventory_eventSetPropertyInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SetPropertyInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSetPropertyInt)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SetPropertyInt(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SetPropertyInt *****************************************

// ********** Begin Class UInventory Function SetPropertyString ************************************
struct Z_Construct_UFunction_UInventory_SetPropertyString_Statics
{
	struct Inventory_eventSetPropertyString_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPropertyString constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPropertyString constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPropertyString Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers) < 2048);
// ********** End Function SetPropertyString Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyString", 	Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Inventory_eventSetPropertyString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Inventory_eventSetPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SetPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSetPropertyString)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SetPropertyString(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SetPropertyString **************************************

// ********** Begin Class UInventory Function StartPurchase ****************************************
struct Z_Construct_UFunction_UInventory_StartPurchase_Statics
{
	struct Inventory_eventStartPurchase_Parms
	{
		FScriptDelegate Callback;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy. \n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired. \n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        ItemDefs                The array of item definition ids that the user wants to purchase.\n@param        Quantity                The array of quantities of each item definition that the user wants to purchase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartPurchase constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartPurchase constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartPurchase Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2748390494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers) < 2048);
// ********** End Function StartPurchase Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartPurchase", 	Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Inventory_eventStartPurchase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Inventory_eventStartPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_StartPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execStartPurchase)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPurchase(FOnSteamInventoryStartPurchaseResult(Z_Param_Out_Callback),Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventory Function StartPurchase ******************************************

// ********** Begin Class UInventory Function StartUpdateProperties ********************************
struct Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics
{
	struct Inventory_eventStartUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user. \n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers. \n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif // WITH_METADATA

// ********** Begin Function StartUpdateProperties constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartUpdateProperties constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartUpdateProperties Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers) < 2048);
// ********** End Function StartUpdateProperties Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartUpdateProperties", 	Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Inventory_eventStartUpdateProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Inventory_eventStartUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_StartUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execStartUpdateProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=UInventory::StartUpdateProperties();
	P_NATIVE_END;
}
// ********** End Class UInventory Function StartUpdateProperties **********************************

// ********** Begin Class UInventory Function SubmitUpdateProperties *******************************
struct Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics
{
	struct Inventory_eventSubmitUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamInventoryResult ResultHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user.\n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif // WITH_METADATA

// ********** Begin Function SubmitUpdateProperties constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubmitUpdateProperties constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubmitUpdateProperties Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
void Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers) < 2048);
// ********** End Function SubmitUpdateProperties Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SubmitUpdateProperties", 	Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Inventory_eventSubmitUpdateProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Inventory_eventSubmitUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_SubmitUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execSubmitUpdateProperties)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::SubmitUpdateProperties(Z_Param_Handle,Z_Param_Out_ResultHandle);
	P_NATIVE_END;
}
// ********** End Class UInventory Function SubmitUpdateProperties *********************************

// ********** Begin Class UInventory Function TransferItemQuantity *********************************
struct Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics
{
	struct Inventory_eventTransferItemQuantity_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemIDSource;
		int32 Quantity;
		FSteamItemInstanceID ItemIDDest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Transfer items between stacks within a user's inventory.\n\x09*\n\x09* This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. \n\x09* To move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09*\n\x09* @param\x09ItemIDSource\x09\x09The source item to transfer.\n\x09* @param\x09Quantity\x09\x09\x09The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09* @param\x09ItemIDDest\x09\x09\x09The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\n\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id.\nTo move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\n@param        ItemIDSource            The source item to transfer.\n@param        Quantity                        The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param        ItemIDDest                      The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity." },
	};
#endif // WITH_METADATA

// ********** Begin Function TransferItemQuantity constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDDest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransferItemQuantity constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransferItemQuantity Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource = { "ItemIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, ItemIDSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest = { "ItemIDDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, ItemIDDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2960996927
void Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers) < 2048);
// ********** End Function TransferItemQuantity Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TransferItemQuantity", 	Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Inventory_eventTransferItemQuantity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Inventory_eventTransferItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_TransferItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execTransferItemQuantity)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDDest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::TransferItemQuantity(Z_Param_Out_Result,Z_Param_ItemIDSource,Z_Param_Quantity,Z_Param_ItemIDDest);
	P_NATIVE_END;
}
// ********** End Class UInventory Function TransferItemQuantity ***********************************

// ********** Begin Class UInventory Function TriggerItemDrop **************************************
struct Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics
{
	struct Inventory_eventTriggerItemDrop_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ListDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Trigger an item drop if the user has played a long enough period of time.\n\x09*\n\x09* This period can be customized in two places:\n\x09* At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09* In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09* Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09* Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. \n\x09* The granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. \n\x09* The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\x09*\n\x09* @param\x09ListDefinition\x09\x09This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\n\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur.\nThe granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client.\nThe Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\n@param        ListDefinition          This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details." },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerItemDrop constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ListDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerItemDrop constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerItemDrop Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 171087397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ListDefinition = { "ListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, ListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
void Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ListDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers) < 2048);
// ********** End Function TriggerItemDrop Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TriggerItemDrop", 	Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Inventory_eventTriggerItemDrop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Inventory_eventTriggerItemDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_TriggerItemDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execTriggerItemDrop)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ListDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInventory::TriggerItemDrop(Z_Param_Out_Result,Z_Param_ListDefinition);
	P_NATIVE_END;
}
// ********** End Class UInventory Function TriggerItemDrop ****************************************

// ********** Begin Class UInventory ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInventory;
UClass* UInventory::GetPrivateStaticClass()
{
	using TClass = UInventory;
	if (!Z_Registration_Info_UClass_UInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Inventory"),
			Z_Registration_Info_UClass_UInventory.InnerSingleton,
			StaticRegisterNativesUInventory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInventory/SteamInventory.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInventory constinit property declarations *******************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryFullUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryStartPurchaseResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryRequestPricesResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryEligiblePromoItemDefIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInventory constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddPromoItem"), .Pointer = &UInventory::execAddPromoItem },
		{ .NameUTF8 = UTF8TEXT("AddPromoItems"), .Pointer = &UInventory::execAddPromoItems },
		{ .NameUTF8 = UTF8TEXT("CheckResultSteamID"), .Pointer = &UInventory::execCheckResultSteamID },
		{ .NameUTF8 = UTF8TEXT("ConsumeItem"), .Pointer = &UInventory::execConsumeItem },
		{ .NameUTF8 = UTF8TEXT("DeserializeResult"), .Pointer = &UInventory::execDeserializeResult },
		{ .NameUTF8 = UTF8TEXT("DestroyResult"), .Pointer = &UInventory::execDestroyResult },
		{ .NameUTF8 = UTF8TEXT("ExchangeItems"), .Pointer = &UInventory::execExchangeItems },
		{ .NameUTF8 = UTF8TEXT("GenerateItems"), .Pointer = &UInventory::execGenerateItems },
		{ .NameUTF8 = UTF8TEXT("GetAllItems"), .Pointer = &UInventory::execGetAllItems },
		{ .NameUTF8 = UTF8TEXT("GetEligiblePromoItemDefinitionIDs"), .Pointer = &UInventory::execGetEligiblePromoItemDefinitionIDs },
		{ .NameUTF8 = UTF8TEXT("GetItemDefinitionIDs"), .Pointer = &UInventory::execGetItemDefinitionIDs },
		{ .NameUTF8 = UTF8TEXT("GetItemDefinitionProperty"), .Pointer = &UInventory::execGetItemDefinitionProperty },
		{ .NameUTF8 = UTF8TEXT("GetItemPrice"), .Pointer = &UInventory::execGetItemPrice },
		{ .NameUTF8 = UTF8TEXT("GetItemsByID"), .Pointer = &UInventory::execGetItemsByID },
		{ .NameUTF8 = UTF8TEXT("GetItemsWithPrices"), .Pointer = &UInventory::execGetItemsWithPrices },
		{ .NameUTF8 = UTF8TEXT("GetNumItemsWithPrices"), .Pointer = &UInventory::execGetNumItemsWithPrices },
		{ .NameUTF8 = UTF8TEXT("GetResultItemProperty"), .Pointer = &UInventory::execGetResultItemProperty },
		{ .NameUTF8 = UTF8TEXT("GetResultItems"), .Pointer = &UInventory::execGetResultItems },
		{ .NameUTF8 = UTF8TEXT("GetResultStatus"), .Pointer = &UInventory::execGetResultStatus },
		{ .NameUTF8 = UTF8TEXT("GetResultTimestamp"), .Pointer = &UInventory::execGetResultTimestamp },
		{ .NameUTF8 = UTF8TEXT("GrantPromoItems"), .Pointer = &UInventory::execGrantPromoItems },
		{ .NameUTF8 = UTF8TEXT("LoadItemDefinitions"), .Pointer = &UInventory::execLoadItemDefinitions },
		{ .NameUTF8 = UTF8TEXT("RemoveProperty"), .Pointer = &UInventory::execRemoveProperty },
		{ .NameUTF8 = UTF8TEXT("RequestEligiblePromoItemDefinitionsIDs"), .Pointer = &UInventory::execRequestEligiblePromoItemDefinitionsIDs },
		{ .NameUTF8 = UTF8TEXT("RequestPrices"), .Pointer = &UInventory::execRequestPrices },
		{ .NameUTF8 = UTF8TEXT("SerializeResult"), .Pointer = &UInventory::execSerializeResult },
		{ .NameUTF8 = UTF8TEXT("SetPropertyBool"), .Pointer = &UInventory::execSetPropertyBool },
		{ .NameUTF8 = UTF8TEXT("SetPropertyFloat"), .Pointer = &UInventory::execSetPropertyFloat },
		{ .NameUTF8 = UTF8TEXT("SetPropertyInt"), .Pointer = &UInventory::execSetPropertyInt },
		{ .NameUTF8 = UTF8TEXT("SetPropertyString"), .Pointer = &UInventory::execSetPropertyString },
		{ .NameUTF8 = UTF8TEXT("StartPurchase"), .Pointer = &UInventory::execStartPurchase },
		{ .NameUTF8 = UTF8TEXT("StartUpdateProperties"), .Pointer = &UInventory::execStartUpdateProperties },
		{ .NameUTF8 = UTF8TEXT("SubmitUpdateProperties"), .Pointer = &UInventory::execSubmitUpdateProperties },
		{ .NameUTF8 = UTF8TEXT("TransferItemQuantity"), .Pointer = &UInventory::execTransferItemQuantity },
		{ .NameUTF8 = UTF8TEXT("TriggerItemDrop"), .Pointer = &UInventory::execTriggerItemDrop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddPromoItem, "AddPromoItem" }, // 1290911087
		{ &Z_Construct_UFunction_UInventory_AddPromoItems, "AddPromoItems" }, // 274871308
		{ &Z_Construct_UFunction_UInventory_CheckResultSteamID, "CheckResultSteamID" }, // 33658298
		{ &Z_Construct_UFunction_UInventory_ConsumeItem, "ConsumeItem" }, // 1470655194
		{ &Z_Construct_UFunction_UInventory_DeserializeResult, "DeserializeResult" }, // 2512681435
		{ &Z_Construct_UFunction_UInventory_DestroyResult, "DestroyResult" }, // 857722409
		{ &Z_Construct_UFunction_UInventory_ExchangeItems, "ExchangeItems" }, // 2828044018
		{ &Z_Construct_UFunction_UInventory_GenerateItems, "GenerateItems" }, // 2874805627
		{ &Z_Construct_UFunction_UInventory_GetAllItems, "GetAllItems" }, // 3624280323
		{ &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 3192651661
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 3547941402
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 1699014526
		{ &Z_Construct_UFunction_UInventory_GetItemPrice, "GetItemPrice" }, // 542872752
		{ &Z_Construct_UFunction_UInventory_GetItemsByID, "GetItemsByID" }, // 1377161547
		{ &Z_Construct_UFunction_UInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 2470067139
		{ &Z_Construct_UFunction_UInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 1961030897
		{ &Z_Construct_UFunction_UInventory_GetResultItemProperty, "GetResultItemProperty" }, // 1678496388
		{ &Z_Construct_UFunction_UInventory_GetResultItems, "GetResultItems" }, // 3096695427
		{ &Z_Construct_UFunction_UInventory_GetResultStatus, "GetResultStatus" }, // 328937254
		{ &Z_Construct_UFunction_UInventory_GetResultTimestamp, "GetResultTimestamp" }, // 839454135
		{ &Z_Construct_UFunction_UInventory_GrantPromoItems, "GrantPromoItems" }, // 50707139
		{ &Z_Construct_UFunction_UInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 1761080725
		{ &Z_Construct_UFunction_UInventory_RemoveProperty, "RemoveProperty" }, // 2838235003
		{ &Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 2110245322
		{ &Z_Construct_UFunction_UInventory_RequestPrices, "RequestPrices" }, // 3481634513
		{ &Z_Construct_UFunction_UInventory_SerializeResult, "SerializeResult" }, // 565813901
		{ &Z_Construct_UFunction_UInventory_SetPropertyBool, "SetPropertyBool" }, // 4164369779
		{ &Z_Construct_UFunction_UInventory_SetPropertyFloat, "SetPropertyFloat" }, // 1343755380
		{ &Z_Construct_UFunction_UInventory_SetPropertyInt, "SetPropertyInt" }, // 12272286
		{ &Z_Construct_UFunction_UInventory_SetPropertyString, "SetPropertyString" }, // 4119907451
		{ &Z_Construct_UFunction_UInventory_StartPurchase, "StartPurchase" }, // 1559654514
		{ &Z_Construct_UFunction_UInventory_StartUpdateProperties, "StartUpdateProperties" }, // 3094444674
		{ &Z_Construct_UFunction_UInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 3500172502
		{ &Z_Construct_UFunction_UInventory_TransferItemQuantity, "TransferItemQuantity" }, // 780057819
		{ &Z_Construct_UFunction_UInventory_TriggerItemDrop, "TriggerItemDrop" }, // 268380204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInventory_Statics

// ********** Begin Class UInventory Property Definitions ******************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryResultReady_MetaData), NewProp_SteamInventoryResultReady_MetaData) }; // 2384812793
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryDefinitionUpdate_MetaData), NewProp_SteamInventoryDefinitionUpdate_MetaData) }; // 3250418648
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate = { "SteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryFullUpdate_MetaData), NewProp_SteamInventoryFullUpdate_MetaData) }; // 268362713
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult = { "SteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryStartPurchaseResult_MetaData), NewProp_SteamInventoryStartPurchaseResult_MetaData) }; // 1546738574
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate = { "SteamInventoryRequestPricesResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryRequestPricesResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryRequestPricesResultDelegate_MetaData), NewProp_SteamInventoryRequestPricesResultDelegate_MetaData) }; // 1518598529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs = { "SteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, SteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData), NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData) }; // 1471854476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
// ********** End Class UInventory Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInventory_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInventory);
UInventory::~UInventory() {}
// ********** End Class UInventory *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 3728836802U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h__Script_SteamCore_2038474213{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventory_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
