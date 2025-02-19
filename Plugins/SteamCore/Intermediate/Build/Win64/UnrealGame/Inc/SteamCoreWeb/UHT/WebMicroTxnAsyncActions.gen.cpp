// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/MicroTxn/WebMicroTxnAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebMicroTxnAsyncActions() {}
// Cross Module References
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
// End Cross Module References
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
	void USteamCoreWebAsyncActionAdjustAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionAdjustAgreement()
	{
		UClass* Class = USteamCoreWebAsyncActionAdjustAgreement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAgreementAsync", &USteamCoreWebAsyncActionAdjustAgreement::execAdjustAgreementAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextProcessDate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, AgreementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_NextProcessDate = { "NextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, NextProcessDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AgreementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_NextProcessDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Add time to the payment schedule of an agreement with billing type \"steam\".\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is adjusting the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09NextProcessDate\x09\x09""Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended.\n\x09*/" },
		{ "DisplayName", "Adjust Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Add time to the payment schedule of an agreement with billing type \"steam\".\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is adjusting the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for.\n@param        NextProcessDate         Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement, nullptr, "AdjustAgreementAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::SteamCoreWebAsyncActionAdjustAgreement_eventAdjustAgreementAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionAdjustAgreement);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_NoRegister()
	{
		return USteamCoreWebAsyncActionAdjustAgreement::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync, "AdjustAgreementAsync" }, // 354087642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAdjustAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAdjustAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAdjustAgreement>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionAdjustAgreement>()
	{
		return USteamCoreWebAsyncActionAdjustAgreement::StaticClass();
	}
	USteamCoreWebAsyncActionAdjustAgreement::USteamCoreWebAsyncActionAdjustAgreement() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionAdjustAgreement);
	USteamCoreWebAsyncActionAdjustAgreement::~USteamCoreWebAsyncActionAdjustAgreement() {}
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
	void USteamCoreWebAsyncActionCancelAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionCancelAgreement()
	{
		UClass* Class = USteamCoreWebAsyncActionCancelAgreement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAgreementAsync", &USteamCoreWebAsyncActionCancelAgreement::execCancelAgreementAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, AgreementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AgreementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Cancels a recurring billing agreement (subscription).\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is canceling the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09*/" },
		{ "DisplayName", "Cancel Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Cancels a recurring billing agreement (subscription).\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is canceling the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement, nullptr, "CancelAgreementAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::SteamCoreWebAsyncActionCancelAgreement_eventCancelAgreementAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionCancelAgreement);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_NoRegister()
	{
		return USteamCoreWebAsyncActionCancelAgreement::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync, "CancelAgreementAsync" }, // 3249039380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelAgreement>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCancelAgreement>()
	{
		return USteamCoreWebAsyncActionCancelAgreement::StaticClass();
	}
	USteamCoreWebAsyncActionCancelAgreement::USteamCoreWebAsyncActionCancelAgreement() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCancelAgreement);
	USteamCoreWebAsyncActionCancelAgreement::~USteamCoreWebAsyncActionCancelAgreement() {}
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
	void USteamCoreWebAsyncActionFinalizeTxn::StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeTxn()
	{
		UClass* Class = USteamCoreWebAsyncActionFinalizeTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinalizeTxnAsync", &USteamCoreWebAsyncActionFinalizeTxn::execFinalizeTxnAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, OrderId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_OrderId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Completes a purchase that was started by the InitTxn API.\n\x09*\n\x09* This command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\n\x09* Notification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\n\x09* The usersession value specified in InitTxn determines the notification mechanism.\n\x09* A successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "DisplayName", "Finalize Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Completes a purchase that was started by the InitTxn API.\n\nThis command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\nNotification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\nThe usersession value specified in InitTxn determines the notification mechanism.\nA successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        AppId                           App ID for game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn, nullptr, "FinalizeTxnAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::SteamCoreWebAsyncActionFinalizeTxn_eventFinalizeTxnAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionFinalizeTxn);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_NoRegister()
	{
		return USteamCoreWebAsyncActionFinalizeTxn::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync, "FinalizeTxnAsync" }, // 4085629946
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFinalizeTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFinalizeTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFinalizeTxn>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFinalizeTxn>()
	{
		return USteamCoreWebAsyncActionFinalizeTxn::StaticClass();
	}
	USteamCoreWebAsyncActionFinalizeTxn::USteamCoreWebAsyncActionFinalizeTxn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFinalizeTxn);
	USteamCoreWebAsyncActionFinalizeTxn::~USteamCoreWebAsyncActionFinalizeTxn() {}
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
	void USteamCoreWebAsyncActionGetReport::StaticRegisterNativesUSteamCoreWebAsyncActionGetReport()
	{
		UClass* Class = USteamCoreWebAsyncActionGetReport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReportAsync", &USteamCoreWebAsyncActionGetReport::execGetReportAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::Function_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetReport, nullptr, "GetReportAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::SteamCoreWebAsyncActionGetReport_eventGetReportAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetReport);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_NoRegister()
	{
		return USteamCoreWebAsyncActionGetReport::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetReport_GetReportAsync, "GetReportAsync" }, // 1273379006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetReport\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetReport\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetReport>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetReport()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetReport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetReport>()
	{
		return USteamCoreWebAsyncActionGetReport::StaticClass();
	}
	USteamCoreWebAsyncActionGetReport::USteamCoreWebAsyncActionGetReport() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetReport);
	USteamCoreWebAsyncActionGetReport::~USteamCoreWebAsyncActionGetReport() {}
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
	void USteamCoreWebAsyncActionGetUserAgreementInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserAgreementInfo()
	{
		UClass* Class = USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserAgreementInfoAsync", &USteamCoreWebAsyncActionGetUserAgreementInfo::execGetUserAgreementInfoAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "DisplayName", "Get User Agreement Info" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID for game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, nullptr, "GetUserAgreementInfoAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::SteamCoreWebAsyncActionGetUserAgreementInfo_eventGetUserAgreementInfoAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetUserAgreementInfo);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_NoRegister()
	{
		return USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync, "GetUserAgreementInfoAsync" }, // 2648381959
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserAgreementInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserAgreementInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserAgreementInfo>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetUserAgreementInfo>()
	{
		return USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass();
	}
	USteamCoreWebAsyncActionGetUserAgreementInfo::USteamCoreWebAsyncActionGetUserAgreementInfo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetUserAgreementInfo);
	USteamCoreWebAsyncActionGetUserAgreementInfo::~USteamCoreWebAsyncActionGetUserAgreementInfo() {}
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
	void USteamCoreWebAsyncActionGetUserInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserInfo()
	{
		UClass* Class = USteamCoreWebAsyncActionGetUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserInfoAsync", &USteamCoreWebAsyncActionGetUserInfo::execGetUserInfoAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, Ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_Ipaddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Retrieves details for a user's purchasing info.\n\x09*\n\x09* These details are based upon the user's Steam wallet.\n\x09* For new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web.\n\x09*/" },
		{ "DisplayName", "Get User Info" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Retrieves details for a user's purchasing info.\n\nThese details are based upon the user's Steam wallet.\nFor new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo, nullptr, "GetUserInfoAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::SteamCoreWebAsyncActionGetUserInfo_eventGetUserInfoAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetUserInfo);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_NoRegister()
	{
		return USteamCoreWebAsyncActionGetUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync, "GetUserInfoAsync" }, // 1246051006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserInfo>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetUserInfo>()
	{
		return USteamCoreWebAsyncActionGetUserInfo::StaticClass();
	}
	USteamCoreWebAsyncActionGetUserInfo::USteamCoreWebAsyncActionGetUserInfo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetUserInfo);
	USteamCoreWebAsyncActionGetUserInfo::~USteamCoreWebAsyncActionGetUserInfo() {}
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
	void USteamCoreWebAsyncActionInitTxn::StaticRegisterNativesUSteamCoreWebAsyncActionInitTxn()
	{
		UClass* Class = USteamCoreWebAsyncActionInitTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitTxnAsync", &USteamCoreWebAsyncActionInitTxn::execInitTxnAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, OrderId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_UserSession = { "UserSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, UserSession), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID_Inner = { "ItemID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ItemID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount_Inner = { "Amount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Amount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description_Inner = { "Description", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Description), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Category), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle_Inner = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AssociatedBundle = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, AssociatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType_Inner = { "BillingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BillingType = { "BillingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BillingType), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate_Inner = { "StartDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, StartDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate_Inner = { "EndDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, EndDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period_Inner = { "Period", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Period), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency_Inner = { "Frequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Frequency), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt_Inner = { "RecurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_RecurringAmt = { "RecurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, RecurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount_Inner = { "BundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCount = { "BundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId_Inner = { "BundleId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleId = { "BundleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty_Inner = { "BundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleQty = { "BundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc_Inner = { "BundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleDesc = { "BundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory_Inner = { "BundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_BundleCategory = { "BundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, BundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "category, associatedBundle, billingType, startDate, endDate, period, frequency, recurringAmt, bundleCount, bundleID, bundleQty, bundleDesc, bundleCategory" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\x09*\n\x09* This command allows you to create a shopping cart of one or more items for a user.\n\x09* The cost and descriptions of these items will be displayed to the user for their approval.\n\x09* The purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\x09*\n\x09* A successful response to this command means the transaction has been created.\n\x09* If the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\n\x09* For a web interface, redirect the user to the steam URL returned in the response.\n\x09* In the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\x09*\n\x09* When a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\n\x09* Web sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09Language\x09\x09\x09ISO 639-1 language code of the item descriptions.\n\x09* @param\x09""Currency\x09\x09\x09ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n\x09* @param\x09UserSession\x09\x09\x09Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n\x09* @param\x09ItemID\x09\x09\x09\x09""3rd party ID for item.\n\x09* @param\x09Quantity\x09\x09\x09Quantity of this item.\n\x09* @param\x09""Amount\x09\x09\x09\x09Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n\x09* @param\x09""Description\x09\x09\x09""Description of item.\n\x09* @param\x09""Category\x09\x09\x09Optional category grouping for item.\n\x09* @param\x09""AssociatedBundle\x09Optional bundleid of associated bundle.\n\x09* @param\x09""BillingType\x09\x09\x09Optional recurring billing type.\n\x09* @param\x09StartDate\x09\x09\x09Optional start date for recurring billing.\n\x09* @param\x09""EndDate\x09\x09\x09\x09Optional end date for recurring billing.\n\x09* @param\x09Period\x09\x09\x09\x09Optional period for recurring billing.\n\x09* @param\x09""Frequency\x09\x09\x09Optional frequency for recurring billing.\n\x09* @param\x09RecurringAmt\x09\x09Optional amount to be billed for future recurring billing transactions.\n\x09* @param\x09""BundleCount\x09\x09\x09Number of bundles in cart.\n\x09* @param\x09""BundleId\x09\x09\x09""3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n\x09* @param\x09""BundleQty\x09\x09\x09Quantity of this bundle.\n\x09* @param\x09""BundleDesc\x09\x09\x09""Description of bundle.\n\x09* @param\x09""BundleCategory\x09\x09Optional category grouping for bundle.\n\x09*/" },
		{ "DisplayName", "Init Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\nThis command allows you to create a shopping cart of one or more items for a user.\nThe cost and descriptions of these items will be displayed to the user for their approval.\nThe purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\nA successful response to this command means the transaction has been created.\nIf the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\nFor a web interface, redirect the user to the steam URL returned in the response.\nIn the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\nWhen a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\nWeb sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID of game this transaction is for.\n@param        Language                        ISO 639-1 language code of the item descriptions.\n@param        Currency                        ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n@param        UserSession                     Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n@param        ItemID                          3rd party ID for item.\n@param        Quantity                        Quantity of this item.\n@param        Amount                          Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n@param        Description                     Description of item.\n@param        Category                        Optional category grouping for item.\n@param        AssociatedBundle        Optional bundleid of associated bundle.\n@param        BillingType                     Optional recurring billing type.\n@param        StartDate                       Optional start date for recurring billing.\n@param        EndDate                         Optional end date for recurring billing.\n@param        Period                          Optional period for recurring billing.\n@param        Frequency                       Optional frequency for recurring billing.\n@param        RecurringAmt            Optional amount to be billed for future recurring billing transactions.\n@param        BundleCount                     Number of bundles in cart.\n@param        BundleId                        3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n@param        BundleQty                       Quantity of this bundle.\n@param        BundleDesc                      Description of bundle.\n@param        BundleCategory          Optional category grouping for bundle." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, nullptr, "InitTxnAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionInitTxn);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister()
	{
		return USteamCoreWebAsyncActionInitTxn::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync, "InitTxnAsync" }, // 1091414374
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionInitTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionInitTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionInitTxn>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionInitTxn>()
	{
		return USteamCoreWebAsyncActionInitTxn::StaticClass();
	}
	USteamCoreWebAsyncActionInitTxn::USteamCoreWebAsyncActionInitTxn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionInitTxn);
	USteamCoreWebAsyncActionInitTxn::~USteamCoreWebAsyncActionInitTxn() {}
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
	void USteamCoreWebAsyncActionProcessAgreement::StaticRegisterNativesUSteamCoreWebAsyncActionProcessAgreement()
	{
		UClass* Class = USteamCoreWebAsyncActionProcessAgreement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessAgreementAsync", &USteamCoreWebAsyncActionProcessAgreement::execProcessAgreementAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, OrderId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, AgreementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Initiate a recurring payment (subscription) for the user.\n\x09*\n\x09* A successful response means that Steam will initiate a billing cycle for the user.\n\x09* It does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n\x09* @param\x09SteamId\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AgreementId\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09""Amount\x09\x09\x09Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n\x09* @param\x09""Currency\x09\x09ISO 4217 currency code of prices\n\x09*/" },
		{ "DisplayName", "Process Agreement" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Initiate a recurring payment (subscription) for the user.\n\nA successful response means that Steam will initiate a billing cycle for the user.\nIt does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        OrderId                 Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n@param        SteamId                 Steam ID of the client.\n@param        AgreementId             Unique 64-bit Steam billing agreement ID.\n@param        AppId                   App ID of the game the agreement is for.\n@param        Amount                  Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n@param        Currency                ISO 4217 currency code of prices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement, nullptr, "ProcessAgreementAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::SteamCoreWebAsyncActionProcessAgreement_eventProcessAgreementAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionProcessAgreement);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_NoRegister()
	{
		return USteamCoreWebAsyncActionProcessAgreement::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync, "ProcessAgreementAsync" }, // 1968874751
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionProcessAgreement\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionProcessAgreement\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionProcessAgreement>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionProcessAgreement>()
	{
		return USteamCoreWebAsyncActionProcessAgreement::StaticClass();
	}
	USteamCoreWebAsyncActionProcessAgreement::USteamCoreWebAsyncActionProcessAgreement() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionProcessAgreement);
	USteamCoreWebAsyncActionProcessAgreement::~USteamCoreWebAsyncActionProcessAgreement() {}
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
	void USteamCoreWebAsyncActionQueryTxn::StaticRegisterNativesUSteamCoreWebAsyncActionQueryTxn()
	{
		UClass* Class = USteamCoreWebAsyncActionQueryTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryTxnAsync", &USteamCoreWebAsyncActionQueryTxn::execQueryTxnAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, OrderId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_TransId = { "TransId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, TransId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_OrderId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_TransId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Query the status of an order that was previously created with InitTxn.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09TransId\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "DisplayName", "Query Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Query the status of an order that was previously created with InitTxn.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        TransId                         Unique 64-bit Steam transaction ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn, nullptr, "QueryTxnAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::SteamCoreWebAsyncActionQueryTxn_eventQueryTxnAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionQueryTxn);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_NoRegister()
	{
		return USteamCoreWebAsyncActionQueryTxn::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync, "QueryTxnAsync" }, // 1046178814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionQueryTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionQueryTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionQueryTxn>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionQueryTxn>()
	{
		return USteamCoreWebAsyncActionQueryTxn::StaticClass();
	}
	USteamCoreWebAsyncActionQueryTxn::USteamCoreWebAsyncActionQueryTxn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionQueryTxn);
	USteamCoreWebAsyncActionQueryTxn::~USteamCoreWebAsyncActionQueryTxn() {}
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
	void USteamCoreWebAsyncActionRefundTxn::StaticRegisterNativesUSteamCoreWebAsyncActionRefundTxn()
	{
		UClass* Class = USteamCoreWebAsyncActionRefundTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefundTxnAsync", &USteamCoreWebAsyncActionRefundTxn::execRefundTxnAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, OrderId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_OrderId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn|Async" },
		{ "Comment", "/**\n\x09* Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09transID\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "DisplayName", "Refund Txn" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        transID                         Unique 64-bit Steam transaction ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn, nullptr, "RefundTxnAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::SteamCoreWebAsyncActionRefundTxn_eventRefundTxnAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRefundTxn);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_NoRegister()
	{
		return USteamCoreWebAsyncActionRefundTxn::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync, "RefundTxnAsync" }, // 2149306631
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRefundTxn\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxnAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRefundTxn\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRefundTxn>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRefundTxn>()
	{
		return USteamCoreWebAsyncActionRefundTxn::StaticClass();
	}
	USteamCoreWebAsyncActionRefundTxn::USteamCoreWebAsyncActionRefundTxn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRefundTxn);
	USteamCoreWebAsyncActionRefundTxn::~USteamCoreWebAsyncActionRefundTxn() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAdjustAgreement, USteamCoreWebAsyncActionAdjustAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionAdjustAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAdjustAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAdjustAgreement), 1622535371U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCancelAgreement, USteamCoreWebAsyncActionCancelAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionCancelAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCancelAgreement), 192835823U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeTxn, USteamCoreWebAsyncActionFinalizeTxn::StaticClass, TEXT("USteamCoreWebAsyncActionFinalizeTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFinalizeTxn), 3334239388U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetReport, USteamCoreWebAsyncActionGetReport::StaticClass, TEXT("USteamCoreWebAsyncActionGetReport"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetReport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetReport), 2590738416U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserAgreementInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserAgreementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserAgreementInfo), 642317891U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserInfo, USteamCoreWebAsyncActionGetUserInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserInfo), 2762747255U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, USteamCoreWebAsyncActionInitTxn::StaticClass, TEXT("USteamCoreWebAsyncActionInitTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionInitTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionInitTxn), 48009635U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionProcessAgreement, USteamCoreWebAsyncActionProcessAgreement::StaticClass, TEXT("USteamCoreWebAsyncActionProcessAgreement"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionProcessAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionProcessAgreement), 712161894U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionQueryTxn, USteamCoreWebAsyncActionQueryTxn::StaticClass, TEXT("USteamCoreWebAsyncActionQueryTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionQueryTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionQueryTxn), 329987504U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRefundTxn, USteamCoreWebAsyncActionRefundTxn::StaticClass, TEXT("USteamCoreWebAsyncActionRefundTxn"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRefundTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRefundTxn), 1694900114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h_2596036086(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxnAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
