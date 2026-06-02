// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearchAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionRankedByPublicationOrder Function RankedByPublicationOrderAsync 
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
#endif
		{ "DisplayName", "Ranked by Publication Order" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RankedByPublicationOrderAsync constinit property declarations *********
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
// ********** End Function RankedByPublicationOrderAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RankedByPublicationOrderAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers) < 2048);
// ********** End Function RankedByPublicationOrderAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, nullptr, "RankedByPublicationOrderAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionRankedByPublicationOrder Function RankedByPublicationOrderAsync 

// ********** Begin Class USteamCoreWebAsyncActionRankedByPublicationOrder *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder;
UClass* USteamCoreWebAsyncActionRankedByPublicationOrder::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRankedByPublicationOrder;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRankedByPublicationOrder"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRankedByPublicationOrder,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister()
{
	return USteamCoreWebAsyncActionRankedByPublicationOrder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByPublicationOrder\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByPublicationOrder\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRankedByPublicationOrder constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionRankedByPublicationOrder constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RankedByPublicationOrderAsync"), .Pointer = &USteamCoreWebAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync, "RankedByPublicationOrderAsync" }, // 2221065125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByPublicationOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRankedByPublicationOrder::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByPublicationOrder()
{
	UClass* Class = USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder.OuterSingleton;
}
USteamCoreWebAsyncActionRankedByPublicationOrder::USteamCoreWebAsyncActionRankedByPublicationOrder() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRankedByPublicationOrder);
USteamCoreWebAsyncActionRankedByPublicationOrder::~USteamCoreWebAsyncActionRankedByPublicationOrder() {}
// ********** End Class USteamCoreWebAsyncActionRankedByPublicationOrder ***************************

// ********** Begin Class USteamCoreWebAsyncActionRankedByTrend Function RankedByTrendAsync ********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ranked by Trend\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09""Days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
#endif
		{ "DisplayName", "Ranked by Trend" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Trend\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Days                                    Number of days for the trend period, including today\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RankedByTrendAsync constinit property declarations ********************
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
// ********** End Function RankedByTrendAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RankedByTrendAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Days), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers) < 2048);
// ********** End Function RankedByTrendAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, nullptr, "RankedByTrendAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionRankedByTrend Function RankedByTrendAsync **********

// ********** Begin Class USteamCoreWebAsyncActionRankedByTrend ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend;
UClass* USteamCoreWebAsyncActionRankedByTrend::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRankedByTrend;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRankedByTrend"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRankedByTrend,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister()
{
	return USteamCoreWebAsyncActionRankedByTrend::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByTrend\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByTrend\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRankedByTrend constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionRankedByTrend constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RankedByTrendAsync"), .Pointer = &USteamCoreWebAsyncActionRankedByTrend::execRankedByTrendAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync, "RankedByTrendAsync" }, // 2261539121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByTrend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRankedByTrend::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByTrend()
{
	UClass* Class = USteamCoreWebAsyncActionRankedByTrend::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend.OuterSingleton;
}
USteamCoreWebAsyncActionRankedByTrend::USteamCoreWebAsyncActionRankedByTrend() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRankedByTrend);
USteamCoreWebAsyncActionRankedByTrend::~USteamCoreWebAsyncActionRankedByTrend() {}
// ********** End Class USteamCoreWebAsyncActionRankedByTrend **************************************

// ********** Begin Class USteamCoreWebAsyncActionRankedByVote Function RankedByVoteAsync **********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ranked by Vote\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
#endif
		{ "DisplayName", "Ranked by Vote" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Vote\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        Count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RankedByVoteAsync constinit property declarations *********************
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
// ********** End Function RankedByVoteAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RankedByVoteAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers) < 2048);
// ********** End Function RankedByVoteAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, nullptr, "RankedByVoteAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionRankedByVote Function RankedByVoteAsync ************

// ********** Begin Class USteamCoreWebAsyncActionRankedByVote *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote;
UClass* USteamCoreWebAsyncActionRankedByVote::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRankedByVote;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRankedByVote"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRankedByVote,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister()
{
	return USteamCoreWebAsyncActionRankedByVote::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByVote\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByVote\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRankedByVote constinit property declarations *****
// ********** End Class USteamCoreWebAsyncActionRankedByVote constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RankedByVoteAsync"), .Pointer = &USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync, "RankedByVoteAsync" }, // 2967083915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByVote>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRankedByVote::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByVote()
{
	UClass* Class = USteamCoreWebAsyncActionRankedByVote::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote.OuterSingleton;
}
USteamCoreWebAsyncActionRankedByVote::USteamCoreWebAsyncActionRankedByVote() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRankedByVote);
USteamCoreWebAsyncActionRankedByVote::~USteamCoreWebAsyncActionRankedByVote() {}
// ********** End Class USteamCoreWebAsyncActionRankedByVote ***************************************

// ********** Begin Class USteamCoreWebAsyncActionResultSetSummary Function ResultSetSummaryAsync **
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Result Set Summary\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09*/" },
#endif
		{ "DisplayName", "Result Set Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result Set Summary\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        AppId                                   AppId of product\n@param        StartId                                 Starting index in the result set(0 based)\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        Tag                                             Tag to filter result set\n@param        UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResultSetSummaryAsync constinit property declarations *****************
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
// ********** End Function ResultSetSummaryAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResultSetSummaryAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers) < 2048);
// ********** End Function ResultSetSummaryAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, nullptr, "ResultSetSummaryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionResultSetSummary Function ResultSetSummaryAsync ****

// ********** Begin Class USteamCoreWebAsyncActionResultSetSummary *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary;
UClass* USteamCoreWebAsyncActionResultSetSummary::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionResultSetSummary;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionResultSetSummary"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionResultSetSummary,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister()
{
	return USteamCoreWebAsyncActionResultSetSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResultSetSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResultSetSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionResultSetSummary constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionResultSetSummary constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResultSetSummaryAsync"), .Pointer = &USteamCoreWebAsyncActionResultSetSummary::execResultSetSummaryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync, "ResultSetSummaryAsync" }, // 801733700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResultSetSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionResultSetSummary::StaticRegisterNativesUSteamCoreWebAsyncActionResultSetSummary()
{
	UClass* Class = USteamCoreWebAsyncActionResultSetSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary.OuterSingleton;
}
USteamCoreWebAsyncActionResultSetSummary::USteamCoreWebAsyncActionResultSetSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionResultSetSummary);
USteamCoreWebAsyncActionResultSetSummary::~USteamCoreWebAsyncActionResultSetSummary() {}
// ********** End Class USteamCoreWebAsyncActionResultSetSummary ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByPublicationOrder"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByPublicationOrder), 40815438U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, USteamCoreWebAsyncActionRankedByTrend::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByTrend"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByTrend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByTrend), 3599509687U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, USteamCoreWebAsyncActionRankedByVote::StaticClass, TEXT("USteamCoreWebAsyncActionRankedByVote"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRankedByVote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRankedByVote), 908830745U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, USteamCoreWebAsyncActionResultSetSummary::StaticClass, TEXT("USteamCoreWebAsyncActionResultSetSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionResultSetSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionResultSetSummary), 3884549904U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_SteamCoreWeb_3457194441{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
