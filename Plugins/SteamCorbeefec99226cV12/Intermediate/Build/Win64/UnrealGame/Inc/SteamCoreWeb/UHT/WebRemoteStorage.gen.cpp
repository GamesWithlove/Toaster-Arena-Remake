// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemoteStorage/WebRemoteStorage.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorage() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebRemoteStorage Function EnumerateUserPublishedFiles *******************
struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics
{
	struct WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Published Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Published Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateUserPublishedFiles constinit property declarations ***********
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateUserPublishedFiles constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateUserPublishedFiles Property Definitions **********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers) < 2048);
// ********** End Function EnumerateUserPublishedFiles Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserPublishedFiles", 	Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserPublishedFiles)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateUserPublishedFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function EnumerateUserPublishedFiles *********************

// ********** Begin Class UWebRemoteStorage Function EnumerateUserSubscribedFiles ******************
struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics
{
	struct WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 ListType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Subscribed Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09* @param\x09ListType\x09""EUCMListType\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product\n@param        ListType        EUCMListType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateUserSubscribedFiles constinit property declarations **********
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateUserSubscribedFiles constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateUserSubscribedFiles Property Definitions *********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, ListType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers) < 2048);
// ********** End Function EnumerateUserSubscribedFiles Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserSubscribedFiles", 	Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserSubscribedFiles)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateUserSubscribedFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ListType);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function EnumerateUserSubscribedFiles ********************

// ********** Begin Class UWebRemoteStorage Function GetCollectionDetails **************************
struct Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics
{
	struct WebRemoteStorage_eventGetCollectionDetails_Parms
	{
		FScriptDelegate Callback;
		TArray<FString> PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09PublishedFileIds\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        PublishedFileIds                collection ids to get the details for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollectionDetails constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollectionDetails constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollectionDetails Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers) < 2048);
// ********** End Function GetCollectionDetails Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetCollectionDetails", 	Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::WebRemoteStorage_eventGetCollectionDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::WebRemoteStorage_eventGetCollectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execGetCollectionDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCollectionDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function GetCollectionDetails ****************************

// ********** Begin Class UWebRemoteStorage Function GetPublishedFileDetails ***********************
struct Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics
{
	struct WebRemoteStorage_eventGetPublishedFileDetails_Parms
	{
		FScriptDelegate Callback;
		FString PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublishedFileDetails constinit property declarations ***************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublishedFileDetails constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublishedFileDetails Property Definitions **************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers) < 2048);
// ********** End Function GetPublishedFileDetails Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetPublishedFileDetails", 	Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::WebRemoteStorage_eventGetPublishedFileDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::WebRemoteStorage_eventGetPublishedFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execGetPublishedFileDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPublishedFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function GetPublishedFileDetails *************************

// ********** Begin Class UWebRemoteStorage Function GetUGCFileDetails *****************************
struct Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics
{
	struct WebRemoteStorage_eventGetUGCFileDetails_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get UGC File Details\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get UGC File Details\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCFileDetails constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCFileDetails constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCFileDetails Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers) < 2048);
// ********** End Function GetUGCFileDetails Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetUGCFileDetails", 	Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::WebRemoteStorage_eventGetUGCFileDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::WebRemoteStorage_eventGetUGCFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execGetUGCFileDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUGCFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function GetUGCFileDetails *******************************

// ********** Begin Class UWebRemoteStorage Function SetUGCUsedByGC ********************************
struct Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics
{
	struct WebRemoteStorage_eventSetUGCUsedByGC_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
		bool bUsed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Set UGC Used By GC\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09* @param\x09""bUsed\x09\x09\x09New state of flag\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Set UGC Used By GC\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product\n@param        bUsed                   New state of flag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUGCUsedByGC constinit property declarations ************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUGCUsedByGC constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUGCUsedByGC Property Definitions ***********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit(void* Obj)
{
	((WebRemoteStorage_eventSetUGCUsedByGC_Parms*)Obj)->bUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers) < 2048);
// ********** End Function SetUGCUsedByGC Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SetUGCUsedByGC", 	Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::WebRemoteStorage_eventSetUGCUsedByGC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::WebRemoteStorage_eventSetUGCUsedByGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execSetUGCUsedByGC)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_UBOOL(Z_Param_bUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUGCUsedByGC(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId,Z_Param_bUsed);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function SetUGCUsedByGC **********************************

