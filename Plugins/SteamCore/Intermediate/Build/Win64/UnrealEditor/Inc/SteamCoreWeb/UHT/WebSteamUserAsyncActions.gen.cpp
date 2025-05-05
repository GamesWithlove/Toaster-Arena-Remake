// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUser/WebSteamUserAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamUserAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionCheckAppOwnership::execCheckAppOwnershipAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionCheckAppOwnership**)Z_Param__Result=USteamCoreWebAsyncActionCheckAppOwnership::CheckAppOwnershipAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionCheckAppOwnership::StaticRegisterNativesUSteamCoreWebAsyncActionCheckAppOwnership()
	{
		UClass* Class = USteamCoreWebAsyncActionCheckAppOwnership::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAppOwnershipAsync", &USteamCoreWebAsyncActionCheckAppOwnership::execCheckAppOwnershipAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics
	{
		struct SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			USteamCoreWebAsyncActionCheckAppOwnership* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Checks if the specified user owns the app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppID to check for ownership\n\x09*/" },
		{ "DisplayName", "Check App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Checks if the specified user owns the app.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppID to check for ownership" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership, nullptr, "CheckAppOwnershipAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionCheckAppOwnership);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_NoRegister()
	{
		return USteamCoreWebAsyncActionCheckAppOwnership::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync, "CheckAppOwnershipAsync" }, // 3595289543
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCheckAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCheckAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCheckAppOwnership>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::ClassParams = {
		&USteamCoreWebAsyncActionCheckAppOwnership::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCheckAppOwnership>()
	{
		return USteamCoreWebAsyncActionCheckAppOwnership::StaticClass();
	}
	USteamCoreWebAsyncActionCheckAppOwnership::USteamCoreWebAsyncActionCheckAppOwnership() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCheckAppOwnership);
	USteamCoreWebAsyncActionCheckAppOwnership::~USteamCoreWebAsyncActionCheckAppOwnership() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetAppPriceInfo::execGetAppPriceInfoAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_TARRAY(int32,Z_Param_AppIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetAppPriceInfo**)Z_Param__Result=USteamCoreWebAsyncActionGetAppPriceInfo::GetAppPriceInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetAppPriceInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetAppPriceInfo()
	{
		UClass* Class = USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppPriceInfoAsync", &USteamCoreWebAsyncActionGetAppPriceInfo::execGetAppPriceInfoAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			TArray<int32> AppIds;
			USteamCoreWebAsyncActionGetAppPriceInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get App Price Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppIds\x09\x09Max: 100\n\x09*/" },
		{ "DisplayName", "Get App Price Info" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get App Price Info\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppIds          Max: 100" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, nullptr, "GetAppPriceInfoAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetAppPriceInfo);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_NoRegister()
	{
		return USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync, "GetAppPriceInfoAsync" }, // 3093368689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAppPriceInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAppPriceInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAppPriceInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetAppPriceInfo>()
	{
		return USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass();
	}
	USteamCoreWebAsyncActionGetAppPriceInfo::USteamCoreWebAsyncActionGetAppPriceInfo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetAppPriceInfo);
	USteamCoreWebAsyncActionGetAppPriceInfo::~USteamCoreWebAsyncActionGetAppPriceInfo() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetFriendList::execGetFriendListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Relationship);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetFriendList**)Z_Param__Result=USteamCoreWebAsyncActionGetFriendList::GetFriendListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_Relationship);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetFriendList::StaticRegisterNativesUSteamCoreWebAsyncActionGetFriendList()
	{
		UClass* Class = USteamCoreWebAsyncActionGetFriendList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFriendListAsync", &USteamCoreWebAsyncActionGetFriendList::execGetFriendListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			FString Relationship;
			USteamCoreWebAsyncActionGetFriendList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Relationship;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Relationship), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Friend List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09Relationship\x09relationship type (ex: friend)\n\x09*/" },
		{ "DisplayName", "Get Friend List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Friend List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user\n@param        Relationship    relationship type (ex: friend)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList, nullptr, "GetFriendListAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetFriendList);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_NoRegister()
	{
		return USteamCoreWebAsyncActionGetFriendList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync, "GetFriendListAsync" }, // 2656457734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetFriendList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetFriendList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetFriendList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetFriendList::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetFriendList>()
	{
		return USteamCoreWebAsyncActionGetFriendList::StaticClass();
	}
	USteamCoreWebAsyncActionGetFriendList::USteamCoreWebAsyncActionGetFriendList() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetFriendList);
	USteamCoreWebAsyncActionGetFriendList::~USteamCoreWebAsyncActionGetFriendList() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPlayerBans::execGetPlayerBansAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_SteamIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPlayerBans**)Z_Param__Result=USteamCoreWebAsyncActionGetPlayerBans::GetPlayerBansAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPlayerBans::StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerBans()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPlayerBans::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerBansAsync", &USteamCoreWebAsyncActionGetPlayerBans::execGetPlayerBansAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			TArray<FString> SteamIds;
			USteamCoreWebAsyncActionGetPlayerBans* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Player Bans\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "DisplayName", "Get Player Bans" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Player Bans\n\n@param        Key                             Steamworks Web API publisher authentication Key." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans, nullptr, "GetPlayerBansAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPlayerBans);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPlayerBans::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync, "GetPlayerBansAsync" }, // 1624379329
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPlayerBans\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPlayerBans\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPlayerBans>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPlayerBans::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPlayerBans>()
	{
		return USteamCoreWebAsyncActionGetPlayerBans::StaticClass();
	}
	USteamCoreWebAsyncActionGetPlayerBans::USteamCoreWebAsyncActionGetPlayerBans() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPlayerBans);
	USteamCoreWebAsyncActionGetPlayerBans::~USteamCoreWebAsyncActionGetPlayerBans() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPlayerSummaries::execGetPlayerSummariesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_SteamIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPlayerSummaries**)Z_Param__Result=USteamCoreWebAsyncActionGetPlayerSummaries::GetPlayerSummariesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamIds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPlayerSummaries::StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerSummaries()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerSummariesAsync", &USteamCoreWebAsyncActionGetPlayerSummaries::execGetPlayerSummariesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			TArray<FString> SteamIds;
			USteamCoreWebAsyncActionGetPlayerSummaries* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Player Summaries\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamIds\x09\x09Max: 100\n\x09*/" },
		{ "DisplayName", "Get Player Summaries" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Player Summaries\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamIds                Max: 100" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, nullptr, "GetPlayerSummariesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPlayerSummaries);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync, "GetPlayerSummariesAsync" }, // 718487434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPlayerSummaries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPlayerSummaries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPlayerSummaries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPlayerSummaries>()
	{
		return USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass();
	}
	USteamCoreWebAsyncActionGetPlayerSummaries::USteamCoreWebAsyncActionGetPlayerSummaries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPlayerSummaries);
	USteamCoreWebAsyncActionGetPlayerSummaries::~USteamCoreWebAsyncActionGetPlayerSummaries() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPublisherAppOwnership**)Z_Param__Result=USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnership()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPublisherAppOwnershipAsync", &USteamCoreWebAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			USteamCoreWebAsyncActionGetPublisherAppOwnership* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Publisher App Ownership\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
		{ "DisplayName", "Get Publisher App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Publisher App Ownership\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, nullptr, "GetPublisherAppOwnershipAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPublisherAppOwnership);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync, "GetPublisherAppOwnershipAsync" }, // 2265700166
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublisherAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublisherAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnership>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPublisherAppOwnership>()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
	}
	USteamCoreWebAsyncActionGetPublisherAppOwnership::USteamCoreWebAsyncActionGetPublisherAppOwnership() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPublisherAppOwnership);
	USteamCoreWebAsyncActionGetPublisherAppOwnership::~USteamCoreWebAsyncActionGetPublisherAppOwnership() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageRowVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_CdKeyRowVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges**)Z_Param__Result=USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChangesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_PackageRowVersion,Z_Param_CdKeyRowVersion);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPublisherAppOwnershipChangesAsync", &USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString PackageRowVersion;
			FString CdKeyRowVersion;
			USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRowVersion;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CdKeyRowVersion;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion = { "PackageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, PackageRowVersion), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion = { "CdKeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, CdKeyRowVersion), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\n\x09* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n\x09""A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PackageRowVersion\x09\x09""64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n\x09* @param\x09""CdKeyRowVersion\x09\x09\x09""64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.\n\x09*/" },
		{ "DisplayName", "Get Publisher App Ownership Changes" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\nFrom the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n       A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        PackageRowVersion               64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n@param        CdKeyRowVersion                 64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, nullptr, "GetPublisherAppOwnershipChangesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync, "GetPublisherAppOwnershipChangesAsync" }, // 2948573185
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges>()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	}
	USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges);
	USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::~USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUserGroupList::execGetUserGroupListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetUserGroupList**)Z_Param__Result=USteamCoreWebAsyncActionGetUserGroupList::GetUserGroupListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetUserGroupList::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserGroupList()
	{
		UClass* Class = USteamCoreWebAsyncActionGetUserGroupList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserGroupListAsync", &USteamCoreWebAsyncActionGetUserGroupList::execGetUserGroupListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			USteamCoreWebAsyncActionGetUserGroupList* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
		{ "DisplayName", "Get User Group List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get User Group List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList, nullptr, "GetUserGroupListAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetUserGroupList);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_NoRegister()
	{
		return USteamCoreWebAsyncActionGetUserGroupList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync, "GetUserGroupListAsync" }, // 1753230011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserGroupList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserGroupList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserGroupList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetUserGroupList::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetUserGroupList>()
	{
		return USteamCoreWebAsyncActionGetUserGroupList::StaticClass();
	}
	USteamCoreWebAsyncActionGetUserGroupList::USteamCoreWebAsyncActionGetUserGroupList() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetUserGroupList);
	USteamCoreWebAsyncActionGetUserGroupList::~USteamCoreWebAsyncActionGetUserGroupList() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGrantPackage::execGrantPackageAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_packageID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_thirdPartyKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_thirdPartyAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGrantPackage**)Z_Param__Result=USteamCoreWebAsyncActionGrantPackage::GrantPackageAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_packageID,Z_Param_ipaddress,Z_Param_thirdPartyKey,Z_Param_thirdPartyAppID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGrantPackage::StaticRegisterNativesUSteamCoreWebAsyncActionGrantPackage()
	{
		UClass* Class = USteamCoreWebAsyncActionGrantPackage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrantPackageAsync", &USteamCoreWebAsyncActionGrantPackage::execGrantPackageAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics
	{
		struct SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 packageID;
			FString ipaddress;
			FString thirdPartyKey;
			int32 thirdPartyAppID;
			USteamCoreWebAsyncActionGrantPackage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_packageID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ipaddress;
		static const UECodeGen_Private::FStrPropertyParams NewProp_thirdPartyKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_thirdPartyAppID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_packageID = { "packageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, packageID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyKey = { "thirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyAppID = { "thirdPartyAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_packageID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ipaddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* This call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09packageID\x09\x09\x09PackageID to grant\n\x09* @param\x09ipaddress\x09\x09\x09ip address of user in string format(xxx.xxx.xxx.xxx).\n\x09* @param\x09thirdPartyKey\x09\x09Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n\x09* @param\x09thirdPartyAppID\x09\x09Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.\n\x09*/" },
		{ "DisplayName", "Grant Package" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get User Group List\n\nThis call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        packageID                       PackageID to grant\n@param        ipaddress                       ip address of user in string format(xxx.xxx.xxx.xxx).\n@param        thirdPartyKey           Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n@param        thirdPartyAppID         Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage, nullptr, "GrantPackageAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGrantPackage);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_NoRegister()
	{
		return USteamCoreWebAsyncActionGrantPackage::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync, "GrantPackageAsync" }, // 2777079111
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGrantPackage\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGrantPackage\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGrantPackage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGrantPackage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGrantPackage>()
	{
		return USteamCoreWebAsyncActionGrantPackage::StaticClass();
	}
	USteamCoreWebAsyncActionGrantPackage::USteamCoreWebAsyncActionGrantPackage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGrantPackage);
	USteamCoreWebAsyncActionGrantPackage::~USteamCoreWebAsyncActionGrantPackage() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionResolveVanityURL::execResolveVanityURLAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_VanityURL);
		P_GET_ENUM(EVanityUrlType,Z_Param_URLType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionResolveVanityURL**)Z_Param__Result=USteamCoreWebAsyncActionResolveVanityURL::ResolveVanityURLAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_VanityURL,EVanityUrlType(Z_Param_URLType));
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionResolveVanityURL::StaticRegisterNativesUSteamCoreWebAsyncActionResolveVanityURL()
	{
		UClass* Class = USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResolveVanityURLAsync", &USteamCoreWebAsyncActionResolveVanityURL::execResolveVanityURLAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics
	{
		struct SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString VanityURL;
			EVanityUrlType URLType;
			USteamCoreWebAsyncActionResolveVanityURL* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VanityURL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_URLType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_URLType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL = { "VanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, VanityURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType = { "URLType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, URLType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(nullptr, 0) }; // 3188374476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Resolve Vanity URL\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09VanityURL\x09\x09The vanity URL to get a SteamID for\n\x09* @param\x09URLType\n\x09*/" },
		{ "DisplayName", "Resolve Vanity URL" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Resolve Vanity URL\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        VanityURL               The vanity URL to get a SteamID for\n@param        URLType" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, nullptr, "ResolveVanityURLAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionResolveVanityURL);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister()
	{
		return USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync, "ResolveVanityURLAsync" }, // 2634117334
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResolveVanityURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResolveVanityURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResolveVanityURL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::ClassParams = {
		&USteamCoreWebAsyncActionResolveVanityURL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionResolveVanityURL>()
	{
		return USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
	}
	USteamCoreWebAsyncActionResolveVanityURL::USteamCoreWebAsyncActionResolveVanityURL() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionResolveVanityURL);
	USteamCoreWebAsyncActionResolveVanityURL::~USteamCoreWebAsyncActionResolveVanityURL() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership, USteamCoreWebAsyncActionCheckAppOwnership::StaticClass, TEXT("USteamCoreWebAsyncActionCheckAppOwnership"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCheckAppOwnership), 53488573U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetAppPriceInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAppPriceInfo), 2305855714U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList, USteamCoreWebAsyncActionGetFriendList::StaticClass, TEXT("USteamCoreWebAsyncActionGetFriendList"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetFriendList), 2746325297U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans, USteamCoreWebAsyncActionGetPlayerBans::StaticClass, TEXT("USteamCoreWebAsyncActionGetPlayerBans"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPlayerBans), 1542263080U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass, TEXT("USteamCoreWebAsyncActionGetPlayerSummaries"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPlayerSummaries), 1858409057U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnership"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnership), 3923853390U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges), 3558512356U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList, USteamCoreWebAsyncActionGetUserGroupList::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserGroupList"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserGroupList), 3298102282U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage, USteamCoreWebAsyncActionGrantPackage::StaticClass, TEXT("USteamCoreWebAsyncActionGrantPackage"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGrantPackage), 2917733416U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, USteamCoreWebAsyncActionResolveVanityURL::StaticClass, TEXT("USteamCoreWebAsyncActionResolveVanityURL"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionResolveVanityURL), 1045818439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h_1853345422(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
