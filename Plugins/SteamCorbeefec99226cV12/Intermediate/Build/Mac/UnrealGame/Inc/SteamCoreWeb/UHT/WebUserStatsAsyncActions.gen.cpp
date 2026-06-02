// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/WebUserStatsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebUserStatsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForAppAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics
{
	struct SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString GameId;
		USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Retrieves the global achievement percentages for the specified app.\n\x09*\n\x09* @param\x09GameId\x09\x09GameID to retrieve the achievement percentages for\n\x09*/" },
		{ "DisplayName", "Get Global Achievement Percentages for App" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Retrieves the global achievement percentages for the specified app.\n\n@param        GameId          GameID to retrieve the achievement percentages for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalAchievementPercentagesForAppAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalAchievementPercentagesForAppAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalAchievementPercentagesForAppAsync Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, GameId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalAchievementPercentagesForAppAsync Property Definitions *********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, nullptr, "GetGlobalAchievementPercentagesForAppAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp**)Z_Param__Result=USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(Z_Param_WorldContextObject,Z_Param_GameId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForAppAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp ************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp;
UClass* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister()
{
	return USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGlobalAchievementPercentagesForAppAsync"), .Pointer = &USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync, "GetGlobalAchievementPercentagesForAppAsync" }, // 3614647160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp()
{
	UClass* Class = USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton;
}
USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp);
USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::~USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp() {}
// ********** End Class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp **************

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalStatsForGame Function GetGlobalStatsForGameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics
{
	struct SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		TArray<FString> Names;
		int32 StartDate;
		int32 EndDate;
		USteamCoreWebAsyncActionGetGlobalStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Retrieves the global stats percentages for the specified app.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09""AppID that we're getting global stats for\n\x09* @param\x09Names\x09\x09\x09Names of stat to get data for\n\x09* @param\x09StartDate\x09\x09Start date for daily totals (unix epoch timestamp)\n\x09* @param\x09""EndDate\x09\x09\x09""End date for daily totals (unix epoch timestamp)\n\x09*/" },
		{ "DisplayName", "Get Global Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Retrieves the global stats percentages for the specified app.\n\n@param        AppId                   AppID that we're getting global stats for\n@param        Names                   Names of stat to get data for\n@param        StartDate               Start date for daily totals (unix epoch timestamp)\n@param        EndDate                 End date for daily totals (unix epoch timestamp)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalStatsForGameAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalStatsForGameAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalStatsForGameAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, StartDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalStatsForGameAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame, nullptr, "GetGlobalStatsForGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetGlobalStatsForGame**)Z_Param__Result=USteamCoreWebAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_AppId,Z_Param_Names,Z_Param_StartDate,Z_Param_EndDate);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetGlobalStatsForGame Function GetGlobalStatsForGameAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalStatsForGame ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame;
UClass* USteamCoreWebAsyncActionGetGlobalStatsForGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetGlobalStatsForGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetGlobalStatsForGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalStatsForGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister()
{
	return USteamCoreWebAsyncActionGetGlobalStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetGlobalStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetGlobalStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetGlobalStatsForGame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetGlobalStatsForGame constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGlobalStatsForGameAsync"), .Pointer = &USteamCoreWebAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync, "GetGlobalStatsForGameAsync" }, // 3544291422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetGlobalStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalStatsForGame()
{
	UClass* Class = USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame.OuterSingleton;
}
USteamCoreWebAsyncActionGetGlobalStatsForGame::USteamCoreWebAsyncActionGetGlobalStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetGlobalStatsForGame);
USteamCoreWebAsyncActionGetGlobalStatsForGame::~USteamCoreWebAsyncActionGetGlobalStatsForGame() {}
// ********** End Class USteamCoreWebAsyncActionGetGlobalStatsForGame ******************************

// ********** Begin Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics
{
	struct SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets the total number of players currently active in the specified app on Steam.\n\x09*\n\x09* Note that this will not return players that are playing while not connected to Steam.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09""AppID that we're getting user count for\n\x09*/" },
		{ "DisplayName", "Get Number of Current Players" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets the total number of players currently active in the specified app on Steam.\n\nNote that this will not return players that are playing while not connected to Steam.\n\n@param        AppId                   AppID that we're getting user count for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfCurrentPlayersAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfCurrentPlayersAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfCurrentPlayersAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers) < 2048);
// ********** End Function GetNumberOfCurrentPlayersAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayersAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::SteamCoreWebAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers**)Z_Param__Result=USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(Z_Param_WorldContextObject,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers;
UClass* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetNumberOfCurrentPlayers;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetNumberOfCurrentPlayers"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetNumberOfCurrentPlayers,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_NoRegister()
{
	return USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNumberOfCurrentPlayers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNumberOfCurrentPlayers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNumberOfCurrentPlayersAsync"), .Pointer = &USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync, "GetNumberOfCurrentPlayersAsync" }, // 1299827669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNumberOfCurrentPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticRegisterNativesUSteamCoreWebAsyncActionGetNumberOfCurrentPlayers()
{
	UClass* Class = USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.OuterSingleton;
}
USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::USteamCoreWebAsyncActionGetNumberOfCurrentPlayers() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetNumberOfCurrentPlayers);
USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::~USteamCoreWebAsyncActionGetNumberOfCurrentPlayers() {}
// ********** End Class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers **************************

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerAchievements Function GetPlayerAchievementsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString language;
		USteamCoreWebAsyncActionGetPlayerAchievements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets the list of achievements the specified user has unlocked in an app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamId of user\n\x09* @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_language", "english" },
		{ "DisplayName", "Get Player Achievements" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets the list of achievements the specified user has unlocked in an app.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamId of user\n@param        AppId                   AppID to get achievements for\n@param        language                Language to return strings for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerAchievementsAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerAchievementsAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerAchievementsAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerAchievementsAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements, nullptr, "GetPlayerAchievementsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::SteamCoreWebAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPlayerAchievements::execGetPlayerAchievementsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetPlayerAchievements**)Z_Param__Result=USteamCoreWebAsyncActionGetPlayerAchievements::GetPlayerAchievementsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetPlayerAchievements Function GetPlayerAchievementsAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerAchievements ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements;
UClass* USteamCoreWebAsyncActionGetPlayerAchievements::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPlayerAchievements;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPlayerAchievements"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerAchievements,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_NoRegister()
{
	return USteamCoreWebAsyncActionGetPlayerAchievements::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPlayerAchievements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPlayerAchievements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerAchievements constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetPlayerAchievements constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayerAchievementsAsync"), .Pointer = &USteamCoreWebAsyncActionGetPlayerAchievements::execGetPlayerAchievementsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync, "GetPlayerAchievementsAsync" }, // 467634280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPlayerAchievements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPlayerAchievements::StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerAchievements()
{
	UClass* Class = USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements.OuterSingleton;
}
USteamCoreWebAsyncActionGetPlayerAchievements::USteamCoreWebAsyncActionGetPlayerAchievements() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPlayerAchievements);
USteamCoreWebAsyncActionGetPlayerAchievements::~USteamCoreWebAsyncActionGetPlayerAchievements() {}
// ********** End Class USteamCoreWebAsyncActionGetPlayerAchievements ******************************

// ********** Begin Class USteamCoreWebAsyncActionGetSchemaForGame Function GetSchemaForGameAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics
{
	struct SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString language;
		USteamCoreWebAsyncActionGetSchemaForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets the complete list of stats and achievements for the specified game.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_language", "english" },
		{ "DisplayName", "Get Schema for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets the complete list of stats and achievements for the specified game.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        AppId                   AppID to get achievements for\n@param        language                Language to return strings for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSchemaForGameAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSchemaForGameAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSchemaForGameAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers) < 2048);
// ********** End Function GetSchemaForGameAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame, nullptr, "GetSchemaForGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::SteamCoreWebAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetSchemaForGame::execGetSchemaForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetSchemaForGame**)Z_Param__Result=USteamCoreWebAsyncActionGetSchemaForGame::GetSchemaForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetSchemaForGame Function GetSchemaForGameAsync ****

// ********** Begin Class USteamCoreWebAsyncActionGetSchemaForGame *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame;
UClass* USteamCoreWebAsyncActionGetSchemaForGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetSchemaForGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetSchemaForGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetSchemaForGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_NoRegister()
{
	return USteamCoreWebAsyncActionGetSchemaForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetSchemaForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetSchemaForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetSchemaForGame constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionGetSchemaForGame constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSchemaForGameAsync"), .Pointer = &USteamCoreWebAsyncActionGetSchemaForGame::execGetSchemaForGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync, "GetSchemaForGameAsync" }, // 1470174380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetSchemaForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetSchemaForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetSchemaForGame::StaticRegisterNativesUSteamCoreWebAsyncActionGetSchemaForGame()
{
	UClass* Class = USteamCoreWebAsyncActionGetSchemaForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame.OuterSingleton;
}
USteamCoreWebAsyncActionGetSchemaForGame::USteamCoreWebAsyncActionGetSchemaForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetSchemaForGame);
USteamCoreWebAsyncActionGetSchemaForGame::~USteamCoreWebAsyncActionGetSchemaForGame() {}
// ********** End Class USteamCoreWebAsyncActionGetSchemaForGame ***********************************

// ********** Begin Class USteamCoreWebAsyncActionGetUserStatsForGame Function GetUserStatsForGameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionGetUserStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets the list of stats that the specified user has set in an app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamId of user\n\x09* @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09*/" },
		{ "DisplayName", "Get User Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets the list of stats that the specified user has set in an app.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamId of user\n@param        AppId                   AppID to get achievements for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserStatsForGameAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserStatsForGameAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserStatsForGameAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUserStatsForGameAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame, nullptr, "GetUserStatsForGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::SteamCoreWebAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUserStatsForGame::execGetUserStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetUserStatsForGame**)Z_Param__Result=USteamCoreWebAsyncActionGetUserStatsForGame::GetUserStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetUserStatsForGame Function GetUserStatsForGameAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetUserStatsForGame ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame;
UClass* USteamCoreWebAsyncActionGetUserStatsForGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUserStatsForGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUserStatsForGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUserStatsForGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_NoRegister()
{
	return USteamCoreWebAsyncActionGetUserStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUserStatsForGame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetUserStatsForGame constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserStatsForGameAsync"), .Pointer = &USteamCoreWebAsyncActionGetUserStatsForGame::execGetUserStatsForGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync, "GetUserStatsForGameAsync" }, // 3285249920
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUserStatsForGame::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserStatsForGame()
{
	UClass* Class = USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame.OuterSingleton;
}
USteamCoreWebAsyncActionGetUserStatsForGame::USteamCoreWebAsyncActionGetUserStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUserStatsForGame);
USteamCoreWebAsyncActionGetUserStatsForGame::~USteamCoreWebAsyncActionGetUserStatsForGame() {}
// ********** End Class USteamCoreWebAsyncActionGetUserStatsForGame ********************************

// ********** Begin Class USteamCoreWebAsyncActionSetUserStatsForGame Function SetUserStatsForGameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics
{
	struct SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		TArray<FString> Names;
		TArray<int32> Values;
		USteamCoreWebAsyncActionSetUserStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|UserStats|Async" },
		{ "Comment", "/**\n\x09* Sets a stat for the specified user for the game.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamId of user\n\x09* @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09Names\x09\x09\x09Names of stat or achievement to set\n\x09* @param\x09Values\x09\x09\x09Values to set\n\x09*/" },
		{ "DisplayName", "Set User Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "Sets a stat for the specified user for the game.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamId of user\n@param        AppId                   AppID to get achievements for\n@param        Names                   Names of stat or achievement to set\n@param        Values                  Values to set" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserStatsForGameAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserStatsForGameAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserStatsForGameAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers) < 2048);
// ********** End Function SetUserStatsForGameAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame, nullptr, "SetUserStatsForGameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::SteamCoreWebAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionSetUserStatsForGame::execSetUserStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_TARRAY(int32,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionSetUserStatsForGame**)Z_Param__Result=USteamCoreWebAsyncActionSetUserStatsForGame::SetUserStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_Names,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionSetUserStatsForGame Function SetUserStatsForGameAsync 

// ********** Begin Class USteamCoreWebAsyncActionSetUserStatsForGame ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame;
UClass* USteamCoreWebAsyncActionSetUserStatsForGame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionSetUserStatsForGame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionSetUserStatsForGame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionSetUserStatsForGame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_NoRegister()
{
	return USteamCoreWebAsyncActionSetUserStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSetUserStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSetUserStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionSetUserStatsForGame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionSetUserStatsForGame constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetUserStatsForGameAsync"), .Pointer = &USteamCoreWebAsyncActionSetUserStatsForGame::execSetUserStatsForGameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync, "SetUserStatsForGameAsync" }, // 1930925046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetUserStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionSetUserStatsForGame::StaticRegisterNativesUSteamCoreWebAsyncActionSetUserStatsForGame()
{
	UClass* Class = USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame.OuterSingleton;
}
USteamCoreWebAsyncActionSetUserStatsForGame::USteamCoreWebAsyncActionSetUserStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionSetUserStatsForGame);
USteamCoreWebAsyncActionSetUserStatsForGame::~USteamCoreWebAsyncActionSetUserStatsForGame() {}
// ********** End Class USteamCoreWebAsyncActionSetUserStatsForGame ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass, TEXT("USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp), 3183440264U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame, USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass, TEXT("USteamCoreWebAsyncActionGetGlobalStatsForGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetGlobalStatsForGame), 1864358173U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass, TEXT("USteamCoreWebAsyncActionGetNumberOfCurrentPlayers"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers), 2246793743U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerAchievements, USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass, TEXT("USteamCoreWebAsyncActionGetPlayerAchievements"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPlayerAchievements), 407601925U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetSchemaForGame, USteamCoreWebAsyncActionGetSchemaForGame::StaticClass, TEXT("USteamCoreWebAsyncActionGetSchemaForGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSchemaForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetSchemaForGame), 3730382654U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserStatsForGame, USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserStatsForGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserStatsForGame), 1786188227U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSetUserStatsForGame, USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass, TEXT("USteamCoreWebAsyncActionSetUserStatsForGame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUserStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSetUserStatsForGame), 3417319344U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_SteamCoreWeb_3587798487{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
