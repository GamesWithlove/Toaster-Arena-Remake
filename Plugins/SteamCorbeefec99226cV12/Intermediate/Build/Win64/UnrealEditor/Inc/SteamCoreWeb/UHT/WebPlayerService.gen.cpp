// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerService/WebPlayerService.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebPlayerService() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebPlayerService Function GetBadges *************************************
struct Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics
{
	struct WebPlayerService_eventGetBadges_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets badges that are owned by a specific user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets badges that are owned by a specific user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBadges constinit property declarations *****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBadges constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBadges Property Definitions ****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers) < 2048);
// ********** End Function GetBadges Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetBadges", 	Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::WebPlayerService_eventGetBadges_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::WebPlayerService_eventGetBadges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_GetBadges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execGetBadges)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBadges(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function GetBadges ***************************************

// ********** Begin Class UWebPlayerService Function GetCommunityBadgeProgress *********************
struct Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics
{
	struct WebPlayerService_eventGetCommunityBadgeProgress_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 BadgeId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets all the quests needed to get the specified badge, and which are completed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""BadgeId\x09\x09\x09The badge we're asking about\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        BadgeId                 The badge we're asking about" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommunityBadgeProgress constinit property declarations *************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadgeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommunityBadgeProgress constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommunityBadgeProgress Property Definitions ************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_BadgeId = { "BadgeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, BadgeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_BadgeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers) < 2048);
// ********** End Function GetCommunityBadgeProgress Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetCommunityBadgeProgress", 	Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::WebPlayerService_eventGetCommunityBadgeProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::WebPlayerService_eventGetCommunityBadgeProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execGetCommunityBadgeProgress)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_BadgeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCommunityBadgeProgress(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_BadgeId);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function GetCommunityBadgeProgress ***********************

