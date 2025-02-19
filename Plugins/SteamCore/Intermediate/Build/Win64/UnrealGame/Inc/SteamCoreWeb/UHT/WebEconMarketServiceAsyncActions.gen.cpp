// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconMarket/WebEconMarketServiceAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconMarketServiceAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetMarketEligibility::execGetMarketEligibilityAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetMarketEligibility**)Z_Param__Result=USteamCoreWebAsyncActionGetMarketEligibility::GetMarketEligibilityAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetMarketEligibility::StaticRegisterNativesUSteamCoreWebAsyncActionGetMarketEligibility()
	{
		UClass* Class = USteamCoreWebAsyncActionGetMarketEligibility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMarketEligibilityAsync", &USteamCoreWebAsyncActionGetMarketEligibility::execGetMarketEligibilityAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			USteamCoreWebAsyncActionGetMarketEligibility* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconMarketService|Async" },
		{ "Comment", "/**\n\x09* Checks whether or not an account is allowed to use the market\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the user to check\n\x09*/" },
		{ "DisplayName", "Get Market Eligibility" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "Checks whether or not an account is allowed to use the market\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the user to check" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility, nullptr, "GetMarketEligibilityAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::SteamCoreWebAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetMarketEligibility);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_NoRegister()
	{
		return USteamCoreWebAsyncActionGetMarketEligibility::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync, "GetMarketEligibilityAsync" }, // 602679697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetMarketEligibility\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetMarketEligibility\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetMarketEligibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetMarketEligibility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketEligibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketEligibility.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketEligibility.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetMarketEligibility>()
	{
		return USteamCoreWebAsyncActionGetMarketEligibility::StaticClass();
	}
	USteamCoreWebAsyncActionGetMarketEligibility::USteamCoreWebAsyncActionGetMarketEligibility() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetMarketEligibility);
	USteamCoreWebAsyncActionGetMarketEligibility::~USteamCoreWebAsyncActionGetMarketEligibility() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionCancelAppListingsForUser::execCancelAppListingsForUserAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_UBOOL(Z_Param_bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionCancelAppListingsForUser**)Z_Param__Result=USteamCoreWebAsyncActionCancelAppListingsForUser::CancelAppListingsForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bSynchronous);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionCancelAppListingsForUser::StaticRegisterNativesUSteamCoreWebAsyncActionCancelAppListingsForUser()
	{
		UClass* Class = USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAppListingsForUserAsync", &USteamCoreWebAsyncActionCancelAppListingsForUser::execCancelAppListingsForUserAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics
	{
		struct SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppId;
			FString SteamId;
			bool bSynchronous;
			USteamCoreWebAsyncActionCancelAppListingsForUser* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms*)Obj)->bSynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconMarketService|Async" },
		{ "Comment", "/**\n\x09* Cancels all of a user's listings for a specific app ID.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app making the request\n\x09* @param\x09SteamId\x09\x09\x09The SteamID of the user whose listings should be canceled\n\x09* @param\x09""bSynchronous\x09Whether or not to wait until all listings have been canceled before returning the response\n\x09*/" },
		{ "DisplayName", "Cancel App Listings for User" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app making the request\n@param        SteamId                 The SteamID of the user whose listings should be canceled\n@param        bSynchronous    Whether or not to wait until all listings have been canceled before returning the response" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser, nullptr, "CancelAppListingsForUserAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::SteamCoreWebAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionCancelAppListingsForUser);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_NoRegister()
	{
		return USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync, "CancelAppListingsForUserAsync" }, // 1184490258
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelAppListingsForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelAppListingsForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelAppListingsForUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::ClassParams = {
		&USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCancelAppListingsForUser>()
	{
		return USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass();
	}
	USteamCoreWebAsyncActionCancelAppListingsForUser::USteamCoreWebAsyncActionCancelAppListingsForUser() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCancelAppListingsForUser);
	USteamCoreWebAsyncActionCancelAppListingsForUser::~USteamCoreWebAsyncActionCancelAppListingsForUser() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetAssetID::execGetAssetIDAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ListingId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetAssetID**)Z_Param__Result=USteamCoreWebAsyncActionGetAssetID::GetAssetIDAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ListingId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetAssetID::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetID()
	{
		UClass* Class = USteamCoreWebAsyncActionGetAssetID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetIDAsync", &USteamCoreWebAsyncActionGetAssetID::execGetAssetIDAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppId;
			FString ListingId;
			USteamCoreWebAsyncActionGetAssetID* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListingId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ListingId = { "ListingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, ListingId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ListingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconMarketService|Async" },
		{ "Comment", "/**\n\x09* Returns the asset ID of the item sold in a listing\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09ListingId (int64)\x09The identifier of the listing to get information for\n\x09*/" },
		{ "DisplayName", "Get Asset ID" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "Returns the asset ID of the item sold in a listing\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        ListingId (int64)       The identifier of the listing to get information for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID, nullptr, "GetAssetIDAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::SteamCoreWebAsyncActionGetAssetID_eventGetAssetIDAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetAssetID);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_NoRegister()
	{
		return USteamCoreWebAsyncActionGetAssetID::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync, "GetAssetIDAsync" }, // 3357182778
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAssetID\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAssetID\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetID>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetAssetID::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetID.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetID.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetID.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetAssetID>()
	{
		return USteamCoreWebAsyncActionGetAssetID::StaticClass();
	}
	USteamCoreWebAsyncActionGetAssetID::USteamCoreWebAsyncActionGetAssetID() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetAssetID);
	USteamCoreWebAsyncActionGetAssetID::~USteamCoreWebAsyncActionGetAssetID() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPopular::execGetPopularAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rows);
		P_GET_PROPERTY(FIntProperty,Z_Param_Start);
		P_GET_PROPERTY(FIntProperty,Z_Param_FilterAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ECurrency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPopular**)Z_Param__Result=USteamCoreWebAsyncActionGetPopular::GetPopularAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Language,Z_Param_Rows,Z_Param_Start,Z_Param_FilterAppID,Z_Param_ECurrency);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPopular::StaticRegisterNativesUSteamCoreWebAsyncActionGetPopular()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPopular::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPopularAsync", &USteamCoreWebAsyncActionGetPopular::execGetPopularAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString Language;
			int32 Rows;
			int32 Start;
			int32 FilterAppID;
			int32 ECurrency;
			USteamCoreWebAsyncActionGetPopular* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FilterAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, Rows), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, Start), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_FilterAppID = { "FilterAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, FilterAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, ECurrency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_FilterAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ECurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconMarketService|Async" },
		{ "Comment", "/**\n\x09* Gets the most popular items\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09Language\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09Rows\x09\x09\x09\x09Number of rows per page\n\x09* @param\x09Start\x09\x09\x09\x09The result number to start at\n\x09* @param\x09""FilterAppID\x09\x09\x09If present, the app ID to limit results to\n\x09* @param\x09""ECurrency\x09\x09\x09If present, prices returned will be represented in this currency\n\x09*/" },
		{ "DisplayName", "Get Popular" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "Gets the most popular items\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        Language                        The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        Rows                            Number of rows per page\n@param        Start                           The result number to start at\n@param        FilterAppID                     If present, the app ID to limit results to\n@param        ECurrency                       If present, prices returned will be represented in this currency" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular, nullptr, "GetPopularAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::SteamCoreWebAsyncActionGetPopular_eventGetPopularAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPopular);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPopular::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPopular_GetPopularAsync, "GetPopularAsync" }, // 2922246027
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPopular\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPopular\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPopular>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPopular::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPopular.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPopular.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPopular.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPopular>()
	{
		return USteamCoreWebAsyncActionGetPopular::StaticClass();
	}
	USteamCoreWebAsyncActionGetPopular::USteamCoreWebAsyncActionGetPopular() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPopular);
	USteamCoreWebAsyncActionGetPopular::~USteamCoreWebAsyncActionGetPopular() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketServiceAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketServiceAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetMarketEligibility, USteamCoreWebAsyncActionGetMarketEligibility::StaticClass, TEXT("USteamCoreWebAsyncActionGetMarketEligibility"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetMarketEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetMarketEligibility), 2119457743U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser, USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass, TEXT("USteamCoreWebAsyncActionCancelAppListingsForUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelAppListingsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCancelAppListingsForUser), 340268270U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetID, USteamCoreWebAsyncActionGetAssetID::StaticClass, TEXT("USteamCoreWebAsyncActionGetAssetID"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAssetID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAssetID), 3671228402U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPopular, USteamCoreWebAsyncActionGetPopular::StaticClass, TEXT("USteamCoreWebAsyncActionGetPopular"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPopular, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPopular), 529602077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketServiceAsyncActions_h_3395713895(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketServiceAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketServiceAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
