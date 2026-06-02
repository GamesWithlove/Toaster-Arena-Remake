// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPingServerAsyncDelegate ********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnPingServerAsyncDelegate_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPingServerAsyncDelegate constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPingServerAsyncDelegate constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPingServerAsyncDelegate Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 881426217
void Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPingServerAsyncDelegate Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnPingServerAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPingServerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPingServerAsyncDelegate, FGameServerItem const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnPingServerAsyncDelegate_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnPingServerAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPingServerAsyncDelegate **********************************************

// ********** Begin Delegate FOnServerUpdatedAsyncDelegate *****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms
	{
		FGameServerItem Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerUpdatedAsyncDelegate constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnServerUpdatedAsyncDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnServerUpdatedAsyncDelegate Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 881426217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnServerUpdatedAsyncDelegate Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerUpdatedAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerUpdatedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerUpdatedAsyncDelegate, FGameServerItem const& Data)
{
	struct _Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms
	{
		FGameServerItem Data;
	};
	_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	OnServerUpdatedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnServerUpdatedAsyncDelegate *******************************************

// ********** Begin Delegate FOnServerRuleAsyncDelegate ********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerRuleAsyncDelegate constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnServerRuleAsyncDelegate constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnServerRuleAsyncDelegate Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 920107276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 920107276
void Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnServerRuleAsyncDelegate Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRuleAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRuleAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRuleAsyncDelegate, TArray<FGameServerRule> const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRuleAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnServerRuleAsyncDelegate **********************************************

// ********** Begin Delegate FOnServerRefreshCompleteDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerRefreshCompleteDelegate constinit property declarations ******
// ********** End Delegate FOnServerRefreshCompleteDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRefreshCompleteDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRefreshCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRefreshCompleteDelegate)
{
	OnServerRefreshCompleteDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnServerRefreshCompleteDelegate ****************************************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer Function CancelPingQueries 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Cancel all active \"Server Ping\" queries\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Cancel all active \"Server Ping\" queries" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelPingQueries constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelPingQueries constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelPingQueries Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers) < 2048);
