// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Leaderboards/WebLeaderboardsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebLeaderboardsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionDeleteLeaderboard Function DeleteLeaderboardAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics
{
	struct SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Name;
		USteamCoreWebAsyncActionDeleteLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Delete Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09""appid of game\n\x09* @param\x09Name\x09\x09Name of the leaderboard to delete\n\x09*/" },
		{ "DisplayName", "Delete Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Delete Leaderboard\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           appid of game\n@param        Name            Name of the leaderboard to delete" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLeaderboardAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteLeaderboardAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteLeaderboardAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers) < 2048);
// ********** End Function DeleteLeaderboardAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard, nullptr, "DeleteLeaderboardAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::SteamCoreWebAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionDeleteLeaderboard::execDeleteLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionDeleteLeaderboard**)Z_Param__Result=USteamCoreWebAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionDeleteLeaderboard Function DeleteLeaderboardAsync **

// ********** Begin Class USteamCoreWebAsyncActionDeleteLeaderboard ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard;
UClass* USteamCoreWebAsyncActionDeleteLeaderboard::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionDeleteLeaderboard;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionDeleteLeaderboard"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionDeleteLeaderboard,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_NoRegister()
{
	return USteamCoreWebAsyncActionDeleteLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionDeleteLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionDeleteLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionDeleteLeaderboard constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionDeleteLeaderboard constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteLeaderboardAsync"), .Pointer = &USteamCoreWebAsyncActionDeleteLeaderboard::execDeleteLeaderboardAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync, "DeleteLeaderboardAsync" }, // 3736976001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeleteLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::ClassParams = {
	&USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionDeleteLeaderboard::StaticRegisterNativesUSteamCoreWebAsyncActionDeleteLeaderboard()
{
	UClass* Class = USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard.OuterSingleton;
}
USteamCoreWebAsyncActionDeleteLeaderboard::USteamCoreWebAsyncActionDeleteLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionDeleteLeaderboard);
USteamCoreWebAsyncActionDeleteLeaderboard::~USteamCoreWebAsyncActionDeleteLeaderboard() {}
// ********** End Class USteamCoreWebAsyncActionDeleteLeaderboard **********************************

