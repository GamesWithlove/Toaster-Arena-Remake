// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInventory/WebGameInventoryAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebGameInventoryAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionGetHistoryCommandDetails Function GetHistoryCommandDetailsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString Command;
		FString ContextId;
		FString Arguments;
		USteamCoreWebAsyncActionGetHistoryCommandDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a history of Commands\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The steam ID of the account to operate on\n\x09* @param\x09""Command\x09\x09\x09The Command to run on that asset\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09""Arguments\x09\x09The arguments that were provided with the Command in the first place\n\x09*/" },
#endif
		{ "DisplayName", "Get History Command Details" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of Commands\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The steam ID of the account to operate on\n@param        Command                 The Command to run on that asset\n@param        ContextId               The context to fetch history for\n@param        Arguments               The arguments that were provided with the Command in the first place" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHistoryCommandDetailsAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHistoryCommandDetailsAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHistoryCommandDetailsAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Command), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Arguments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetHistoryCommandDetailsAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails, nullptr, "GetHistoryCommandDetailsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetHistoryCommandDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Command,Z_Param_ContextId,Z_Param_Arguments);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetHistoryCommandDetails Function GetHistoryCommandDetailsAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetHistoryCommandDetails *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails;
UClass* USteamCoreWebAsyncActionGetHistoryCommandDetails::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetHistoryCommandDetails;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetHistoryCommandDetails"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetHistoryCommandDetails,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister()
{
	return USteamCoreWebAsyncActionGetHistoryCommandDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetHistoryCommandDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetHistoryCommandDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetHistoryCommandDetails constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetHistoryCommandDetails constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHistoryCommandDetailsAsync"), .Pointer = &USteamCoreWebAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync, "GetHistoryCommandDetailsAsync" }, // 894391243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetHistoryCommandDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetHistoryCommandDetails()
{
	UClass* Class = USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails.OuterSingleton;
}
USteamCoreWebAsyncActionGetHistoryCommandDetails::USteamCoreWebAsyncActionGetHistoryCommandDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetHistoryCommandDetails);
USteamCoreWebAsyncActionGetHistoryCommandDetails::~USteamCoreWebAsyncActionGetHistoryCommandDetails() {}
// ********** End Class USteamCoreWebAsyncActionGetHistoryCommandDetails ***************************

