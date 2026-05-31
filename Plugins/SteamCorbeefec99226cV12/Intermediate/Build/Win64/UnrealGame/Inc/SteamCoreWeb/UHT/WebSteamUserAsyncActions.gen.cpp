// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/WebSteamUserAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamUserAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionCheckAppOwnership Function CheckAppOwnershipAsync 
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Checks if the specified user owns the app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09""AppID to check for ownership\n\x09*/" },
		{ "DisplayName", "Check App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Checks if the specified user owns the app.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppId           AppID to check for ownership" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckAppOwnershipAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckAppOwnershipAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckAppOwnershipAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers) < 2048);
// ********** End Function CheckAppOwnershipAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership, nullptr, "CheckAppOwnershipAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::SteamCoreWebAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionCheckAppOwnership Function CheckAppOwnershipAsync **

// ********** Begin Class USteamCoreWebAsyncActionCheckAppOwnership ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership;
UClass* USteamCoreWebAsyncActionCheckAppOwnership::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionCheckAppOwnership;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionCheckAppOwnership"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionCheckAppOwnership,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_NoRegister()
{
	return USteamCoreWebAsyncActionCheckAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCheckAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCheckAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionCheckAppOwnership constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionCheckAppOwnership constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckAppOwnershipAsync"), .Pointer = &USteamCoreWebAsyncActionCheckAppOwnership::execCheckAppOwnershipAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync, "CheckAppOwnershipAsync" }, // 2305581775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCheckAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionCheckAppOwnership::StaticRegisterNativesUSteamCoreWebAsyncActionCheckAppOwnership()
{
	UClass* Class = USteamCoreWebAsyncActionCheckAppOwnership::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership.OuterSingleton;
}
USteamCoreWebAsyncActionCheckAppOwnership::USteamCoreWebAsyncActionCheckAppOwnership() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionCheckAppOwnership);
USteamCoreWebAsyncActionCheckAppOwnership::~USteamCoreWebAsyncActionCheckAppOwnership() {}
// ********** End Class USteamCoreWebAsyncActionCheckAppOwnership **********************************

