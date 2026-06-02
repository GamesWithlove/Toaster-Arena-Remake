// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVotingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionItemVoteSummary Function ItemVoteSummaryAsync ****
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "DisplayName", "Item Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        AppId                                   appID of product\n@param        PublishedFileIds                The Published File ID who's vote details are required" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ItemVoteSummaryAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ItemVoteSummaryAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ItemVoteSummaryAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers) < 2048);
// ********** End Function ItemVoteSummaryAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, nullptr, "ItemVoteSummaryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionItemVoteSummary Function ItemVoteSummaryAsync ******

// ********** Begin Class USteamCoreWebAsyncActionItemVoteSummary **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary;
UClass* USteamCoreWebAsyncActionItemVoteSummary::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionItemVoteSummary;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionItemVoteSummary"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionItemVoteSummary,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister()
{
	return USteamCoreWebAsyncActionItemVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionItemVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionItemVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionItemVoteSummary constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionItemVoteSummary constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ItemVoteSummaryAsync"), .Pointer = &USteamCoreWebAsyncActionItemVoteSummary::execItemVoteSummaryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync, "ItemVoteSummaryAsync" }, // 2786950444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionItemVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionItemVoteSummary::StaticRegisterNativesUSteamCoreWebAsyncActionItemVoteSummary()
{
	UClass* Class = USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary.OuterSingleton;
}
USteamCoreWebAsyncActionItemVoteSummary::USteamCoreWebAsyncActionItemVoteSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionItemVoteSummary);
USteamCoreWebAsyncActionItemVoteSummary::~USteamCoreWebAsyncActionItemVoteSummary() {}
// ********** End Class USteamCoreWebAsyncActionItemVoteSummary ************************************

// ********** Begin Class USteamCoreWebAsyncActionUserVoteSummary Function UserVoteSummaryAsync ****
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "DisplayName", "User Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        PublishedFileIds                The Published File ID who's vote details are required" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UserVoteSummaryAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UserVoteSummaryAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UserVoteSummaryAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers) < 2048);
// ********** End Function UserVoteSummaryAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary, nullptr, "UserVoteSummaryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::SteamCoreWebAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionUserVoteSummary Function UserVoteSummaryAsync ******

// ********** Begin Class USteamCoreWebAsyncActionUserVoteSummary **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary;
UClass* USteamCoreWebAsyncActionUserVoteSummary::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionUserVoteSummary;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionUserVoteSummary"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionUserVoteSummary,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_NoRegister()
{
	return USteamCoreWebAsyncActionUserVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionUserVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionUserVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionUserVoteSummary constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionUserVoteSummary constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UserVoteSummaryAsync"), .Pointer = &USteamCoreWebAsyncActionUserVoteSummary::execUserVoteSummaryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync, "UserVoteSummaryAsync" }, // 195265673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionUserVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionUserVoteSummary::StaticRegisterNativesUSteamCoreWebAsyncActionUserVoteSummary()
{
	UClass* Class = USteamCoreWebAsyncActionUserVoteSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary.OuterSingleton;
}
USteamCoreWebAsyncActionUserVoteSummary::USteamCoreWebAsyncActionUserVoteSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionUserVoteSummary);
USteamCoreWebAsyncActionUserVoteSummary::~USteamCoreWebAsyncActionUserVoteSummary() {}
// ********** End Class USteamCoreWebAsyncActionUserVoteSummary ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, USteamCoreWebAsyncActionItemVoteSummary::StaticClass, TEXT("USteamCoreWebAsyncActionItemVoteSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionItemVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionItemVoteSummary), 2322853122U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionUserVoteSummary, USteamCoreWebAsyncActionUserVoteSummary::StaticClass, TEXT("USteamCoreWebAsyncActionUserVoteSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionUserVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionUserVoteSummary), 1472263263U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_SteamCoreWeb_912114733{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
