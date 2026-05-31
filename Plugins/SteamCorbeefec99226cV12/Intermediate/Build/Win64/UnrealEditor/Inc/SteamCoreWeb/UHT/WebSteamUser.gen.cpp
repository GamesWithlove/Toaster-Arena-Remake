// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/WebSteamUser.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamUser() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser_NoRegister();
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebSteamUser Function CheckAppOwnership *********************************
struct Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics
{
	struct WebSteamUser_eventCheckAppOwnership_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the specified user owns the app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppID to check for ownership\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified user owns the app.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppID to check for ownership" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckAppOwnership constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckAppOwnership constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckAppOwnership Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers) < 2048);
// ********** End Function CheckAppOwnership Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "CheckAppOwnership", 	Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::WebSteamUser_eventCheckAppOwnership_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::WebSteamUser_eventCheckAppOwnership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execCheckAppOwnership)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function CheckAppOwnership ***********************************

// ********** Begin Class UWebSteamUser Function GetAppPriceInfo ***********************************
struct Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics
{
	struct WebSteamUser_eventGetAppPriceInfo_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		TArray<int32> AppIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get App Price Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppIds\x09\x09Max: 100\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get App Price Info\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppIds          Max: 100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppPriceInfo constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppPriceInfo constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppPriceInfo Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers) < 2048);
// ********** End Function GetAppPriceInfo Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetAppPriceInfo", 	Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::WebSteamUser_eventGetAppPriceInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::WebSteamUser_eventGetAppPriceInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetAppPriceInfo)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_AppIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppPriceInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppIds);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetAppPriceInfo *************************************

// ********** Begin Class UWebSteamUser Function GetFriendList *************************************
struct Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics
{
	struct WebSteamUser_eventGetFriendList_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString Relationship;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Friend List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09Relationship\x09relationship type (ex: friend)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Friend List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user\n@param        Relationship    relationship type (ex: friend)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendList constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Relationship;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendList constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendList Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Relationship), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers) < 2048);
// ********** End Function GetFriendList Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetFriendList", 	Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::WebSteamUser_eventGetFriendList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::WebSteamUser_eventGetFriendList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetFriendList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetFriendList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Relationship);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFriendList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Relationship);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetFriendList ***************************************

