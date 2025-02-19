// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorageAsyncActions() {}
// Cross Module References
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
// End Cross Module References
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
	void USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserPublishedFiles()
	{
		UClass* Class = USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserPublishedFilesAsync", &USteamCoreWebAsyncActionEnumerateUserPublishedFiles::execEnumerateUserPublishedFilesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Enumerate User Published Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09*/" },
		{ "DisplayName", "Enumerate User Published Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Enumerate User Published Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, nullptr, "EnumerateUserPublishedFilesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionEnumerateUserPublishedFiles);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_NoRegister()
	{
		return USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync, "EnumerateUserPublishedFilesAsync" }, // 4201120290
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEnumerateUserPublishedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEnumerateUserPublishedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateUserPublishedFiles>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEnumerateUserPublishedFiles>()
	{
		return USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass();
	}
	USteamCoreWebAsyncActionEnumerateUserPublishedFiles::USteamCoreWebAsyncActionEnumerateUserPublishedFiles() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEnumerateUserPublishedFiles);
	USteamCoreWebAsyncActionEnumerateUserPublishedFiles::~USteamCoreWebAsyncActionEnumerateUserPublishedFiles() {}
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
	void USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateUserSubscribedFiles()
	{
		UClass* Class = USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserSubscribedFilesAsync", &USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::execEnumerateUserSubscribedFilesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ListType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Enumerate User Subscribed Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09* @param\x09ListType\x09""EUCMListType\n\x09*/" },
		{ "DisplayName", "Enumerate User Subscribed Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product\n@param        ListType        EUCMListType" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, nullptr, "EnumerateUserSubscribedFilesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::SteamCoreWebAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_NoRegister()
	{
		return USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync, "EnumerateUserSubscribedFilesAsync" }, // 1941720377
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEnumerateUserSubscribedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEnumerateUserSubscribedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateUserSubscribedFiles>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEnumerateUserSubscribedFiles>()
	{
		return USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass();
	}
	USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::USteamCoreWebAsyncActionEnumerateUserSubscribedFiles() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles);
	USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::~USteamCoreWebAsyncActionEnumerateUserSubscribedFiles() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetCollectionDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetCollectionDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetCollectionDetails()
	{
		UClass* Class = USteamCoreWebAsyncActionGetCollectionDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollectionDetailsAsync", &USteamCoreWebAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> PublishedFileIds;
			USteamCoreWebAsyncActionGetCollectionDetails* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09PublishedFileIds\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "DisplayName", "Get Collection Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        PublishedFileIds                collection ids to get the details for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails, nullptr, "GetCollectionDetailsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::SteamCoreWebAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetCollectionDetails);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_NoRegister()
	{
		return USteamCoreWebAsyncActionGetCollectionDetails::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync, "GetCollectionDetailsAsync" }, // 3115143166
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCollectionDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCollectionDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCollectionDetails>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetCollectionDetails>()
	{
		return USteamCoreWebAsyncActionGetCollectionDetails::StaticClass();
	}
	USteamCoreWebAsyncActionGetCollectionDetails::USteamCoreWebAsyncActionGetCollectionDetails() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetCollectionDetails);
	USteamCoreWebAsyncActionGetCollectionDetails::~USteamCoreWebAsyncActionGetCollectionDetails() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPublishedFileDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPublishedFileDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublishedFileDetails()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPublishedFileDetailsAsync", &USteamCoreWebAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms
		{
			UObject* WorldContextObject;
			FString PublishedFileIds;
			USteamCoreWebAsyncActionGetPublishedFileDetails* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "DisplayName", "Get Published File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, nullptr, "GetPublishedFileDetailsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPublishedFileDetails);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync, "GetPublishedFileDetailsAsync" }, // 2612866623
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublishedFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublishedFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublishedFileDetails>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPublishedFileDetails>()
	{
		return USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass();
	}
	USteamCoreWebAsyncActionGetPublishedFileDetails::USteamCoreWebAsyncActionGetPublishedFileDetails() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPublishedFileDetails);
	USteamCoreWebAsyncActionGetPublishedFileDetails::~USteamCoreWebAsyncActionGetPublishedFileDetails() {}
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
	void USteamCoreWebAsyncActionGetUGCFileDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetUGCFileDetails()
	{
		UClass* Class = USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUGCFileDetailsAsync", &USteamCoreWebAsyncActionGetUGCFileDetails::execGetUGCFileDetailsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get UGC File Details\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09*/" },
		{ "DisplayName", "Get UGC File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Get UGC File Details\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, nullptr, "GetUGCFileDetailsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::SteamCoreWebAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetUGCFileDetails);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_NoRegister()
	{
		return USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync, "GetUGCFileDetailsAsync" }, // 3550221552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUGCFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUGCFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUGCFileDetails>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetUGCFileDetails>()
	{
		return USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass();
	}
	USteamCoreWebAsyncActionGetUGCFileDetails::USteamCoreWebAsyncActionGetUGCFileDetails() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetUGCFileDetails);
	USteamCoreWebAsyncActionGetUGCFileDetails::~USteamCoreWebAsyncActionGetUGCFileDetails() {}
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
	void USteamCoreWebAsyncActionSetUGCUsedByGC::StaticRegisterNativesUSteamCoreWebAsyncActionSetUGCUsedByGC()
	{
		UClass* Class = USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUGCUsedByGCAsync", &USteamCoreWebAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static void NewProp_bUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms*)Obj)->bUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Set UGC Used By GC\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09* @param\x09""bUsed\x09\x09\x09New state of flag\n\x09*/" },
		{ "DisplayName", "Set UGC Used By GC" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Set UGC Used By GC\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product\n@param        bUsed                   New state of flag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, nullptr, "SetUGCUsedByGCAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionSetUGCUsedByGC);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister()
	{
		return USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync, "SetUGCUsedByGCAsync" }, // 2247300363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSetUGCUsedByGC\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSetUGCUsedByGC\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetUGCUsedByGC>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionSetUGCUsedByGC>()
	{
		return USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
	}
	USteamCoreWebAsyncActionSetUGCUsedByGC::USteamCoreWebAsyncActionSetUGCUsedByGC() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionSetUGCUsedByGC);
	USteamCoreWebAsyncActionSetUGCUsedByGC::~USteamCoreWebAsyncActionSetUGCUsedByGC() {}
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
	void USteamCoreWebAsyncActionSubscribePublishedFile::StaticRegisterNativesUSteamCoreWebAsyncActionSubscribePublishedFile()
	{
		UClass* Class = USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubscribePublishedFileAsync", &USteamCoreWebAsyncActionSubscribePublishedFile::execSubscribePublishedFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Subscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to subscribe to\n\x09*/" },
		{ "DisplayName", "Subscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Subscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to subscribe to" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, nullptr, "SubscribePublishedFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionSubscribePublishedFile);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_NoRegister()
	{
		return USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync, "SubscribePublishedFileAsync" }, // 1801788342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSubscribePublishedFile>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionSubscribePublishedFile>()
	{
		return USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass();
	}
	USteamCoreWebAsyncActionSubscribePublishedFile::USteamCoreWebAsyncActionSubscribePublishedFile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionSubscribePublishedFile);
	USteamCoreWebAsyncActionSubscribePublishedFile::~USteamCoreWebAsyncActionSubscribePublishedFile() {}
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
	void USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticRegisterNativesUSteamCoreWebAsyncActionUnsubscribePublishedFile()
	{
		UClass* Class = USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UnsubscribePublishedFileAsync", &USteamCoreWebAsyncActionUnsubscribePublishedFile::execUnsubscribePublishedFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Unsubscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to unsubscribe from\n\x09*/" },
		{ "DisplayName", "Unsubscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "Unsubscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to unsubscribe from" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, nullptr, "UnsubscribePublishedFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::SteamCoreWebAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionUnsubscribePublishedFile);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_NoRegister()
	{
		return USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync, "UnsubscribePublishedFileAsync" }, // 1134382828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionUnsubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionUnsubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionUnsubscribePublishedFile>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionUnsubscribePublishedFile>()
	{
		return USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass();
	}
	USteamCoreWebAsyncActionUnsubscribePublishedFile::USteamCoreWebAsyncActionUnsubscribePublishedFile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionUnsubscribePublishedFile);
	USteamCoreWebAsyncActionUnsubscribePublishedFile::~USteamCoreWebAsyncActionUnsubscribePublishedFile() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass, TEXT("USteamCoreWebAsyncActionEnumerateUserPublishedFiles"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserPublishedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEnumerateUserPublishedFiles), 2084911205U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass, TEXT("USteamCoreWebAsyncActionEnumerateUserSubscribedFiles"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateUserSubscribedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles), 2108299728U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetCollectionDetails, USteamCoreWebAsyncActionGetCollectionDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetCollectionDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCollectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetCollectionDetails), 3068171055U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublishedFileDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublishedFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublishedFileDetails), 4187990745U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetUGCFileDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUGCFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUGCFileDetails), 911149655U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass, TEXT("USteamCoreWebAsyncActionSetUGCUsedByGC"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSetUGCUsedByGC), 1155806786U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass, TEXT("USteamCoreWebAsyncActionSubscribePublishedFile"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSubscribePublishedFile), 1269903506U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass, TEXT("USteamCoreWebAsyncActionUnsubscribePublishedFile"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionUnsubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionUnsubscribePublishedFile), 3202769503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h_3417136779(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
