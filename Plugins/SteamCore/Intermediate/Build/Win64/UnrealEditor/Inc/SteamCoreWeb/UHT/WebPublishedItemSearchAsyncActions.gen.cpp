// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearchAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionRankedByPublicationOrder**)Z_Param__Result=USteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByPublicationOrder::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByPublicationOrder()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByPublicationOrderAsync", &USteamCoreWebAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
			USteamCoreWebAsyncActionRankedByPublicationOrder* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "DisplayName", "Ranked by Publication Order" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, nullptr, "RankedByPublicationOrderAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRankedByPublicationOrder);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync, "RankedByPublicationOrderAsync" }, // 2286746751
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByPublicationOrder\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByPublicationOrder\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByPublicationOrder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByPublicationOrder>()
	{
		return USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
	}
	USteamCoreWebAsyncActionRankedByPublicationOrder::USteamCoreWebAsyncActionRankedByPublicationOrder() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByPublicationOrder);
	USteamCoreWebAsyncActionRankedByPublicationOrder::~USteamCoreWebAsyncActionRankedByPublicationOrder() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByTrend::execRankedByTrendAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRankedByTrend**)Z_Param__Result=USteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Days,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByTrend::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByTrend()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByTrend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByTrendAsync", &USteamCoreWebAsyncActionRankedByTrend::execRankedByTrendAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			int32 Days;
			TArray<FString> Tag;
			TArray<FString> UserTag;
			USteamCoreWebAsyncActionRankedByTrend* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Trend\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09""Days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "DisplayName", "Ranked by Trend" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Trend\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Days                                    Number of days for the trend period, including today\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, nullptr, "RankedByTrendAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRankedByTrend);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByTrend::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync, "RankedByTrendAsync" }, // 4229771729
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByTrend\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByTrend\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByTrend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByTrend::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByTrend>()
	{
		return USteamCoreWebAsyncActionRankedByTrend::StaticClass();
	}
	USteamCoreWebAsyncActionRankedByTrend::USteamCoreWebAsyncActionRankedByTrend() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByTrend);
	USteamCoreWebAsyncActionRankedByTrend::~USteamCoreWebAsyncActionRankedByTrend() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionRankedByVote**)Z_Param__Result=USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByVote::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByVote()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByVote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByVoteAsync", &USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
			USteamCoreWebAsyncActionRankedByVote* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Vote\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "DisplayName", "Ranked by Vote" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Vote\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, nullptr, "RankedByVoteAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRankedByVote);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync, "RankedByVoteAsync" }, // 872393884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByVote\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByVote\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByVote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByVote::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByVote>()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	USteamCoreWebAsyncActionRankedByVote::USteamCoreWebAsyncActionRankedByVote() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByVote);
	USteamCoreWebAsyncActionRankedByVote::~USteamCoreWebAsyncActionRankedByVote() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionResultSetSummary::execResultSetSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionResultSetSummary**)Z_Param__Result=USteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionResultSetSummary::StaticRegisterNativesUSteamCoreWebAsyncActionResultSetSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionResultSetSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResultSetSummaryAsync", &USteamCoreWebAsyncActionResultSetSummary::execResultSetSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			int32 StartId;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
			USteamCoreWebAsyncActionResultSetSummary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, StartId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_StartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Result Set Summary\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
		{ "DisplayName", "Result Set Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Result Set Summary\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, nullptr, "ResultSetSummaryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionResultSetSummary);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionResultSetSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync, "ResultSetSummaryAsync" }, // 2990362263
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResultSetSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResultSetSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResultSetSummary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionResultSetSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionResultSetSummary>()
	{
		return USteamCoreWebAsyncActionResultSetSummary::StaticClass();
	}
	USteamCoreWebAsyncActionResultSetSummary::USteamCoreWebAsyncActionResultSetSummary() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionResultSetSummary);
	USteamCoreWebAsyncActionResultSetSummary::~USteamCoreWebAsyncActionResultSetSummary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByPublicationOrder"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByPublicationOrder), 789375106U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, USteamCoreWebAsyncActionRankedByTrend::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByTrend"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByTrend), 2767679061U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, USteamCoreWebAsyncActionRankedByVote::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByVote"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByVote), 2655836951U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, USteamCoreWebAsyncActionResultSetSummary::StaticClass, TEXT("USteamCoreWebAsyncActionResultSetSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionResultSetSummary), 1235519939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h_2331795741(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
