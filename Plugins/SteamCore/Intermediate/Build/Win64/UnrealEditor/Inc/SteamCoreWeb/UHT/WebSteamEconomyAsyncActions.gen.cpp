// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamEconomy/WebSteamEconomyAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamEconomyAsyncActions() {}
// Cross Module References
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
// End Cross Module References
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
	void USteamCoreWebAsyncActionCanTrade::StaticRegisterNativesUSteamCoreWebAsyncActionCanTrade()
	{
		UClass* Class = USteamCoreWebAsyncActionCanTrade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTradeAsync", &USteamCoreWebAsyncActionCanTrade::execCanTradeAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, TargetId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Can trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09That the Key is associated with. Must be a steam economy app.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user attempting to initiate a trade\n\x09* @param\x09TargetId (int64)\x09SteamID of user that is the target of the trade invitation\n\x09*/" },
		{ "DisplayName", "Can Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Can trade\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           That the Key is associated with. Must be a steam economy app.\n@param        SteamId                         SteamID of user attempting to initiate a trade\n@param        TargetId (int64)        SteamID of user that is the target of the trade invitation" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade, nullptr, "CanTradeAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::SteamCoreWebAsyncActionCanTrade_eventCanTradeAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionCanTrade);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_NoRegister()
	{
		return USteamCoreWebAsyncActionCanTrade::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCanTrade_CanTradeAsync, "CanTradeAsync" }, // 2048737249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCanTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCanTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCanTrade>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCanTrade>()
	{
		return USteamCoreWebAsyncActionCanTrade::StaticClass();
	}
	USteamCoreWebAsyncActionCanTrade::USteamCoreWebAsyncActionCanTrade() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCanTrade);
	USteamCoreWebAsyncActionCanTrade::~USteamCoreWebAsyncActionCanTrade() {}
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
	void USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticRegisterNativesUSteamCoreWebAsyncActionFinalizeAssetTransaction()
	{
		UClass* Class = USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinalizeAssetTransactionAsync", &USteamCoreWebAsyncActionFinalizeAssetTransaction::execFinalizeAssetTransactionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TxnId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, TxnId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Finalize Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09SteamID of the user making a purchase\n\x09* @param\x09TxnId\x09\x09The transaction ID\n\x09* @param\x09Language\x09The local Language for the user\n\x09*/" },
		{ "DisplayName", "Finalize Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Finalize Asset Transaction\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The app ID the user is buying assets for\n@param        SteamId         SteamID of the user making a purchase\n@param        TxnId           The transaction ID\n@param        Language        The local Language for the user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, nullptr, "FinalizeAssetTransactionAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::SteamCoreWebAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionFinalizeAssetTransaction);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_NoRegister()
	{
		return USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync, "FinalizeAssetTransactionAsync" }, // 300279783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFinalizeAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFinalizeAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFinalizeAssetTransaction>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFinalizeAssetTransaction>()
	{
		return USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass();
	}
	USteamCoreWebAsyncActionFinalizeAssetTransaction::USteamCoreWebAsyncActionFinalizeAssetTransaction() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFinalizeAssetTransaction);
	USteamCoreWebAsyncActionFinalizeAssetTransaction::~USteamCoreWebAsyncActionFinalizeAssetTransaction() {}
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
	void USteamCoreWebAsyncActionGetAssetClassInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetClassInfo()
	{
		UClass* Class = USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetClassInfoAsync", &USteamCoreWebAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClassCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassId = { "ClassId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, InstanceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Asset Class Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09* @param\x09""ClassCount\x09\x09Number of classes requested. Must be at least one.\n\x09* @param\x09""ClassId\x09\x09\x09""Class ID of the nth class.\n\x09* @param\x09InstanceId\x09\x09Instance ID of the nth class.\n\x09*/" },
		{ "DisplayName", "Get Asset Class Info" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Asset Class Info\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Language                The user's local Language\n@param        ClassCount              Number of classes requested. Must be at least one.\n@param        ClassId                 Class ID of the nth class.\n@param        InstanceId              Instance ID of the nth class." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, nullptr, "GetAssetClassInfoAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetAssetClassInfo);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister()
	{
		return USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync, "GetAssetClassInfoAsync" }, // 4106732302
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAssetClassInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAssetClassInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetClassInfo>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetAssetClassInfo>()
	{
		return USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
	}
	USteamCoreWebAsyncActionGetAssetClassInfo::USteamCoreWebAsyncActionGetAssetClassInfo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetAssetClassInfo);
	USteamCoreWebAsyncActionGetAssetClassInfo::~USteamCoreWebAsyncActionGetAssetClassInfo() {}
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
	void USteamCoreWebAsyncActionGetAssetPrices::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetPrices()
	{
		UClass* Class = USteamCoreWebAsyncActionGetAssetPrices::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetPricesAsync", &USteamCoreWebAsyncActionGetAssetPrices::execGetAssetPricesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Returns prices and categories for items that users are able to purchase.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09""Currency\x09\x09The currency to filter for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09*/" },
		{ "DisplayName", "Get Asset Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Currency                The currency to filter for\n@param        Language                The user's local Language" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices, nullptr, "GetAssetPricesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::SteamCoreWebAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetAssetPrices);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_NoRegister()
	{
		return USteamCoreWebAsyncActionGetAssetPrices::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync, "GetAssetPricesAsync" }, // 689780458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAssetPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAssetPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetPrices>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetAssetPrices>()
	{
		return USteamCoreWebAsyncActionGetAssetPrices::StaticClass();
	}
	USteamCoreWebAsyncActionGetAssetPrices::USteamCoreWebAsyncActionGetAssetPrices() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetAssetPrices);
	USteamCoreWebAsyncActionGetAssetPrices::~USteamCoreWebAsyncActionGetAssetPrices() {}
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
	void USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticRegisterNativesUSteamCoreWebAsyncActionGetExportedAssetsForUser()
	{
		UClass* Class = USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExportedAssetsForUserAsync", &USteamCoreWebAsyncActionGetExportedAssetsForUser::execGetExportedAssetsForUserAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Exported Assets for User\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09The app to get exported items from.\n\x09* @param\x09""ContextId (int64)\x09The context in the app to get exported items from.\n\x09*/" },
		{ "DisplayName", "Get Exported Assets for User" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Exported Assets for User\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        AppId                           The app to get exported items from.\n@param        ContextId (int64)       The context in the app to get exported items from." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, nullptr, "GetExportedAssetsForUserAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::SteamCoreWebAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetExportedAssetsForUser);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_NoRegister()
	{
		return USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync, "GetExportedAssetsForUserAsync" }, // 657493749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetExportedAssetsForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetExportedAssetsForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetExportedAssetsForUser>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetExportedAssetsForUser>()
	{
		return USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass();
	}
	USteamCoreWebAsyncActionGetExportedAssetsForUser::USteamCoreWebAsyncActionGetExportedAssetsForUser() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetExportedAssetsForUser);
	USteamCoreWebAsyncActionGetExportedAssetsForUser::~USteamCoreWebAsyncActionGetExportedAssetsForUser() {}
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
	void USteamCoreWebAsyncActionGetMarketPrices::StaticRegisterNativesUSteamCoreWebAsyncActionGetMarketPrices()
	{
		UClass* Class = USteamCoreWebAsyncActionGetMarketPrices::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMarketPricesAsync", &USteamCoreWebAsyncActionGetMarketPrices::execGetMarketPricesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppId;
			USteamCoreWebAsyncActionGetMarketPrices* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Get Market Prices\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09*/" },
		{ "DisplayName", "Get Market Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Get Market Prices\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices, nullptr, "GetMarketPricesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::SteamCoreWebAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetMarketPrices);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_NoRegister()
	{
		return USteamCoreWebAsyncActionGetMarketPrices::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync, "GetMarketPricesAsync" }, // 282919803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetMarketPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetMarketPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetMarketPrices>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetMarketPrices>()
	{
		return USteamCoreWebAsyncActionGetMarketPrices::StaticClass();
	}
	USteamCoreWebAsyncActionGetMarketPrices::USteamCoreWebAsyncActionGetMarketPrices() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetMarketPrices);
	USteamCoreWebAsyncActionGetMarketPrices::~USteamCoreWebAsyncActionGetMarketPrices() {}
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
	void USteamCoreWebAsyncActionStartAssetTransaction::StaticRegisterNativesUSteamCoreWebAsyncActionStartAssetTransaction()
	{
		UClass* Class = USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAssetTransactionAsync", &USteamCoreWebAsyncActionStartAssetTransaction::execStartAssetTransactionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetQuantity = { "AssetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Referer = { "Referer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Referer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms*)Obj)->bClientAuth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Start Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user making a purchase\n\x09* @param\x09""AssetId\x09\x09\x09\x09The ID of the first asset the user is buying - there must be at least one\n\x09* @param\x09""AssetQuantity\x09\x09The quantity of assetid0's the the user is buying\n\x09* @param\x09""Currency\x09\x09\x09The local currency for the user\n\x09* @param\x09Language\x09\x09\x09The local Language for the user\n\x09* @param\x09Ipaddress\x09\x09\x09The user's IP address\n\x09* @param\x09Referer\x09\x09\x09\x09The referring URL\n\x09* @param\x09""bClientAuth\x09\x09\x09If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.\n\x09*/" },
		{ "DisplayName", "Start Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Start Asset Transaction\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app ID the user is buying assets for\n@param        SteamId                         SteamID of user making a purchase\n@param        AssetId                         The ID of the first asset the user is buying - there must be at least one\n@param        AssetQuantity           The quantity of assetid0's the the user is buying\n@param        Currency                        The local currency for the user\n@param        Language                        The local Language for the user\n@param        Ipaddress                       The user's IP address\n@param        Referer                         The referring URL\n@param        bClientAuth                     If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, nullptr, "StartAssetTransactionAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionStartAssetTransaction);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister()
	{
		return USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync, "StartAssetTransactionAsync" }, // 315218883
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartAssetTransaction>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionStartAssetTransaction>()
	{
		return USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
	}
	USteamCoreWebAsyncActionStartAssetTransaction::USteamCoreWebAsyncActionStartAssetTransaction() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionStartAssetTransaction);
	USteamCoreWebAsyncActionStartAssetTransaction::~USteamCoreWebAsyncActionStartAssetTransaction() {}
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
	void USteamCoreWebAsyncActionStartTrade::StaticRegisterNativesUSteamCoreWebAsyncActionStartTrade()
	{
		UClass* Class = USteamCoreWebAsyncActionStartTrade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTradeAsync", &USteamCoreWebAsyncActionStartTrade::execStartTradeAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1 = { "SteamId1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy|Async" },
		{ "Comment", "/**\n\x09* Start Trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId1\x09\x09SteamID of first user in the trade\n\x09* @param\x09SteamId2\x09\x09SteamID of second user in the trade\n\x09*/" },
		{ "DisplayName", "Start Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "Start Trade\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        SteamId1                SteamID of first user in the trade\n@param        SteamId2                SteamID of second user in the trade" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade, nullptr, "StartTradeAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::SteamCoreWebAsyncActionStartTrade_eventStartTradeAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionStartTrade);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_NoRegister()
	{
		return USteamCoreWebAsyncActionStartTrade::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartTrade_StartTradeAsync, "StartTradeAsync" }, // 4272784642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartTrade>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionStartTrade>()
	{
		return USteamCoreWebAsyncActionStartTrade::StaticClass();
	}
	USteamCoreWebAsyncActionStartTrade::USteamCoreWebAsyncActionStartTrade() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionStartTrade);
	USteamCoreWebAsyncActionStartTrade::~USteamCoreWebAsyncActionStartTrade() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCanTrade, USteamCoreWebAsyncActionCanTrade::StaticClass, TEXT("USteamCoreWebAsyncActionCanTrade"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCanTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCanTrade), 2123784930U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass, TEXT("USteamCoreWebAsyncActionFinalizeAssetTransaction"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFinalizeAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFinalizeAssetTransaction), 2800964372U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetAssetClassInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAssetClassInfo), 956272761U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetPrices, USteamCoreWebAsyncActionGetAssetPrices::StaticClass, TEXT("USteamCoreWebAsyncActionGetAssetPrices"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAssetPrices), 3636067468U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass, TEXT("USteamCoreWebAsyncActionGetExportedAssetsForUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetExportedAssetsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetExportedAssetsForUser), 227350373U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketPrices, USteamCoreWebAsyncActionGetMarketPrices::StaticClass, TEXT("USteamCoreWebAsyncActionGetMarketPrices"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetMarketPrices), 121384184U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, USteamCoreWebAsyncActionStartAssetTransaction::StaticClass, TEXT("USteamCoreWebAsyncActionStartAssetTransaction"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartAssetTransaction), 3482916336U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartTrade, USteamCoreWebAsyncActionStartTrade::StaticClass, TEXT("USteamCoreWebAsyncActionStartTrade"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartTrade), 2409057609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h_902624139(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomyAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