// ********** Begin Class UWebSteamUser Function GetPlayerBans *************************************
struct Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics
{
	struct WebSteamUser_eventGetPlayerBans_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		TArray<FString> SteamIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Player Bans\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Bans\n\n@param        Key                             Steamworks Web API publisher authentication Key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerBans constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerBans constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerBans Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerBans Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerBans", 	Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::WebSteamUser_eventGetPlayerBans_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::WebSteamUser_eventGetPlayerBans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerBans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetPlayerBans)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerBans(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetPlayerBans ***************************************

// ********** Begin Class UWebSteamUser Function GetPlayerSummaries ********************************
struct Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics
{
	struct WebSteamUser_eventGetPlayerSummaries_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		TArray<FString> SteamIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Player Summaries\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamIds\x09\x09Max: 100\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Summaries\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamIds                Max: 100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerSummaries constinit property declarations ********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerSummaries constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerSummaries Property Definitions *******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerSummaries Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerSummaries", 	Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::WebSteamUser_eventGetPlayerSummaries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::WebSteamUser_eventGetPlayerSummaries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetPlayerSummaries)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerSummaries(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetPlayerSummaries **********************************

// ********** Begin Class UWebSteamUser Function GetPublisherAppOwnership **************************
struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics
{
	struct WebSteamUser_eventGetPublisherAppOwnership_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Publisher App Ownership\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Publisher App Ownership\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnership constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnership constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnership Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnership Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnership", 	Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::WebSteamUser_eventGetPublisherAppOwnership_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::WebSteamUser_eventGetPublisherAppOwnership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnership)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPublisherAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetPublisherAppOwnership ****************************

// ********** Begin Class UWebSteamUser Function GetPublisherAppOwnershipChanges *******************
struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics
{
	struct WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString PackageRowVersion;
		FString CDKeyRowVersion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number. \n\x09* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in. \n\x09""A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PackageRowVersion\x09\x09""64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n\x09* @param\x09""CDKeyRowVersion\x09\x09\x09""64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\nFrom the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n       A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        PackageRowVersion               64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n@param        CDKeyRowVersion                 64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnershipChanges constinit property declarations *******
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRowVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CDKeyRowVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnershipChanges constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnershipChanges Property Definitions ******************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_PackageRowVersion = { "PackageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, PackageRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_CDKeyRowVersion = { "CDKeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, CDKeyRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_PackageRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_CDKeyRowVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnershipChanges Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnershipChanges", 	Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnershipChanges)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageRowVersion);
	P_GET_PROPERTY(FStrProperty,Z_Param_CDKeyRowVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPublisherAppOwnershipChanges(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PackageRowVersion,Z_Param_CDKeyRowVersion);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetPublisherAppOwnershipChanges *********************

// ********** Begin Class UWebSteamUser Function GetUserGroupList **********************************
struct Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics
{
	struct WebSteamUser_eventGetUserGroupList_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get User Group List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserGroupList constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserGroupList constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserGroupList Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers) < 2048);
// ********** End Function GetUserGroupList Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetUserGroupList", 	Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::WebSteamUser_eventGetUserGroupList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::WebSteamUser_eventGetUserGroupList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GetUserGroupList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGetUserGroupList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserGroupList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GetUserGroupList ************************************

// ********** Begin Class UWebSteamUser Function GrantPackage **************************************
struct Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics
{
	struct WebSteamUser_eventGrantPackage_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 PackageId;
		FString Ipaddress;
		FString ThirdPartyKey;
		int32 ThirdPartyAppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* This call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09PackageId\x09\x09\x09PackageID to grant\n\x09* @param\x09Ipaddress\x09\x09\x09ip address of user in string format(xxx.xxx.xxx.xxx).\n\x09* @param\x09ThirdPartyKey\x09\x09Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n\x09* @param\x09ThirdPartyAppId\x09\x09Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get User Group List\n\nThis call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        PackageId                       PackageID to grant\n@param        Ipaddress                       ip address of user in string format(xxx.xxx.xxx.xxx).\n@param        ThirdPartyKey           Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n@param        ThirdPartyAppId         Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantPackage constinit property declarations **************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThirdPartyKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThirdPartyAppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantPackage constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantPackage Property Definitions *************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, PackageId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ThirdPartyKey = { "ThirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, ThirdPartyKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ThirdPartyAppId = { "ThirdPartyAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, ThirdPartyAppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_PackageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ThirdPartyKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ThirdPartyAppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers) < 2048);
// ********** End Function GrantPackage Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GrantPackage", 	Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::WebSteamUser_eventGrantPackage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::WebSteamUser_eventGrantPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_GrantPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execGrantPackage)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_PackageId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_ThirdPartyKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_ThirdPartyAppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantPackage(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_PackageId,Z_Param_Ipaddress,Z_Param_ThirdPartyKey,Z_Param_ThirdPartyAppId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function GrantPackage ****************************************

// ********** Begin Class UWebSteamUser Function ResolveVanityURL **********************************
struct Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics
{
	struct WebSteamUser_eventResolveVanityURL_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString VanityURL;
		EVanityUrlType URLType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Resolve Vanity URL\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09VanityURL\x09\x09The vanity URL to get a SteamID for\n\x09* @param\x09URLType\x09\x09\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve Vanity URL\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        VanityURL               The vanity URL to get a SteamID for\n@param        URLType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveVanityURL constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VanityURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_URLType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_URLType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveVanityURL constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveVanityURL Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_VanityURL = { "VanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, VanityURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_URLType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_URLType = { "URLType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, URLType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(0, nullptr) }; // 2110170753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_VanityURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_URLType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_URLType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers) < 2048);
// ********** End Function ResolveVanityURL Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "ResolveVanityURL", 	Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::WebSteamUser_eventResolveVanityURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::WebSteamUser_eventResolveVanityURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamUser::execResolveVanityURL)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_VanityURL);
	P_GET_ENUM(EVanityUrlType,Z_Param_URLType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResolveVanityURL(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_VanityURL,EVanityUrlType(Z_Param_URLType));
	P_NATIVE_END;
}
// ********** End Class UWebSteamUser Function ResolveVanityURL ************************************

// ********** Begin Class UWebSteamUser ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebSteamUser;
UClass* UWebSteamUser::GetPrivateStaticClass()
{
	using TClass = UWebSteamUser;
	if (!Z_Registration_Info_UClass_UWebSteamUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebSteamUser"),
			Z_Registration_Info_UClass_UWebSteamUser.InnerSingleton,
			StaticRegisterNativesUWebSteamUser,
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
	return Z_Registration_Info_UClass_UWebSteamUser.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebSteamUser_NoRegister()
{
	return UWebSteamUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebSteamUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUser/WebSteamUser.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebSteamUser constinit property declarations ****************************
// ********** End Class UWebSteamUser constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckAppOwnership"), .Pointer = &UWebSteamUser::execCheckAppOwnership },
		{ .NameUTF8 = UTF8TEXT("GetAppPriceInfo"), .Pointer = &UWebSteamUser::execGetAppPriceInfo },
		{ .NameUTF8 = UTF8TEXT("GetFriendList"), .Pointer = &UWebSteamUser::execGetFriendList },
		{ .NameUTF8 = UTF8TEXT("GetPlayerBans"), .Pointer = &UWebSteamUser::execGetPlayerBans },
		{ .NameUTF8 = UTF8TEXT("GetPlayerSummaries"), .Pointer = &UWebSteamUser::execGetPlayerSummaries },
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnership"), .Pointer = &UWebSteamUser::execGetPublisherAppOwnership },
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnershipChanges"), .Pointer = &UWebSteamUser::execGetPublisherAppOwnershipChanges },
		{ .NameUTF8 = UTF8TEXT("GetUserGroupList"), .Pointer = &UWebSteamUser::execGetUserGroupList },
		{ .NameUTF8 = UTF8TEXT("GrantPackage"), .Pointer = &UWebSteamUser::execGrantPackage },
		{ .NameUTF8 = UTF8TEXT("ResolveVanityURL"), .Pointer = &UWebSteamUser::execResolveVanityURL },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership, "CheckAppOwnership" }, // 1495230408
		{ &Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo, "GetAppPriceInfo" }, // 1482156858
		{ &Z_Construct_UFunction_UWebSteamUser_GetFriendList, "GetFriendList" }, // 2001588746
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerBans, "GetPlayerBans" }, // 4115020684
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries, "GetPlayerSummaries" }, // 1704252656
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership, "GetPublisherAppOwnership" }, // 1983780751
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges, "GetPublisherAppOwnershipChanges" }, // 4216460306
		{ &Z_Construct_UFunction_UWebSteamUser_GetUserGroupList, "GetUserGroupList" }, // 55663564
		{ &Z_Construct_UFunction_UWebSteamUser_GrantPackage, "GrantPackage" }, // 4178897905
		{ &Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL, "ResolveVanityURL" }, // 2147011488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebSteamUser_Statics
UObject* (*const Z_Construct_UClass_UWebSteamUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamUser_Statics::ClassParams = {
	&UWebSteamUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams)
};
void UWebSteamUser::StaticRegisterNativesUWebSteamUser()
{
	UClass* Class = UWebSteamUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebSteamUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebSteamUser()
{
	if (!Z_Registration_Info_UClass_UWebSteamUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamUser.OuterSingleton, Z_Construct_UClass_UWebSteamUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSteamUser.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebSteamUser);
UWebSteamUser::~UWebSteamUser() {}
// ********** End Class UWebSteamUser **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamUser, UWebSteamUser::StaticClass, TEXT("UWebSteamUser"), &Z_Registration_Info_UClass_UWebSteamUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamUser), 1923613244U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h__Script_SteamCoreWeb_1173680373{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
