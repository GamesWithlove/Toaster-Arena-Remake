// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedFileService/WebPublishedFileService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedFileService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateTags)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AddTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_RemoveTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTags(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileId,Z_Param_AppId,Z_Param_AddTags,Z_Param_RemoveTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateIncompatibleStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_UBOOL(Z_Param_bIncompatible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIncompatibleStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileId,Z_Param_AppId,Z_Param_bIncompatible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileId,Z_Param_AppId,Z_Param_bBanned,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execSetDeveloperMetadata)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeveloperMetadata(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileId,Z_Param_AppId,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execQueryFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_GET_PROPERTY(FStrProperty,Z_Param_Cursor);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPerPage);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequiredTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExcludedTags);
		P_GET_UBOOL(Z_Param_bMatchAllTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequiredFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_OmittedFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildPublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_GET_UBOOL(Z_Param_bIncludeRecentVotesOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_CacheMaxAgeSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequiredKvTags);
		P_GET_UBOOL(Z_Param_bTotalOnly);
		P_GET_UBOOL(Z_Param_bIDsOnly);
		P_GET_UBOOL(Z_Param_bReturnVoteData);
		P_GET_UBOOL(Z_Param_bReturnTags);
		P_GET_UBOOL(Z_Param_bReturnKvTags);
		P_GET_UBOOL(Z_Param_bReturnPreviews);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_GET_UBOOL(Z_Param_bReturnShortDescription);
		P_GET_UBOOL(Z_Param_bReturnForSaleData);
		P_GET_UBOOL(Z_Param_bReturnMetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param_ReturnPlaytimeStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_QueryType,Z_Param_Page,Z_Param_Cursor,Z_Param_NumPerPage,Z_Param_CreatorAppId,Z_Param_AppId,Z_Param_RequiredTags,Z_Param_ExcludedTags,Z_Param_bMatchAllTags,Z_Param_RequiredFlags,Z_Param_OmittedFlags,Z_Param_SearchText,Z_Param_FileType,Z_Param_ChildPublishedFileId,Z_Param_Days,Z_Param_bIncludeRecentVotesOnly,Z_Param_CacheMaxAgeSeconds,Z_Param_Language,Z_Param_RequiredKvTags,Z_Param_bTotalOnly,Z_Param_bIDsOnly,Z_Param_bReturnVoteData,Z_Param_bReturnTags,Z_Param_bReturnKvTags,Z_Param_bReturnPreviews,Z_Param_bReturnChildren,Z_Param_bReturnShortDescription,Z_Param_bReturnForSaleData,Z_Param_bReturnMetaData,Z_Param_ReturnPlaytimeStats);
		P_NATIVE_END;
	}
	void UWebPublishedFileService::StaticRegisterNativesUWebPublishedFileService()
	{
		UClass* Class = UWebPublishedFileService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryFiles", &UWebPublishedFileService::execQueryFiles },
			{ "SetDeveloperMetadata", &UWebPublishedFileService::execSetDeveloperMetadata },
			{ "UpdateBanStatus", &UWebPublishedFileService::execUpdateBanStatus },
			{ "UpdateIncompatibleStatus", &UWebPublishedFileService::execUpdateIncompatibleStatus },
			{ "UpdateTags", &UWebPublishedFileService::execUpdateTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics
	{
		struct WebPublishedFileService_eventQueryFiles_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 QueryType;
			int32 Page;
			FString Cursor;
			int32 NumPerPage;
			int32 CreatorAppId;
			int32 AppId;
			FString RequiredTags;
			FString ExcludedTags;
			bool bMatchAllTags;
			FString RequiredFlags;
			FString OmittedFlags;
			FString SearchText;
			int32 FileType;
			FString ChildPublishedFileId;
			int32 Days;
			bool bIncludeRecentVotesOnly;
			int32 CacheMaxAgeSeconds;
			int32 Language;
			FString RequiredKvTags;
			bool bTotalOnly;
			bool bIDsOnly;
			bool bReturnVoteData;
			bool bReturnTags;
			bool bReturnKvTags;
			bool bReturnPreviews;
			bool bReturnChildren;
			bool bReturnShortDescription;
			bool bReturnForSaleData;
			bool bReturnMetaData;
			int32 ReturnPlaytimeStats;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cursor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPerPage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredTags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedTags;
		static void NewProp_bMatchAllTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAllTags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredFlags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OmittedFlags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChildPublishedFileId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRecentVotesOnly;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Language;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredKvTags;
		static void NewProp_bTotalOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTotalOnly;
		static void NewProp_bIDsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIDsOnly;
		static void NewProp_bReturnVoteData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnVoteData;
		static void NewProp_bReturnTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTags;
		static void NewProp_bReturnKvTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKvTags;
		static void NewProp_bReturnPreviews_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnPreviews;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_bReturnShortDescription_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnShortDescription;
		static void NewProp_bReturnForSaleData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnForSaleData;
		static void NewProp_bReturnMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetaData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnPlaytimeStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, QueryType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Cursor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_NumPerPage = { "NumPerPage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, NumPerPage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CreatorAppId = { "CreatorAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, CreatorAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, RequiredTags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ExcludedTags = { "ExcludedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, ExcludedTags), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bMatchAllTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags = { "bMatchAllTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredFlags = { "RequiredFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, RequiredFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_OmittedFlags = { "OmittedFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, OmittedFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, SearchText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, ChildPublishedFileId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIncludeRecentVotesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly = { "bIncludeRecentVotesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredKvTags = { "RequiredKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, RequiredKvTags), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bTotalOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly = { "bTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIDsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly = { "bIDsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnVoteData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData = { "bReturnVoteData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags = { "bReturnTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnKvTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags = { "bReturnKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnPreviews = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews = { "bReturnPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnShortDescription = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription = { "bReturnShortDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnForSaleData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData = { "bReturnForSaleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData = { "bReturnMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ReturnPlaytimeStats = { "ReturnPlaytimeStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, ReturnPlaytimeStats), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_QueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_NumPerPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CreatorAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ExcludedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_OmittedFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CacheMaxAgeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_RequiredKvTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ReturnPlaytimeStats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Performs a search query for published files\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09QueryType\x09\x09\x09\x09\x09""enumeration EPublishedFileQueryType in clientenums.h\n\x09* @param\x09Page\x09\x09\x09\x09\x09\x09""Current page. Currently there is an upper limit of 1000.\n\x09* @param\x09""Cursor\x09\x09\x09\x09\x09\x09""Cursor to paginate through the results (set to '*' for the first request). Prefer this over using the page parameter, as it will allow you to do deep pagination. When used, the page parameter will be ignored. Use the \"next_cursor\" value returned in the response to set up the next query to get the next set of results.\n\x09* @param\x09NumPerPage\x09\x09\x09\x09\x09(Optional) The number of results, per page to return.\n\x09* @param\x09""CreatorAppId\x09\x09\x09\x09""App that created the files\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09\x09""App that consumes the files\n\x09* @param\x09RequiredTags\x09\x09\x09\x09Tags to match on. See match_all_tags parameter below\n\x09* @param\x09""ExcludedTags\x09\x09\x09\x09(Optional) Tags that must NOT be present on a published file to satisfy the query.\n\x09* @param\x09""bMatchAllTags\x09\x09\x09\x09If true, then items must have all the tags specified, otherwise they must have at least one of the tags.\n\x09* @param\x09RequiredFlags\x09\x09\x09\x09Required flags that must be set on any returned items\n\x09* @param\x09OmittedFlags\x09\x09\x09\x09""Flags that must not be set on any returned items\n\x09* @param\x09SearchText\x09\x09\x09\x09\x09Text to match in the item's title or description\n\x09* @param\x09""FileType\x09\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType\n\x09* @param\x09""ChildPublishedFileId\x09\x09""Find all items that reference the given item.\n\x09* @param\x09""Days\x09\x09\x09\x09\x09\x09If query_type is k_PublishedFileQueryType_RankedByTrend, then this is the number of days to get votes for [1,7].\n\x09* @param\x09""bIncludeRecentVotesOnly\x09\x09If query_type is k_PublishedFileQueryType_RankedByTrend, then limit result set just to items that have votes within the day range given\n\x09* @param\x09""CacheMaxAgeSeconds\x09\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09* @param\x09Language\x09\x09\x09\x09\x09Language to search in and also what gets returned. Defaults to English.\n\x09* @param\x09RequiredKvTags\x09\x09\x09\x09Required Key-value tags to match on.\n\x09* @param\x09""bTotalOnly\x09\x09\x09\x09\x09(Optional) If true, only return the total number of files that satisfy this query.\n\x09* @param\x09""bIDsOnly\x09\x09\x09\x09\x09(Optional) If true, only return the published file ids of files that satisfy this query.\n\x09* @param\x09""bReturnVoteData\x09\x09\x09\x09Return vote data\n\x09* @param\x09""bReturnTags\x09\x09\x09\x09\x09Return tags in the file details\n\x09* @param\x09""bReturnKvTags\x09\x09\x09\x09Return Key-value tags in the file details\n\x09* @param\x09""bReturnPreviews\x09\x09\x09\x09Return preview image and video details in the file details\n\x09* @param\x09""bReturnChildren\x09\x09\x09\x09Return child item ids in the file details\n\x09* @param\x09""bReturnShortDescription\x09\x09Populate the short_description field instead of file_description\n\x09* @param\x09""bReturnForSaleData\x09\x09\x09Return pricing information, if applicable\n\x09* @param\x09""bReturnMetaData\x09\x09\x09\x09Populate the metadata\n\x09* @param\x09ReturnPlaytimeStats\x09\x09\x09Return playtime stats for the specified number of days before today.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Performs a search query for published files\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        QueryType                                       enumeration EPublishedFileQueryType in clientenums.h\n@param        Page                                            Current page. Currently there is an upper limit of 1000.\n@param        Cursor                                          Cursor to paginate through the results (set to '*' for the first request). Prefer this over using the page parameter, as it will allow you to do deep pagination. When used, the page parameter will be ignored. Use the \"next_cursor\" value returned in the response to set up the next query to get the next set of results.\n@param        NumPerPage                                      (Optional) The number of results, per page to return.\n@param        CreatorAppId                            App that created the files\n@param        AppId                                           App that consumes the files\n@param        RequiredTags                            Tags to match on. See match_all_tags parameter below\n@param        ExcludedTags                            (Optional) Tags that must NOT be present on a published file to satisfy the query.\n@param        bMatchAllTags                           If true, then items must have all the tags specified, otherwise they must have at least one of the tags.\n@param        RequiredFlags                           Required flags that must be set on any returned items\n@param        OmittedFlags                            Flags that must not be set on any returned items\n@param        SearchText                                      Text to match in the item's title or description\n@param        FileType                                        EPublishedFileInfoMatchingFileType\n@param        ChildPublishedFileId            Find all items that reference the given item.\n@param        Days                                            If query_type is k_PublishedFileQueryType_RankedByTrend, then this is the number of days to get votes for [1,7].\n@param        bIncludeRecentVotesOnly         If query_type is k_PublishedFileQueryType_RankedByTrend, then limit result set just to items that have votes within the day range given\n@param        CacheMaxAgeSeconds                      Allow stale data to be returned for the specified number of seconds.\n@param        Language                                        Language to search in and also what gets returned. Defaults to English.\n@param        RequiredKvTags                          Required Key-value tags to match on.\n@param        bTotalOnly                                      (Optional) If true, only return the total number of files that satisfy this query.\n@param        bIDsOnly                                        (Optional) If true, only return the published file ids of files that satisfy this query.\n@param        bReturnVoteData                         Return vote data\n@param        bReturnTags                                     Return tags in the file details\n@param        bReturnKvTags                           Return Key-value tags in the file details\n@param        bReturnPreviews                         Return preview image and video details in the file details\n@param        bReturnChildren                         Return child item ids in the file details\n@param        bReturnShortDescription         Populate the short_description field instead of file_description\n@param        bReturnForSaleData                      Return pricing information, if applicable\n@param        bReturnMetaData                         Populate the metadata\n@param        ReturnPlaytimeStats                     Return playtime stats for the specified number of days before today." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "QueryFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::WebPublishedFileService_eventQueryFiles_Parms), Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_QueryFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics
	{
		struct WebPublishedFileService_eventSetDeveloperMetadata_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileId;
			int32 AppId;
			FString MetaData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, PublishedFileId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, MetaData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Sets the metadata for a developer on the published file\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PublishedFileId\x09\x09\n\x09* @param\x09""AppId\x09\x09\n\x09* @param\x09MetaData\x09\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Sets the metadata for a developer on the published file\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        PublishedFileId\n@param        AppId\n@param        MetaData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "SetDeveloperMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::WebPublishedFileService_eventSetDeveloperMetadata_Parms), Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateBanStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileId;
			int32 AppId;
			bool bBanned;
			FString Reason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanned;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, PublishedFileId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateBanStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Reason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates the ban status on the published file\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PublishedFileId\n\x09* @param\x09""AppId\n\x09* @param\x09""bBanned\n\x09* @param\x09Reason\x09\x09\x09\x09Reason why the item was banned. Only visible to admins.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates the ban status on the published file\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        PublishedFileId\n@param        AppId\n@param        bBanned\n@param        Reason                          Reason why the item was banned. Only visible to admins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateBanStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::WebPublishedFileService_eventUpdateBanStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateIncompatibleStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileId;
			int32 AppId;
			bool bIncompatible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static void NewProp_bIncompatible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncompatible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, PublishedFileId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateIncompatibleStatus_Parms*)Obj)->bIncompatible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible = { "bIncompatible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PublishedFileId\n\x09* @param\x09""AppId\n\x09* @param\x09""bIncompatible\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        PublishedFileId\n@param        AppId\n@param        bIncompatible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateIncompatibleStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics
	{
		struct WebPublishedFileService_eventUpdateTags_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileId;
			int32 AppId;
			FString AddTags;
			FString RemoveTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AddTags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoveTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, PublishedFileId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AddTags = { "AddTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, AddTags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_RemoveTags = { "RemoveTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, RemoveTags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AddTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_RemoveTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PublishedFileId\n\x09* @param\x09""AppId\n\x09* @param\x09""AddTags\n\x09* @param\x09RemoveTags\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        PublishedFileId\n@param        AppId\n@param        AddTags\n@param        RemoveTags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::WebPublishedFileService_eventUpdateTags_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPublishedFileService);
	UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister()
	{
		return UWebPublishedFileService::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedFileService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedFileService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedFileService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles, "QueryFiles" }, // 2847056775
		{ &Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata, "SetDeveloperMetadata" }, // 1915949051
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus, "UpdateBanStatus" }, // 3855082583
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus, "UpdateIncompatibleStatus" }, // 3589380423
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateTags, "UpdateTags" }, // 4264130458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedFileService/WebPublishedFileService.h" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedFileService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedFileService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams = {
		&UWebPublishedFileService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedFileService()
	{
		if (!Z_Registration_Info_UClass_UWebPublishedFileService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPublishedFileService.OuterSingleton, Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebPublishedFileService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedFileService>()
	{
		return UWebPublishedFileService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedFileService);
	UWebPublishedFileService::~UWebPublishedFileService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebPublishedFileService, UWebPublishedFileService::StaticClass, TEXT("UWebPublishedFileService"), &Z_Registration_Info_UClass_UWebPublishedFileService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPublishedFileService), 3164915795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_196000190(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
