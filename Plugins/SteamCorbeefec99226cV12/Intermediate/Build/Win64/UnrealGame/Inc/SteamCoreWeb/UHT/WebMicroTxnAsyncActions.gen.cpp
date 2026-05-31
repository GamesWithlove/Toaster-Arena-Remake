// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicroTxn/WebMicroTxnAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebMicroTxnAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionAdjustAgreement Function AdjustAgreementAsync ****
struct Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics
{
	struct SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
		FString NextProcessDate;
		USteamCoreWebAsyncActionAdjustAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Add time to the payment schedule of an agreement with billing type \"steam\".\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is adjusting the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09NextProcessDate\x09\x09""Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended.\n\x09*/" },
		{ "DisplayName", "Adjust Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Add time to the payment schedule of an agreement with billing type \"steam\".\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is adjusting the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for.\n@param        NextProcessDate         Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AdjustAgreementAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextProcessDate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AdjustAgreementAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AdjustAgreementAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_NextProcessDate = { "NextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, NextProcessDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_NextProcessDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers) < 2048);
// ********** End Function AdjustAgreementAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement, nullptr, "AdjustAgreementAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionAdjustAgreement::execAdjustAgreementAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_NextProcessDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionAdjustAgreement**)Z_Param__Result=USteamCoreWebAsyncActionAdjustAgreement::AdjustAgreementAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId,Z_Param_NextProcessDate);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionAdjustAgreement Function AdjustAgreementAsync ******