// ********** End Function CancelPingQueries Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, nullptr, "CancelPingQueries", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionPingServer::execCancelPingQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreMatchmakingServersAsyncActionPingServer::CancelPingQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer Function CancelPingQueries 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 881426217
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionPingServer::execHandleCallback)
{
	P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer Function HandleCallback **

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer Function PingServerAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms
	{
		UObject* WorldContextObject;
		FString IP;
		int32 Port;
		float Timeout;
		USteamCoreMatchmakingServersAsyncActionPingServer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09IP\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09Port\x09The port of the game server you are querying, in host order.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Ping Server" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        IP              The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        Port    The port of the game server you are querying, in host order.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function PingServerAsync constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PingServerAsync constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PingServerAsync Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers) < 2048);
// ********** End Function PingServerAsync Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, nullptr, "PingServerAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionPingServer::execPingServerAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionPingServer**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(Z_Param_WorldContextObject,Z_Param_IP,Z_Param_Port,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer Function PingServerAsync *

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer;
UClass* USteamCoreMatchmakingServersAsyncActionPingServer::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingServersAsyncActionPingServer;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingServersAsyncActionPingServer"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionPingServer,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister()
{
	return USteamCoreMatchmakingServersAsyncActionPingServer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionPingServer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionPingServer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelPingQueries"), .Pointer = &USteamCoreMatchmakingServersAsyncActionPingServer::execCancelPingQueries },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingServersAsyncActionPingServer::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("PingServerAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionPingServer::execPingServerAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries, "CancelPingQueries" }, // 814485663
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback, "HandleCallback" }, // 4243246312
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync, "PingServerAsync" }, // 498875005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionPingServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer Property Definitions ***
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionPingServer, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2312986615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer Property Definitions *****
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::ClassParams = {
	&USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingServersAsyncActionPingServer::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionPingServer()
{
	UClass* Class = USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer.OuterSingleton;
}
USteamCoreMatchmakingServersAsyncActionPingServer::USteamCoreMatchmakingServersAsyncActionPingServer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingServersAsyncActionPingServer);
USteamCoreMatchmakingServersAsyncActionPingServer::~USteamCoreMatchmakingServersAsyncActionPingServer() {}
// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer **************************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function CancelServerListQueries 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Cancel all active \"Server List\" queries\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Cancel all active \"Server List\" queries" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelServerListQueries constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelServerListQueries constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelServerListQueries Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers) < 2048);
// ********** End Function CancelServerListQueries Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "CancelServerListQueries", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execCancelServerListQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreMatchmakingServersAsyncActionRequestServerList::CancelServerListQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function CancelServerListQueries 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms
	{
		FGameServerItem Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 881426217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback)
{
	P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function HandleCallback 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function HandleServerListFinished 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleServerListFinished constinit property declarations **************
// ********** End Function HandleServerListFinished constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleServerListFinished", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleServerListFinished();
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function HandleServerListFinished 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestFavoritesServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FAVORITES' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Favorites  Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'FAVORITES' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFavoritesServerListAsync constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFavoritesServerListAsync constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFavoritesServerListAsync Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestFavoritesServerListAsync Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFavoritesServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestFavoritesServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestFriendsServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FRIENDS' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Friends Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'FRIENDS' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFriendsServerListAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFriendsServerListAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFriendsServerListAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestFriendsServerListAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFriendsServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestFriendsServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestHistoryServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'HISTORY' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request History Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'HISTORY' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestHistoryServerListAsync constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestHistoryServerListAsync constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestHistoryServerListAsync Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestHistoryServerListAsync Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestHistoryServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestHistoryServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestInternetServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'INTERNET' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Internet Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'INTERNET' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestInternetServerListAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestInternetServerListAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestInternetServerListAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestInternetServerListAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestInternetServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestInternetServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestLANServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'LAN' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request LAN Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'LAN' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLANServerListAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLANServerListAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLANServerListAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestLANServerListAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestLANServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestLANServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestSpectatorServerListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Spectator Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestSpectatorServerListAsync constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestSpectatorServerListAsync constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestSpectatorServerListAsync Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestSpectatorServerListAsync Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestSpectatorServerListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Function RequestSpectatorServerListAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList *****************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList;
UClass* USteamCoreMatchmakingServersAsyncActionRequestServerList::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingServersAsyncActionRequestServerList;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingServersAsyncActionRequestServerList"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionRequestServerList,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister()
{
	return USteamCoreMatchmakingServersAsyncActionRequestServerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefreshCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out.\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelServerListQueries"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execCancelServerListQueries },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("HandleServerListFinished"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished },
		{ .NameUTF8 = UTF8TEXT("RequestFavoritesServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync },
		{ .NameUTF8 = UTF8TEXT("RequestFriendsServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync },
		{ .NameUTF8 = UTF8TEXT("RequestHistoryServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync },
		{ .NameUTF8 = UTF8TEXT("RequestInternetServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync },
		{ .NameUTF8 = UTF8TEXT("RequestLANServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync },
		{ .NameUTF8 = UTF8TEXT("RequestSpectatorServerListAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries, "CancelServerListQueries" }, // 2408595234
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback, "HandleCallback" }, // 148380001
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished, "HandleServerListFinished" }, // 1447858112
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync, "RequestFavoritesServerListAsync" }, // 1122332463
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync, "RequestFriendsServerListAsync" }, // 3731892779
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync, "RequestHistoryServerListAsync" }, // 732011823
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync, "RequestInternetServerListAsync" }, // 8654522
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync, "RequestLANServerListAsync" }, // 1615345348
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync, "RequestSpectatorServerListAsync" }, // 3434394717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionRequestServerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3641620623
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted = { "OnRefreshCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnRefreshCompleted), Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefreshCompleted_MetaData), NewProp_OnRefreshCompleted_MetaData) }; // 238482593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams = {
	&USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionRequestServerList()
{
	UClass* Class = USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList.OuterSingleton;
}
USteamCoreMatchmakingServersAsyncActionRequestServerList::USteamCoreMatchmakingServersAsyncActionRequestServerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingServersAsyncActionRequestServerList);
USteamCoreMatchmakingServersAsyncActionRequestServerList::~USteamCoreMatchmakingServersAsyncActionRequestServerList() {}
// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList *******************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules Function CancelServerRulesQueries 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Cancel all active \"Server Rules\" queries\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Cancel all active \"Server Rules\" queries" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelServerRulesQueries constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelServerRulesQueries constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelServerRulesQueries Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers) < 2048);
// ********** End Function CancelServerRulesQueries Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "CancelServerRulesQueries", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execCancelServerRulesQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreMatchmakingServersAsyncActionServerRules::CancelServerRulesQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules Function CancelServerRulesQueries 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 920107276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 920107276
void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback)
{
	P_GET_TARRAY_REF(FGameServerRule,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules Function HandleCallback *

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules Function ServerRulesAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics
{
	struct SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Ip;
		int32 QueryPort;
		float Timeout;
		USteamCoreMatchmakingServersAsyncActionServerRules* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Server Rules" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRulesAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRulesAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRulesAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers) < 2048);
// ********** End Function ServerRulesAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "ServerRulesAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingServersAsyncActionServerRules**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(Z_Param_WorldContextObject,Z_Param_Ip,Z_Param_QueryPort,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules Function ServerRulesAsync 

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules;
UClass* USteamCoreMatchmakingServersAsyncActionServerRules::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingServersAsyncActionServerRules;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingServersAsyncActionServerRules"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionServerRules,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister()
{
	return USteamCoreMatchmakingServersAsyncActionServerRules::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionServerRules\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionServerRules\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelServerRulesQueries"), .Pointer = &USteamCoreMatchmakingServersAsyncActionServerRules::execCancelServerRulesQueries },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("ServerRulesAsync"), .Pointer = &USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries, "CancelServerRulesQueries" }, // 1054131274
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback, "HandleCallback" }, // 2764478674
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync, "ServerRulesAsync" }, // 785113716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionServerRules>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionServerRules, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3365648330
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams = {
	&USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingServersAsyncActionServerRules::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionServerRules()
{
	UClass* Class = USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules.OuterSingleton;
}
USteamCoreMatchmakingServersAsyncActionServerRules::USteamCoreMatchmakingServersAsyncActionServerRules(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingServersAsyncActionServerRules);
USteamCoreMatchmakingServersAsyncActionServerRules::~USteamCoreMatchmakingServersAsyncActionServerRules() {}
// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass, TEXT("USteamCoreMatchmakingServersAsyncActionPingServer"), &Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingServersAsyncActionPingServer), 2742515183U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass, TEXT("USteamCoreMatchmakingServersAsyncActionRequestServerList"), &Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingServersAsyncActionRequestServerList), 4095836343U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass, TEXT("USteamCoreMatchmakingServersAsyncActionServerRules"), &Z_Registration_Info_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingServersAsyncActionServerRules), 3438402253U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h__Script_SteamCore_1138360406{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
