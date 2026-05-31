// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryService/WebInventoryServiceAsyncActions.h"
#include "InventoryService/WebInventoryServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebInventoryServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionAddItem Function AddItemAsync ********************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics
{
	struct SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		TArray<int32> ItemdefId;
		FString ItemPropsJson;
		TArray<int32> ItemQuantity;
		FString SteamId;
		bool bNotify;
		FString RequestId;
		bool bTradeRestriction;
		USteamCoreWebAsyncActionAddItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\x09*\n\x09* Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\n\x09* This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\x09*\n\x09* Player notification of a new item, if any, is best handled by the game client.\n\x09* Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\x09*\n\x09* The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\n\x09* If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\x09*\n\x09* If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09ItemdefId (int64)\x09List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09ItemPropsJson\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n\x09* @param\x09RequestId (int64)\x09Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n\x09* @param\x09""bTradeRestriction\x09Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.\n\x09*/" },
		{ "DisplayName", "Add Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\nItems of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\nThis call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\nPlayer notification of a new item, if any, is best handled by the game client.\nCalls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\nThe optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\nIf the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\nIf the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The ID of the application associated with the item.\n@param        ItemdefId (int64)       List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        ItemPropsJson\n@param        SteamId                         SteamID of the player to receive the items.\n@param        bNotify                         Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n@param        RequestId (int64)       Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n@param        bTradeRestriction       Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemAsync constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static void NewProp_bTradeRestriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTradeRestriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemAsync constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemAsync Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId_Inner = { "ItemdefId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, ItemdefId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity_Inner = { "ItemQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, ItemQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bTradeRestriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers) < 2048);
// ********** End Function AddItemAsync Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAddItem, nullptr, "AddItemAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionAddItem::execAddItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(int32,Z_Param_ItemdefId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_TARRAY(int32,Z_Param_ItemQuantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bNotify);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_GET_UBOOL(Z_Param_bTradeRestriction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionAddItem**)Z_Param__Result=USteamCoreWebAsyncActionAddItem::AddItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_ItemQuantity,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId,Z_Param_bTradeRestriction);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionAddItem Function AddItemAsync **********************

// ********** Begin Class USteamCoreWebAsyncActionAddItem ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem;
UClass* USteamCoreWebAsyncActionAddItem::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionAddItem;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionAddItem"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionAddItem,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister()
{
	return USteamCoreWebAsyncActionAddItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAddItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAddItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionAddItem constinit property declarations **********
// ********** End Class USteamCoreWebAsyncActionAddItem constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItemAsync"), .Pointer = &USteamCoreWebAsyncActionAddItem::execAddItemAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync, "AddItemAsync" }, // 2392616563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAddItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::ClassParams = {
	&USteamCoreWebAsyncActionAddItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionAddItem::StaticRegisterNativesUSteamCoreWebAsyncActionAddItem()
{
	UClass* Class = USteamCoreWebAsyncActionAddItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem.OuterSingleton;
}
USteamCoreWebAsyncActionAddItem::USteamCoreWebAsyncActionAddItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionAddItem);
USteamCoreWebAsyncActionAddItem::~USteamCoreWebAsyncActionAddItem() {}
// ********** End Class USteamCoreWebAsyncActionAddItem ********************************************

// ********** Begin Class USteamCoreWebAsyncActionAddPromoItem Function AddPromoItemAsync **********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics
{
	struct SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 ItemdefId;
		FString ItemPropsJson;
		FString SteamId;
		bool bNotify;
		FString RequestId;
		USteamCoreWebAsyncActionAddPromoItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Adds a promo item to a user's inventory\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\n\x09* @param\x09ItemdefId (int64)\n\x09* @param\x09ItemPropsJson\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Should notify the user that the item was added to their Steam Inventory.\n\x09* @param\x09RequestId (int64)\n\x09*/" },
		{ "DisplayName", "Add Promo Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Adds a promo item to a user's inventory\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId\n@param        ItemdefId (int64)\n@param        ItemPropsJson\n@param        SteamId                         SteamID of the player to receive the items.\n@param        bNotify                         Should notify the user that the item was added to their Steam Inventory.\n@param        RequestId (int64)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItemAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItemAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItemAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItemAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, nullptr, "AddPromoItemAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemdefId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bNotify);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionAddPromoItem**)Z_Param__Result=USteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionAddPromoItem Function AddPromoItemAsync ************

// ********** Begin Class USteamCoreWebAsyncActionAddPromoItem *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem;
UClass* USteamCoreWebAsyncActionAddPromoItem::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionAddPromoItem;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionAddPromoItem"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionAddPromoItem,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister()
{
	return USteamCoreWebAsyncActionAddPromoItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAddPromoItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAddPromoItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionAddPromoItem constinit property declarations *****
// ********** End Class USteamCoreWebAsyncActionAddPromoItem constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddPromoItemAsync"), .Pointer = &USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync, "AddPromoItemAsync" }, // 1124585081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAddPromoItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams = {
	&USteamCoreWebAsyncActionAddPromoItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionAddPromoItem::StaticRegisterNativesUSteamCoreWebAsyncActionAddPromoItem()
{
	UClass* Class = USteamCoreWebAsyncActionAddPromoItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem.OuterSingleton;
}
USteamCoreWebAsyncActionAddPromoItem::USteamCoreWebAsyncActionAddPromoItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionAddPromoItem);
USteamCoreWebAsyncActionAddPromoItem::~USteamCoreWebAsyncActionAddPromoItem() {}
// ********** End Class USteamCoreWebAsyncActionAddPromoItem ***************************************

// ********** Begin Class USteamCoreWebAsyncActionConsumeItem Function ConsumeItemAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics
{
	struct SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString ItemID;
		FString Quantity;
		FString SteamId;
		FString RequestId;
		USteamCoreWebAsyncActionConsumeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Marks an item as wholly or partially consumed. This action cannot be reversed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\n\x09* @param\x09ItemID\x09\x09\x09\x09Item ID to be consumed\n\x09* @param\x09Quantity\x09\x09\x09""Amount of the given item stack to be consumed\n\x09* @param\x09SteamId\n\x09* @param\x09RequestId (int64)\n\x09*/" },
		{ "DisplayName", "Consume Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId\n@param        ItemID                          Item ID to be consumed\n@param        Quantity                        Amount of the given item stack to be consumed\n@param        SteamId\n@param        RequestId (int64)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeItemAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeItemAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeItemAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers) < 2048);
// ********** End Function ConsumeItemAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem, nullptr, "ConsumeItemAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionConsumeItem::execConsumeItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Quantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionConsumeItem**)Z_Param__Result=USteamCoreWebAsyncActionConsumeItem::ConsumeItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemID,Z_Param_Quantity,Z_Param_SteamId,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionConsumeItem Function ConsumeItemAsync **************

// ********** Begin Class USteamCoreWebAsyncActionConsumeItem **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem;
UClass* USteamCoreWebAsyncActionConsumeItem::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionConsumeItem;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionConsumeItem"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionConsumeItem,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister()
{
	return USteamCoreWebAsyncActionConsumeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionConsumeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionConsumeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionConsumeItem constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionConsumeItem constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConsumeItemAsync"), .Pointer = &USteamCoreWebAsyncActionConsumeItem::execConsumeItemAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync, "ConsumeItemAsync" }, // 3312070127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionConsumeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::ClassParams = {
	&USteamCoreWebAsyncActionConsumeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionConsumeItem::StaticRegisterNativesUSteamCoreWebAsyncActionConsumeItem()
{
	UClass* Class = USteamCoreWebAsyncActionConsumeItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem.OuterSingleton;
}
USteamCoreWebAsyncActionConsumeItem::USteamCoreWebAsyncActionConsumeItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionConsumeItem);
USteamCoreWebAsyncActionConsumeItem::~USteamCoreWebAsyncActionConsumeItem() {}
// ********** End Class USteamCoreWebAsyncActionConsumeItem ****************************************

// ********** Begin Class USteamCoreWebAsyncActionExchangeItem Function ExchangeItemAsync **********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics
{
	struct SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int64> MaterialsItemId;
		TArray<int32> MaterialsQuantity;
		int64 OutputItemdefId;
		USteamCoreWebAsyncActionExchangeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\x09*\n\x09* The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\x09*\n\x09* See the Inventory Service Schema documentation for more detail on crafting recipes.\n\x09* The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\x09*\n\x09* If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player that owns the items.\n\x09* @param\x09MaterialsItemId\x09\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09* @param\x09MaterialsQuantity\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09* @param\x09OutputItemdefId\x09\x09The ItemDef of the item to be created.\n\x09*/" },
		{ "DisplayName", "Exchange Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The ID of the application associated with the item.\n@param        SteamId                         SteamID of the player that owns the items.\n@param        MaterialsItemId         The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n@param        MaterialsQuantity       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n@param        OutputItemdefId         The ItemDef of the item to be created." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExchangeItemAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaterialsItemId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialsQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutputItemdefId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExchangeItemAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExchangeItemAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId_Inner = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, MaterialsItemId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity_Inner = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, MaterialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_OutputItemdefId = { "OutputItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, OutputItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_OutputItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers) < 2048);
// ********** End Function ExchangeItemAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem, nullptr, "ExchangeItemAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionExchangeItem::execExchangeItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int64,Z_Param_MaterialsItemId);
	P_GET_TARRAY(int32,Z_Param_MaterialsQuantity);
	P_GET_PROPERTY(FInt64Property,Z_Param_OutputItemdefId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionExchangeItem**)Z_Param__Result=USteamCoreWebAsyncActionExchangeItem::ExchangeItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_MaterialsItemId,Z_Param_MaterialsQuantity,Z_Param_OutputItemdefId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionExchangeItem Function ExchangeItemAsync ************

// ********** Begin Class USteamCoreWebAsyncActionExchangeItem *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem;
UClass* USteamCoreWebAsyncActionExchangeItem::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionExchangeItem;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionExchangeItem"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionExchangeItem,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister()
{
	return USteamCoreWebAsyncActionExchangeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionExchangeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionExchangeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionExchangeItem constinit property declarations *****
// ********** End Class USteamCoreWebAsyncActionExchangeItem constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExchangeItemAsync"), .Pointer = &USteamCoreWebAsyncActionExchangeItem::execExchangeItemAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync, "ExchangeItemAsync" }, // 2356116932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionExchangeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::ClassParams = {
	&USteamCoreWebAsyncActionExchangeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionExchangeItem::StaticRegisterNativesUSteamCoreWebAsyncActionExchangeItem()
{
	UClass* Class = USteamCoreWebAsyncActionExchangeItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem.OuterSingleton;
}
USteamCoreWebAsyncActionExchangeItem::USteamCoreWebAsyncActionExchangeItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionExchangeItem);
USteamCoreWebAsyncActionExchangeItem::~USteamCoreWebAsyncActionExchangeItem() {}
// ********** End Class USteamCoreWebAsyncActionExchangeItem ***************************************

// ********** Begin Class USteamCoreWebAsyncActionGetInventory Function GetInventoryAsync **********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics
{
	struct SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		USteamCoreWebAsyncActionGetInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09""64-bit Steam ID of the user whos inventory you are requesting.\n\x09*/" },
		{ "DisplayName", "Get Inventory" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId         64-bit Steam ID of the user whos inventory you are requesting." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInventoryAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInventoryAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInventoryAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers) < 2048);
// ********** End Function GetInventoryAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory, nullptr, "GetInventoryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetInventory::execGetInventoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetInventory**)Z_Param__Result=USteamCoreWebAsyncActionGetInventory::GetInventoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetInventory Function GetInventoryAsync ************

// ********** Begin Class USteamCoreWebAsyncActionGetInventory *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory;
UClass* USteamCoreWebAsyncActionGetInventory::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetInventory;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetInventory"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetInventory,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister()
{
	return USteamCoreWebAsyncActionGetInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetInventory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetInventory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetInventory constinit property declarations *****
// ********** End Class USteamCoreWebAsyncActionGetInventory constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInventoryAsync"), .Pointer = &USteamCoreWebAsyncActionGetInventory::execGetInventoryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync, "GetInventoryAsync" }, // 2977288869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetInventory::StaticRegisterNativesUSteamCoreWebAsyncActionGetInventory()
{
	UClass* Class = USteamCoreWebAsyncActionGetInventory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory.OuterSingleton;
}
USteamCoreWebAsyncActionGetInventory::USteamCoreWebAsyncActionGetInventory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetInventory);
USteamCoreWebAsyncActionGetInventory::~USteamCoreWebAsyncActionGetInventory() {}
// ********** End Class USteamCoreWebAsyncActionGetInventory ***************************************

// ********** Begin Class USteamCoreWebAsyncActionGetItemDefs Function GetItemDefsAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString ModifiedSince;
		TArray<int32> ItemdefIDs;
		TArray<int32> WorkshopIDs;
		int32 CacheMaxAgeSeconds;
		USteamCoreWebAsyncActionGetItemDefs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ItemdefIDs, WorkshopIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09ModifiedSince\x09\x09\x09Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n\x09* @param\x09ItemdefIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by itemdefid\n\x09* @param\x09WorkshopIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by workshopid\n\x09* @param\x09""CacheMaxAgeSeconds\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09*/" },
		{ "DisplayName", "Get Item Defs" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        AppId                                   The ID of the application associated with the item.\n@param        ModifiedSince                   Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n@param        ItemdefIDs                              Use to retrieve just specific itemdefs by itemdefid\n@param        WorkshopIDs                             Use to retrieve just specific itemdefs by workshopid\n@param        CacheMaxAgeSeconds              Allow stale data to be returned for the specified number of seconds." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefsAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModifiedSince;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkshopIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefsAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefsAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ModifiedSince = { "ModifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ModifiedSince), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs_Inner = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, WorkshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ModifiedSince,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_CacheMaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefsAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs, nullptr, "GetItemDefsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetItemDefs::execGetItemDefsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModifiedSince);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_TARRAY(int32,Z_Param_WorkshopIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_CacheMaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetItemDefs**)Z_Param__Result=USteamCoreWebAsyncActionGetItemDefs::GetItemDefsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ModifiedSince,Z_Param_ItemdefIDs,Z_Param_WorkshopIDs,Z_Param_CacheMaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetItemDefs Function GetItemDefsAsync **************

// ********** Begin Class USteamCoreWebAsyncActionGetItemDefs **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs;
UClass* USteamCoreWebAsyncActionGetItemDefs::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetItemDefs;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetItemDefs"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetItemDefs,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister()
{
	return USteamCoreWebAsyncActionGetItemDefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetItemDefs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetItemDefs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetItemDefs constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionGetItemDefs constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetItemDefsAsync"), .Pointer = &USteamCoreWebAsyncActionGetItemDefs::execGetItemDefsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync, "GetItemDefsAsync" }, // 1965307151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetItemDefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetItemDefs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetItemDefs::StaticRegisterNativesUSteamCoreWebAsyncActionGetItemDefs()
{
	UClass* Class = USteamCoreWebAsyncActionGetItemDefs::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs.OuterSingleton;
}
USteamCoreWebAsyncActionGetItemDefs::USteamCoreWebAsyncActionGetItemDefs() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetItemDefs);
USteamCoreWebAsyncActionGetItemDefs::~USteamCoreWebAsyncActionGetItemDefs() {}
// ********** End Class USteamCoreWebAsyncActionGetItemDefs ****************************************

// ********** Begin Class USteamCoreWebAsyncActionGetPriceSheet Function GetPriceSheetAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 Currency;
		USteamCoreWebAsyncActionGetPriceSheet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the Inventory Service price sheet\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "DisplayName", "Get Price Sheet" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the Inventory Service price sheet\n\n@param        Key                     Steamworks Web API publisher authentication Key." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPriceSheetAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPriceSheetAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPriceSheetAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPriceSheetAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet, nullptr, "GetPriceSheetAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPriceSheet::execGetPriceSheetAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetPriceSheet**)Z_Param__Result=USteamCoreWebAsyncActionGetPriceSheet::GetPriceSheetAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetPriceSheet Function GetPriceSheetAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetPriceSheet ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet;
UClass* USteamCoreWebAsyncActionGetPriceSheet::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPriceSheet;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPriceSheet"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPriceSheet,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister()
{
	return USteamCoreWebAsyncActionGetPriceSheet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPriceSheet\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPriceSheet\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPriceSheet constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetPriceSheet constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPriceSheetAsync"), .Pointer = &USteamCoreWebAsyncActionGetPriceSheet::execGetPriceSheetAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync, "GetPriceSheetAsync" }, // 3218044295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPriceSheet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetPriceSheet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPriceSheet::StaticRegisterNativesUSteamCoreWebAsyncActionGetPriceSheet()
{
	UClass* Class = USteamCoreWebAsyncActionGetPriceSheet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet.OuterSingleton;
}
USteamCoreWebAsyncActionGetPriceSheet::USteamCoreWebAsyncActionGetPriceSheet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPriceSheet);
USteamCoreWebAsyncActionGetPriceSheet::~USteamCoreWebAsyncActionGetPriceSheet() {}
// ********** End Class USteamCoreWebAsyncActionGetPriceSheet **************************************

// ********** Begin Class USteamCoreWebAsyncActionConsolidate Function ConsolidateAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics
{
	struct SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
		USteamCoreWebAsyncActionConsolidate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Consolidate items of the given type within an user's inventory.\n\x09*\n\x09* Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\n\x09* The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\n\x09* @param\x09ItemdefIDs\n\x09* @param\x09""bForce\n\x09*/" },
		{ "DisplayName", "Consolidate" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Consolidate items of the given type within an user's inventory.\n\nWhenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\nThe Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId\n@param        ItemdefIDs\n@param        bForce" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsolidateAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsolidateAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsolidateAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers) < 2048);
// ********** End Function ConsolidateAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, nullptr, "ConsolidateAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionConsolidate::execConsolidateAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionConsolidate**)Z_Param__Result=USteamCoreWebAsyncActionConsolidate::ConsolidateAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionConsolidate Function ConsolidateAsync **************

// ********** Begin Class USteamCoreWebAsyncActionConsolidate **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate;
UClass* USteamCoreWebAsyncActionConsolidate::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionConsolidate;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionConsolidate"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionConsolidate,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister()
{
	return USteamCoreWebAsyncActionConsolidate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionConsolidate\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionConsolidate\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionConsolidate constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionConsolidate constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConsolidateAsync"), .Pointer = &USteamCoreWebAsyncActionConsolidate::execConsolidateAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync, "ConsolidateAsync" }, // 3924651550
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionConsolidate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams = {
	&USteamCoreWebAsyncActionConsolidate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionConsolidate::StaticRegisterNativesUSteamCoreWebAsyncActionConsolidate()
{
	UClass* Class = USteamCoreWebAsyncActionConsolidate::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate.OuterSingleton;
}
USteamCoreWebAsyncActionConsolidate::USteamCoreWebAsyncActionConsolidate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionConsolidate);
USteamCoreWebAsyncActionConsolidate::~USteamCoreWebAsyncActionConsolidate() {}
// ********** End Class USteamCoreWebAsyncActionConsolidate ****************************************

// ********** Begin Class USteamCoreWebAsyncActionGetQuantity Function GetQuantityAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics
{
	struct SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
		USteamCoreWebAsyncActionGetQuantity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\n\x09* @param\x09ItemdefIDs\x09List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09""bForce\n\x09*/" },
		{ "DisplayName", "Get Quantity" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId\n@param        ItemdefIDs      List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        bForce" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuantityAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuantityAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuantityAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers) < 2048);
// ********** End Function GetQuantityAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity, nullptr, "GetQuantityAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetQuantity::execGetQuantityAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetQuantity**)Z_Param__Result=USteamCoreWebAsyncActionGetQuantity::GetQuantityAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetQuantity Function GetQuantityAsync **************

// ********** Begin Class USteamCoreWebAsyncActionGetQuantity **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity;
UClass* USteamCoreWebAsyncActionGetQuantity::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetQuantity;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetQuantity"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetQuantity,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister()
{
	return USteamCoreWebAsyncActionGetQuantity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetQuantity\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetQuantity\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetQuantity constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionGetQuantity constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetQuantityAsync"), .Pointer = &USteamCoreWebAsyncActionGetQuantity::execGetQuantityAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync, "GetQuantityAsync" }, // 2345304672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetQuantity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetQuantity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetQuantity::StaticRegisterNativesUSteamCoreWebAsyncActionGetQuantity()
{
	UClass* Class = USteamCoreWebAsyncActionGetQuantity::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity.OuterSingleton;
}
USteamCoreWebAsyncActionGetQuantity::USteamCoreWebAsyncActionGetQuantity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetQuantity);
USteamCoreWebAsyncActionGetQuantity::~USteamCoreWebAsyncActionGetQuantity() {}
// ********** End Class USteamCoreWebAsyncActionGetQuantity ****************************************

// ********** Begin Class USteamCoreWebAsyncActionModifyItems Function ModifyItemsAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics
{
	struct SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FModifyItemsItem Updates;
		USteamCoreWebAsyncActionModifyItems* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09* @param\x09Updates\x09\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\x09*/" },
		{ "DisplayName", "Modify Items" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId         The steamid of the user who owns the items. Must be specified in the input_json parameter.\n@param        Updates         The list of items and properties being modified. Must be specified in the input_json parameter." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyItemsAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Updates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyItemsAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyItemsAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Updates = { "Updates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, Updates), Z_Construct_UScriptStruct_FModifyItemsItem, METADATA_PARAMS(0, nullptr) }; // 3570067542
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Updates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers) < 2048);
// ********** End Function ModifyItemsAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems, nullptr, "ModifyItemsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionModifyItems::execModifyItemsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_STRUCT(FModifyItemsItem,Z_Param_Updates);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionModifyItems**)Z_Param__Result=USteamCoreWebAsyncActionModifyItems::ModifyItemsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Updates);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionModifyItems Function ModifyItemsAsync **************

// ********** Begin Class USteamCoreWebAsyncActionModifyItems **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems;
UClass* USteamCoreWebAsyncActionModifyItems::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionModifyItems;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionModifyItems"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionModifyItems,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister()
{
	return USteamCoreWebAsyncActionModifyItems::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionModifyItems\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionModifyItems\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionModifyItems constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionModifyItems constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ModifyItemsAsync"), .Pointer = &USteamCoreWebAsyncActionModifyItems::execModifyItemsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync, "ModifyItemsAsync" }, // 832439042
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionModifyItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::ClassParams = {
	&USteamCoreWebAsyncActionModifyItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionModifyItems::StaticRegisterNativesUSteamCoreWebAsyncActionModifyItems()
{
	UClass* Class = USteamCoreWebAsyncActionModifyItems::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems.OuterSingleton;
}
USteamCoreWebAsyncActionModifyItems::USteamCoreWebAsyncActionModifyItems() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionModifyItems);
USteamCoreWebAsyncActionModifyItems::~USteamCoreWebAsyncActionModifyItems() {}
// ********** End Class USteamCoreWebAsyncActionModifyItems ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAddItem, USteamCoreWebAsyncActionAddItem::StaticClass, TEXT("USteamCoreWebAsyncActionAddItem"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAddItem), 1023196125U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, USteamCoreWebAsyncActionAddPromoItem::StaticClass, TEXT("USteamCoreWebAsyncActionAddPromoItem"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAddPromoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAddPromoItem), 362824464U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem, USteamCoreWebAsyncActionConsumeItem::StaticClass, TEXT("USteamCoreWebAsyncActionConsumeItem"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsumeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionConsumeItem), 3536105019U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem, USteamCoreWebAsyncActionExchangeItem::StaticClass, TEXT("USteamCoreWebAsyncActionExchangeItem"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionExchangeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionExchangeItem), 1942363128U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory, USteamCoreWebAsyncActionGetInventory::StaticClass, TEXT("USteamCoreWebAsyncActionGetInventory"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetInventory), 3857621681U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs, USteamCoreWebAsyncActionGetItemDefs::StaticClass, TEXT("USteamCoreWebAsyncActionGetItemDefs"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetItemDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetItemDefs), 4117167767U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet, USteamCoreWebAsyncActionGetPriceSheet::StaticClass, TEXT("USteamCoreWebAsyncActionGetPriceSheet"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPriceSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPriceSheet), 2515161656U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, USteamCoreWebAsyncActionConsolidate::StaticClass, TEXT("USteamCoreWebAsyncActionConsolidate"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionConsolidate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionConsolidate), 2904451960U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity, USteamCoreWebAsyncActionGetQuantity::StaticClass, TEXT("USteamCoreWebAsyncActionGetQuantity"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetQuantity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetQuantity), 1065899578U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems, USteamCoreWebAsyncActionModifyItems::StaticClass, TEXT("USteamCoreWebAsyncActionModifyItems"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionModifyItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionModifyItems), 3034096035U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_SteamCoreWeb_3949400572{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