// ********** Begin Class USteamCoreWebAsyncActionGetUserHistory Function GetUserHistoryAsync ******
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics
{
	struct SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString ContextId;
		int32 StartTime;
		int32 EndTime;
		USteamCoreWebAsyncActionGetUserHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09StartTime\x09\x09Start time of the history range to collect\n\x09* @param\x09""EndTime\x09\x09\x09""End time of the history range to collect\n\x09*/" },
#endif
		{ "DisplayName", "Get User History" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The Steam ID to fetch history for\n@param        ContextId               The context to fetch history for\n@param        StartTime               Start time of the history range to collect\n@param        EndTime                 End time of the history range to collect" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserHistoryAsync constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserHistoryAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserHistoryAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers) < 2048);
// ********** End Function GetUserHistoryAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory, nullptr, "GetUserHistoryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::SteamCoreWebAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetUserHistory::execGetUserHistoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetUserHistory**)Z_Param__Result=USteamCoreWebAsyncActionGetUserHistory::GetUserHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_StartTime,Z_Param_EndTime);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetUserHistory Function GetUserHistoryAsync ********

// ********** Begin Class USteamCoreWebAsyncActionGetUserHistory ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory;
UClass* USteamCoreWebAsyncActionGetUserHistory::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetUserHistory;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetUserHistory"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetUserHistory,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_NoRegister()
{
	return USteamCoreWebAsyncActionGetUserHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetHistoryCommandDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetHistoryCommandDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetUserHistory constinit property declarations ***
// ********** End Class USteamCoreWebAsyncActionGetUserHistory constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserHistoryAsync"), .Pointer = &USteamCoreWebAsyncActionGetUserHistory::execGetUserHistoryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync, "GetUserHistoryAsync" }, // 2264858258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetUserHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetUserHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetUserHistory::StaticRegisterNativesUSteamCoreWebAsyncActionGetUserHistory()
{
	UClass* Class = USteamCoreWebAsyncActionGetUserHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory.OuterSingleton;
}
USteamCoreWebAsyncActionGetUserHistory::USteamCoreWebAsyncActionGetUserHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetUserHistory);
USteamCoreWebAsyncActionGetUserHistory::~USteamCoreWebAsyncActionGetUserHistory() {}
// ********** End Class USteamCoreWebAsyncActionGetUserHistory *************************************

// ********** Begin Class USteamCoreWebAsyncActionHistoryExecuteCommand Function HistoryExecuteCommandAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics
{
	struct SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString ContextId;
		int32 ActorId;
		USteamCoreWebAsyncActionHistoryExecuteCommand* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09""ActorId\x09\x09\x09""A unique 32 bit ID for the support person executing the Command\n\x09*/" },
#endif
		{ "DisplayName", "History Execute Commands" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The Steam ID to fetch history for\n@param        ContextId               The context to fetch history for\n@param        ActorId                 A unique 32 bit ID for the support person executing the Command" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function HistoryExecuteCommandAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HistoryExecuteCommandAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HistoryExecuteCommandAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ActorId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers) < 2048);
// ********** End Function HistoryExecuteCommandAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand, nullptr, "HistoryExecuteCommandAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::SteamCoreWebAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionHistoryExecuteCommand::execHistoryExecuteCommandAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActorId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionHistoryExecuteCommand**)Z_Param__Result=USteamCoreWebAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_ActorId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionHistoryExecuteCommand Function HistoryExecuteCommandAsync 

// ********** Begin Class USteamCoreWebAsyncActionHistoryExecuteCommand ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand;
UClass* USteamCoreWebAsyncActionHistoryExecuteCommand::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionHistoryExecuteCommand;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionHistoryExecuteCommand"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionHistoryExecuteCommand,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_NoRegister()
{
	return USteamCoreWebAsyncActionHistoryExecuteCommand::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionHistoryExecuteCommand\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionHistoryExecuteCommand\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionHistoryExecuteCommand constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionHistoryExecuteCommand constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HistoryExecuteCommandAsync"), .Pointer = &USteamCoreWebAsyncActionHistoryExecuteCommand::execHistoryExecuteCommandAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync, "HistoryExecuteCommandAsync" }, // 1039597033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionHistoryExecuteCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::ClassParams = {
	&USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionHistoryExecuteCommand::StaticRegisterNativesUSteamCoreWebAsyncActionHistoryExecuteCommand()
{
	UClass* Class = USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand.OuterSingleton;
}
USteamCoreWebAsyncActionHistoryExecuteCommand::USteamCoreWebAsyncActionHistoryExecuteCommand() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionHistoryExecuteCommand);
USteamCoreWebAsyncActionHistoryExecuteCommand::~USteamCoreWebAsyncActionHistoryExecuteCommand() {}
// ********** End Class USteamCoreWebAsyncActionHistoryExecuteCommand ******************************

// ********** Begin Class USteamCoreWebAsyncActionSupportGetAssetHistory Function SupportGetAssetHistoryAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics
{
	struct SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString AssetId;
		FString ContextId;
		USteamCoreWebAsyncActionSupportGetAssetHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09""AssetId\x09\x09\x09The asset ID to operate on\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09*/" },
#endif
		{ "DisplayName", "Support Get Asset History" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        AssetId                 The asset ID to operate on\n@param        ContextId               The context to fetch history for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SupportGetAssetHistoryAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SupportGetAssetHistoryAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SupportGetAssetHistoryAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AssetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers) < 2048);
// ********** End Function SupportGetAssetHistoryAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory, nullptr, "SupportGetAssetHistoryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionSupportGetAssetHistory**)Z_Param__Result=USteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_AssetId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionSupportGetAssetHistory Function SupportGetAssetHistoryAsync 

// ********** Begin Class USteamCoreWebAsyncActionSupportGetAssetHistory ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory;
UClass* USteamCoreWebAsyncActionSupportGetAssetHistory::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionSupportGetAssetHistory;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionSupportGetAssetHistory"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionSupportGetAssetHistory,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister()
{
	return USteamCoreWebAsyncActionSupportGetAssetHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionSupportGetAssetHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionSupportGetAssetHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionSupportGetAssetHistory constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionSupportGetAssetHistory constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SupportGetAssetHistoryAsync"), .Pointer = &USteamCoreWebAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync, "SupportGetAssetHistoryAsync" }, // 2597790382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSupportGetAssetHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::ClassParams = {
	&USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionSupportGetAssetHistory::StaticRegisterNativesUSteamCoreWebAsyncActionSupportGetAssetHistory()
{
	UClass* Class = USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory.OuterSingleton;
}
USteamCoreWebAsyncActionSupportGetAssetHistory::USteamCoreWebAsyncActionSupportGetAssetHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionSupportGetAssetHistory);
USteamCoreWebAsyncActionSupportGetAssetHistory::~USteamCoreWebAsyncActionSupportGetAssetHistory() {}
// ********** End Class USteamCoreWebAsyncActionSupportGetAssetHistory *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails, USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass, TEXT("USteamCoreWebAsyncActionGetHistoryCommandDetails"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetHistoryCommandDetails), 1921879448U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetUserHistory, USteamCoreWebAsyncActionGetUserHistory::StaticClass, TEXT("USteamCoreWebAsyncActionGetUserHistory"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetUserHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetUserHistory), 3797097756U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand, USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass, TEXT("USteamCoreWebAsyncActionHistoryExecuteCommand"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionHistoryExecuteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionHistoryExecuteCommand), 226190992U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory, USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass, TEXT("USteamCoreWebAsyncActionSupportGetAssetHistory"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionSupportGetAssetHistory), 2982560188U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_SteamCoreWeb_1098832581{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