// ********** Begin Class USteamCoreWebAsyncActionAdjustAgreement **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement;
UClass* USteamCoreWebAsyncActionAdjustAgreement::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionAdjustAgreement;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionAdjustAgreement"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionAdjustAgreement,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_NoRegister()
{
	return USteamCoreWebAsyncActionAdjustAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAdjustAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAdjustAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionAdjustAgreement constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionAdjustAgreement constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AdjustAgreementAsync"), .Pointer = &USteamCoreWebAsyncActionAdjustAgreement::execAdjustAgreementAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync, "AdjustAgreementAsync" }, // 905258638
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAdjustAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::ClassParams = {
	&USteamCoreWebAsyncActionAdjustAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionAdjustAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionAdjustAgreement()
{
	UClass* Class = USteamCoreWebAsyncActionAdjustAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton;
}
USteamCoreWebAsyncActionAdjustAgreement::USteamCoreWebAsyncActionAdjustAgreement() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionAdjustAgreement);
USteamCoreWebAsyncActionAdjustAgreement::~USteamCoreWebAsyncActionAdjustAgreement() {}
// ********** End Class USteamCoreWebAsyncActionAdjustAgreement ************************************

// ********** Begin Class USteamCoreWebAsyncActionCancelAgreement Function CancelAgreementAsync ****
struct Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics
{
	struct SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
		USteamCoreWebAsyncActionCancelAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Cancels a recurring billing agreement (subscription).\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is canceling the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09*/" },
		{ "DisplayName", "Cancel Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Cancels a recurring billing agreement (subscription).\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is canceling the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAgreementAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAgreementAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAgreementAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers) < 2048);
// ********** End Function CancelAgreementAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement, nullptr, "CancelAgreementAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionCancelAgreement::execCancelAgreementAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionCancelAgreement**)Z_Param__Result=USteamCoreWebAsyncActionCancelAgreement::CancelAgreementAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionCancelAgreement Function CancelAgreementAsync ******

// ********** Begin Class USteamCoreWebAsyncActionCancelAgreement **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement;
UClass* USteamCoreWebAsyncActionCancelAgreement::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionCancelAgreement;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionCancelAgreement"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionCancelAgreement,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_NoRegister()
{
	return USteamCoreWebAsyncActionCancelAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionCancelAgreement constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionCancelAgreement constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelAgreementAsync"), .Pointer = &USteamCoreWebAsyncActionCancelAgreement::execCancelAgreementAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync, "CancelAgreementAsync" }, // 1700638479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::ClassParams = {
	&USteamCoreWebAsyncActionCancelAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionCancelAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionCancelAgreement()
{
	UClass* Class = USteamCoreWebAsyncActionCancelAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton;
}
USteamCoreWebAsyncActionCancelAgreement::USteamCoreWebAsyncActionCancelAgreement() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionCancelAgreement);
USteamCoreWebAsyncActionCancelAgreement::~USteamCoreWebAsyncActionCancelAgreement() {}
// ********** End Class USteamCoreWebAsyncActionCancelAgreement ************************************

// ********** Begin Class USteamCoreWebAsyncActionFinalizeTxn Function FinalizeTxnAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics
{
	struct SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString OrderId;
		int32 AppId;
		USteamCoreWebAsyncActionFinalizeTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Completes a purchase that was started by the InitTxn API.\n\x09*\n\x09* This command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\n\x09* Notification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\n\x09* The usersession value specified in InitTxn determines the notification mechanism.\n\x09* A successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "DisplayName", "Finalize Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Completes a purchase that was started by the InitTxn API.\n\nThis command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\nNotification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\nThe usersession value specified in InitTxn determines the notification mechanism.\nA successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        AppId                           App ID for game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeTxnAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeTxnAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeTxnAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers) < 2048);
// ********** End Function FinalizeTxnAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn, nullptr, "FinalizeTxnAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionFinalizeTxn::execFinalizeTxnAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionFinalizeTxn**)Z_Param__Result=USteamCoreWebAsyncActionFinalizeTxn::FinalizeTxnAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_OrderId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionFinalizeTxn Function FinalizeTxnAsync **************

// ********** Begin Class USteamCoreWebAsyncActionFinalizeTxn **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn;
UClass* USteamCoreWebAsyncActionFinalizeTxn::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFinalizeTxn;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFinalizeTxn"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeTxn,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_NoRegister()
{
	return USteamCoreWebAsyncActionFinalizeTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFinalizeTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFinalizeTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFinalizeTxn constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionFinalizeTxn constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinalizeTxnAsync"), .Pointer = &USteamCoreWebAsyncActionFinalizeTxn::execFinalizeTxnAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync, "FinalizeTxnAsync" }, // 2096763136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFinalizeTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::ClassParams = {
	&USteamCoreWebAsyncActionFinalizeTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFinalizeTxn::StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeTxn()
{
	UClass* Class = USteamCoreWebAsyncActionFinalizeTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton;
}
USteamCoreWebAsyncActionFinalizeTxn::USteamCoreWebAsyncActionFinalizeTxn() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFinalizeTxn);
USteamCoreWebAsyncActionFinalizeTxn::~USteamCoreWebAsyncActionFinalizeTxn() {}
// ********** End Class USteamCoreWebAsyncActionFinalizeTxn ****************************************

// ********** Begin Class USteamCoreWebAsyncActionGetReport Function GetReportAsync ****************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics
{
	struct SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Time;
		FString Type;
		int32 MaxResults;
		USteamCoreWebAsyncActionGetReport* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09* @param\x09Time\x09\x09\x09\x09Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n\x09* @param\x09Type\x09\x09\x09\x09Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n\x09* @param\x09MaxResults\x09\x09\x09Maximum number of results to return in report. (Default is 1000 if no value is set)\n\x09*/" },
		{ "CPP_Default_MaxResults", "1000" },
		{ "CPP_Default_Time", "2010-01-01T00:00:00Z" },
		{ "CPP_Default_Type", "GAMESALES" },
		{ "DisplayName", "Get Report" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID for game.\n@param        Time                            Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n@param        Type                            Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n@param        MaxResults                      Maximum number of results to return in report. (Default is 1000 if no value is set)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetReportAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetReportAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetReportAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers) < 2048);
// ********** End Function GetReportAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetReport, nullptr, "GetReportAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetReport::execGetReportAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Time);
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetReport**)Z_Param__Result=USteamCoreWebAsyncActionGetReport::GetReportAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Time,Z_Param_Type,Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetReport Function GetReportAsync ******************

// ********** Begin Class USteamCoreWebAsyncActionGetReport ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport;
UClass* USteamCoreWebAsyncActionGetReport::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetReport;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetReport"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetReport,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_NoRegister()
{
	return USteamCoreWebAsyncActionGetReport::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetReport\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetReport\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetReport constinit property declarations ********
// ********** End Class USteamCoreWebAsyncActionGetReport constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetReportAsync"), .Pointer = &USteamCoreWebAsyncActionGetReport::execGetReportAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync, "GetReportAsync" }, // 3711658563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetReport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetReport::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetReport::StaticRegisterNativesUSteamCoreWebAsyncActionGetReport()
{
	UClass* Class = USteamCoreWebAsyncActionGetReport::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton;
}
USteamCoreWebAsyncActionGetReport::USteamCoreWebAsyncActionGetReport() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetReport);
USteamCoreWebAsyncActionGetReport::~USteamCoreWebAsyncActionGetReport() {}
// ********** End Class USteamCoreWebAsyncActionGetReport ******************************************

// ********** Begin Class USteamCoreWebAsyncActionGetUserAgreementInfo Function GetUserAgreementInfoAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionGetUserAgreementInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "DisplayName", "Get User Agreement Info" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID for game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserAgreementInfoAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserAgreementInfoAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserAgreementInfoAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUserAgreementInfoAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, nullptr, "GetUserAgreementInfoAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUserAgreementInfo::execGetUserAgreementInfoAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetUserAgreementInfo**)Z_Param__Result=USteamCoreWebAsyncActionGetUserAgreementInfo::GetUserAgreementInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetUserAgreementInfo Function GetUserAgreementInfoAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetUserAgreementInfo *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo;
UClass* USteamCoreWebAsyncActionGetUserAgreementInfo::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUserAgreementInfo;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUserAgreementInfo"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUserAgreementInfo,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_NoRegister()
{
	return USteamCoreWebAsyncActionGetUserAgreementInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserAgreementInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserAgreementInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUserAgreementInfo constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetUserAgreementInfo constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserAgreementInfoAsync"), .Pointer = &USteamCoreWebAsyncActionGetUserAgreementInfo::execGetUserAgreementInfoAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync, "GetUserAgreementInfoAsync" }, // 3469830247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserAgreementInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUserAgreementInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserAgreementInfo()
{
	UClass* Class = USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton;
}
USteamCoreWebAsyncActionGetUserAgreementInfo::USteamCoreWebAsyncActionGetUserAgreementInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUserAgreementInfo);
USteamCoreWebAsyncActionGetUserAgreementInfo::~USteamCoreWebAsyncActionGetUserAgreementInfo() {}
// ********** End Class USteamCoreWebAsyncActionGetUserAgreementInfo *******************************

// ********** Begin Class USteamCoreWebAsyncActionGetUserInfo Function GetUserInfoAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString Ipaddress;
		USteamCoreWebAsyncActionGetUserInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Retrieves details for a user's purchasing info.\n\x09*\n\x09* These details are based upon the user's Steam wallet.\n\x09* For new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web.\n\x09*/" },
		{ "DisplayName", "Get User Info" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Retrieves details for a user's purchasing info.\n\nThese details are based upon the user's Steam wallet.\nFor new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserInfoAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserInfoAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserInfoAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUserInfoAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo, nullptr, "GetUserInfoAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUserInfo::execGetUserInfoAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetUserInfo**)Z_Param__Result=USteamCoreWebAsyncActionGetUserInfo::GetUserInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_Ipaddress);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetUserInfo Function GetUserInfoAsync **************

// ********** Begin Class USteamCoreWebAsyncActionGetUserInfo **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo;
UClass* USteamCoreWebAsyncActionGetUserInfo::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUserInfo;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUserInfo"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUserInfo,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_NoRegister()
{
	return USteamCoreWebAsyncActionGetUserInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUserInfo constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionGetUserInfo constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserInfoAsync"), .Pointer = &USteamCoreWebAsyncActionGetUserInfo::execGetUserInfoAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync, "GetUserInfoAsync" }, // 1640114325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetUserInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUserInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserInfo()
{
	UClass* Class = USteamCoreWebAsyncActionGetUserInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton;
}
USteamCoreWebAsyncActionGetUserInfo::USteamCoreWebAsyncActionGetUserInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUserInfo);
USteamCoreWebAsyncActionGetUserInfo::~USteamCoreWebAsyncActionGetUserInfo() {}
// ********** End Class USteamCoreWebAsyncActionGetUserInfo ****************************************

// ********** Begin Class USteamCoreWebAsyncActionInitTxn Function InitTxnAsync ********************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics
{
	struct SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString OrderId;
		FString SteamId;
		int32 AppId;
		FString Language;
		FString Currency;
		FString UserSession;
		FString Ipaddress;
		TArray<int32> ItemID;
		TArray<int32> Quantity;
		TArray<FString> Amount;
		TArray<FString> Description;
		TArray<FString> Category;
		TArray<int32> AssociatedBundle;
		TArray<FString> BillingType;
		TArray<FString> StartDate;
		TArray<FString> EndDate;
		TArray<FString> Period;
		TArray<int32> Frequency;
		TArray<FString> RecurringAmt;
		TArray<int32> BundleCount;
		TArray<int32> BundleId;
		TArray<int32> BundleQty;
		TArray<FString> BundleDesc;
		TArray<FString> BundleCategory;
		USteamCoreWebAsyncActionInitTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "category, associatedBundle, billingType, startDate, endDate, period, frequency, recurringAmt, bundleCount, bundleID, bundleQty, bundleDesc, bundleCategory" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\x09*\n\x09* This command allows you to create a shopping cart of one or more items for a user.\n\x09* The cost and descriptions of these items will be displayed to the user for their approval.\n\x09* The purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\x09*\n\x09* A successful response to this command means the transaction has been created.\n\x09* If the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\n\x09* For a web interface, redirect the user to the steam URL returned in the response.\n\x09* In the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\x09*\n\x09* When a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\n\x09* Web sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09Language\x09\x09\x09ISO 639-1 language code of the item descriptions.\n\x09* @param\x09""Currency\x09\x09\x09ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n\x09* @param\x09UserSession\x09\x09\x09Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n\x09* @param\x09ItemID\x09\x09\x09\x09""3rd party ID for item.\n\x09* @param\x09Quantity\x09\x09\x09Quantity of this item.\n\x09* @param\x09""Amount\x09\x09\x09\x09Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n\x09* @param\x09""Description\x09\x09\x09""Description of item.\n\x09* @param\x09""Category\x09\x09\x09Optional category grouping for item.\n\x09* @param\x09""AssociatedBundle\x09Optional bundleid of associated bundle.\n\x09* @param\x09""BillingType\x09\x09\x09Optional recurring billing type.\n\x09* @param\x09StartDate\x09\x09\x09Optional start date for recurring billing.\n\x09* @param\x09""EndDate\x09\x09\x09\x09Optional end date for recurring billing.\n\x09* @param\x09Period\x09\x09\x09\x09Optional period for recurring billing.\n\x09* @param\x09""Frequency\x09\x09\x09Optional frequency for recurring billing.\n\x09* @param\x09RecurringAmt\x09\x09Optional amount to be billed for future recurring billing transactions.\n\x09* @param\x09""BundleCount\x09\x09\x09Number of bundles in cart.\n\x09* @param\x09""BundleId\x09\x09\x09""3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n\x09* @param\x09""BundleQty\x09\x09\x09Quantity of this bundle.\n\x09* @param\x09""BundleDesc\x09\x09\x09""Description of bundle.\n\x09* @param\x09""BundleCategory\x09\x09Optional category grouping for bundle.\n\x09*/" },
		{ "DisplayName", "Init Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\nThis command allows you to create a shopping cart of one or more items for a user.\nThe cost and descriptions of these items will be displayed to the user for their approval.\nThe purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\nA successful response to this command means the transaction has been created.\nIf the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\nFor a web interface, redirect the user to the steam URL returned in the response.\nIn the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\nWhen a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\nWeb sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID of game this transaction is for.\n@param        Language                        ISO 639-1 language code of the item descriptions.\n@param        Currency                        ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n@param        UserSession                     Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n@param        ItemID                          3rd party ID for item.\n@param        Quantity                        Quantity of this item.\n@param        Amount                          Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n@param        Description                     Description of item.\n@param        Category                        Optional category grouping for item.\n@param        AssociatedBundle        Optional bundleid of associated bundle.\n@param        BillingType                     Optional recurring billing type.\n@param        StartDate                       Optional start date for recurring billing.\n@param        EndDate                         Optional end date for recurring billing.\n@param        Period                          Optional period for recurring billing.\n@param        Frequency                       Optional frequency for recurring billing.\n@param        RecurringAmt            Optional amount to be billed for future recurring billing transactions.\n@param        BundleCount                     Number of bundles in cart.\n@param        BundleId                        3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n@param        BundleQty                       Quantity of this bundle.\n@param        BundleDesc                      Description of bundle.\n@param        BundleCategory          Optional category grouping for bundle." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitTxnAsync constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSession;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Amount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssociatedBundle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssociatedBundle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BillingType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BillingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartDate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndDate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Period_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Period;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecurringAmt_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RecurringAmt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleQty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleQty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleDesc_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleCategory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitTxnAsync constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitTxnAsync Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_UserSession = { "UserSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, UserSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID_Inner = { "ItemID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ItemID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount_Inner = { "Amount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Amount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description_Inner = { "Description", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Description), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Category), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle_Inner = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, AssociatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType_Inner = { "BillingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType = { "BillingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BillingType), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate_Inner = { "StartDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, StartDate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate_Inner = { "EndDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, EndDate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period_Inner = { "Period", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Period), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency_Inner = { "Frequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Frequency), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt_Inner = { "RecurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt = { "RecurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, RecurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount_Inner = { "BundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount = { "BundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId_Inner = { "BundleId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId = { "BundleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty_Inner = { "BundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty = { "BundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc_Inner = { "BundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc = { "BundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory_Inner = { "BundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory = { "BundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_UserSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers) < 2048);
// ********** End Function InitTxnAsync Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, nullptr, "InitTxnAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionInitTxn::execInitTxnAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSession);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_TARRAY(int32,Z_Param_ItemID);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_GET_TARRAY(FString,Z_Param_Amount);
	P_GET_TARRAY(FString,Z_Param_Description);
	P_GET_TARRAY(FString,Z_Param_Category);
	P_GET_TARRAY(int32,Z_Param_AssociatedBundle);
	P_GET_TARRAY(FString,Z_Param_BillingType);
	P_GET_TARRAY(FString,Z_Param_StartDate);
	P_GET_TARRAY(FString,Z_Param_EndDate);
	P_GET_TARRAY(FString,Z_Param_Period);
	P_GET_TARRAY(int32,Z_Param_Frequency);
	P_GET_TARRAY(FString,Z_Param_RecurringAmt);
	P_GET_TARRAY(int32,Z_Param_BundleCount);
	P_GET_TARRAY(int32,Z_Param_BundleId);
	P_GET_TARRAY(int32,Z_Param_BundleQty);
	P_GET_TARRAY(FString,Z_Param_BundleDesc);
	P_GET_TARRAY(FString,Z_Param_BundleCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionInitTxn**)Z_Param__Result=USteamCoreWebAsyncActionInitTxn::InitTxnAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_OrderId,Z_Param_SteamId,Z_Param_AppId,Z_Param_Language,Z_Param_Currency,Z_Param_UserSession,Z_Param_Ipaddress,Z_Param_ItemID,Z_Param_Quantity,Z_Param_Amount,Z_Param_Description,Z_Param_Category,Z_Param_AssociatedBundle,Z_Param_BillingType,Z_Param_StartDate,Z_Param_EndDate,Z_Param_Period,Z_Param_Frequency,Z_Param_RecurringAmt,Z_Param_BundleCount,Z_Param_BundleId,Z_Param_BundleQty,Z_Param_BundleDesc,Z_Param_BundleCategory);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionInitTxn Function InitTxnAsync **********************

// ********** Begin Class USteamCoreWebAsyncActionInitTxn ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn;
UClass* USteamCoreWebAsyncActionInitTxn::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionInitTxn;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionInitTxn"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionInitTxn,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister()
{
	return USteamCoreWebAsyncActionInitTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionInitTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionInitTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionInitTxn constinit property declarations **********
// ********** End Class USteamCoreWebAsyncActionInitTxn constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitTxnAsync"), .Pointer = &USteamCoreWebAsyncActionInitTxn::execInitTxnAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync, "InitTxnAsync" }, // 1286052340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionInitTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::ClassParams = {
	&USteamCoreWebAsyncActionInitTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionInitTxn::StaticRegisterNativesUSteamCoreWebAsyncActionInitTxn()
{
	UClass* Class = USteamCoreWebAsyncActionInitTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton;
}
USteamCoreWebAsyncActionInitTxn::USteamCoreWebAsyncActionInitTxn() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionInitTxn);
USteamCoreWebAsyncActionInitTxn::~USteamCoreWebAsyncActionInitTxn() {}
// ********** End Class USteamCoreWebAsyncActionInitTxn ********************************************

// ********** Begin Class USteamCoreWebAsyncActionProcessAgreement Function ProcessAgreementAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics
{
	struct SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString OrderId;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
		int32 Amount;
		FString Currency;
		USteamCoreWebAsyncActionProcessAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Initiate a recurring payment (subscription) for the user.\n\x09*\n\x09* A successful response means that Steam will initiate a billing cycle for the user.\n\x09* It does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n\x09* @param\x09SteamId\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AgreementId\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09""Amount\x09\x09\x09Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n\x09* @param\x09""Currency\x09\x09ISO 4217 currency code of prices\n\x09*/" },
		{ "DisplayName", "Process Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Initiate a recurring payment (subscription) for the user.\n\nA successful response means that Steam will initiate a billing cycle for the user.\nIt does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        OrderId                 Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n@param        SteamId                 Steam ID of the client.\n@param        AgreementId             Unique 64-bit Steam billing agreement ID.\n@param        AppId                   App ID of the game the agreement is for.\n@param        Amount                  Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n@param        Currency                ISO 4217 currency code of prices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessAgreementAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessAgreementAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessAgreementAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers) < 2048);
// ********** End Function ProcessAgreementAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement, nullptr, "ProcessAgreementAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionProcessAgreement::execProcessAgreementAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionProcessAgreement**)Z_Param__Result=USteamCoreWebAsyncActionProcessAgreement::ProcessAgreementAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_OrderId,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId,Z_Param_Amount,Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionProcessAgreement Function ProcessAgreementAsync ****

// ********** Begin Class USteamCoreWebAsyncActionProcessAgreement *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement;
UClass* USteamCoreWebAsyncActionProcessAgreement::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionProcessAgreement;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionProcessAgreement"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionProcessAgreement,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_NoRegister()
{
	return USteamCoreWebAsyncActionProcessAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionProcessAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionProcessAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionProcessAgreement constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionProcessAgreement constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ProcessAgreementAsync"), .Pointer = &USteamCoreWebAsyncActionProcessAgreement::execProcessAgreementAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync, "ProcessAgreementAsync" }, // 2540940995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionProcessAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::ClassParams = {
	&USteamCoreWebAsyncActionProcessAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionProcessAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionProcessAgreement()
{
	UClass* Class = USteamCoreWebAsyncActionProcessAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton;
}
USteamCoreWebAsyncActionProcessAgreement::USteamCoreWebAsyncActionProcessAgreement() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionProcessAgreement);
USteamCoreWebAsyncActionProcessAgreement::~USteamCoreWebAsyncActionProcessAgreement() {}
// ********** End Class USteamCoreWebAsyncActionProcessAgreement ***********************************

// ********** Begin Class USteamCoreWebAsyncActionQueryTxn Function QueryTxnAsync ******************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics
{
	struct SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString OrderId;
		FString TransId;
		USteamCoreWebAsyncActionQueryTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Query the status of an order that was previously created with InitTxn.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09TransId\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "DisplayName", "Query Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Query the status of an order that was previously created with InitTxn.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        TransId                         Unique 64-bit Steam transaction ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryTxnAsync constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryTxnAsync constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryTxnAsync Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_TransId = { "TransId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, TransId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_TransId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers) < 2048);
// ********** End Function QueryTxnAsync Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn, nullptr, "QueryTxnAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionQueryTxn::execQueryTxnAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TransId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionQueryTxn**)Z_Param__Result=USteamCoreWebAsyncActionQueryTxn::QueryTxnAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_OrderId,Z_Param_TransId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionQueryTxn Function QueryTxnAsync ********************

// ********** Begin Class USteamCoreWebAsyncActionQueryTxn *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn;
UClass* USteamCoreWebAsyncActionQueryTxn::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionQueryTxn;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionQueryTxn"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionQueryTxn,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_NoRegister()
{
	return USteamCoreWebAsyncActionQueryTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionQueryTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionQueryTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionQueryTxn constinit property declarations *********
// ********** End Class USteamCoreWebAsyncActionQueryTxn constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("QueryTxnAsync"), .Pointer = &USteamCoreWebAsyncActionQueryTxn::execQueryTxnAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync, "QueryTxnAsync" }, // 969310894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionQueryTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::ClassParams = {
	&USteamCoreWebAsyncActionQueryTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionQueryTxn::StaticRegisterNativesUSteamCoreWebAsyncActionQueryTxn()
{
	UClass* Class = USteamCoreWebAsyncActionQueryTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton;
}
USteamCoreWebAsyncActionQueryTxn::USteamCoreWebAsyncActionQueryTxn() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionQueryTxn);
USteamCoreWebAsyncActionQueryTxn::~USteamCoreWebAsyncActionQueryTxn() {}
// ********** End Class USteamCoreWebAsyncActionQueryTxn *******************************************

// ********** Begin Class USteamCoreWebAsyncActionRefundTxn Function RefundTxnAsync ****************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics
{
	struct SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString OrderId;
		int32 AppId;
		USteamCoreWebAsyncActionRefundTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09transID\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "DisplayName", "Refund Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        transID                         Unique 64-bit Steam transaction ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefundTxnAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefundTxnAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefundTxnAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers) < 2048);
// ********** End Function RefundTxnAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn, nullptr, "RefundTxnAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionRefundTxn::execRefundTxnAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionRefundTxn**)Z_Param__Result=USteamCoreWebAsyncActionRefundTxn::RefundTxnAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_OrderId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionRefundTxn Function RefundTxnAsync ******************

// ********** Begin Class USteamCoreWebAsyncActionRefundTxn ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn;
UClass* USteamCoreWebAsyncActionRefundTxn::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRefundTxn;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRefundTxn"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRefundTxn,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_NoRegister()
{
	return USteamCoreWebAsyncActionRefundTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRefundTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRefundTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRefundTxn constinit property declarations ********
// ********** End Class USteamCoreWebAsyncActionRefundTxn constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RefundTxnAsync"), .Pointer = &USteamCoreWebAsyncActionRefundTxn::execRefundTxnAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync, "RefundTxnAsync" }, // 1313144224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRefundTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::ClassParams = {
	&USteamCoreWebAsyncActionRefundTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRefundTxn::StaticRegisterNativesUSteamCoreWebAsyncActionRefundTxn()
{
	UClass* Class = USteamCoreWebAsyncActionRefundTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton;
}
USteamCoreWebAsyncActionRefundTxn::USteamCoreWebAsyncActionRefundTxn() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRefundTxn);
USteamCoreWebAsyncActionRefundTxn::~USteamCoreWebAsyncActionRefundTxn() {}
// ********** End Class USteamCoreWebAsyncActionRefundTxn ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement, USteamCoreWebAsyncActionAdjustAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionAdjustAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAdjustAgreement), 265007185U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement, USteamCoreWebAsyncActionCancelAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionCancelAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCancelAgreement), 521840282U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn, USteamCoreWebAsyncActionFinalizeTxn::StaticClass, TEXT("USteamCoreWebAsyncActionFinalizeTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFinalizeTxn), 2153395868U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetReport, USteamCoreWebAsyncActionGetReport::StaticClass, TEXT("USteamCoreWebAsyncActionGetReport"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetReport), 1680347277U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserAgreementInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserAgreementInfo), 1256582572U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo, USteamCoreWebAsyncActionGetUserInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserInfo), 3447065391U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, USteamCoreWebAsyncActionInitTxn::StaticClass, TEXT("USteamCoreWebAsyncActionInitTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionInitTxn), 3409255393U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement, USteamCoreWebAsyncActionProcessAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionProcessAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionProcessAgreement), 1109219403U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn, USteamCoreWebAsyncActionQueryTxn::StaticClass, TEXT("USteamCoreWebAsyncActionQueryTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionQueryTxn), 2001560581U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn, USteamCoreWebAsyncActionRefundTxn::StaticClass, TEXT("USteamCoreWebAsyncActionRefundTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRefundTxn), 2627529837U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h__Script_SteamCoreWeb_3246737876{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
