// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamEconomy/WebSteamEconomyAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamEconomyAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionCanTrade Function CanTradeAsync ******************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics
{
	struct SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TargetId;
		USteamCoreWebAsyncActionCanTrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Can trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09That the Key is associated with. Must be a steam economy app.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user attempting to initiate a trade\n\x09* @param\x09TargetId (int64)\x09SteamID of user that is the target of the trade invitation\n\x09*/" },
		{ "DisplayName", "Can Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Can trade\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           That the Key is associated with. Must be a steam economy app.\n@param        SteamId                         SteamID of user attempting to initiate a trade\n@param        TargetId (int64)        SteamID of user that is the target of the trade invitation" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanTradeAsync constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanTradeAsync constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanTradeAsync Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, TargetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers) < 2048);
// ********** End Function CanTradeAsync Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade, nullptr, "CanTradeAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionCanTrade::execCanTradeAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionCanTrade**)Z_Param__Result=USteamCoreWebAsyncActionCanTrade::CanTradeAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TargetId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionCanTrade Function CanTradeAsync ********************

// ********** Begin Class USteamCoreWebAsyncActionCanTrade *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade;
UClass* USteamCoreWebAsyncActionCanTrade::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionCanTrade;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionCanTrade"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionCanTrade,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_NoRegister()
{
	return USteamCoreWebAsyncActionCanTrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCanTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCanTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionCanTrade constinit property declarations *********
// ********** End Class USteamCoreWebAsyncActionCanTrade constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanTradeAsync"), .Pointer = &USteamCoreWebAsyncActionCanTrade::execCanTradeAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync, "CanTradeAsync" }, // 953389498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCanTrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::ClassParams = {
	&USteamCoreWebAsyncActionCanTrade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionCanTrade::StaticRegisterNativesUSteamCoreWebAsyncActionCanTrade()
{
	UClass* Class = USteamCoreWebAsyncActionCanTrade::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton;
}
USteamCoreWebAsyncActionCanTrade::USteamCoreWebAsyncActionCanTrade() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionCanTrade);
USteamCoreWebAsyncActionCanTrade::~USteamCoreWebAsyncActionCanTrade() {}
// ********** End Class USteamCoreWebAsyncActionCanTrade *******************************************