// ********** Begin Class USteamCoreWebAsyncActionGetAppPriceInfo Function GetAppPriceInfoAsync ****
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get App Price Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09SteamID of user\n\x09* @param\x09""AppIds\x09\x09Max: 100\n\x09*/" },
		{ "DisplayName", "Get App Price Info" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get App Price Info\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         SteamID of user\n@param        AppIds          Max: 100" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppPriceInfoAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppPriceInfoAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppPriceInfoAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAppPriceInfoAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, nullptr, "GetAppPriceInfoAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::SteamCoreWebAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetAppPriceInfo Function GetAppPriceInfoAsync ******

// ********** Begin Class USteamCoreWebAsyncActionGetAppPriceInfo **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo;
UClass* USteamCoreWebAsyncActionGetAppPriceInfo::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetAppPriceInfo;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetAppPriceInfo"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetAppPriceInfo,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_NoRegister()
{
	return USteamCoreWebAsyncActionGetAppPriceInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetAppPriceInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetAppPriceInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetAppPriceInfo constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionGetAppPriceInfo constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppPriceInfoAsync"), .Pointer = &USteamCoreWebAsyncActionGetAppPriceInfo::execGetAppPriceInfoAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync, "GetAppPriceInfoAsync" }, // 2791716908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAppPriceInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetAppPriceInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetAppPriceInfo()
{
	UClass* Class = USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo.OuterSingleton;
}
USteamCoreWebAsyncActionGetAppPriceInfo::USteamCoreWebAsyncActionGetAppPriceInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetAppPriceInfo);
USteamCoreWebAsyncActionGetAppPriceInfo::~USteamCoreWebAsyncActionGetAppPriceInfo() {}
// ********** End Class USteamCoreWebAsyncActionGetAppPriceInfo ************************************

// ********** Begin Class USteamCoreWebAsyncActionGetFriendList Function GetFriendListAsync ********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Friend List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09Relationship\x09relationship type (ex: friend)\n\x09*/" },
		{ "DisplayName", "Get Friend List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Friend List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user\n@param        Relationship    relationship type (ex: friend)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendListAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Relationship;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendListAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendListAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Relationship), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers) < 2048);
// ********** End Function GetFriendListAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList, nullptr, "GetFriendListAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::SteamCoreWebAsyncActionGetFriendList_eventGetFriendListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetFriendList Function GetFriendListAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetFriendList ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList;
UClass* USteamCoreWebAsyncActionGetFriendList::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetFriendList;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetFriendList"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetFriendList,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_NoRegister()
{
	return USteamCoreWebAsyncActionGetFriendList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetFriendList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetFriendList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetFriendList constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetFriendList constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFriendListAsync"), .Pointer = &USteamCoreWebAsyncActionGetFriendList::execGetFriendListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync, "GetFriendListAsync" }, // 2992704465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetFriendList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetFriendList::StaticRegisterNativesUSteamCoreWebAsyncActionGetFriendList()
{
	UClass* Class = USteamCoreWebAsyncActionGetFriendList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList.OuterSingleton;
}
USteamCoreWebAsyncActionGetFriendList::USteamCoreWebAsyncActionGetFriendList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetFriendList);
USteamCoreWebAsyncActionGetFriendList::~USteamCoreWebAsyncActionGetFriendList() {}
// ********** End Class USteamCoreWebAsyncActionGetFriendList **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerBans Function GetPlayerBansAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		TArray<FString> SteamIds;
		USteamCoreWebAsyncActionGetPlayerBans* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Player Bans\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "DisplayName", "Get Player Bans" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Player Bans\n\n@param        Key                             Steamworks Web API publisher authentication Key." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerBansAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerBansAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerBansAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerBansAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans, nullptr, "GetPlayerBansAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::SteamCoreWebAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetPlayerBans Function GetPlayerBansAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerBans ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans;
UClass* USteamCoreWebAsyncActionGetPlayerBans::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPlayerBans;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPlayerBans"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerBans,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_NoRegister()
{
	return USteamCoreWebAsyncActionGetPlayerBans::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPlayerBans\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPlayerBans\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerBans constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetPlayerBans constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayerBansAsync"), .Pointer = &USteamCoreWebAsyncActionGetPlayerBans::execGetPlayerBansAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync, "GetPlayerBansAsync" }, // 573571030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPlayerBans>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPlayerBans::StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerBans()
{
	UClass* Class = USteamCoreWebAsyncActionGetPlayerBans::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans.OuterSingleton;
}
USteamCoreWebAsyncActionGetPlayerBans::USteamCoreWebAsyncActionGetPlayerBans() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPlayerBans);
USteamCoreWebAsyncActionGetPlayerBans::~USteamCoreWebAsyncActionGetPlayerBans() {}
// ********** End Class USteamCoreWebAsyncActionGetPlayerBans **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerSummaries Function GetPlayerSummariesAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		TArray<FString> SteamIds;
		USteamCoreWebAsyncActionGetPlayerSummaries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Player Summaries\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamIds\x09\x09Max: 100\n\x09*/" },
		{ "DisplayName", "Get Player Summaries" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Player Summaries\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamIds                Max: 100" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerSummariesAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerSummariesAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerSummariesAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerSummariesAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, nullptr, "GetPlayerSummariesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::SteamCoreWebAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetPlayerSummaries Function GetPlayerSummariesAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerSummaries *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries;
UClass* USteamCoreWebAsyncActionGetPlayerSummaries::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPlayerSummaries;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPlayerSummaries"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerSummaries,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_NoRegister()
{
	return USteamCoreWebAsyncActionGetPlayerSummaries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPlayerSummaries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPlayerSummaries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPlayerSummaries constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetPlayerSummaries constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayerSummariesAsync"), .Pointer = &USteamCoreWebAsyncActionGetPlayerSummaries::execGetPlayerSummariesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync, "GetPlayerSummariesAsync" }, // 2099603070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPlayerSummaries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPlayerSummaries::StaticRegisterNativesUSteamCoreWebAsyncActionGetPlayerSummaries()
{
	UClass* Class = USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries.OuterSingleton;
}
USteamCoreWebAsyncActionGetPlayerSummaries::USteamCoreWebAsyncActionGetPlayerSummaries() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPlayerSummaries);
USteamCoreWebAsyncActionGetPlayerSummaries::~USteamCoreWebAsyncActionGetPlayerSummaries() {}
// ********** End Class USteamCoreWebAsyncActionGetPlayerSummaries *********************************

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnership Function GetPublisherAppOwnershipAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics
{
	struct SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		USteamCoreWebAsyncActionGetPublisherAppOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get Publisher App Ownership\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
		{ "DisplayName", "Get Publisher App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get Publisher App Ownership\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnershipAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnershipAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnershipAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnershipAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, nullptr, "GetPublisherAppOwnershipAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnership Function GetPublisherAppOwnershipAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnership *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership;
UClass* USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPublisherAppOwnership;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPublisherAppOwnership"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnership,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister()
{
	return USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublisherAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublisherAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnership constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnership constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnershipAsync"), .Pointer = &USteamCoreWebAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync, "GetPublisherAppOwnershipAsync" }, // 3687790537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnership()
{
	UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership.OuterSingleton;
}
USteamCoreWebAsyncActionGetPublisherAppOwnership::USteamCoreWebAsyncActionGetPublisherAppOwnership() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPublisherAppOwnership);
USteamCoreWebAsyncActionGetPublisherAppOwnership::~USteamCoreWebAsyncActionGetPublisherAppOwnership() {}
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnership ***************************

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChangesAsync 
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\n\x09* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n\x09""A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PackageRowVersion\x09\x09""64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n\x09* @param\x09""CdKeyRowVersion\x09\x09\x09""64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.\n\x09*/" },
		{ "DisplayName", "Get Publisher App Ownership Changes" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\nFrom the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n       A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        PackageRowVersion               64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n@param        CdKeyRowVersion                 64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnershipChangesAsync constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRowVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CdKeyRowVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnershipChangesAsync constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnershipChangesAsync Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion = { "PackageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, PackageRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion = { "CdKeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, CdKeyRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnershipChangesAsync Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, nullptr, "GetPublisherAppOwnershipChangesAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChangesAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges ******************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges;
UClass* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnershipChanges,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister()
{
	return USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnershipChangesAsync"), .Pointer = &USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync, "GetPublisherAppOwnershipChangesAsync" }, // 3231329066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
{
	UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton;
}
USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges);
USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::~USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges() {}
// ********** End Class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges ********************

// ********** Begin Class USteamCoreWebAsyncActionGetUserGroupList Function GetUserGroupListAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		USteamCoreWebAsyncActionGetUserGroupList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09*/" },
		{ "DisplayName", "Get User Group List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get User Group List\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 SteamID of user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserGroupListAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserGroupListAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserGroupListAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUserGroupListAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList, nullptr, "GetUserGroupListAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::SteamCoreWebAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetUserGroupList Function GetUserGroupListAsync ****

// ********** Begin Class USteamCoreWebAsyncActionGetUserGroupList *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList;
UClass* USteamCoreWebAsyncActionGetUserGroupList::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUserGroupList;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUserGroupList"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUserGroupList,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_NoRegister()
{
	return USteamCoreWebAsyncActionGetUserGroupList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetUserGroupList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetUserGroupList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUserGroupList constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionGetUserGroupList constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserGroupListAsync"), .Pointer = &USteamCoreWebAsyncActionGetUserGroupList::execGetUserGroupListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync, "GetUserGroupListAsync" }, // 1861790432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserGroupList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUserGroupList::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserGroupList()
{
	UClass* Class = USteamCoreWebAsyncActionGetUserGroupList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList.OuterSingleton;
}
USteamCoreWebAsyncActionGetUserGroupList::USteamCoreWebAsyncActionGetUserGroupList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUserGroupList);
USteamCoreWebAsyncActionGetUserGroupList::~USteamCoreWebAsyncActionGetUserGroupList() {}
// ********** End Class USteamCoreWebAsyncActionGetUserGroupList ***********************************

// ********** Begin Class USteamCoreWebAsyncActionGrantPackage Function GrantPackageAsync **********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* This call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09packageID\x09\x09\x09PackageID to grant\n\x09* @param\x09ipaddress\x09\x09\x09ip address of user in string format(xxx.xxx.xxx.xxx).\n\x09* @param\x09thirdPartyKey\x09\x09Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n\x09* @param\x09thirdPartyAppID\x09\x09Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.\n\x09*/" },
		{ "DisplayName", "Grant Package" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Get User Group List\n\nThis call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        packageID                       PackageID to grant\n@param        ipaddress                       ip address of user in string format(xxx.xxx.xxx.xxx).\n@param        thirdPartyKey           Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n@param        thirdPartyAppID         Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantPackageAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_packageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_thirdPartyKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thirdPartyAppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantPackageAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantPackageAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_packageID = { "packageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, packageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyKey = { "thirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyAppID = { "thirdPartyAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers) < 2048);
// ********** End Function GrantPackageAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage, nullptr, "GrantPackageAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::SteamCoreWebAsyncActionGrantPackage_eventGrantPackageAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGrantPackage Function GrantPackageAsync ************

// ********** Begin Class USteamCoreWebAsyncActionGrantPackage *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage;
UClass* USteamCoreWebAsyncActionGrantPackage::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGrantPackage;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGrantPackage"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGrantPackage,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_NoRegister()
{
	return USteamCoreWebAsyncActionGrantPackage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGrantPackage\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGrantPackage\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGrantPackage constinit property declarations *****
// ********** End Class USteamCoreWebAsyncActionGrantPackage constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GrantPackageAsync"), .Pointer = &USteamCoreWebAsyncActionGrantPackage::execGrantPackageAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync, "GrantPackageAsync" }, // 2978989436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGrantPackage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGrantPackage::StaticRegisterNativesUSteamCoreWebAsyncActionGrantPackage()
{
	UClass* Class = USteamCoreWebAsyncActionGrantPackage::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage.OuterSingleton;
}
USteamCoreWebAsyncActionGrantPackage::USteamCoreWebAsyncActionGrantPackage() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGrantPackage);
USteamCoreWebAsyncActionGrantPackage::~USteamCoreWebAsyncActionGrantPackage() {}
// ********** End Class USteamCoreWebAsyncActionGrantPackage ***************************************

// ********** Begin Class USteamCoreWebAsyncActionResolveVanityURL Function ResolveVanityURLAsync **
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser|Async" },
		{ "Comment", "/**\n\x09* Resolve Vanity URL\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09VanityURL\x09\x09The vanity URL to get a SteamID for\n\x09* @param\x09URLType\n\x09*/" },
		{ "DisplayName", "Resolve Vanity URL" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "Resolve Vanity URL\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        VanityURL               The vanity URL to get a SteamID for\n@param        URLType" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveVanityURLAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VanityURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_URLType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_URLType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveVanityURLAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveVanityURLAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL = { "VanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, VanityURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType = { "URLType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, URLType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(0, nullptr) }; // 2407242381
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers) < 2048);
// ********** End Function ResolveVanityURLAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, nullptr, "ResolveVanityURLAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::SteamCoreWebAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionResolveVanityURL Function ResolveVanityURLAsync ****

// ********** Begin Class USteamCoreWebAsyncActionResolveVanityURL *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL;
UClass* USteamCoreWebAsyncActionResolveVanityURL::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionResolveVanityURL;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionResolveVanityURL"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionResolveVanityURL,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_NoRegister()
{
	return USteamCoreWebAsyncActionResolveVanityURL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResolveVanityURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResolveVanityURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionResolveVanityURL constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionResolveVanityURL constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResolveVanityURLAsync"), .Pointer = &USteamCoreWebAsyncActionResolveVanityURL::execResolveVanityURLAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync, "ResolveVanityURLAsync" }, // 2340266508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResolveVanityURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionResolveVanityURL::StaticRegisterNativesUSteamCoreWebAsyncActionResolveVanityURL()
{
	UClass* Class = USteamCoreWebAsyncActionResolveVanityURL::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL.OuterSingleton;
}
USteamCoreWebAsyncActionResolveVanityURL::USteamCoreWebAsyncActionResolveVanityURL() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionResolveVanityURL);
USteamCoreWebAsyncActionResolveVanityURL::~USteamCoreWebAsyncActionResolveVanityURL() {}
// ********** End Class USteamCoreWebAsyncActionResolveVanityURL ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCheckAppOwnership, USteamCoreWebAsyncActionCheckAppOwnership::StaticClass, TEXT("USteamCoreWebAsyncActionCheckAppOwnership"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCheckAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCheckAppOwnership), 3260711194U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass, TEXT("USteamCoreWebAsyncActionGetAppPriceInfo"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetAppPriceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetAppPriceInfo), 557247548U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetFriendList, USteamCoreWebAsyncActionGetFriendList::StaticClass, TEXT("USteamCoreWebAsyncActionGetFriendList"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetFriendList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetFriendList), 260259921U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerBans, USteamCoreWebAsyncActionGetPlayerBans::StaticClass, TEXT("USteamCoreWebAsyncActionGetPlayerBans"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerBans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPlayerBans), 926883762U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass, TEXT("USteamCoreWebAsyncActionGetPlayerSummaries"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPlayerSummaries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPlayerSummaries), 3139773800U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnership"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnership), 1057505369U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass, TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges), 3278159981U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserGroupList, USteamCoreWebAsyncActionGetUserGroupList::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserGroupList"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserGroupList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserGroupList), 2860665802U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGrantPackage, USteamCoreWebAsyncActionGrantPackage::StaticClass, TEXT("USteamCoreWebAsyncActionGrantPackage"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGrantPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGrantPackage), 3062972974U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionResolveVanityURL, USteamCoreWebAsyncActionResolveVanityURL::StaticClass, TEXT("USteamCoreWebAsyncActionResolveVanityURL"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionResolveVanityURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionResolveVanityURL), 895482584U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h__Script_SteamCoreWeb_4225075212{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
