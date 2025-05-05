// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamNews/WebSteamNewsAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamNewsAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
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
	void USteamCoreWebAsyncActionGetNewsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForApp()
	{
		UClass* Class = USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForAppAsync", &USteamCoreWebAsyncActionGetNewsForApp::execGetNewsForAppAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, MaxLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, EndDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, nullptr, "GetNewsForAppAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetNewsForApp);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister()
	{
		return USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync, "GetNewsForAppAsync" }, // 1426705040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForApp>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetNewsForApp>()
	{
		return USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
	}
	USteamCoreWebAsyncActionGetNewsForApp::USteamCoreWebAsyncActionGetNewsForApp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetNewsForApp);
	USteamCoreWebAsyncActionGetNewsForApp::~USteamCoreWebAsyncActionGetNewsForApp() {}
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
	void USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForAppAuthed()
	{
		UClass* Class = USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForAppAuthedAsync", &USteamCoreWebAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, MaxLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, EndDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, nullptr, "GetNewsForAppAuthedAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetNewsForAppAuthed);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister()
	{
		return USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync, "GetNewsForAppAuthedAsync" }, // 3938843284
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForAppAuthed\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForAppAuthed\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForAppAuthed>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetNewsForAppAuthed>()
	{
		return USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
	}
	USteamCoreWebAsyncActionGetNewsForAppAuthed::USteamCoreWebAsyncActionGetNewsForAppAuthed() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetNewsForAppAuthed);
	USteamCoreWebAsyncActionGetNewsForAppAuthed::~USteamCoreWebAsyncActionGetNewsForAppAuthed() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, USteamCoreWebAsyncActionGetNewsForApp::StaticClass, TEXT("USteamCoreWebAsyncActionGetNewsForApp"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetNewsForApp), 220149914U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass, TEXT("USteamCoreWebAsyncActionGetNewsForAppAuthed"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetNewsForAppAuthed), 1634511859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h_2986109492(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNewsAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
