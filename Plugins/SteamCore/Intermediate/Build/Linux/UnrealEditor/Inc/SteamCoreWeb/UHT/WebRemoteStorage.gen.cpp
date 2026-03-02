// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamRemoteStorage/WebRemoteStorage.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorage() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
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
	DEFINE_FUNCTION(UWebRemoteStorage::execGetPublishedFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublishedFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_PublishedFileIds);
		P_NATIVE_END;
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
	void UWebRemoteStorage::StaticRegisterNativesUWebRemoteStorage()
	{
		UClass* Class = UWebRemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserPublishedFiles", &UWebRemoteStorage::execEnumerateUserPublishedFiles },
			{ "EnumerateUserSubscribedFiles", &UWebRemoteStorage::execEnumerateUserSubscribedFiles },
			{ "GetCollectionDetails", &UWebRemoteStorage::execGetCollectionDetails },
			{ "GetPublishedFileDetails", &UWebRemoteStorage::execGetPublishedFileDetails },
			{ "GetUGCFileDetails", &UWebRemoteStorage::execGetUGCFileDetails },
			{ "SetUGCUsedByGC", &UWebRemoteStorage::execSetUGCUsedByGC },
			{ "SubscribePublishedFile", &UWebRemoteStorage::execSubscribePublishedFile },
			{ "UnsubscribePublishedFile", &UWebRemoteStorage::execUnsubscribePublishedFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Published Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Published Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserPublishedFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, ListType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Subscribed Files\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppId of product\n\x09* @param\x09ListType\x09""EUCMListType\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppId of product\n@param        ListType        EUCMListType" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserSubscribedFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics
	{
		struct WebRemoteStorage_eventGetCollectionDetails_Parms
		{
			FScriptDelegate Callback;
			TArray<FString> PublishedFileIds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09PublishedFileIds\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        PublishedFileIds                collection ids to get the details for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetCollectionDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::WebRemoteStorage_eventGetCollectionDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics
	{
		struct WebRemoteStorage_eventGetPublishedFileDetails_Parms
		{
			FScriptDelegate Callback;
			FString PublishedFileIds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetPublishedFileDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::WebRemoteStorage_eventGetPublishedFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get UGC File Details\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get UGC File Details\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetUGCFileDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::WebRemoteStorage_eventGetUGCFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static void NewProp_bUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit(void* Obj)
	{
		((WebRemoteStorage_eventSetUGCUsedByGC_Parms*)Obj)->bUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Set UGC Used By GC\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""AppId\x09\x09\x09""AppId of product\n\x09* @param\x09""bUsed\x09\x09\x09New state of flag\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Set UGC Used By GC\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        AppId                   AppId of product\n@param        bUsed                   New state of flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SetUGCUsedByGC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::WebRemoteStorage_eventSetUGCUsedByGC_Parms), Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Subscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to subscribe to\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Subscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to subscribe to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SubscribePublishedFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::WebRemoteStorage_eventSubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, PublishedFileIds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Unsubscribe Published File\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09\x09published file id to unsubscribe from\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Unsubscribe Published File\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                        published file id to unsubscribe from" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "UnsubscribePublishedFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::WebRemoteStorage_eventUnsubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebRemoteStorage);
	UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister()
	{
		return UWebRemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_UWebRemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebRemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebRemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles, "EnumerateUserPublishedFiles" }, // 3546112933
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles, "EnumerateUserSubscribedFiles" }, // 2982117104
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails, "GetCollectionDetails" }, // 3612837778
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails, "GetPublishedFileDetails" }, // 489803998
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails, "GetUGCFileDetails" }, // 1480586401
		{ &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC, "SetUGCUsedByGC" }, // 96179366
		{ &Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile, "SubscribePublishedFile" }, // 3560214340
		{ &Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile, "UnsubscribePublishedFile" }, // 1697536171
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebRemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebRemoteStorage>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebRemoteStorage()
	{
		if (!Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton, Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebRemoteStorage.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebRemoteStorage>()
	{
		return UWebRemoteStorage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebRemoteStorage);
	UWebRemoteStorage::~UWebRemoteStorage() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebRemoteStorage, UWebRemoteStorage::StaticClass, TEXT("UWebRemoteStorage"), &Z_Registration_Info_UClass_UWebRemoteStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebRemoteStorage), 2321451177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h_3497702719(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamRemoteStorage_WebRemoteStorage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