// ********** Begin Class UWebRemoteStorage Function SubscribePublishedFile ************************
struct Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics
{
	struct WebRemoteStorage_eventSubscribePublishedFile_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Subscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to subscribe to\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Subscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to subscribe to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubscribePublishedFile constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubscribePublishedFile constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubscribePublishedFile Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers) < 2048);
// ********** End Function SubscribePublishedFile Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SubscribePublishedFile", 	Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::WebRemoteStorage_eventSubscribePublishedFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::WebRemoteStorage_eventSubscribePublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execSubscribePublishedFile)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function SubscribePublishedFile **************************

// ********** Begin Class UWebRemoteStorage Function UnsubscribePublishedFile **********************
struct Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics
{
	struct WebRemoteStorage_eventUnsubscribePublishedFile_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Unsubscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to unsubscribe from\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Unsubscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to unsubscribe from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnsubscribePublishedFile constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnsubscribePublishedFile constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnsubscribePublishedFile Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers) < 2048);
// ********** End Function UnsubscribePublishedFile Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "UnsubscribePublishedFile", 	Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::WebRemoteStorage_eventUnsubscribePublishedFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::WebRemoteStorage_eventUnsubscribePublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebRemoteStorage::execUnsubscribePublishedFile)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebRemoteStorage Function UnsubscribePublishedFile ************************

// ********** Begin Class UWebRemoteStorage ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebRemoteStorage;
UClass* UWebRemoteStorage::GetPrivateStaticClass()
{
	using TClass = UWebRemoteStorage;
	if (!Z_Registration_Info_UClass_UWebRemoteStorage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebRemoteStorage"),
			Z_Registration_Info_UClass_UWebRemoteStorage.InnerSingleton,
			StaticRegisterNativesUWebRemoteStorage,
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
	return Z_Registration_Info_UClass_UWebRemoteStorage.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister()
{
	return UWebRemoteStorage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebRemoteStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebRemoteStorage constinit property declarations ************************
// ********** End Class UWebRemoteStorage constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateUserPublishedFiles"), .Pointer = &UWebRemoteStorage::execEnumerateUserPublishedFiles },
		{ .NameUTF8 = UTF8TEXT("EnumerateUserSubscribedFiles"), .Pointer = &UWebRemoteStorage::execEnumerateUserSubscribedFiles },
		{ .NameUTF8 = UTF8TEXT("GetCollectionDetails"), .Pointer = &UWebRemoteStorage::execGetCollectionDetails },
		{ .NameUTF8 = UTF8TEXT("GetPublishedFileDetails"), .Pointer = &UWebRemoteStorage::execGetPublishedFileDetails },
		{ .NameUTF8 = UTF8TEXT("GetUGCFileDetails"), .Pointer = &UWebRemoteStorage::execGetUGCFileDetails },
		{ .NameUTF8 = UTF8TEXT("SetUGCUsedByGC"), .Pointer = &UWebRemoteStorage::execSetUGCUsedByGC },
		{ .NameUTF8 = UTF8TEXT("SubscribePublishedFile"), .Pointer = &UWebRemoteStorage::execSubscribePublishedFile },
		{ .NameUTF8 = UTF8TEXT("UnsubscribePublishedFile"), .Pointer = &UWebRemoteStorage::execUnsubscribePublishedFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles, "EnumerateUserPublishedFiles" }, // 3161752102
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles, "EnumerateUserSubscribedFiles" }, // 1140672959
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails, "GetCollectionDetails" }, // 1179115544
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails, "GetPublishedFileDetails" }, // 950995771
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails, "GetUGCFileDetails" }, // 4178789849
		{ &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC, "SetUGCUsedByGC" }, // 453958749
		{ &Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile, "SubscribePublishedFile" }, // 2432649339
		{ &Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile, "UnsubscribePublishedFile" }, // 1729088338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebRemoteStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebRemoteStorage_Statics
UObject* (*const Z_Construct_UClass_UWebRemoteStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebRemoteStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams = {
	&UWebRemoteStorage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams)
};
void UWebRemoteStorage::StaticRegisterNativesUWebRemoteStorage()
{
	UClass* Class = UWebRemoteStorage::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebRemoteStorage_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebRemoteStorage()
{
	if (!Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton, Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebRemoteStorage);
UWebRemoteStorage::~UWebRemoteStorage() {}
// ********** End Class UWebRemoteStorage **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebRemoteStorage, UWebRemoteStorage::StaticClass, TEXT("UWebRemoteStorage"), &Z_Registration_Info_UClass_UWebRemoteStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebRemoteStorage), 2563196863U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h__Script_SteamCoreWeb_1407112710{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
