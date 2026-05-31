// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Leaderboards/WebLeaderboards.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebLeaderboards() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebLeaderboards Function DeleteLeaderboard ******************************
struct Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics
{
	struct WebLeaderboards_eventDeleteLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Delete Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09""appid of game\n\x09* @param\x09Name\x09\x09Name of the leaderboard to delete\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete Leaderboard\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           appid of game\n@param        Name            Name of the leaderboard to delete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLeaderboard constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteLeaderboard constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteLeaderboard Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function DeleteLeaderboard Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "DeleteLeaderboard", 	Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::WebLeaderboards_eventDeleteLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::WebLeaderboards_eventDeleteLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execDeleteLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function DeleteLeaderboard ********************************

// ********** Begin Class UWebLeaderboards Function FindOrCreateLeaderboard ************************
struct Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics
{
	struct WebLeaderboards_eventFindOrCreateLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Name;
		FString SortMethod;
		FString DisplayType;
		bool bCreateIfNotFound;
		bool bOnlyTrustedWrites;
		bool bOnlyFriendsReads;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Find Or Create Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""appid of game\n\x09* @param\x09Name\x09\x09\x09\x09\x09Name of the leaderboard to delete\n\x09* @param\x09SortMethod\x09\x09\x09\x09sort method to use for this leaderboard (defaults to Ascending)\n\x09* @param\x09""DisplayType\x09\x09\x09\x09""display type for this leaderboard (defaults to Numeric)\n\x09* @param\x09""bCreateIfNotFound\x09\x09if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n\x09* @param\x09""bOnlyTrustedWrites\x09\x09if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n\x09* @param\x09""bOnlyFriendsReads\x09\x09if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.\n\x09*/" },
#endif
		{ "CPP_Default_bCreateIfNotFound", "false" },
		{ "CPP_Default_bOnlyFriendsReads", "false" },
		{ "CPP_Default_bOnlyTrustedWrites", "false" },
		{ "CPP_Default_DisplayType", "Numeric" },
		{ "CPP_Default_SortMethod", "Ascending" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Or Create Leaderboard\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        AppId                                   appid of game\n@param        Name                                    Name of the leaderboard to delete\n@param        SortMethod                              sort method to use for this leaderboard (defaults to Ascending)\n@param        DisplayType                             display type for this leaderboard (defaults to Numeric)\n@param        bCreateIfNotFound               if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n@param        bOnlyTrustedWrites              if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n@param        bOnlyFriendsReads               if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindOrCreateLeaderboard constinit property declarations ***************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayType;
	static void NewProp_bCreateIfNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNotFound;
	static void NewProp_bOnlyTrustedWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrustedWrites;
	static void NewProp_bOnlyFriendsReads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFriendsReads;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindOrCreateLeaderboard constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindOrCreateLeaderboard Property Definitions **************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, SortMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, DisplayType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
{
	((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bCreateIfNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
{
	((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyTrustedWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
{
	((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyFriendsReads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function FindOrCreateLeaderboard Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "FindOrCreateLeaderboard", 	Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::WebLeaderboards_eventFindOrCreateLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::WebLeaderboards_eventFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execFindOrCreateLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_SortMethod);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayType);
	P_GET_UBOOL(Z_Param_bCreateIfNotFound);
	P_GET_UBOOL(Z_Param_bOnlyTrustedWrites);
	P_GET_UBOOL(Z_Param_bOnlyFriendsReads);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindOrCreateLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function FindOrCreateLeaderboard **************************

// ********** Begin Class UWebLeaderboards Function GetLeaderboardEntries **************************
struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics
{
	struct WebLeaderboards_eventGetLeaderboardEntries_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 RangeStart;
		int32 RangeEnd;
		int32 LeaderboardId;
		int32 DataRequest;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Leaderboard Entries\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09RangeStart\x09\x09\x09range start or 0\n\x09* @param\x09RangeEnd\x09\x09\x09range end or max LB entries\n\x09* @param\x09LeaderboardId\x09\x09ID of the leaderboard to view\n\x09* @param\x09""DataRequest\x09\x09\x09type of request: RequestGlobal, RequestAroundUser, RequestFriends\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID used for friend & around user requests\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Leaderboard Entries\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        RangeStart                      range start or 0\n@param        RangeEnd                        range end or max LB entries\n@param        LeaderboardId           ID of the leaderboard to view\n@param        DataRequest                     type of request: RequestGlobal, RequestAroundUser, RequestFriends\n@param        SteamId                         SteamID used for friend & around user requests" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardEntries constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardEntries constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardEntries Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, DataRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardEntries Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardEntries", 	Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::WebLeaderboards_eventGetLeaderboardEntries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::WebLeaderboards_eventGetLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardEntries)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataRequest);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboardEntries(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_LeaderboardId,Z_Param_DataRequest,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function GetLeaderboardEntries ****************************

// ********** Begin Class UWebLeaderboards Function GetLeaderboardsForGame *************************
struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics
{
	struct WebLeaderboards_eventGetLeaderboardsForGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Leaderboards for Game\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Leaderboards for Game\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardsForGame constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardsForGame constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardsForGame Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardsForGame Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardsForGame", 	Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::WebLeaderboards_eventGetLeaderboardsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::WebLeaderboards_eventGetLeaderboardsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardsForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboardsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function GetLeaderboardsForGame ***************************

// ********** Begin Class UWebLeaderboards Function ResetLeaderboard *******************************
struct Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics
{
	struct WebLeaderboards_eventResetLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reset Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09LeaderboardId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Leaderboard\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        LeaderboardId           numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetLeaderboard constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetLeaderboard constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetLeaderboard Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_LeaderboardId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function ResetLeaderboard Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "ResetLeaderboard", 	Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::WebLeaderboards_eventResetLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::WebLeaderboards_eventResetLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execResetLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function ResetLeaderboard *********************************

// ********** Begin Class UWebLeaderboards Function SetLeaderboardScore ****************************
struct Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics
{
	struct WebLeaderboards_eventSetLeaderboardScore_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 LeaderbordId;
		FString SteamId;
		int32 Score;
		TArray<uint8> Details;
		FString ScoreMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "details" },
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set Leaderboard Score\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09LeaderbordId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamId to set the score for\n\x09* @param\x09Score\x09\x09\x09\x09the score to set for this user\n\x09* @param\x09""Details\x09\x09\x09\x09game-specific details for how the score was earned. Up to 256 bytes.\n\x09* @param\x09ScoreMethod\x09\x09\x09update method to use. Can be \"KeepBest\" or \"ForceUpdate\"\n\x09*/" },
#endif
		{ "CPP_Default_ScoreMethod", "KeepBest" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Leaderboard Score\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        LeaderbordId            numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n@param        SteamId                         SteamId to set the score for\n@param        Score                           the score to set for this user\n@param        Details                         game-specific details for how the score was earned. Up to 256 bytes.\n@param        ScoreMethod                     update method to use. Can be \"KeepBest\" or \"ForceUpdate\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLeaderboardScore constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderbordId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLeaderboardScore constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLeaderboardScore Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_LeaderbordId = { "LeaderbordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, LeaderbordId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_ScoreMethod = { "ScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, ScoreMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_LeaderbordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_ScoreMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers) < 2048);
// ********** End Function SetLeaderboardScore Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "SetLeaderboardScore", 	Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::WebLeaderboards_eventSetLeaderboardScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::WebLeaderboards_eventSetLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLeaderboards::execSetLeaderboardScore)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderbordId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(uint8,Z_Param_Details);
	P_GET_PROPERTY(FStrProperty,Z_Param_ScoreMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaderboardScore(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_LeaderbordId,Z_Param_SteamId,Z_Param_Score,Z_Param_Details,Z_Param_ScoreMethod);
	P_NATIVE_END;
}
// ********** End Class UWebLeaderboards Function SetLeaderboardScore ******************************

// ********** Begin Class UWebLeaderboards *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebLeaderboards;
UClass* UWebLeaderboards::GetPrivateStaticClass()
{
	using TClass = UWebLeaderboards;
	if (!Z_Registration_Info_UClass_UWebLeaderboards.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebLeaderboards"),
			Z_Registration_Info_UClass_UWebLeaderboards.InnerSingleton,
			StaticRegisterNativesUWebLeaderboards,
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
	return Z_Registration_Info_UClass_UWebLeaderboards.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister()
{
	return UWebLeaderboards::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebLeaderboards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Leaderboards/WebLeaderboards.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebLeaderboards constinit property declarations *************************
// ********** End Class UWebLeaderboards constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteLeaderboard"), .Pointer = &UWebLeaderboards::execDeleteLeaderboard },
		{ .NameUTF8 = UTF8TEXT("FindOrCreateLeaderboard"), .Pointer = &UWebLeaderboards::execFindOrCreateLeaderboard },
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardEntries"), .Pointer = &UWebLeaderboards::execGetLeaderboardEntries },
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardsForGame"), .Pointer = &UWebLeaderboards::execGetLeaderboardsForGame },
		{ .NameUTF8 = UTF8TEXT("ResetLeaderboard"), .Pointer = &UWebLeaderboards::execResetLeaderboard },
		{ .NameUTF8 = UTF8TEXT("SetLeaderboardScore"), .Pointer = &UWebLeaderboards::execSetLeaderboardScore },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard, "DeleteLeaderboard" }, // 2198100558
		{ &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 2912794933
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 1356483477
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame, "GetLeaderboardsForGame" }, // 1431008902
		{ &Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard, "ResetLeaderboard" }, // 3995008362
		{ &Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore, "SetLeaderboardScore" }, // 2217141258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLeaderboards>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebLeaderboards_Statics
UObject* (*const Z_Construct_UClass_UWebLeaderboards_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebLeaderboards_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams = {
	&UWebLeaderboards::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams)
};
void UWebLeaderboards::StaticRegisterNativesUWebLeaderboards()
{
	UClass* Class = UWebLeaderboards::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebLeaderboards_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebLeaderboards()
{
	if (!Z_Registration_Info_UClass_UWebLeaderboards.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebLeaderboards.OuterSingleton, Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebLeaderboards.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebLeaderboards);
UWebLeaderboards::~UWebLeaderboards() {}
// ********** End Class UWebLeaderboards ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebLeaderboards, UWebLeaderboards::StaticClass, TEXT("UWebLeaderboards"), &Z_Registration_Info_UClass_UWebLeaderboards, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebLeaderboards), 2034914387U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h__Script_SteamCoreWeb_2303908392{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
