// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamNews/WebSteamNews.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamNews() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForAppAuthed)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
		P_GET_TARRAY(FString,Z_Param_Feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForAppAuthed(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
		P_GET_TARRAY(FString,Z_Param_Feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppId,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
		P_NATIVE_END;
	}
	void UWebSteamNews::StaticRegisterNativesUWebSteamNews()
	{
		UClass* Class = UWebSteamNews::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForApp", &UWebSteamNews::execGetNewsForApp },
			{ "GetNewsForAppAuthed", &UWebSteamNews::execGetNewsForAppAuthed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics
	{
		struct WebSteamNews_eventGetNewsForApp_Parms
		{
			FScriptDelegate Callback;
			int32 AppId;
			int32 MaxLength;
			TArray<FString> Feeds;
			int32 EndDate;
			int32 Count;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, MaxLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, EndDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_MaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Feeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Feeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_EndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "Category", "SteamCoreWeb|SteamNews" },
		{ "Comment", "/**\n\x09* Get the news for the specified app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
		{ "ToolTip", "Get the news for the specified app.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   AppID to retrieve news for\n@param        MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        Feeds                   # of posts to retrieve (default 20)\n@param        Count                   List of feed names to return news for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::WebSteamNews_eventGetNewsForApp_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics
	{
		struct WebSteamNews_eventGetNewsForAppAuthed_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 MaxLength;
			TArray<FString> Feeds;
			int32 EndDate;
			int32 Count;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, MaxLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, EndDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_MaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Feeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Feeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_EndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "Category", "SteamCoreWeb|SteamNews" },
		{ "Comment", "/**\n\x09* Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
		{ "ToolTip", "Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppID                   AppID to retrieve news for\n@param        MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        Feeds                   # of posts to retrieve (default 20)\n@param        Count                   List of feed names to return news for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForAppAuthed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::WebSteamNews_eventGetNewsForAppAuthed_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSteamNews);
	UClass* Z_Construct_UClass_UWebSteamNews_NoRegister()
	{
		return UWebSteamNews::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamNews_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamNews_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamNews_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForApp, "GetNewsForApp" }, // 634343713
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed, "GetNewsForAppAuthed" }, // 3355694248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNews/WebSteamNews.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamNews_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamNews>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamNews_Statics::ClassParams = {
		&UWebSteamNews::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamNews()
	{
		if (!Z_Registration_Info_UClass_UWebSteamNews.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamNews.OuterSingleton, Z_Construct_UClass_UWebSteamNews_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSteamNews.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamNews>()
	{
		return UWebSteamNews::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamNews);
	UWebSteamNews::~UWebSteamNews() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamNews, UWebSteamNews::StaticClass, TEXT("UWebSteamNews"), &Z_Registration_Info_UClass_UWebSteamNews, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamNews), 3982099930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_3068811676(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamNews_WebSteamNews_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
