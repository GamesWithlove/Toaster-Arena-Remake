// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakDownloader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePakDownloader() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
PAKLOADER_API UClass* Z_Construct_UClass_UAsyncPakDownloader();
PAKLOADER_API UClass* Z_Construct_UClass_UAsyncPakDownloader_NoRegister();
PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PakLoader();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDownloadPakDelegate **************************************************
struct Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics
{
	struct _Script_PakLoader_eventDownloadPakDelegate_Parms
	{
		int32 HttpResponseCode;
		int64 ContentLength;
		FString SavePath;
		int64 BytesReceived;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FDownloadPakDelegate constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_HttpResponseCode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContentLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FDownloadPakDelegate constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FDownloadPakDelegate Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode = { "HttpResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, HttpResponseCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, ContentLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventDownloadPakDelegate_Parms, BytesReceived), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_ContentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::NewProp_BytesReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FDownloadPakDelegate Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "DownloadPakDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::_Script_PakLoader_eventDownloadPakDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::_Script_PakLoader_eventDownloadPakDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadPakDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadPakDelegate, int32 HttpResponseCode, int64 ContentLength, const FString& SavePath, int64 BytesReceived)
{
	struct _Script_PakLoader_eventDownloadPakDelegate_Parms
	{
		int32 HttpResponseCode;
		int64 ContentLength;
		FString SavePath;
		int64 BytesReceived;
	};
	_Script_PakLoader_eventDownloadPakDelegate_Parms Parms;
	Parms.HttpResponseCode=HttpResponseCode;
	Parms.ContentLength=ContentLength;
	Parms.SavePath=SavePath;
	Parms.BytesReceived=BytesReceived;
	DownloadPakDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDownloadPakDelegate ****************************************************

// ********** Begin Class UAsyncPakDownloader Function DownloadPak *********************************
struct Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics
{
	struct AsyncPakDownloader_eventDownloadPak_Parms
	{
		FString URL;
		FString SavePath;
		UAsyncPakDownloader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PakLoader|Download" },
		{ "Comment", "/*\n\x09\x09""Downloads a file over HTTP, intended to be used to download .pak files.\n\x09\x09SavePath: Directory or path where to save the file. This is passed in OnSuccess callbacks too.\n\x09\x09HttpResponseCode: HTTP response code in OnSuccess and OnFail callbacks.\n\x09\x09""ContentLength: Total bytes downloaded in OnSuccess callback.\n\x09\x09""BytesReceived: Number of bytes received so far in OnProgress callback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
		{ "ToolTip", "Downloads a file over HTTP, intended to be used to download .pak files.\nSavePath: Directory or path where to save the file. This is passed in OnSuccess callbacks too.\nHttpResponseCode: HTTP response code in OnSuccess and OnFail callbacks.\nContentLength: Total bytes downloaded in OnSuccess callback.\nBytesReceived: Number of bytes received so far in OnProgress callback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadPak constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadPak constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadPak Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPakDownloader_eventDownloadPak_Parms, ReturnValue), Z_Construct_UClass_UAsyncPakDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers) < 2048);
// ********** End Function DownloadPak Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncPakDownloader, nullptr, "DownloadPak", 	Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::AsyncPakDownloader_eventDownloadPak_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::AsyncPakDownloader_eventDownloadPak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UAsyncPakDownloader Function DownloadPak ***********************************

// ********** Begin Class UAsyncPakDownloader ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncPakDownloader;
UClass* UAsyncPakDownloader::GetPrivateStaticClass()
{
	using TClass = UAsyncPakDownloader;
	if (!Z_Registration_Info_UClass_UAsyncPakDownloader.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsyncPakDownloader"),
			Z_Registration_Info_UClass_UAsyncPakDownloader.InnerSingleton,
			StaticRegisterNativesUAsyncPakDownloader,
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
	return Z_Registration_Info_UClass_UAsyncPakDownloader.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncPakDownloader_NoRegister()
{
	return UAsyncPakDownloader::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncPakDownloader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PakDownloader.h" },
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/PakDownloader.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAsyncPakDownloader constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAsyncPakDownloader constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadPak"), .Pointer = &UAsyncPakDownloader::execDownloadPak },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncPakDownloader_DownloadPak, "DownloadPak" }, // 3427687469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPakDownloader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAsyncPakDownloader_Statics

// ********** Begin Class UAsyncPakDownloader Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPakDownloader, OnSuccess), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4079074211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPakDownloader, OnFail), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 4079074211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPakDownloader, OnProgress), Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 4079074211
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPakDownloader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPakDownloader_Statics::NewProp_OnProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::PropPointers) < 2048);
// ********** End Class UAsyncPakDownloader Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UAsyncPakDownloader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPakDownloader_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncPakDownloader_Statics::Class_MetaDataParams)
};
void UAsyncPakDownloader::StaticRegisterNativesUAsyncPakDownloader()
{
	UClass* Class = UAsyncPakDownloader::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAsyncPakDownloader_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAsyncPakDownloader()
{
	if (!Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton, Z_Construct_UClass_UAsyncPakDownloader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncPakDownloader.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAsyncPakDownloader);
UAsyncPakDownloader::~UAsyncPakDownloader() {}
// ********** End Class UAsyncPakDownloader ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h__Script_PakLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPakDownloader, UAsyncPakDownloader::StaticClass, TEXT("UAsyncPakDownloader"), &Z_Registration_Info_UClass_UAsyncPakDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPakDownloader), 2690174942U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h__Script_PakLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h__Script_PakLoader_1074295543{
	TEXT("/Script/PakLoader"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h__Script_PakLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h__Script_PakLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
