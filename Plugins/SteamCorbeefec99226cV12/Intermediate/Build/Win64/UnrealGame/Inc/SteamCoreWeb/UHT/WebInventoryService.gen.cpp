// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryService/WebInventoryService.h"
#include "Engine/GameInstance.h"
#include "InventoryService/WebInventoryServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebInventoryService() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebInventoryService Function AddItem ************************************
struct Z_Construct_UFunction_UWebInventoryService_AddItem_Statics
{
	struct WebInventoryService_eventAddItem_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		TArray<int32> ItemdefId;
		FString ItemPropsJson;
		TArray<int32> ItemQuantity;
		FString SteamId;
		bool bNotify;
		FString RequestId;
		bool bTradeRestriction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\x09*\n\x09* Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\n\x09* This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\x09*\n\x09* Player notification of a new item, if any, is best handled by the game client. \n\x09* Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\x09*\n\x09* The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\n\x09* If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\x09*\n\x09* If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09ItemdefId (int64)\x09List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09ItemPropsJson\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n\x09* @param\x09RequestId (int64)\x09Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n\x09* @param\x09""bTradeRestriction\x09Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\nItems of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\nThis call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\nPlayer notification of a new item, if any, is best handled by the game client.\nCalls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\nThe optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\nIf the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\nIf the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The ID of the application associated with the item.\n@param        ItemdefId (int64)       List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        ItemPropsJson\n@param        SteamId                         SteamID of the player to receive the items.\n@param        bNotify                         Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n@param        RequestId (int64)       Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n@param        bTradeRestriction       Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId_Inner = { "ItemdefId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, ItemdefId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemQuantity_Inner = { "ItemQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, ItemQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((WebInventoryService_eventAddItem_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
{
	((WebInventoryService_eventAddItem_Parms*)Obj)->bTradeRestriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddItem", 	Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::WebInventoryService_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::WebInventoryService_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execAddItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
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
	P_THIS->AddItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_ItemQuantity,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId,Z_Param_bTradeRestriction);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function AddItem **************************************

// ********** Begin Class UWebInventoryService Function AddPromoItem *******************************
struct Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics
{
	struct WebInventoryService_eventAddPromoItem_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 ItemdefId;
		FString ItemPropsJson;
		FString SteamId;
		bool bNotify;
		FString RequestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Adds a promo item to a user's inventory\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\n\x09* @param\x09ItemdefId (int64)\x09\n\x09* @param\x09ItemPropsJson\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Should notify the user that the item was added to their Steam Inventory.\n\x09* @param\x09RequestId (int64)\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Adds a promo item to a user's inventory\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId\n@param        ItemdefId (int64)\n@param        ItemPropsJson\n@param        SteamId                         SteamID of the player to receive the items.\n@param        bNotify                         Should notify the user that the item was added to their Steam Inventory.\n@param        RequestId (int64)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItem constinit property declarations **************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItem Property Definitions *************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, ItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((WebInventoryService_eventAddPromoItem_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebInventoryService_eventAddPromoItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddPromoItem", 	Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::WebInventoryService_eventAddPromoItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::WebInventoryService_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execAddPromoItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemdefId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bNotify);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPromoItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function AddPromoItem *********************************

// ********** Begin Class UWebInventoryService Function Consolidate ********************************
struct Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics
{
	struct WebInventoryService_eventConsolidate_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Consolidate items of the given type within an user's inventory.\n\x09*\n\x09* Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. \n\x09* The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\n\x09* @param\x09ItemdefIDs\n\x09* @param\x09""bForce\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Consolidate items of the given type within an user's inventory.\n\nWhenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\nThe Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId\n@param        ItemdefIDs\n@param        bForce" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Consolidate constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Consolidate constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Consolidate Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((WebInventoryService_eventConsolidate_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebInventoryService_eventConsolidate_Parms), &Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers) < 2048);
// ********** End Function Consolidate Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "Consolidate", 	Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::WebInventoryService_eventConsolidate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::WebInventoryService_eventConsolidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_Consolidate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execConsolidate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Consolidate(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function Consolidate **********************************

// ********** Begin Class UWebInventoryService Function ConsumeItem ********************************
struct Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics
{
	struct WebInventoryService_eventConsumeItem_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString ItemId;
		FString Quantity;
		FString SteamId;
		FString RequestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Marks an item as wholly or partially consumed. This action cannot be reversed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\n\x09* @param\x09ItemId\x09\x09\x09\x09Item ID to be consumed\n\x09* @param\x09Quantity\x09\x09\x09""Amount of the given item stack to be consumed\n\x09* @param\x09SteamId\n\x09* @param\x09RequestId (int64)\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId\n@param        ItemId                          Item ID to be consumed\n@param        Quantity                        Amount of the given item stack to be consumed\n@param        SteamId\n@param        RequestId (int64)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeItem constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeItem constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeItem Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers) < 2048);
// ********** End Function ConsumeItem Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ConsumeItem", 	Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::WebInventoryService_eventConsumeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::WebInventoryService_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execConsumeItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Quantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_ItemId,Z_Param_Quantity,Z_Param_SteamId,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function ConsumeItem **********************************

// ********** Begin Class UWebInventoryService Function ExchangeItem *******************************
struct Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics
{
	struct WebInventoryService_eventExchangeItem_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int64> MaterialsItemID;
		TArray<int32> MaterialsQuantity;
		int64 OutputItemdefId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\x09*\n\x09* The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\x09*\n\x09* See the Inventory Service Schema documentation for more detail on crafting recipes.\n\x09* The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\x09*\n\x09* If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of the player that owns the items.\n\x09* @param\x09MaterialsItemID\x09\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09* @param\x09MaterialsQuantity\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09* @param\x09OutputItemdefId\x09\x09The ItemDef of the item to be created.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The ID of the application associated with the item.\n@param        SteamId                         SteamID of the player that owns the items.\n@param        MaterialsItemID         The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n@param        MaterialsQuantity       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n@param        OutputItemdefId         The ItemDef of the item to be created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExchangeItem constinit property declarations **************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaterialsItemID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialsQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutputItemdefId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExchangeItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExchangeItem Property Definitions *************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID_Inner = { "MaterialsItemID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID = { "MaterialsItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, MaterialsItemID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, MaterialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId = { "OutputItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, OutputItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers) < 2048);
// ********** End Function ExchangeItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ExchangeItem", 	Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::WebInventoryService_eventExchangeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::WebInventoryService_eventExchangeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_ExchangeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execExchangeItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int64,Z_Param_MaterialsItemID);
	P_GET_TARRAY(int32,Z_Param_MaterialsQuantity);
	P_GET_PROPERTY(FInt64Property,Z_Param_OutputItemdefId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExchangeItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_MaterialsItemID,Z_Param_MaterialsQuantity,Z_Param_OutputItemdefId);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function ExchangeItem *********************************

// ********** Begin Class UWebInventoryService Function GetInventory *******************************
struct Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics
{
	struct WebInventoryService_eventGetInventory_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09""64-bit Steam ID of the user whos inventory you are requesting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId         64-bit Steam ID of the user whos inventory you are requesting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInventory constinit property declarations **************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInventory constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInventory Property Definitions *************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers) < 2048);
// ********** End Function GetInventory Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetInventory", 	Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::WebInventoryService_eventGetInventory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::WebInventoryService_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execGetInventory)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function GetInventory *********************************

// ********** Begin Class UWebInventoryService Function GetItemDefs ********************************
struct Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics
{
	struct WebInventoryService_eventGetItemDefs_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString ModifiedSince;
		TArray<int32> ItemdefIDs;
		TArray<int32> WorkshopIDs;
		int32 CacheMaxAgeSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "itemdefIDs, workshopIDs" },
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09ModifiedSince\x09\x09\x09Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n\x09* @param\x09ItemdefIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by itemdefid\n\x09* @param\x09WorkshopIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by workshopid\n\x09* @param\x09""CacheMaxAgeSeconds\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        AppId                                   The ID of the application associated with the item.\n@param        ModifiedSince                   Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n@param        ItemdefIDs                              Use to retrieve just specific itemdefs by itemdefid\n@param        WorkshopIDs                             Use to retrieve just specific itemdefs by workshopid\n@param        CacheMaxAgeSeconds              Allow stale data to be returned for the specified number of seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefs constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModifiedSince;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkshopIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefs constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefs Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince = { "ModifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, ModifiedSince), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs_Inner = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, WorkshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefs Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetItemDefs", 	Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::WebInventoryService_eventGetItemDefs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::WebInventoryService_eventGetItemDefs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_GetItemDefs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execGetItemDefs)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModifiedSince);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_TARRAY(int32,Z_Param_WorkshopIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_CacheMaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemDefs(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_ModifiedSince,Z_Param_ItemdefIDs,Z_Param_WorkshopIDs,Z_Param_CacheMaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function GetItemDefs **********************************

// ********** Begin Class UWebInventoryService Function GetPriceSheet ******************************
struct Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics
{
	struct WebInventoryService_eventGetPriceSheet_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 Currency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the Inventory Service price sheet\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the Inventory Service price sheet\n\n@param        Key                     Steamworks Web API publisher authentication Key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPriceSheet constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPriceSheet constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPriceSheet Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers) < 2048);
// ********** End Function GetPriceSheet Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetPriceSheet", 	Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::WebInventoryService_eventGetPriceSheet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::WebInventoryService_eventGetPriceSheet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_GetPriceSheet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execGetPriceSheet)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPriceSheet(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function GetPriceSheet ********************************

// ********** Begin Class UWebInventoryService Function GetQuantity ********************************
struct Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics
{
	struct WebInventoryService_eventGetQuantity_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\n\x09* @param\x09ItemdefIDs\x09List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09""bForce\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId\n@param        ItemdefIDs      List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        bForce" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuantity constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuantity constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuantity Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((WebInventoryService_eventGetQuantity_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebInventoryService_eventGetQuantity_Parms), &Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers) < 2048);
// ********** End Function GetQuantity Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetQuantity", 	Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::WebInventoryService_eventGetQuantity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::WebInventoryService_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execGetQuantity)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetQuantity(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function GetQuantity **********************************

// ********** Begin Class UWebInventoryService Function ModifyItems ********************************
struct Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics
{
	struct WebInventoryService_eventModifyItems_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		FModifyItemsItem Updates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09* @param\x09SteamId\x09\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09* @param\x09Updates\x09\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The ID of the application associated with the item.\n@param        SteamId         The steamid of the user who owns the items. Must be specified in the input_json parameter.\n@param        Updates         The list of items and properties being modified. Must be specified in the input_json parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyItems constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Updates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyItems Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates = { "Updates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Updates), Z_Construct_UScriptStruct_FModifyItemsItem, METADATA_PARAMS(0, nullptr) }; // 3570067542
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers) < 2048);
// ********** End Function ModifyItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ModifyItems", 	Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::WebInventoryService_eventModifyItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::WebInventoryService_eventModifyItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebInventoryService_ModifyItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebInventoryService::execModifyItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_STRUCT(FModifyItemsItem,Z_Param_Updates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyItems(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Updates);
	P_NATIVE_END;
}
// ********** End Class UWebInventoryService Function ModifyItems **********************************

// ********** Begin Class UWebInventoryService *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebInventoryService;
UClass* UWebInventoryService::GetPrivateStaticClass()
{
	using TClass = UWebInventoryService;
	if (!Z_Registration_Info_UClass_UWebInventoryService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebInventoryService"),
			Z_Registration_Info_UClass_UWebInventoryService.InnerSingleton,
			StaticRegisterNativesUWebInventoryService,
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
	return Z_Registration_Info_UClass_UWebInventoryService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebInventoryService_NoRegister()
{
	return UWebInventoryService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebInventoryService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryService/WebInventoryService.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebInventoryService constinit property declarations *********************
// ********** End Class UWebInventoryService constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UWebInventoryService::execAddItem },
		{ .NameUTF8 = UTF8TEXT("AddPromoItem"), .Pointer = &UWebInventoryService::execAddPromoItem },
		{ .NameUTF8 = UTF8TEXT("Consolidate"), .Pointer = &UWebInventoryService::execConsolidate },
		{ .NameUTF8 = UTF8TEXT("ConsumeItem"), .Pointer = &UWebInventoryService::execConsumeItem },
		{ .NameUTF8 = UTF8TEXT("ExchangeItem"), .Pointer = &UWebInventoryService::execExchangeItem },
		{ .NameUTF8 = UTF8TEXT("GetInventory"), .Pointer = &UWebInventoryService::execGetInventory },
		{ .NameUTF8 = UTF8TEXT("GetItemDefs"), .Pointer = &UWebInventoryService::execGetItemDefs },
		{ .NameUTF8 = UTF8TEXT("GetPriceSheet"), .Pointer = &UWebInventoryService::execGetPriceSheet },
		{ .NameUTF8 = UTF8TEXT("GetQuantity"), .Pointer = &UWebInventoryService::execGetQuantity },
		{ .NameUTF8 = UTF8TEXT("ModifyItems"), .Pointer = &UWebInventoryService::execModifyItems },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInventoryService_AddItem, "AddItem" }, // 3490682689
		{ &Z_Construct_UFunction_UWebInventoryService_AddPromoItem, "AddPromoItem" }, // 2596468311
		{ &Z_Construct_UFunction_UWebInventoryService_Consolidate, "Consolidate" }, // 2872643058
		{ &Z_Construct_UFunction_UWebInventoryService_ConsumeItem, "ConsumeItem" }, // 1442179182
		{ &Z_Construct_UFunction_UWebInventoryService_ExchangeItem, "ExchangeItem" }, // 2105957632
		{ &Z_Construct_UFunction_UWebInventoryService_GetInventory, "GetInventory" }, // 2407308792
		{ &Z_Construct_UFunction_UWebInventoryService_GetItemDefs, "GetItemDefs" }, // 2833575692
		{ &Z_Construct_UFunction_UWebInventoryService_GetPriceSheet, "GetPriceSheet" }, // 3961739872
		{ &Z_Construct_UFunction_UWebInventoryService_GetQuantity, "GetQuantity" }, // 2272155033
		{ &Z_Construct_UFunction_UWebInventoryService_ModifyItems, "ModifyItems" }, // 629586133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInventoryService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebInventoryService_Statics
UObject* (*const Z_Construct_UClass_UWebInventoryService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebInventoryService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInventoryService_Statics::ClassParams = {
	&UWebInventoryService::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams)
};
void UWebInventoryService::StaticRegisterNativesUWebInventoryService()
{
	UClass* Class = UWebInventoryService::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebInventoryService_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebInventoryService()
{
	if (!Z_Registration_Info_UClass_UWebInventoryService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInventoryService.OuterSingleton, Z_Construct_UClass_UWebInventoryService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebInventoryService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebInventoryService);
UWebInventoryService::~UWebInventoryService() {}
// ********** End Class UWebInventoryService *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebInventoryService, UWebInventoryService::StaticClass, TEXT("UWebInventoryService"), &Z_Registration_Info_UClass_UWebInventoryService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInventoryService), 3450151231U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h__Script_SteamCoreWeb_3380965120{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryService_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
