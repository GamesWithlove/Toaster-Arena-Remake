// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemSearch/WebPublishedItemSearch.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearch() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execResultSetSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResultSetSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByVote(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByTrend)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByTrend(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_days,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByPublicationOrder)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByPublicationOrder(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void UWebSteamPublishedItemSearch::StaticRegisterNativesUWebSteamPublishedItemSearch()
	{
		UClass* Class = UWebSteamPublishedItemSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByPublicationOrder", &UWebSteamPublishedItemSearch::execRankedByPublicationOrder },
			{ "RankedByTrend", &UWebSteamPublishedItemSearch::execRankedByTrend },
			{ "RankedByVote", &UWebSteamPublishedItemSearch::execRankedByVote },
			{ "ResultSetSummary", &UWebSteamPublishedItemSearch::execResultSetSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByPublicationOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByTrend_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			int32 days;
			TArray<FString> Tag;
			TArray<FString> UserTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_days;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByTrend_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, days), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Trend\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09""days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Trend\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        days                                    Number of days for the trend period, including today\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByTrend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::WebSteamPublishedItemSearch_eventRankedByTrend_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByVote_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByVote_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByVote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::WebSteamPublishedItemSearch_eventRankedByVote_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics
	{
		struct WebSteamPublishedItemSearch_eventResultSetSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventResultSetSummary_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "ResultSetSummary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::WebSteamPublishedItemSearch_eventResultSetSummary_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSteamPublishedItemSearch);
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder, "RankedByPublicationOrder" }, // 1880293584
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend, "RankedByTrend" }, // 833975
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote, "RankedByVote" }, // 1476388757
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary, "ResultSetSummary" }, // 3901056642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamPublishedItemSearch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams = {
		&UWebSteamPublishedItemSearch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch()
	{
		if (!Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton, Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamPublishedItemSearch>()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamPublishedItemSearch);
	UWebSteamPublishedItemSearch::~UWebSteamPublishedItemSearch() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamPublishedItemSearch, UWebSteamPublishedItemSearch::StaticClass, TEXT("UWebSteamPublishedItemSearch"), &Z_Registration_Info_UClass_UWebSteamPublishedItemSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamPublishedItemSearch), 477652136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearch_h_1730137341(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