// ********** Begin Class USteamCoreWebAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
{
	struct SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Name;
		FString SortMethod;
		FString DisplayType;
		bool bCreateIfNotFound;
		bool bOnlyTrustedWrites;
		bool bOnlyFriendsReads;
		USteamCoreWebAsyncActionFindOrCreateLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Find Or Create Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""appid of game\n\x09* @param\x09Name\x09\x09\x09\x09\x09Name of the leaderboard to delete\n\x09* @param\x09SortMethod\x09\x09\x09\x09sort method to use for this leaderboard (defaults to Ascending)\n\x09* @param\x09""DisplayType\x09\x09\x09\x09""display type for this leaderboard (defaults to Numeric)\n\x09* @param\x09""bCreateIfNotFound\x09\x09if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n\x09* @param\x09""bOnlyTrustedWrites\x09\x09if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n\x09* @param\x09""bOnlyFriendsReads\x09\x09if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.\n\x09*/" },
		{ "CPP_Default_bCreateIfNotFound", "false" },
		{ "CPP_Default_bOnlyFriendsReads", "false" },
		{ "CPP_Default_bOnlyTrustedWrites", "false" },
		{ "CPP_Default_DisplayType", "Numeric" },
		{ "CPP_Default_SortMethod", "Ascending" },
		{ "DisplayName", "Find or Create Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Find Or Create Leaderboard\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        AppId                                   appid of game\n@param        Name                                    Name of the leaderboard to delete\n@param        SortMethod                              sort method to use for this leaderboard (defaults to Ascending)\n@param        DisplayType                             display type for this leaderboard (defaults to Numeric)\n@param        bCreateIfNotFound               if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n@param        bOnlyTrustedWrites              if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n@param        bOnlyFriendsReads               if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindOrCreateLeaderboardAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindOrCreateLeaderboardAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindOrCreateLeaderboardAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bCreateIfNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyTrustedWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyFriendsReads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers) < 2048);
// ********** End Function FindOrCreateLeaderboardAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
	*(USteamCoreWebAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=USteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 

// ********** Begin Class USteamCoreWebAsyncActionFindOrCreateLeaderboard **************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard;
UClass* USteamCoreWebAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFindOrCreateLeaderboard;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFindOrCreateLeaderboard"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFindOrCreateLeaderboard,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister()
{
	return USteamCoreWebAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFindOrCreateLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFindOrCreateLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFindOrCreateLeaderboard constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionFindOrCreateLeaderboard constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindOrCreateLeaderboardAsync"), .Pointer = &USteamCoreWebAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 1963377919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
	&USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUSteamCoreWebAsyncActionFindOrCreateLeaderboard()
{
	UClass* Class = USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard.OuterSingleton;
}
USteamCoreWebAsyncActionFindOrCreateLeaderboard::USteamCoreWebAsyncActionFindOrCreateLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFindOrCreateLeaderboard);
USteamCoreWebAsyncActionFindOrCreateLeaderboard::~USteamCoreWebAsyncActionFindOrCreateLeaderboard() {}
// ********** End Class USteamCoreWebAsyncActionFindOrCreateLeaderboard ****************************

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardEntries Function GetLeaderboardEntriesAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 RangeStart;
		int32 RangeEnd;
		int32 LeaderboardId;
		int32 DataRequest;
		FString SteamId;
		USteamCoreWebAsyncActionGetLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Get Leaderboard Entries\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09RangeStart\x09\x09\x09range start or 0\n\x09* @param\x09RangeEnd\x09\x09\x09range end or max LB entries\n\x09* @param\x09LeaderboardId\x09\x09ID of the leaderboard to view\n\x09* @param\x09""DataRequest\x09\x09\x09type of request: RequestGlobal, RequestAroundUser, RequestFriends\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID used for friend & around user requests\n\x09*/" },
		{ "DisplayName", "Get Leaderboard Entries" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Get Leaderboard Entries\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        RangeStart                      range start or 0\n@param        RangeEnd                        range end or max LB entries\n@param        LeaderboardId           ID of the leaderboard to view\n@param        DataRequest                     type of request: RequestGlobal, RequestAroundUser, RequestFriends\n@param        SteamId                         SteamID used for friend & around user requests" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardEntriesAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardEntriesAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardEntriesAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, DataRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardEntriesAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries, nullptr, "GetLeaderboardEntriesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::SteamCoreWebAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetLeaderboardEntries::execGetLeaderboardEntriesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataRequest);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetLeaderboardEntries**)Z_Param__Result=USteamCoreWebAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_LeaderboardId,Z_Param_DataRequest,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardEntries Function GetLeaderboardEntriesAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardEntries ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries;
UClass* USteamCoreWebAsyncActionGetLeaderboardEntries::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetLeaderboardEntries;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetLeaderboardEntries"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetLeaderboardEntries,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_NoRegister()
{
	return USteamCoreWebAsyncActionGetLeaderboardEntries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetLeaderboardEntries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetLeaderboardEntries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardEntries constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardEntries constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardEntriesAsync"), .Pointer = &USteamCoreWebAsyncActionGetLeaderboardEntries::execGetLeaderboardEntriesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync, "GetLeaderboardEntriesAsync" }, // 1404192050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetLeaderboardEntries::StaticRegisterNativesUSteamCoreWebAsyncActionGetLeaderboardEntries()
{
	UClass* Class = USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries.OuterSingleton;
}
USteamCoreWebAsyncActionGetLeaderboardEntries::USteamCoreWebAsyncActionGetLeaderboardEntries() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetLeaderboardEntries);
USteamCoreWebAsyncActionGetLeaderboardEntries::~USteamCoreWebAsyncActionGetLeaderboardEntries() {}
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardEntries ******************************

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardsForGame Function GetLeaderboardsForGameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics
{
	struct SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		USteamCoreWebAsyncActionGetLeaderboardsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Get Leaderboards for Game\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09*/" },
		{ "DisplayName", "Get Leaderboards for Game" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Get Leaderboards for Game\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardsForGameAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardsForGameAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardsForGameAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardsForGameAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame, nullptr, "GetLeaderboardsForGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::SteamCoreWebAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetLeaderboardsForGame::execGetLeaderboardsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetLeaderboardsForGame**)Z_Param__Result=USteamCoreWebAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardsForGame Function GetLeaderboardsForGameAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardsForGame ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame;
UClass* USteamCoreWebAsyncActionGetLeaderboardsForGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetLeaderboardsForGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetLeaderboardsForGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetLeaderboardsForGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_NoRegister()
{
	return USteamCoreWebAsyncActionGetLeaderboardsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetLeaderboardsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetLeaderboardsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetLeaderboardsForGame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardsForGame constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardsForGameAsync"), .Pointer = &USteamCoreWebAsyncActionGetLeaderboardsForGame::execGetLeaderboardsForGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync, "GetLeaderboardsForGameAsync" }, // 3517370170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetLeaderboardsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticRegisterNativesUSteamCoreWebAsyncActionGetLeaderboardsForGame()
{
	UClass* Class = USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame.OuterSingleton;
}
USteamCoreWebAsyncActionGetLeaderboardsForGame::USteamCoreWebAsyncActionGetLeaderboardsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetLeaderboardsForGame);
USteamCoreWebAsyncActionGetLeaderboardsForGame::~USteamCoreWebAsyncActionGetLeaderboardsForGame() {}
// ********** End Class USteamCoreWebAsyncActionGetLeaderboardsForGame *****************************

// ********** Begin Class USteamCoreWebAsyncActionResetLeaderboard Function ResetLeaderboardAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics
{
	struct SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		USteamCoreWebAsyncActionResetLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Reset Leaderboard\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09LeaderboardId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09*/" },
		{ "DisplayName", "Reset Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Reset Leaderboard\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        LeaderboardId           numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetLeaderboardAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetLeaderboardAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetLeaderboardAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers) < 2048);
// ********** End Function ResetLeaderboardAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard, nullptr, "ResetLeaderboardAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::SteamCoreWebAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionResetLeaderboard::execResetLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionResetLeaderboard**)Z_Param__Result=USteamCoreWebAsyncActionResetLeaderboard::ResetLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionResetLeaderboard Function ResetLeaderboardAsync ****

// ********** Begin Class USteamCoreWebAsyncActionResetLeaderboard *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard;
UClass* USteamCoreWebAsyncActionResetLeaderboard::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionResetLeaderboard;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionResetLeaderboard"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionResetLeaderboard,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_NoRegister()
{
	return USteamCoreWebAsyncActionResetLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResetLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResetLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionResetLeaderboard constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionResetLeaderboard constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResetLeaderboardAsync"), .Pointer = &USteamCoreWebAsyncActionResetLeaderboard::execResetLeaderboardAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync, "ResetLeaderboardAsync" }, // 2136932535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResetLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::ClassParams = {
	&USteamCoreWebAsyncActionResetLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionResetLeaderboard::StaticRegisterNativesUSteamCoreWebAsyncActionResetLeaderboard()
{
	UClass* Class = USteamCoreWebAsyncActionResetLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard.OuterSingleton;
}
USteamCoreWebAsyncActionResetLeaderboard::USteamCoreWebAsyncActionResetLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionResetLeaderboard);
USteamCoreWebAsyncActionResetLeaderboard::~USteamCoreWebAsyncActionResetLeaderboard() {}
// ********** End Class USteamCoreWebAsyncActionResetLeaderboard ***********************************

// ********** Begin Class USteamCoreWebAsyncActionSetLeaderboardScore Function SetLeaderboardScoreAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics
{
	struct SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		FString SteamId;
		int32 Score;
		TArray<uint8> Details;
		FString ScoreMethod;
		USteamCoreWebAsyncActionSetLeaderboardScore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "details" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Leaderboards|Async" },
		{ "Comment", "/**\n\x09* Set Leaderboard Score\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09* @param\x09LeaderboardId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamId to set the score for\n\x09* @param\x09Score\x09\x09\x09\x09the score to set for this user\n\x09* @param\x09""Details\x09\x09\x09\x09game-specific details for how the score was earned. Up to 256 bytes.\n\x09* @param\x09ScoreMethod\x09\x09\x09update method to use. Can be \"KeepBest\" or \"ForceUpdate\"\n\x09*/" },
		{ "CPP_Default_ScoreMethod", "KeepBest" },
		{ "DisplayName", "Set Leaderboard Score" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Set Leaderboard Score\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           appid of game\n@param        LeaderboardId           numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n@param        SteamId                         SteamId to set the score for\n@param        Score                           the score to set for this user\n@param        Details                         game-specific details for how the score was earned. Up to 256 bytes.\n@param        ScoreMethod                     update method to use. Can be \"KeepBest\" or \"ForceUpdate\"" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLeaderboardScoreAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLeaderboardScoreAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLeaderboardScoreAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ScoreMethod = { "ScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, ScoreMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers) < 2048);
// ********** End Function SetLeaderboardScoreAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore, nullptr, "SetLeaderboardScoreAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(uint8,Z_Param_Details);
	P_GET_PROPERTY(FStrProperty,Z_Param_ScoreMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionSetLeaderboardScore**)Z_Param__Result=USteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_LeaderboardId,Z_Param_SteamId,Z_Param_Score,Z_Param_Details,Z_Param_ScoreMethod);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionSetLeaderboardScore Function SetLeaderboardScoreAsync 

// ********** Begin Class USteamCoreWebAsyncActionSetLeaderboardScore ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore;
UClass* USteamCoreWebAsyncActionSetLeaderboardScore::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionSetLeaderboardScore;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionSetLeaderboardScore"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionSetLeaderboardScore,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister()
{
	return USteamCoreWebAsyncActionSetLeaderboardScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSetLeaderboardScore\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSetLeaderboardScore\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionSetLeaderboardScore constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionSetLeaderboardScore constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLeaderboardScoreAsync"), .Pointer = &USteamCoreWebAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync, "SetLeaderboardScoreAsync" }, // 2140366184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetLeaderboardScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::ClassParams = {
	&USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionSetLeaderboardScore::StaticRegisterNativesUSteamCoreWebAsyncActionSetLeaderboardScore()
{
	UClass* Class = USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore.OuterSingleton;
}
USteamCoreWebAsyncActionSetLeaderboardScore::USteamCoreWebAsyncActionSetLeaderboardScore() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionSetLeaderboardScore);
USteamCoreWebAsyncActionSetLeaderboardScore::~USteamCoreWebAsyncActionSetLeaderboardScore() {}
// ********** End Class USteamCoreWebAsyncActionSetLeaderboardScore ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionDeleteLeaderboard, USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass, TEXT("USteamCoreWebAsyncActionDeleteLeaderboard"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionDeleteLeaderboard), 1100973648U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard, USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("USteamCoreWebAsyncActionFindOrCreateLeaderboard"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFindOrCreateLeaderboard), 3322776958U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries, USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass, TEXT("USteamCoreWebAsyncActionGetLeaderboardEntries"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetLeaderboardEntries), 4020808911U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame, USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass, TEXT("USteamCoreWebAsyncActionGetLeaderboardsForGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetLeaderboardsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetLeaderboardsForGame), 3306075982U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionResetLeaderboard, USteamCoreWebAsyncActionResetLeaderboard::StaticClass, TEXT("USteamCoreWebAsyncActionResetLeaderboard"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionResetLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionResetLeaderboard), 358205096U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore, USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass, TEXT("USteamCoreWebAsyncActionSetLeaderboardScore"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetLeaderboardScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSetLeaderboardScore), 844852192U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_SteamCoreWeb_3374768315{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