// ********** Begin Class USteamCoreWebAsyncActionFinalizeAssetTransaction Function FinalizeAssetTransactionAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics
{
	struct SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TxnId;
		FString Language;
		USteamCoreWebAsyncActionFinalizeAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Finalize Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09SteamID of the user making a purchase\n\x09* @param\x09TxnId\x09\x09The transaction ID\n\x09* @param\x09Language\x09The local Language for the user\n\x09*/" },
		{ "DisplayName", "Finalize Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Finalize Asset Transaction\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The app ID the user is buying assets for\n@param        SteamId         SteamID of the user making a purchase\n@param        TxnId           The transaction ID\n@param        Language        The local Language for the user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeAssetTransactionAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TxnId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeAssetTransactionAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeAssetTransactionAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, TxnId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers) < 2048);
// ********** End Function FinalizeAssetTransactionAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, nullptr, "FinalizeAssetTransactionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionFinalizeAssetTransaction::execFinalizeAssetTransactionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TxnId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionFinalizeAssetTransaction**)Z_Param__Result=USteamCoreWebAsyncActionFinalizeAssetTransaction::FinalizeAssetTransactionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TxnId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionFinalizeAssetTransaction Function FinalizeAssetTransactionAsync 

// ********** Begin Class USteamCoreWebAsyncActionFinalizeAssetTransaction *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction;
UClass* USteamCoreWebAsyncActionFinalizeAssetTransaction::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFinalizeAssetTransaction;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFinalizeAssetTransaction"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeAssetTransaction,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_NoRegister()
{
	return USteamCoreWebAsyncActionFinalizeAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFinalizeAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFinalizeAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFinalizeAssetTransaction constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionFinalizeAssetTransaction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinalizeAssetTransactionAsync"), .Pointer = &USteamCoreWebAsyncActionFinalizeAssetTransaction::execFinalizeAssetTransactionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync, "FinalizeAssetTransactionAsync" }, // 3227379907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFinalizeAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::ClassParams = {
	&USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeAssetTransaction()
{
	UClass* Class = USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton;
}
USteamCoreWebAsyncActionFinalizeAssetTransaction::USteamCoreWebAsyncActionFinalizeAssetTransaction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFinalizeAssetTransaction);
USteamCoreWebAsyncActionFinalizeAssetTransaction::~USteamCoreWebAsyncActionFinalizeAssetTransaction() {}
// ********** End Class USteamCoreWebAsyncActionFinalizeAssetTransaction ***************************

// ********** Begin Class USteamCoreWebAsyncActionGetAssetClassInfo Function GetAssetClassInfoAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics
{
	struct SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Language;
		int32 ClassCount;
		FString ClassId;
		FString InstanceId;
		USteamCoreWebAsyncActionGetAssetClassInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Asset Class Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09* @param\x09""ClassCount\x09\x09Number of classes requested. Must be at least one.\n\x09* @param\x09""ClassId\x09\x09\x09""Class ID of the nth class.\n\x09* @param\x09InstanceId\x09\x09Instance ID of the nth class.\n\x09*/" },
		{ "DisplayName", "Get Asset Class Info" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Asset Class Info\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Language                The user's local Language\n@param        ClassCount              Number of classes requested. Must be at least one.\n@param        ClassId                 Class ID of the nth class.\n@param        InstanceId              Instance ID of the nth class." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetClassInfoAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClassCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetClassInfoAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetClassInfoAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassId = { "ClassId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, InstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAssetClassInfoAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, nullptr, "GetAssetClassInfoAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FIntProperty,Z_Param_ClassCount);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetAssetClassInfo**)Z_Param__Result=USteamCoreWebAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Language,Z_Param_ClassCount,Z_Param_ClassId,Z_Param_InstanceId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetAssetClassInfo Function GetAssetClassInfoAsync **

// ********** Begin Class USteamCoreWebAsyncActionGetAssetClassInfo ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo;
UClass* USteamCoreWebAsyncActionGetAssetClassInfo::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetAssetClassInfo;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetAssetClassInfo"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetClassInfo,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister()
{
	return USteamCoreWebAsyncActionGetAssetClassInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAssetClassInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAssetClassInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetAssetClassInfo constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetAssetClassInfo constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAssetClassInfoAsync"), .Pointer = &USteamCoreWebAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync, "GetAssetClassInfoAsync" }, // 439273515
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetClassInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetAssetClassInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetClassInfo()
{
	UClass* Class = USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton;
}
USteamCoreWebAsyncActionGetAssetClassInfo::USteamCoreWebAsyncActionGetAssetClassInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetAssetClassInfo);
USteamCoreWebAsyncActionGetAssetClassInfo::~USteamCoreWebAsyncActionGetAssetClassInfo() {}
// ********** End Class USteamCoreWebAsyncActionGetAssetClassInfo **********************************

// ********** Begin Class USteamCoreWebAsyncActionGetAssetPrices Function GetAssetPricesAsync ******
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Currency;
		FString Language;
		USteamCoreWebAsyncActionGetAssetPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Returns prices and categories for items that users are able to purchase.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09""Currency\x09\x09The currency to filter for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09*/" },
		{ "DisplayName", "Get Asset Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Currency                The currency to filter for\n@param        Language                The user's local Language" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetPricesAsync constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetPricesAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetPricesAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAssetPricesAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices, nullptr, "GetAssetPricesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetAssetPrices::execGetAssetPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetAssetPrices**)Z_Param__Result=USteamCoreWebAsyncActionGetAssetPrices::GetAssetPricesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Currency,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetAssetPrices Function GetAssetPricesAsync ********

// ********** Begin Class USteamCoreWebAsyncActionGetAssetPrices ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices;
UClass* USteamCoreWebAsyncActionGetAssetPrices::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetAssetPrices;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetAssetPrices"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetPrices,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_NoRegister()
{
	return USteamCoreWebAsyncActionGetAssetPrices::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAssetPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAssetPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetAssetPrices constinit property declarations ***
// ********** End Class USteamCoreWebAsyncActionGetAssetPrices constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAssetPricesAsync"), .Pointer = &USteamCoreWebAsyncActionGetAssetPrices::execGetAssetPricesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync, "GetAssetPricesAsync" }, // 1412222227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetAssetPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetAssetPrices::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetPrices()
{
	UClass* Class = USteamCoreWebAsyncActionGetAssetPrices::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton;
}
USteamCoreWebAsyncActionGetAssetPrices::USteamCoreWebAsyncActionGetAssetPrices() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetAssetPrices);
USteamCoreWebAsyncActionGetAssetPrices::~USteamCoreWebAsyncActionGetAssetPrices() {}
// ********** End Class USteamCoreWebAsyncActionGetAssetPrices *************************************

// ********** Begin Class USteamCoreWebAsyncActionGetExportedAssetsForUser Function GetExportedAssetsForUserAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics
{
	struct SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ContextId;
		USteamCoreWebAsyncActionGetExportedAssetsForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Exported Assets for User\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09The app to get exported items from.\n\x09* @param\x09""ContextId (int64)\x09The context in the app to get exported items from.\n\x09*/" },
		{ "DisplayName", "Get Exported Assets for User" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Exported Assets for User\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        AppId                           The app to get exported items from.\n@param        ContextId (int64)       The context in the app to get exported items from." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExportedAssetsForUserAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExportedAssetsForUserAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExportedAssetsForUserAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers) < 2048);
// ********** End Function GetExportedAssetsForUserAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, nullptr, "GetExportedAssetsForUserAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetExportedAssetsForUser::execGetExportedAssetsForUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetExportedAssetsForUser**)Z_Param__Result=USteamCoreWebAsyncActionGetExportedAssetsForUser::GetExportedAssetsForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetExportedAssetsForUser Function GetExportedAssetsForUserAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetExportedAssetsForUser *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser;
UClass* USteamCoreWebAsyncActionGetExportedAssetsForUser::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetExportedAssetsForUser;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetExportedAssetsForUser"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetExportedAssetsForUser,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_NoRegister()
{
	return USteamCoreWebAsyncActionGetExportedAssetsForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetExportedAssetsForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetExportedAssetsForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetExportedAssetsForUser constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetExportedAssetsForUser constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetExportedAssetsForUserAsync"), .Pointer = &USteamCoreWebAsyncActionGetExportedAssetsForUser::execGetExportedAssetsForUserAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync, "GetExportedAssetsForUserAsync" }, // 636792617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetExportedAssetsForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticRegisterNativesUSteamCoreWebAsyncActionGetExportedAssetsForUser()
{
	UClass* Class = USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton;
}
USteamCoreWebAsyncActionGetExportedAssetsForUser::USteamCoreWebAsyncActionGetExportedAssetsForUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetExportedAssetsForUser);
USteamCoreWebAsyncActionGetExportedAssetsForUser::~USteamCoreWebAsyncActionGetExportedAssetsForUser() {}
// ********** End Class USteamCoreWebAsyncActionGetExportedAssetsForUser ***************************

// ********** Begin Class USteamCoreWebAsyncActionGetMarketPrices Function GetMarketPricesAsync ****
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		USteamCoreWebAsyncActionGetMarketPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Market Prices\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09*/" },
		{ "DisplayName", "Get Market Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Market Prices\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMarketPricesAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMarketPricesAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMarketPricesAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetMarketPricesAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices, nullptr, "GetMarketPricesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetMarketPrices::execGetMarketPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetMarketPrices**)Z_Param__Result=USteamCoreWebAsyncActionGetMarketPrices::GetMarketPricesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetMarketPrices Function GetMarketPricesAsync ******

// ********** Begin Class USteamCoreWebAsyncActionGetMarketPrices **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices;
UClass* USteamCoreWebAsyncActionGetMarketPrices::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetMarketPrices;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetMarketPrices"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetMarketPrices,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_NoRegister()
{
	return USteamCoreWebAsyncActionGetMarketPrices::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetMarketPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetMarketPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetMarketPrices constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionGetMarketPrices constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetMarketPricesAsync"), .Pointer = &USteamCoreWebAsyncActionGetMarketPrices::execGetMarketPricesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync, "GetMarketPricesAsync" }, // 1448896992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetMarketPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetMarketPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetMarketPrices::StaticRegisterNativesUSteamCoreWebAsyncActionGetMarketPrices()
{
	UClass* Class = USteamCoreWebAsyncActionGetMarketPrices::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton;
}
USteamCoreWebAsyncActionGetMarketPrices::USteamCoreWebAsyncActionGetMarketPrices() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetMarketPrices);
USteamCoreWebAsyncActionGetMarketPrices::~USteamCoreWebAsyncActionGetMarketPrices() {}
// ********** End Class USteamCoreWebAsyncActionGetMarketPrices ************************************

// ********** Begin Class USteamCoreWebAsyncActionStartAssetTransaction Function StartAssetTransactionAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics
{
	struct SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString AssetId;
		int32 AssetQuantity;
		FString Currency;
		FString Language;
		FString Ipaddress;
		FString Referer;
		bool bClientAuth;
		USteamCoreWebAsyncActionStartAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Start Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user making a purchase\n\x09* @param\x09""AssetId\x09\x09\x09\x09The ID of the first asset the user is buying - there must be at least one\n\x09* @param\x09""AssetQuantity\x09\x09The quantity of assetid0's the the user is buying\n\x09* @param\x09""Currency\x09\x09\x09The local currency for the user\n\x09* @param\x09Language\x09\x09\x09The local Language for the user\n\x09* @param\x09Ipaddress\x09\x09\x09The user's IP address\n\x09* @param\x09Referer\x09\x09\x09\x09The referring URL\n\x09* @param\x09""bClientAuth\x09\x09\x09If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.\n\x09*/" },
		{ "DisplayName", "Start Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Start Asset Transaction\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app ID the user is buying assets for\n@param        SteamId                         SteamID of user making a purchase\n@param        AssetId                         The ID of the first asset the user is buying - there must be at least one\n@param        AssetQuantity           The quantity of assetid0's the the user is buying\n@param        Currency                        The local currency for the user\n@param        Language                        The local Language for the user\n@param        Ipaddress                       The user's IP address\n@param        Referer                         The referring URL\n@param        bClientAuth                     If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAssetTransactionAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetQuantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Referer;
	static void NewProp_bClientAuth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAssetTransactionAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAssetTransactionAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetQuantity = { "AssetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Referer = { "Referer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Referer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms*)Obj)->bClientAuth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Referer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers) < 2048);
// ********** End Function StartAssetTransactionAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, nullptr, "StartAssetTransactionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionStartAssetTransaction::execStartAssetTransactionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AssetQuantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Referer);
	P_GET_UBOOL(Z_Param_bClientAuth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionStartAssetTransaction**)Z_Param__Result=USteamCoreWebAsyncActionStartAssetTransaction::StartAssetTransactionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_AssetId,Z_Param_AssetQuantity,Z_Param_Currency,Z_Param_Language,Z_Param_Ipaddress,Z_Param_Referer,Z_Param_bClientAuth);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionStartAssetTransaction Function StartAssetTransactionAsync 

// ********** Begin Class USteamCoreWebAsyncActionStartAssetTransaction ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction;
UClass* USteamCoreWebAsyncActionStartAssetTransaction::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionStartAssetTransaction;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionStartAssetTransaction"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionStartAssetTransaction,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister()
{
	return USteamCoreWebAsyncActionStartAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionStartAssetTransaction constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionStartAssetTransaction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartAssetTransactionAsync"), .Pointer = &USteamCoreWebAsyncActionStartAssetTransaction::execStartAssetTransactionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync, "StartAssetTransactionAsync" }, // 3428835930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::ClassParams = {
	&USteamCoreWebAsyncActionStartAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionStartAssetTransaction::StaticRegisterNativesUSteamCoreWebAsyncActionStartAssetTransaction()
{
	UClass* Class = USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton;
}
USteamCoreWebAsyncActionStartAssetTransaction::USteamCoreWebAsyncActionStartAssetTransaction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionStartAssetTransaction);
USteamCoreWebAsyncActionStartAssetTransaction::~USteamCoreWebAsyncActionStartAssetTransaction() {}
// ********** End Class USteamCoreWebAsyncActionStartAssetTransaction ******************************

// ********** Begin Class USteamCoreWebAsyncActionStartTrade Function StartTradeAsync **************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics
{
	struct SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId1;
		FString SteamId2;
		USteamCoreWebAsyncActionStartTrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Start Trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId1\x09\x09SteamID of first user in the trade\n\x09* @param\x09SteamId2\x09\x09SteamID of second user in the trade\n\x09*/" },
		{ "DisplayName", "Start Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Start Trade\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        SteamId1                SteamID of first user in the trade\n@param        SteamId2                SteamID of second user in the trade" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartTradeAsync constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartTradeAsync constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartTradeAsync Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1 = { "SteamId1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers) < 2048);
// ********** End Function StartTradeAsync Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade, nullptr, "StartTradeAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionStartTrade::execStartTradeAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId1);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionStartTrade**)Z_Param__Result=USteamCoreWebAsyncActionStartTrade::StartTradeAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId1,Z_Param_SteamId2);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionStartTrade Function StartTradeAsync ****************

// ********** Begin Class USteamCoreWebAsyncActionStartTrade ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade;
UClass* USteamCoreWebAsyncActionStartTrade::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionStartTrade;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionStartTrade"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionStartTrade,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_NoRegister()
{
	return USteamCoreWebAsyncActionStartTrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionStartTrade constinit property declarations *******
// ********** End Class USteamCoreWebAsyncActionStartTrade constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartTradeAsync"), .Pointer = &USteamCoreWebAsyncActionStartTrade::execStartTradeAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync, "StartTradeAsync" }, // 2761198996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartTrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::ClassParams = {
	&USteamCoreWebAsyncActionStartTrade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionStartTrade::StaticRegisterNativesUSteamCoreWebAsyncActionStartTrade()
{
	UClass* Class = USteamCoreWebAsyncActionStartTrade::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton;
}
USteamCoreWebAsyncActionStartTrade::USteamCoreWebAsyncActionStartTrade() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionStartTrade);
USteamCoreWebAsyncActionStartTrade::~USteamCoreWebAsyncActionStartTrade() {}
// ********** End Class USteamCoreWebAsyncActionStartTrade *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade, USteamCoreWebAsyncActionCanTrade::StaticClass, TEXT("USteamCoreWebAsyncActionCanTrade"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCanTrade), 2758845467U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass, TEXT("USteamCoreWebAsyncActionFinalizeAssetTransaction"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFinalizeAssetTransaction), 2343010879U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetAssetClassInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAssetClassInfo), 4136940101U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices, USteamCoreWebAsyncActionGetAssetPrices::StaticClass, TEXT("USteamCoreWebAsyncActionGetAssetPrices"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAssetPrices), 2458458814U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass, TEXT("USteamCoreWebAsyncActionGetExportedAssetsForUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetExportedAssetsForUser), 1903251770U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices, USteamCoreWebAsyncActionGetMarketPrices::StaticClass, TEXT("USteamCoreWebAsyncActionGetMarketPrices"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetMarketPrices), 751740809U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, USteamCoreWebAsyncActionStartAssetTransaction::StaticClass, TEXT("USteamCoreWebAsyncActionStartAssetTransaction"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartAssetTransaction), 824839733U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade, USteamCoreWebAsyncActionStartTrade::StaticClass, TEXT("USteamCoreWebAsyncActionStartTrade"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartTrade), 2470432108U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_SteamCoreWeb_2071227077{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
