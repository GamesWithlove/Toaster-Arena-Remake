// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakLoader/Public/PakDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakDownloader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	PAKLOADER_API UClass* Z_Construct_UClass_UAsyncPakDownloader();
	PAKLOADER_API UClass* Z_Construct_UClass_UAsyncPakDownloader_NoRegister();
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PakLoader();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics
	{
		struct _Script_PakLoader_eventDownloadPakDelegate_Parms
		{
			int32 HttpResponseCode;
			int32 ContentLength;
			FString SavePath;
			int32 BytesReceived;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HttpResponseCode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode = { "HttpResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, HttpResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, ContentLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, SavePath), METADATA_PARAMS(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_ContentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_BytesReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "DownloadPakDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::_Script_PakLoader_eventDownloadPakDelegate_Parms), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDownloadPakDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadPakDelegate, int32 HttpResponseCode, int32 ContentLength, const FString& SavePath, int32 BytesReceived)
{
	struct _Script_PakLoader_eventDownloadPakDelegate_Parms
	{
		int32 HttpResponseCode;
		int32 ContentLength;
		FString SavePath;
		int32 BytesReceived;
	};
	_Script_PakLoader_eventDownloadPakDelegate_Parms Parms;
	Parms.HttpResponseCode=HttpResponseCode;
	Parms.ContentLength=ContentLength;
	Parms.SavePath=SavePath;
	Parms.BytesReceived=BytesReceived;
	DownloadPakDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncPakDownloader::execDownloadPak)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncPakDownloader**)Z_Param__Result=UAsyncPakDownloader::DownloadPak(Z_Param_URL,Z_Param_SavePath);
		P_NATIVE_END;
	}
	void UAsyncPakDownloader::StaticRegisterNativesUAsyncPakDownloader()
	{
		UClass* Class = UAsyncPakDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadPak", &UAsyncPakDownloader::execDownloadPak },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics
	{
		struct AsyncPakDownloader_eventDownloadPak_Parms
		{
			FString URL;
			FString SavePath;
			UAsyncPakDownloader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, SavePath), METADATA_PARAMS(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, ReturnValue), Z_Construct_UClass_UAsyncPakDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PakLoader|Download" },
		{ "Comment", "/*\n\x09\x09""Downloads a file over HTTP, intended to be used to download .pak files.\n\x09\x09SavePath: Directory or path where to save the file. This is passed in OnSuccess callbacks too.\n\x09\x09HttpResponseCode: HTTP response code in OnSuccess and OnFail callbacks.\n\x09\x09""ContentLength: Total bytes downloaded in OnSuccess callback.\n\x09\x09""BytesReceived: Number of bytes received so far in OnProgress callback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
		{ "ToolTip", "Downloads a file over HTTP, intended to be used to download .pak files.\nSavePath: Directory or path where to save the file. This is passed in OnSuccess callbacks too.\nHttpResponseCode: HTTP response code in OnSuccess and OnFail callbacks.\nContentLength: Total bytes downloaded in OnSuccess callback.\nBytesReceived: Number of bytes received so far in OnProgress callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPakDownloader, nullptr, "DownloadPak", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::AsyncPakDownloader_eventDownloadPak_Parms), Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncPakDownloader);
	UClass* Z_Construct_UClass_UAsyncPakDownloader_NoRegister()
	{
		return UAsyncPakDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncPakDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncPakDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncPakDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak, "DownloadPak" }, // 620113558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPakDownloader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PakDownloader.h" },
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPakDownloader, OnSuccess), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess_MetaData)) }; // 2466967125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPakDownloader, OnFail), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail_MetaData)) }; // 2466967125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPakDownloader, OnProgress), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress_MetaData)) }; // 2466967125
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPakDownloader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncPakDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPakDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncPakDownloader_Statics::ClassParams = {
		&UAsyncPakDownloader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncPakDownloader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncPakDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncPakDownloader()
	{
		if (!Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton, Z_Construct_UClass_UAsyncPakDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton;
	}
	template<> PAKLOADER_API UClass* StaticClass<UAsyncPakDownloader>()
	{
		return UAsyncPakDownloader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncPakDownloader);
	UAsyncPakDownloader::~UAsyncPakDownloader() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPakDownloader, UAsyncPakDownloader::StaticClass, TEXT("UAsyncPakDownloader"), &Z_Registration_Info_UClass_UAsyncPakDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPakDownloader), 493524367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_4162970585(TEXT("/Script/PakLoader"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
