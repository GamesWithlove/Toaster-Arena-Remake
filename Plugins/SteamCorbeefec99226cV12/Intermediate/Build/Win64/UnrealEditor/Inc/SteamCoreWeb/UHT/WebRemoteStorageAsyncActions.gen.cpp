// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemoteStorage/WebRemoteStorageAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorageAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles Function EnumerateUserPublishedFilesAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics
{
	struct SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionEnumerateUserPublishedFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enumerate User Published Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09*/" },
#endif
		{ "DisplayName", "Enumerate User Published Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerate User Published Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateUserPublishedFilesAsync constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateUserPublishedFilesAsync constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateUserPublishedFilesAsync Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers) < 2048);
// ********** End Function EnumerateUserPublishedFilesAsync Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, nullptr, "EnumerateUserPublishedFilesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionEnumerateUserPublishedFiles::execEnumerateUserPublishedFilesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionEnumerateUserPublishedFiles**)Z_Param__Result=USteamCoreWebAsyncActionEnumerateUserPublishedFiles::EnumerateUserPublishedFilesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles Function EnumerateUserPublishedFilesAsync 

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles **********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles;
UClass* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionEnumerateUserPublishedFiles;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionEnumerateUserPublishedFiles"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserPublishedFiles,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_NoRegister()
{
	return USteamCoreWebAsyncActionEnumerateUserPublishedFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEnumerateUserPublishedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEnumerateUserPublishedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateUserPublishedFilesAsync"), .Pointer = &USteamCoreWebAsyncActionEnumerateUserPublishedFiles::execEnumerateUserPublishedFilesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync, "EnumerateUserPublishedFilesAsync" }, // 1767955431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateUserPublishedFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::ClassParams = {
	&USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserPublishedFiles()
{
	UClass* Class = USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton;
}
USteamCoreWebAsyncActionEnumerateUserPublishedFiles::USteamCoreWebAsyncActionEnumerateUserPublishedFiles() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionEnumerateUserPublishedFiles);
USteamCoreWebAsyncActionEnumerateUserPublishedFiles::~USteamCoreWebAsyncActionEnumerateUserPublishedFiles() {}
// ********** End Class USteamCoreWebAsyncActionEnumerateUserPublishedFiles ************************

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles Function EnumerateUserSubscribedFilesAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics
{
	struct SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 ListType;
		USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enumerate User Subscribed Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09* @param\x09ListType\x09""EUCMListType\n\x09*/" },
#endif
		{ "DisplayName", "Enumerate User Subscribed Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product\n@param        ListType        EUCMListType" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateUserSubscribedFilesAsync constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateUserSubscribedFilesAsync constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateUserSubscribedFilesAsync Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ListType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers) < 2048);
// ********** End Function EnumerateUserSubscribedFilesAsync Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, nullptr, "EnumerateUserSubscribedFilesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::execEnumerateUserSubscribedFilesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles**)Z_Param__Result=USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::EnumerateUserSubscribedFilesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ListType);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles Function EnumerateUserSubscribedFilesAsync 

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles *********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles;
UClass* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionEnumerateUserSubscribedFiles;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionEnumerateUserSubscribedFiles"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserSubscribedFiles,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_NoRegister()
{
	return USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEnumerateUserSubscribedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEnumerateUserSubscribedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateUserSubscribedFilesAsync"), .Pointer = &USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::execEnumerateUserSubscribedFilesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync, "EnumerateUserSubscribedFilesAsync" }, // 4276984876
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateUserSubscribedFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::ClassParams = {
	&USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserSubscribedFiles()
{
	UClass* Class = USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton;
}
USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::USteamCoreWebAsyncActionEnumerateUserSubscribedFiles() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionEnumerateUserSubscribedFiles);
USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::~USteamCoreWebAsyncActionEnumerateUserSubscribedFiles() {}
// ********** End Class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles ***********************

// ********** Begin Class USteamCoreWebAsyncActionGetCollectionDetails Function GetCollectionDetailsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> PublishedFileIds;
		USteamCoreWebAsyncActionGetCollectionDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09PublishedFileIds\x09\x09""collection ids to get the details for\n\x09*/" },
#endif
		{ "DisplayName", "Get Collection Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Collection Details\n\n@param        PublishedFileIds                collection ids to get the details for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollectionDetailsAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollectionDetailsAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollectionDetailsAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetCollectionDetailsAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails, nullptr, "GetCollectionDetailsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetCollectionDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetCollectionDetails Function GetCollectionDetailsAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetCollectionDetails *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails;
UClass* USteamCoreWebAsyncActionGetCollectionDetails::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetCollectionDetails;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetCollectionDetails"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetCollectionDetails,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_NoRegister()
{
	return USteamCoreWebAsyncActionGetCollectionDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCollectionDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCollectionDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetCollectionDetails constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetCollectionDetails constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCollectionDetailsAsync"), .Pointer = &USteamCoreWebAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync, "GetCollectionDetailsAsync" }, // 1630918353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCollectionDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetCollectionDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetCollectionDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetCollectionDetails()
{
	UClass* Class = USteamCoreWebAsyncActionGetCollectionDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton;
}
USteamCoreWebAsyncActionGetCollectionDetails::USteamCoreWebAsyncActionGetCollectionDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetCollectionDetails);
USteamCoreWebAsyncActionGetCollectionDetails::~USteamCoreWebAsyncActionGetCollectionDetails() {}
// ********** End Class USteamCoreWebAsyncActionGetCollectionDetails *******************************

// ********** Begin Class USteamCoreWebAsyncActionGetPublishedFileDetails Function GetPublishedFileDetailsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString PublishedFileIds;
		USteamCoreWebAsyncActionGetPublishedFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
#endif
		{ "DisplayName", "Get Published File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublishedFileDetailsAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublishedFileDetailsAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublishedFileDetailsAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPublishedFileDetailsAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, nullptr, "GetPublishedFileDetailsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetPublishedFileDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetPublishedFileDetails Function GetPublishedFileDetailsAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetPublishedFileDetails **************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails;
UClass* USteamCoreWebAsyncActionGetPublishedFileDetails::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPublishedFileDetails;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPublishedFileDetails"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPublishedFileDetails,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_NoRegister()
{
	return USteamCoreWebAsyncActionGetPublishedFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublishedFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublishedFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPublishedFileDetails constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetPublishedFileDetails constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPublishedFileDetailsAsync"), .Pointer = &USteamCoreWebAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync, "GetPublishedFileDetailsAsync" }, // 904059504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublishedFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPublishedFileDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublishedFileDetails()
{
	UClass* Class = USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton;
}
USteamCoreWebAsyncActionGetPublishedFileDetails::USteamCoreWebAsyncActionGetPublishedFileDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPublishedFileDetails);
USteamCoreWebAsyncActionGetPublishedFileDetails::~USteamCoreWebAsyncActionGetPublishedFileDetails() {}
// ********** End Class USteamCoreWebAsyncActionGetPublishedFileDetails ****************************

// ********** Begin Class USteamCoreWebAsyncActionGetUGCFileDetails Function GetUGCFileDetailsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
		USteamCoreWebAsyncActionGetUGCFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get UGC File Details\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09*/" },
#endif
		{ "DisplayName", "Get UGC File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get UGC File Details\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCFileDetailsAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCFileDetailsAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCFileDetailsAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUGCFileDetailsAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, nullptr, "GetUGCFileDetailsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUGCFileDetails::execGetUGCFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetUGCFileDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetUGCFileDetails::GetUGCFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetUGCFileDetails Function GetUGCFileDetailsAsync **

// ********** Begin Class USteamCoreWebAsyncActionGetUGCFileDetails ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails;
UClass* USteamCoreWebAsyncActionGetUGCFileDetails::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUGCFileDetails;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUGCFileDetails"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUGCFileDetails,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_NoRegister()
{
	return USteamCoreWebAsyncActionGetUGCFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUGCFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUGCFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUGCFileDetails constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetUGCFileDetails constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUGCFileDetailsAsync"), .Pointer = &USteamCoreWebAsyncActionGetUGCFileDetails::execGetUGCFileDetailsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync, "GetUGCFileDetailsAsync" }, // 464236791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUGCFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUGCFileDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetUGCFileDetails()
{
	UClass* Class = USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton;
}
USteamCoreWebAsyncActionGetUGCFileDetails::USteamCoreWebAsyncActionGetUGCFileDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUGCFileDetails);
USteamCoreWebAsyncActionGetUGCFileDetails::~USteamCoreWebAsyncActionGetUGCFileDetails() {}
// ********** End Class USteamCoreWebAsyncActionGetUGCFileDetails **********************************

// ********** Begin Class USteamCoreWebAsyncActionSetUGCUsedByGC Function SetUGCUsedByGCAsync ******
struct Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics
{
	struct SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
		bool bUsed;
		USteamCoreWebAsyncActionSetUGCUsedByGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set UGC Used By GC\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09* @param\x09""bUsed\x09\x09\x09New state of flag\n\x09*/" },
#endif
		{ "DisplayName", "Set UGC Used By GC" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set UGC Used By GC\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product\n@param        bUsed                   New state of flag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUGCUsedByGCAsync constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUGCUsedByGCAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUGCUsedByGCAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms*)Obj)->bUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers) < 2048);
// ********** End Function SetUGCUsedByGCAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, nullptr, "SetUGCUsedByGCAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_UBOOL(Z_Param_bUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionSetUGCUsedByGC**)Z_Param__Result=USteamCoreWebAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId,Z_Param_bUsed);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionSetUGCUsedByGC Function SetUGCUsedByGCAsync ********

// ********** Begin Class USteamCoreWebAsyncActionSetUGCUsedByGC ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC;
UClass* USteamCoreWebAsyncActionSetUGCUsedByGC::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionSetUGCUsedByGC;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionSetUGCUsedByGC"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionSetUGCUsedByGC,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister()
{
	return USteamCoreWebAsyncActionSetUGCUsedByGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSetUGCUsedByGC\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSetUGCUsedByGC\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionSetUGCUsedByGC constinit property declarations ***
// ********** End Class USteamCoreWebAsyncActionSetUGCUsedByGC constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetUGCUsedByGCAsync"), .Pointer = &USteamCoreWebAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync, "SetUGCUsedByGCAsync" }, // 2423550278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetUGCUsedByGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::ClassParams = {
	&USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionSetUGCUsedByGC::StaticRegisterNativesUSteamCoreWebAsyncActionSetUGCUsedByGC()
{
	UClass* Class = USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton;
}
USteamCoreWebAsyncActionSetUGCUsedByGC::USteamCoreWebAsyncActionSetUGCUsedByGC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionSetUGCUsedByGC);
USteamCoreWebAsyncActionSetUGCUsedByGC::~USteamCoreWebAsyncActionSetUGCUsedByGC() {}
// ********** End Class USteamCoreWebAsyncActionSetUGCUsedByGC *************************************

// ********** Begin Class USteamCoreWebAsyncActionSubscribePublishedFile Function SubscribePublishedFileAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics
{
	struct SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
		USteamCoreWebAsyncActionSubscribePublishedFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Subscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to subscribe to\n\x09*/" },
#endif
		{ "DisplayName", "Subscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to subscribe to" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubscribePublishedFileAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubscribePublishedFileAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubscribePublishedFileAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers) < 2048);
// ********** End Function SubscribePublishedFileAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, nullptr, "SubscribePublishedFileAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionSubscribePublishedFile::execSubscribePublishedFileAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionSubscribePublishedFile**)Z_Param__Result=USteamCoreWebAsyncActionSubscribePublishedFile::SubscribePublishedFileAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionSubscribePublishedFile Function SubscribePublishedFileAsync 

// ********** Begin Class USteamCoreWebAsyncActionSubscribePublishedFile ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile;
UClass* USteamCoreWebAsyncActionSubscribePublishedFile::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionSubscribePublishedFile;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionSubscribePublishedFile"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionSubscribePublishedFile,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_NoRegister()
{
	return USteamCoreWebAsyncActionSubscribePublishedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionSubscribePublishedFile constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionSubscribePublishedFile constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SubscribePublishedFileAsync"), .Pointer = &USteamCoreWebAsyncActionSubscribePublishedFile::execSubscribePublishedFileAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync, "SubscribePublishedFileAsync" }, // 2244277603
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSubscribePublishedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::ClassParams = {
	&USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionSubscribePublishedFile::StaticRegisterNativesUSteamCoreWebAsyncActionSubscribePublishedFile()
{
	UClass* Class = USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton;
}
USteamCoreWebAsyncActionSubscribePublishedFile::USteamCoreWebAsyncActionSubscribePublishedFile() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionSubscribePublishedFile);
USteamCoreWebAsyncActionSubscribePublishedFile::~USteamCoreWebAsyncActionSubscribePublishedFile() {}
// ********** End Class USteamCoreWebAsyncActionSubscribePublishedFile *****************************

// ********** Begin Class USteamCoreWebAsyncActionUnsubscribePublishedFile Function UnsubscribePublishedFileAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics
{
	struct SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
		USteamCoreWebAsyncActionUnsubscribePublishedFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Unsubscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to unsubscribe from\n\x09*/" },
#endif
		{ "DisplayName", "Unsubscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to unsubscribe from" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnsubscribePublishedFileAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnsubscribePublishedFileAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnsubscribePublishedFileAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers) < 2048);
// ********** End Function UnsubscribePublishedFileAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, nullptr, "UnsubscribePublishedFileAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionUnsubscribePublishedFile::execUnsubscribePublishedFileAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionUnsubscribePublishedFile**)Z_Param__Result=USteamCoreWebAsyncActionUnsubscribePublishedFile::UnsubscribePublishedFileAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionUnsubscribePublishedFile Function UnsubscribePublishedFileAsync 

// ********** Begin Class USteamCoreWebAsyncActionUnsubscribePublishedFile *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile;
UClass* USteamCoreWebAsyncActionUnsubscribePublishedFile::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionUnsubscribePublishedFile;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionUnsubscribePublishedFile"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionUnsubscribePublishedFile,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_NoRegister()
{
	return USteamCoreWebAsyncActionUnsubscribePublishedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionUnsubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionUnsubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionUnsubscribePublishedFile constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionUnsubscribePublishedFile constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UnsubscribePublishedFileAsync"), .Pointer = &USteamCoreWebAsyncActionUnsubscribePublishedFile::execUnsubscribePublishedFileAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync, "UnsubscribePublishedFileAsync" }, // 3902250913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionUnsubscribePublishedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::ClassParams = {
	&USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticRegisterNativesUSteamCoreWebAsyncActionUnsubscribePublishedFile()
{
	UClass* Class = USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton;
}
USteamCoreWebAsyncActionUnsubscribePublishedFile::USteamCoreWebAsyncActionUnsubscribePublishedFile() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionUnsubscribePublishedFile);
USteamCoreWebAsyncActionUnsubscribePublishedFile::~USteamCoreWebAsyncActionUnsubscribePublishedFile() {}
// ********** End Class USteamCoreWebAsyncActionUnsubscribePublishedFile ***************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass, TEXT("USteamCoreWebAsyncActionEnumerateUserPublishedFiles"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEnumerateUserPublishedFiles), 521053286U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass, TEXT("USteamCoreWebAsyncActionEnumerateUserSubscribedFiles"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles), 3921864625U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails, USteamCoreWebAsyncActionGetCollectionDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetCollectionDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetCollectionDetails), 4096266241U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublishedFileDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublishedFileDetails), 3322401883U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetUGCFileDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUGCFileDetails), 1579945838U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass, TEXT("USteamCoreWebAsyncActionSetUGCUsedByGC"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSetUGCUsedByGC), 1973772771U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass, TEXT("USteamCoreWebAsyncActionSubscribePublishedFile"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSubscribePublishedFile), 2101436973U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass, TEXT("USteamCoreWebAsyncActionUnsubscribePublishedFile"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionUnsubscribePublishedFile), 2528561945U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_SteamCoreWeb_145457018{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
