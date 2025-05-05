// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVotingAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionItemVoteSummary::execItemVoteSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionItemVoteSummary**)Z_Param__Result=USteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionItemVoteSummary::StaticRegisterNativesUSteamCoreWebAsyncActionItemVoteSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemVoteSummaryAsync", &USteamCoreWebAsyncActionItemVoteSummary::execItemVoteSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			TArray<FString> PublishedFileIds;
			USteamCoreWebAsyncActionItemVoteSummary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "DisplayName", "Item Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        AppId                                   appID of product\n@param        PublishedFileIds                The Published File ID who's vote details are required" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, nullptr, "ItemVoteSummaryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionItemVoteSummary);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync, "ItemVoteSummaryAsync" }, // 1785794281
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionItemVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionItemVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionItemVoteSummary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionItemVoteSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionItemVoteSummary>()
	{
		return USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
	}
	USteamCoreWebAsyncActionItemVoteSummary::USteamCoreWebAsyncActionItemVoteSummary() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionItemVoteSummary);
	USteamCoreWebAsyncActionItemVoteSummary::~USteamCoreWebAsyncActionItemVoteSummary() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionUserVoteSummary::execUserVoteSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionUserVoteSummary**)Z_Param__Result=USteamCoreWebAsyncActionUserVoteSummary::UserVoteSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionUserVoteSummary::StaticRegisterNativesUSteamCoreWebAsyncActionUserVoteSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionUserVoteSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserVoteSummaryAsync", &USteamCoreWebAsyncActionUserVoteSummary::execUserVoteSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			TArray<FString> PublishedFileIds;
			USteamCoreWebAsyncActionUserVoteSummary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "DisplayName", "User Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        PublishedFileIds                The Published File ID who's vote details are required" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary, nullptr, "UserVoteSummaryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionUserVoteSummary);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionUserVoteSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync, "UserVoteSummaryAsync" }, // 3285446311
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionUserVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionUserVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionUserVoteSummary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionUserVoteSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionUserVoteSummary>()
	{
		return USteamCoreWebAsyncActionUserVoteSummary::StaticClass();
	}
	USteamCoreWebAsyncActionUserVoteSummary::USteamCoreWebAsyncActionUserVoteSummary() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionUserVoteSummary);
	USteamCoreWebAsyncActionUserVoteSummary::~USteamCoreWebAsyncActionUserVoteSummary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, USteamCoreWebAsyncActionItemVoteSummary::StaticClass, TEXT("USteamCoreWebAsyncActionItemVoteSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionItemVoteSummary), 677605568U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary, USteamCoreWebAsyncActionUserVoteSummary::StaticClass, TEXT("USteamCoreWebAsyncActionUserVoteSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionUserVoteSummary), 3689328656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h_3616159348(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