// ********** Begin Class UWebPlayerService Function GetOwnedGames *********************************
struct Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics
{
	struct WebPlayerService_eventGetOwnedGames_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		bool bIncludeAppInfo;
		bool bIncludePlayedFreeGames;
		TArray<int32> Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return a list of games owned by the player\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09* @param\x09""bIncludeAppInfo\x09\x09\x09\x09true if we want additional details (name, icon) about each game\n\x09* @param\x09""bIncludePlayedFreeGames\x09\x09""Free games are excluded by default. If this is set, free games the user has played will be returned.\n\x09* @param\x09""Filter\x09\x09\x09\x09\x09\x09if set, restricts result set to the passed in apps\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a list of games owned by the player\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about\n@param        bIncludeAppInfo                         true if we want additional details (name, icon) about each game\n@param        bIncludePlayedFreeGames         Free games are excluded by default. If this is set, free games the user has played will be returned.\n@param        Filter                                          if set, restricts result set to the passed in apps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnedGames constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
	static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnedGames constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnedGames Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
{
	((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludeAppInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
{
	((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludePlayedFreeGames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers) < 2048);
// ********** End Function GetOwnedGames Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetOwnedGames", 	Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::WebPlayerService_eventGetOwnedGames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::WebPlayerService_eventGetOwnedGames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_GetOwnedGames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execGetOwnedGames)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAppInfo);
	P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
	P_GET_TARRAY(int32,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOwnedGames(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_Filter);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function GetOwnedGames ***********************************

// ********** Begin Class UWebPlayerService Function GetRecentlyPlayedGames ************************
struct Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics
{
	struct WebPlayerService_eventGetRecentlyPlayedGames_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets information about a player's recently played games\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The player we're asking about\n\x09* @param\x09""Count\x09\x09The number of games to return (0/unset: all)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about a player's recently played games\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The player we're asking about\n@param        Count           The number of games to return (0/unset: all)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRecentlyPlayedGames constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRecentlyPlayedGames constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRecentlyPlayedGames Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers) < 2048);
// ********** End Function GetRecentlyPlayedGames Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetRecentlyPlayedGames", 	Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::WebPlayerService_eventGetRecentlyPlayedGames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::WebPlayerService_eventGetRecentlyPlayedGames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execGetRecentlyPlayedGames)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRecentlyPlayedGames(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function GetRecentlyPlayedGames **************************

// ********** Begin Class UWebPlayerService Function GetSteamLevel *********************************
struct Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics
{
	struct WebPlayerService_eventGetSteamLevel_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the Steam Level of a user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Steam Level of a user\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamLevel constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamLevel constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamLevel Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers) < 2048);
// ********** End Function GetSteamLevel Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetSteamLevel", 	Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::WebPlayerService_eventGetSteamLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::WebPlayerService_eventGetSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_GetSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execGetSteamLevel)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSteamLevel(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function GetSteamLevel ***********************************

// ********** Begin Class UWebPlayerService Function IsPlayingSharedGame ***************************
struct Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics
{
	struct WebPlayerService_eventIsPlayingSharedGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppIdPlaying;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns valid lender SteamID if game currently played is borrowed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""AppIdPlaying\x09The game player is currently playing\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns valid lender SteamID if game currently played is borrowed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        AppIdPlaying    The game player is currently playing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayingSharedGame constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIdPlaying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayingSharedGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayingSharedGame Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_AppIdPlaying = { "AppIdPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, AppIdPlaying), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_AppIdPlaying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers) < 2048);
// ********** End Function IsPlayingSharedGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "IsPlayingSharedGame", 	Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::WebPlayerService_eventIsPlayingSharedGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::WebPlayerService_eventIsPlayingSharedGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPlayerService::execIsPlayingSharedGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppIdPlaying);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsPlayingSharedGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppIdPlaying);
	P_NATIVE_END;
}
// ********** End Class UWebPlayerService Function IsPlayingSharedGame *****************************

// ********** Begin Class UWebPlayerService ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebPlayerService;
UClass* UWebPlayerService::GetPrivateStaticClass()
{
	using TClass = UWebPlayerService;
	if (!Z_Registration_Info_UClass_UWebPlayerService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebPlayerService"),
			Z_Registration_Info_UClass_UWebPlayerService.InnerSingleton,
			StaticRegisterNativesUWebPlayerService,
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
	return Z_Registration_Info_UClass_UWebPlayerService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebPlayerService_NoRegister()
{
	return UWebPlayerService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebPlayerService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerService/WebPlayerService.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebPlayerService constinit property declarations ************************
// ********** End Class UWebPlayerService constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBadges"), .Pointer = &UWebPlayerService::execGetBadges },
		{ .NameUTF8 = UTF8TEXT("GetCommunityBadgeProgress"), .Pointer = &UWebPlayerService::execGetCommunityBadgeProgress },
		{ .NameUTF8 = UTF8TEXT("GetOwnedGames"), .Pointer = &UWebPlayerService::execGetOwnedGames },
		{ .NameUTF8 = UTF8TEXT("GetRecentlyPlayedGames"), .Pointer = &UWebPlayerService::execGetRecentlyPlayedGames },
		{ .NameUTF8 = UTF8TEXT("GetSteamLevel"), .Pointer = &UWebPlayerService::execGetSteamLevel },
		{ .NameUTF8 = UTF8TEXT("IsPlayingSharedGame"), .Pointer = &UWebPlayerService::execIsPlayingSharedGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPlayerService_GetBadges, "GetBadges" }, // 3812346252
		{ &Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress, "GetCommunityBadgeProgress" }, // 3605215370
		{ &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames, "GetOwnedGames" }, // 2567927281
		{ &Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames, "GetRecentlyPlayedGames" }, // 2152764082
		{ &Z_Construct_UFunction_UWebPlayerService_GetSteamLevel, "GetSteamLevel" }, // 1392082266
		{ &Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame, "IsPlayingSharedGame" }, // 1568842928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPlayerService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebPlayerService_Statics
UObject* (*const Z_Construct_UClass_UWebPlayerService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPlayerService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPlayerService_Statics::ClassParams = {
	&UWebPlayerService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams)
};
void UWebPlayerService::StaticRegisterNativesUWebPlayerService()
{
	UClass* Class = UWebPlayerService::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebPlayerService_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebPlayerService()
{
	if (!Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton, Z_Construct_UClass_UWebPlayerService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebPlayerService);
UWebPlayerService::~UWebPlayerService() {}
// ********** End Class UWebPlayerService **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebPlayerService, UWebPlayerService::StaticClass, TEXT("UWebPlayerService"), &Z_Registration_Info_UClass_UWebPlayerService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPlayerService), 256691819U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h__Script_SteamCoreWeb_2314421501{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
