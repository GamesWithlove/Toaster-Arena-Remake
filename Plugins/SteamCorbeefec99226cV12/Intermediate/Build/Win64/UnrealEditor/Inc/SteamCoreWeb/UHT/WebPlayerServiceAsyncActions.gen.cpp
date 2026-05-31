// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerService/WebPlayerServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebPlayerServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionGetRecentlyPlayedGames Function GetRecentlyPlayedGamesAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 Count;
		USteamCoreWebAsyncActionGetRecentlyPlayedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets information about a player's recently played games\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The player we're asking about\n\x09* @param\x09""Count\x09\x09The number of games to return (0/unset: all)\n\x09*/" },
#endif
		{ "DisplayName", "Get Recently PlayedGames" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about a player's recently played games\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The player we're asking about\n@param        Count           The number of games to return (0/unset: all)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRecentlyPlayedGamesAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRecentlyPlayedGamesAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRecentlyPlayedGamesAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetRecentlyPlayedGamesAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames, nullptr, "GetRecentlyPlayedGamesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::SteamCoreWebAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetRecentlyPlayedGames::execGetRecentlyPlayedGamesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetRecentlyPlayedGames**)Z_Param__Result=USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetRecentlyPlayedGames Function GetRecentlyPlayedGamesAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetRecentlyPlayedGames ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames;
UClass* USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetRecentlyPlayedGames;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetRecentlyPlayedGames"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetRecentlyPlayedGames,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_NoRegister()
{
	return USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetRecentlyPlayedGames\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetRecentlyPlayedGames\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetRecentlyPlayedGames constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetRecentlyPlayedGames constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRecentlyPlayedGamesAsync"), .Pointer = &USteamCoreWebAsyncActionGetRecentlyPlayedGames::execGetRecentlyPlayedGamesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync, "GetRecentlyPlayedGamesAsync" }, // 3321817414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetRecentlyPlayedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticRegisterNativesUSteamCoreWebAsyncActionGetRecentlyPlayedGames()
{
	UClass* Class = USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames.OuterSingleton;
}
USteamCoreWebAsyncActionGetRecentlyPlayedGames::USteamCoreWebAsyncActionGetRecentlyPlayedGames() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetRecentlyPlayedGames);
USteamCoreWebAsyncActionGetRecentlyPlayedGames::~USteamCoreWebAsyncActionGetRecentlyPlayedGames() {}
// ********** End Class USteamCoreWebAsyncActionGetRecentlyPlayedGames *****************************

// ********** Begin Class USteamCoreWebAsyncActionGetOwnedGames Function GetOwnedGamesAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		bool bIncludeAppInfo;
		bool bIncludePlayedFreeGames;
		TArray<int32> Filter;
		USteamCoreWebAsyncActionGetOwnedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return a list of games owned by the player\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09* @param\x09""bIncludeAppInfo\x09\x09\x09\x09true if we want additional details (name, icon) about each game\n\x09* @param\x09""bIncludePlayedFreeGames\x09\x09""Free games are excluded by default. If this is set, free games the user has played will be returned.\n\x09* @param\x09""Filter\x09\x09\x09\x09\x09\x09if set, restricts result set to the passed in apps\n\x09*/" },
#endif
		{ "DisplayName", "Get Owned Games" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a list of games owned by the player\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about\n@param        bIncludeAppInfo                         true if we want additional details (name, icon) about each game\n@param        bIncludePlayedFreeGames         Free games are excluded by default. If this is set, free games the user has played will be returned.\n@param        Filter                                          if set, restricts result set to the passed in apps" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnedGamesAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
	static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnedGamesAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnedGamesAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludeAppInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludePlayedFreeGames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetOwnedGamesAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames, nullptr, "GetOwnedGamesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::SteamCoreWebAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetOwnedGames::execGetOwnedGamesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAppInfo);
	P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
	P_GET_TARRAY(int32,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetOwnedGames**)Z_Param__Result=USteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_Filter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetOwnedGames Function GetOwnedGamesAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetOwnedGames ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames;
UClass* USteamCoreWebAsyncActionGetOwnedGames::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetOwnedGames;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetOwnedGames"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetOwnedGames,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_NoRegister()
{
	return USteamCoreWebAsyncActionGetOwnedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetOwnedGames\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetOwnedGames\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetOwnedGames constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetOwnedGames constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetOwnedGamesAsync"), .Pointer = &USteamCoreWebAsyncActionGetOwnedGames::execGetOwnedGamesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync, "GetOwnedGamesAsync" }, // 2761701262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetOwnedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetOwnedGames::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetOwnedGames::StaticRegisterNativesUSteamCoreWebAsyncActionGetOwnedGames()
{
	UClass* Class = USteamCoreWebAsyncActionGetOwnedGames::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames.OuterSingleton;
}
USteamCoreWebAsyncActionGetOwnedGames::USteamCoreWebAsyncActionGetOwnedGames() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetOwnedGames);
USteamCoreWebAsyncActionGetOwnedGames::~USteamCoreWebAsyncActionGetOwnedGames() {}
// ********** End Class USteamCoreWebAsyncActionGetOwnedGames **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetSteamLevel Function GetSteamLevelAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics
{
	struct SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		USteamCoreWebAsyncActionGetSteamLevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the Steam Level of a user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09*/" },
#endif
		{ "DisplayName", "Get Steam Level" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Steam Level of a user\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamLevelAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamLevelAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamLevelAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers) < 2048);
// ********** End Function GetSteamLevelAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel, nullptr, "GetSteamLevelAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::SteamCoreWebAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetSteamLevel::execGetSteamLevelAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetSteamLevel**)Z_Param__Result=USteamCoreWebAsyncActionGetSteamLevel::GetSteamLevelAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetSteamLevel Function GetSteamLevelAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetSteamLevel ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel;
UClass* USteamCoreWebAsyncActionGetSteamLevel::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetSteamLevel;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetSteamLevel"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetSteamLevel,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_NoRegister()
{
	return USteamCoreWebAsyncActionGetSteamLevel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetSteamLevel\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetSteamLevel\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetSteamLevel constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetSteamLevel constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSteamLevelAsync"), .Pointer = &USteamCoreWebAsyncActionGetSteamLevel::execGetSteamLevelAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync, "GetSteamLevelAsync" }, // 1878520815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetSteamLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetSteamLevel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetSteamLevel::StaticRegisterNativesUSteamCoreWebAsyncActionGetSteamLevel()
{
	UClass* Class = USteamCoreWebAsyncActionGetSteamLevel::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel.OuterSingleton;
}
USteamCoreWebAsyncActionGetSteamLevel::USteamCoreWebAsyncActionGetSteamLevel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetSteamLevel);
USteamCoreWebAsyncActionGetSteamLevel::~USteamCoreWebAsyncActionGetSteamLevel() {}
// ********** End Class USteamCoreWebAsyncActionGetSteamLevel **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetBadges Function GetBadgesAsync ****************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		USteamCoreWebAsyncActionGetBadges* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets badges that are owned by a specific user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09*/" },
#endif
		{ "DisplayName", "Get Badges" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets badges that are owned by a specific user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBadgesAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBadgesAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBadgesAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetBadgesAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges, nullptr, "GetBadgesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::SteamCoreWebAsyncActionGetBadges_eventGetBadgesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetBadges::execGetBadgesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetBadges**)Z_Param__Result=USteamCoreWebAsyncActionGetBadges::GetBadgesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetBadges Function GetBadgesAsync ******************

// ********** Begin Class USteamCoreWebAsyncActionGetBadges ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges;
UClass* USteamCoreWebAsyncActionGetBadges::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetBadges;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetBadges"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetBadges,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_NoRegister()
{
	return USteamCoreWebAsyncActionGetBadges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetBadges\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetBadges\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetBadges constinit property declarations ********
// ********** End Class USteamCoreWebAsyncActionGetBadges constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBadgesAsync"), .Pointer = &USteamCoreWebAsyncActionGetBadges::execGetBadgesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetBadges_GetBadgesAsync, "GetBadgesAsync" }, // 1102707660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetBadges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetBadges::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetBadges::StaticRegisterNativesUSteamCoreWebAsyncActionGetBadges()
{
	UClass* Class = USteamCoreWebAsyncActionGetBadges::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges.OuterSingleton;
}
USteamCoreWebAsyncActionGetBadges::USteamCoreWebAsyncActionGetBadges() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetBadges);
USteamCoreWebAsyncActionGetBadges::~USteamCoreWebAsyncActionGetBadges() {}
// ********** End Class USteamCoreWebAsyncActionGetBadges ******************************************

// ********** Begin Class USteamCoreWebAsyncActionGetCommunityBadgeProgress Function GetCommunityBadgeProgressAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics
{
	struct SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 BadgeId;
		USteamCoreWebAsyncActionGetCommunityBadgeProgress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets all the quests needed to get the specified badge, and which are completed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""BadgeId\x09\x09\x09The badge we're asking about\n\x09*/" },
#endif
		{ "DisplayName", "Get Community Badge Progress" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        BadgeId                 The badge we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommunityBadgeProgressAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadgeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommunityBadgeProgressAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommunityBadgeProgressAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_BadgeId = { "BadgeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, BadgeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_BadgeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers) < 2048);
// ********** End Function GetCommunityBadgeProgressAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress, nullptr, "GetCommunityBadgeProgressAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::SteamCoreWebAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCommunityBadgeProgress::execGetCommunityBadgeProgressAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_BadgeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetCommunityBadgeProgress**)Z_Param__Result=USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_BadgeId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetCommunityBadgeProgress Function GetCommunityBadgeProgressAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetCommunityBadgeProgress ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress;
UClass* USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetCommunityBadgeProgress;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetCommunityBadgeProgress"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetCommunityBadgeProgress,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_NoRegister()
{
	return USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCommunityBadgeProgress\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCommunityBadgeProgress\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetCommunityBadgeProgress constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetCommunityBadgeProgress constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCommunityBadgeProgressAsync"), .Pointer = &USteamCoreWebAsyncActionGetCommunityBadgeProgress::execGetCommunityBadgeProgressAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync, "GetCommunityBadgeProgressAsync" }, // 961316811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCommunityBadgeProgress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticRegisterNativesUSteamCoreWebAsyncActionGetCommunityBadgeProgress()
{
	UClass* Class = USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress.OuterSingleton;
}
USteamCoreWebAsyncActionGetCommunityBadgeProgress::USteamCoreWebAsyncActionGetCommunityBadgeProgress() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetCommunityBadgeProgress);
USteamCoreWebAsyncActionGetCommunityBadgeProgress::~USteamCoreWebAsyncActionGetCommunityBadgeProgress() {}
// ********** End Class USteamCoreWebAsyncActionGetCommunityBadgeProgress **************************

// ********** Begin Class USteamCoreWebAsyncActionIsPlayingSharedGame Function IsPlayingSharedGameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics
{
	struct SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppIdPlaying;
		USteamCoreWebAsyncActionIsPlayingSharedGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns valid lender SteamID if game currently played is borrowed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""AppIdPlaying\x09The game player is currently playing\n\x09*/" },
#endif
		{ "DisplayName", "Is Playing Shared Game" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns valid lender SteamID if game currently played is borrowed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        AppIdPlaying    The game player is currently playing" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayingSharedGameAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIdPlaying;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayingSharedGameAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayingSharedGameAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_AppIdPlaying = { "AppIdPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, AppIdPlaying), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_AppIdPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers) < 2048);
// ********** End Function IsPlayingSharedGameAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame, nullptr, "IsPlayingSharedGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::SteamCoreWebAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionIsPlayingSharedGame::execIsPlayingSharedGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppIdPlaying);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionIsPlayingSharedGame**)Z_Param__Result=USteamCoreWebAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppIdPlaying);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionIsPlayingSharedGame Function IsPlayingSharedGameAsync 

// ********** Begin Class USteamCoreWebAsyncActionIsPlayingSharedGame ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame;
UClass* USteamCoreWebAsyncActionIsPlayingSharedGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionIsPlayingSharedGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionIsPlayingSharedGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionIsPlayingSharedGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_NoRegister()
{
	return USteamCoreWebAsyncActionIsPlayingSharedGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionIsPlayingSharedGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionIsPlayingSharedGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionIsPlayingSharedGame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionIsPlayingSharedGame constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsPlayingSharedGameAsync"), .Pointer = &USteamCoreWebAsyncActionIsPlayingSharedGame::execIsPlayingSharedGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync, "IsPlayingSharedGameAsync" }, // 3491561948
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionIsPlayingSharedGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionIsPlayingSharedGame::StaticRegisterNativesUSteamCoreWebAsyncActionIsPlayingSharedGame()
{
	UClass* Class = USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame.OuterSingleton;
}
USteamCoreWebAsyncActionIsPlayingSharedGame::USteamCoreWebAsyncActionIsPlayingSharedGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionIsPlayingSharedGame);
USteamCoreWebAsyncActionIsPlayingSharedGame::~USteamCoreWebAsyncActionIsPlayingSharedGame() {}
// ********** End Class USteamCoreWebAsyncActionIsPlayingSharedGame ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames, USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass, TEXT("USteamCoreWebAsyncActionGetRecentlyPlayedGames"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetRecentlyPlayedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetRecentlyPlayedGames), 924116324U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetOwnedGames, USteamCoreWebAsyncActionGetOwnedGames::StaticClass, TEXT("USteamCoreWebAsyncActionGetOwnedGames"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetOwnedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetOwnedGames), 360582832U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetSteamLevel, USteamCoreWebAsyncActionGetSteamLevel::StaticClass, TEXT("USteamCoreWebAsyncActionGetSteamLevel"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSteamLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetSteamLevel), 831775848U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetBadges, USteamCoreWebAsyncActionGetBadges::StaticClass, TEXT("USteamCoreWebAsyncActionGetBadges"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetBadges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetBadges), 460778902U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress, USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass, TEXT("USteamCoreWebAsyncActionGetCommunityBadgeProgress"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCommunityBadgeProgress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetCommunityBadgeProgress), 2474803607U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame, USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass, TEXT("USteamCoreWebAsyncActionIsPlayingSharedGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionIsPlayingSharedGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionIsPlayingSharedGame), 2993588814U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_SteamCoreWeb_1800939099{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
