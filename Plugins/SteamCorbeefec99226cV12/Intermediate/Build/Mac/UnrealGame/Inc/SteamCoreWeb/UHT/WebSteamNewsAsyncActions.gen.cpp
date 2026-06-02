// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamNews/WebSteamNewsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamNewsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForApp Function GetNewsForAppAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics
{
	struct SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		int32 MaxLength;
		TArray<FString> Feeds;
		int32 EndDate;
		int32 Count;
		USteamCoreWebAsyncActionGetNewsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get the news for the specified app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppId\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "DisplayName", "Get News for App" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "Get the news for the specified app.\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        AppId                   AppID to retrieve news for\n@param        MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        Feeds                   # of posts to retrieve (default 20)\n@param        Count                   List of feed names to return news for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNewsForAppAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNewsForAppAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNewsForAppAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, MaxLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers) < 2048);
// ********** End Function GetNewsForAppAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, nullptr, "GetNewsForAppAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNewsForApp::execGetNewsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
	P_GET_TARRAY(FString,Z_Param_Feeds);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetNewsForApp**)Z_Param__Result=USteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(Z_Param_WorldContextObject,Z_Param_AppId,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetNewsForApp Function GetNewsForAppAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForApp ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp;
UClass* USteamCoreWebAsyncActionGetNewsForApp::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetNewsForApp;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetNewsForApp"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForApp,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister()
{
	return USteamCoreWebAsyncActionGetNewsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForApp constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetNewsForApp constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNewsForAppAsync"), .Pointer = &USteamCoreWebAsyncActionGetNewsForApp::execGetNewsForAppAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync, "GetNewsForAppAsync" }, // 3225570979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetNewsForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetNewsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForApp()
{
	UClass* Class = USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton;
}
USteamCoreWebAsyncActionGetNewsForApp::USteamCoreWebAsyncActionGetNewsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetNewsForApp);
USteamCoreWebAsyncActionGetNewsForApp::~USteamCoreWebAsyncActionGetNewsForApp() {}
// ********** End Class USteamCoreWebAsyncActionGetNewsForApp **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForAppAuthed Function GetNewsForAppAuthedAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics
{
	struct SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 MaxLength;
		TArray<FString> Feeds;
		int32 EndDate;
		int32 Count;
		USteamCoreWebAsyncActionGetNewsForAppAuthed* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppId\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "DisplayName", "Get News for App Authed" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        AppId                   AppID to retrieve news for\n@param        MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        Feeds                   # of posts to retrieve (default 20)\n@param        Count                   List of feed names to return news for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNewsForAppAuthedAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNewsForAppAuthedAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNewsForAppAuthedAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, MaxLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers) < 2048);
// ********** End Function GetNewsForAppAuthedAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, nullptr, "GetNewsForAppAuthedAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
	P_GET_TARRAY(FString,Z_Param_Feeds);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetNewsForAppAuthed**)Z_Param__Result=USteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetNewsForAppAuthed Function GetNewsForAppAuthedAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForAppAuthed ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed;
UClass* USteamCoreWebAsyncActionGetNewsForAppAuthed::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetNewsForAppAuthed;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetNewsForAppAuthed"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForAppAuthed,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister()
{
	return USteamCoreWebAsyncActionGetNewsForAppAuthed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForAppAuthed\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForAppAuthed\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetNewsForAppAuthed constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetNewsForAppAuthed constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNewsForAppAuthedAsync"), .Pointer = &USteamCoreWebAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync, "GetNewsForAppAuthedAsync" }, // 98794886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForAppAuthed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForAppAuthed()
{
	UClass* Class = USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton;
}
USteamCoreWebAsyncActionGetNewsForAppAuthed::USteamCoreWebAsyncActionGetNewsForAppAuthed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetNewsForAppAuthed);
USteamCoreWebAsyncActionGetNewsForAppAuthed::~USteamCoreWebAsyncActionGetNewsForAppAuthed() {}
// ********** End Class USteamCoreWebAsyncActionGetNewsForAppAuthed ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, USteamCoreWebAsyncActionGetNewsForApp::StaticClass, TEXT("USteamCoreWebAsyncActionGetNewsForApp"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetNewsForApp), 364588291U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass, TEXT("USteamCoreWebAsyncActionGetNewsForAppAuthed"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetNewsForAppAuthed), 2245047812U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_SteamCoreWeb_4029589200{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
