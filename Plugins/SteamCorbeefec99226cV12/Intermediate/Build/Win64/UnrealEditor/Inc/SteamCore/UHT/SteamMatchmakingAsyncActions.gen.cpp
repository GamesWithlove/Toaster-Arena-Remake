// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmaking/SteamMatchmakingAsyncActions.h"
#include "SteamMatchmaking/SteamMatchmakingTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUpdateSession();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestLobbyListAsyncDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3824979745
void Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestLobbyListAsyncDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyListAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestLobbyListAsyncDelegate ****************************************

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate *******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateLobbyAsyncDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1444217432
void Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateLobbyAsyncDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobbyAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateLobbyAsyncDelegate *********************************************

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate *********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinLobbyAsyncDelegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4190186525
void Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinLobbyAsyncDelegate Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobbyAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinLobbyAsyncDelegate ***********************************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync ****
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics
{
	struct SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
		float Timeout;
		USteamCoreMatchmakingAsyncActionCreateLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250.\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLobbyAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLobbyAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLobbyAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 1984566643
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers) < 2048);
// ********** End Function CreateLobbyAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingAsyncActionCreateLobby**)Z_Param__Result=USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(Z_Param_WorldContextObject,ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync ******

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby Function HandleCallback ******
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
{
	struct SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1444217432
void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby Function HandleCallback ********

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby;
UClass* USteamCoreMatchmakingAsyncActionCreateLobby::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingAsyncActionCreateLobby;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingAsyncActionCreateLobby"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister()
{
	return USteamCoreMatchmakingAsyncActionCreateLobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionCreateLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionCreateLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateLobbyAsync"), .Pointer = &USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 563990690
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 2891124527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby Property Definitions *********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionCreateLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3558635316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby Property Definitions ***********
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams = {
	&USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby()
{
	UClass* Class = USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton;
}
USteamCoreMatchmakingAsyncActionCreateLobby::USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingAsyncActionCreateLobby);
USteamCoreMatchmakingAsyncActionCreateLobby::~USteamCoreMatchmakingAsyncActionCreateLobby() {}
// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby ********************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList Function HandleCallback *
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
{
	struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3824979745
void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
{
	P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList Function HandleCallback ***

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync 
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
{
	struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09* \n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a filtered list of relevant lobbies.\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLobbyListAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLobbyListAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLobbyListAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestLobbyListAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingAsyncActionRequestLobbyList**)Z_Param__Result=USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync 

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList *************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList;
UClass* USteamCoreMatchmakingAsyncActionRequestLobbyList::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingAsyncActionRequestLobbyList;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingAsyncActionRequestLobbyList"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister()
{
	return USteamCoreMatchmakingAsyncActionRequestLobbyList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionRequestLobbyList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionRequestLobbyList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestLobbyListAsync"), .Pointer = &USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 2220666977
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 1852900371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList Property Definitions ****
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionRequestLobbyList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2825653277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList Property Definitions ******
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams = {
	&USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList()
{
	UClass* Class = USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton;
}
USteamCoreMatchmakingAsyncActionRequestLobbyList::USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingAsyncActionRequestLobbyList);
USteamCoreMatchmakingAsyncActionRequestLobbyList::~USteamCoreMatchmakingAsyncActionRequestLobbyList() {}
// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList ***************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby Function HandleCallback ********
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics
{
	struct SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4190186525
void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby Function HandleCallback **********

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync ********
struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics
{
	struct SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDLobby;
		float Timeout;
		USteamCoreMatchmakingAsyncActionJoinLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins an existing lobby.\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinLobbyAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinLobbyAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinLobbyAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers) < 2048);
// ********** End Function JoinLobbyAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "JoinLobbyAsync", 	Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreMatchmakingAsyncActionJoinLobby**)Z_Param__Result=USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(Z_Param_WorldContextObject,Z_Param_SteamIDLobby,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync **********

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby;
UClass* USteamCoreMatchmakingAsyncActionJoinLobby::GetPrivateStaticClass()
{
	using TClass = USteamCoreMatchmakingAsyncActionJoinLobby;
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreMatchmakingAsyncActionJoinLobby"),
			Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.InnerSingleton,
			StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby,
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
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister()
{
	return USteamCoreMatchmakingAsyncActionJoinLobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionJoinLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionJoinLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("JoinLobbyAsync"), .Pointer = &USteamCoreMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback, "HandleCallback" }, // 2106096191
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync, "JoinLobbyAsync" }, // 1288500774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionJoinLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby Property Definitions ***********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionJoinLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2718376444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby Property Definitions *************
UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::ClassParams = {
	&USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams)
};
void USteamCoreMatchmakingAsyncActionJoinLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby()
{
	UClass* Class = USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby()
{
	if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton;
}
USteamCoreMatchmakingAsyncActionJoinLobby::USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreMatchmakingAsyncActionJoinLobby);
USteamCoreMatchmakingAsyncActionJoinLobby::~USteamCoreMatchmakingAsyncActionJoinLobby() {}
// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby **********************************

// ********** Begin Class USteamCoreCreateSession Function CreateSteamCoreSession ******************
struct Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics
{
	struct SteamCoreCreateSession_eventCreateSteamCoreSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> SessionSettings;
		FString SessionName;
		int32 MaxPlayers;
		bool bUseLAN;
		bool bAllowInvites;
		bool bUsesPresence;
		bool bAllowJoinViaPresence;
		bool bAllowJoinViaPresenceFriendsOnly;
		bool bAntiCheatProtected;
		bool bUsesStats;
		bool bShouldAdvertise;
		bool bUseLobbiesVoiceChatIfAvailable;
		float Timeout;
		USteamCoreCreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates an online session\n\x09* \n\x09* Automatically detects if we're running a dedicated or listen server\n\x09*\n\x09* Listen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\x09*\n\x09*    @param SessionName\x09\x09\x09\x09\x09\x09\x09Name of our session\n\x09*    @param MaxPlayers\x09\x09\x09\x09\x09\x09\x09Number of public connections\n\x09*    @param bUsesPresence\x09\x09\x09\x09\x09\x09""Create a lobby for the session (disabled for dedicated servers)\n\x09*    @param bUseLAN\x09\x09\x09\x09\x09\x09\x09\x09Used for LAN server\n\x09*    @param bUseLobbiesVoiceChatIfAvailable\x09\x09(4.27 only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n\x09*    @param\x09Timeout\x09\x09\x09\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUseLobbiesVoiceChatIfAvailable", "true" },
		{ "CPP_Default_bUsesPresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_MaxPlayers", "5" },
		{ "CPP_Default_SessionName", "SteamCoreSession" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\n   @param SessionName                                                 Name of our session\n   @param MaxPlayers                                                  Number of public connections\n   @param bUsesPresence                                               Create a lobby for the session (disabled for dedicated servers)\n   @param bUseLAN                                                             Used for LAN server\n   @param bUseLobbiesVoiceChatIfAvailable             (4.27 only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n   @param     Timeout                                                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSteamCoreSession constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bUsesPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
	static void NewProp_bUsesStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSteamCoreSession constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSteamCoreSession Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAntiCheatProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
{
	((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreCreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers) < 2048);
// ********** End Function CreateSteamCoreSession Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreCreateSession, nullptr, "CreateSteamCoreSession", 	Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::SteamCoreCreateSession_eventCreateSteamCoreSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::SteamCoreCreateSession_eventCreateSteamCoreSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreCreateSession::execCreateSteamCoreSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_SessionSettings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_UBOOL(Z_Param_bAllowInvites);
	P_GET_UBOOL(Z_Param_bUsesPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
	P_GET_UBOOL(Z_Param_bAntiCheatProtected);
	P_GET_UBOOL(Z_Param_bUsesStats);
	P_GET_UBOOL(Z_Param_bShouldAdvertise);
	P_GET_UBOOL(Z_Param_bUseLobbiesVoiceChatIfAvailable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreCreateSession**)Z_Param__Result=USteamCoreCreateSession::CreateSteamCoreSession(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise,Z_Param_bUseLobbiesVoiceChatIfAvailable,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreCreateSession Function CreateSteamCoreSession ********************

// ********** Begin Class USteamCoreCreateSession **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreCreateSession;
UClass* USteamCoreCreateSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreCreateSession;
	if (!Z_Registration_Info_UClass_USteamCoreCreateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreCreateSession"),
			Z_Registration_Info_UClass_USteamCoreCreateSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreCreateSession,
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
	return Z_Registration_Info_UClass_USteamCoreCreateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister()
{
	return USteamCoreCreateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreCreateSession constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreCreateSession constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSteamCoreSession"), .Pointer = &USteamCoreCreateSession::execCreateSteamCoreSession },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession, "CreateSteamCoreSession" }, // 2798159966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreCreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreCreateSession_Statics

// ********** Begin Class USteamCoreCreateSession Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2345629309
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreCreateSession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2345629309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreCreateSession Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USteamCoreCreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams = {
	&USteamCoreCreateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams)
};
void USteamCoreCreateSession::StaticRegisterNativesUSteamCoreCreateSession()
{
	UClass* Class = USteamCoreCreateSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreCreateSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreCreateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton, Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreCreateSession);
USteamCoreCreateSession::~USteamCoreCreateSession() {}
// ********** End Class USteamCoreCreateSession ****************************************************

// ********** Begin Delegate FFindSteamSessionsResultDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FFindSteamSessionsResultDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FFindSteamSessionsResultDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FFindSteamSessionsResultDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionResult, METADATA_PARAMS(0, nullptr) }; // 572596804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 572596804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FFindSteamSessionsResultDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "FindSteamSessionsResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results)
{
	struct _Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
	_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms Parms;
	Parms.Results=Results;
	FindSteamSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFindSteamSessionsResultDelegate ****************************************

// ********** Begin Class USteamCoreFindSession Function FindSteamCoreSessions *********************
struct Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics
{
	struct SteamCoreFindSession_eventFindSteamCoreSessions_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSearchSetting> SearchSettings;
		int32 MaxResults;
		bool bUseLAN;
		ESteamSessionFindType ServerType;
		bool bEmptyServersOnly;
		bool bSecureServersOnly;
		float Timeout;
		USteamCoreFindSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SearchSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Find Online Sessions\n\x09*\n\x09* This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\x09*\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max Number of Servers\n\x09* @param\x09ServerType\x09\x09\x09\x09Search for Listen or Dedicated servers\n\x09* @param\x09""bUseLAN\x09\x09\x09\x09Search for LAN servers only\n\x09* @param\x09""bEmptyServersOnly\x09\x09Only empty servers\n\x09* @param\x09""bSecureServersOnly\x09\x09Only secure servers\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerType", "Listen" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Online Sessions\n\nThis is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\n@param        MaxResults                              Max Number of Servers\n@param        ServerType                              Search for Listen or Dedicated servers\n@param        bUseLAN                         Search for LAN servers only\n@param        bEmptyServersOnly               Only empty servers\n@param        bSecureServersOnly              Only secure servers\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindSteamCoreSessions constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SearchSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerType;
	static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
	static void NewProp_bSecureServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindSteamCoreSessions constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindSteamCoreSessions Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_ValueProp = { "SearchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 3224929249
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_Key_KeyProp = { "SearchSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings = { "SearchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, SearchSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3224929249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ServerType), Z_Construct_UEnum_SteamCore_ESteamSessionFindType, METADATA_PARAMS(0, nullptr) }; // 1935662569
void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
{
	((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bEmptyServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
{
	((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bSecureServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFindSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers) < 2048);
// ********** End Function FindSteamCoreSessions Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "FindSteamCoreSessions", 	Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::SteamCoreFindSession_eventFindSteamCoreSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::SteamCoreFindSession_eventFindSteamCoreSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFindSession::execFindSteamCoreSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSearchSetting,Z_Param_SearchSettings);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_ENUM(ESteamSessionFindType,Z_Param_ServerType);
	P_GET_UBOOL(Z_Param_bEmptyServersOnly);
	P_GET_UBOOL(Z_Param_bSecureServersOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFindSession**)Z_Param__Result=USteamCoreFindSession::FindSteamCoreSessions(Z_Param_WorldContextObject,Z_Param_SearchSettings,Z_Param_MaxResults,Z_Param_bUseLAN,ESteamSessionFindType(Z_Param_ServerType),Z_Param_bEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFindSession Function FindSteamCoreSessions ***********************

// ********** Begin Class USteamCoreFindSession Function OnCompleted *******************************
struct Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics
{
	struct SteamCoreFindSession_eventOnCompleted_Parms
	{
		bool bSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCompleted constinit property declarations ***************************
	static void NewProp_bSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCompleted constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCompleted Property Definitions **************************************
void Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
{
	((SteamCoreFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers) < 2048);
// ********** End Function OnCompleted Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "OnCompleted", 	Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::SteamCoreFindSession_eventOnCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::SteamCoreFindSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFindSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFindSession::execOnCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_bSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFindSession Function OnCompleted *********************************

// ********** Begin Class USteamCoreFindSession ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFindSession;
UClass* USteamCoreFindSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreFindSession;
	if (!Z_Registration_Info_UClass_USteamCoreFindSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFindSession"),
			Z_Registration_Info_UClass_USteamCoreFindSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreFindSession,
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
	return Z_Registration_Info_UClass_USteamCoreFindSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister()
{
	return USteamCoreFindSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFindSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFindSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFindSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFindSession constinit property declarations ********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFindSession constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindSteamCoreSessions"), .Pointer = &USteamCoreFindSession::execFindSteamCoreSessions },
		{ .NameUTF8 = UTF8TEXT("OnCompleted"), .Pointer = &USteamCoreFindSession::execOnCompleted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions, "FindSteamCoreSessions" }, // 2438138153
		{ &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted, "OnCompleted" }, // 1943109613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFindSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFindSession_Statics

// ********** Begin Class USteamCoreFindSession Property Definitions *******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFindSession, OnCallback), Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2505493704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFindSession Property Definitions *********************************
UObject* (*const Z_Construct_UClass_USteamCoreFindSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams = {
	&USteamCoreFindSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams)
};
void USteamCoreFindSession::StaticRegisterNativesUSteamCoreFindSession()
{
	UClass* Class = USteamCoreFindSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFindSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFindSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton, Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFindSession);
USteamCoreFindSession::~USteamCoreFindSession() {}
// ********** End Class USteamCoreFindSession ******************************************************

// ********** Begin Class USteamCoreDestroySession Function DestroySteamCoreSession ****************
struct Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics
{
	struct SteamCoreDestroySession_eventDestroySteamCoreSession_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreDestroySession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Destroy an Online Session\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy an Online Session\n@param        Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroySteamCoreSession constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroySteamCoreSession constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroySteamCoreSession Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreDestroySession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers) < 2048);
// ********** End Function DestroySteamCoreSession Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "DestroySteamCoreSession", 	Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::SteamCoreDestroySession_eventDestroySteamCoreSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::SteamCoreDestroySession_eventDestroySteamCoreSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreDestroySession::execDestroySteamCoreSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreDestroySession**)Z_Param__Result=USteamCoreDestroySession::DestroySteamCoreSession(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreDestroySession Function DestroySteamCoreSession ******************

// ********** Begin Class USteamCoreDestroySession Function OnCompleted ****************************
struct Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics
{
	struct SteamCoreDestroySession_eventOnCompleted_Parms
	{
		FName sessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCompleted constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_sessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCompleted constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCompleted Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventOnCompleted_Parms, sessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers) < 2048);
// ********** End Function OnCompleted Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "OnCompleted", 	Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::SteamCoreDestroySession_eventOnCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::SteamCoreDestroySession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreDestroySession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_sessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreDestroySession Function OnCompleted ******************************

// ********** Begin Class USteamCoreDestroySession *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreDestroySession;
UClass* USteamCoreDestroySession::GetPrivateStaticClass()
{
	using TClass = USteamCoreDestroySession;
	if (!Z_Registration_Info_UClass_USteamCoreDestroySession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreDestroySession"),
			Z_Registration_Info_UClass_USteamCoreDestroySession.InnerSingleton,
			StaticRegisterNativesUSteamCoreDestroySession,
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
	return Z_Registration_Info_UClass_USteamCoreDestroySession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister()
{
	return USteamCoreDestroySession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreDestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreDestroySession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreDestroySession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreDestroySession constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreDestroySession constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroySteamCoreSession"), .Pointer = &USteamCoreDestroySession::execDestroySteamCoreSession },
		{ .NameUTF8 = UTF8TEXT("OnCompleted"), .Pointer = &USteamCoreDestroySession::execOnCompleted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession, "DestroySteamCoreSession" }, // 233812101
		{ &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted, "OnCompleted" }, // 1079466167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreDestroySession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreDestroySession_Statics

// ********** Begin Class USteamCoreDestroySession Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2345629309
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreDestroySession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2345629309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreDestroySession Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USteamCoreDestroySession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams = {
	&USteamCoreDestroySession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams)
};
void USteamCoreDestroySession::StaticRegisterNativesUSteamCoreDestroySession()
{
	UClass* Class = USteamCoreDestroySession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreDestroySession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreDestroySession()
{
	if (!Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton, Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreDestroySession);
USteamCoreDestroySession::~USteamCoreDestroySession() {}
// ********** End Class USteamCoreDestroySession ***************************************************

// ********** Begin Class USteamCoreUpdateSession Function OnCompleted *****************************
struct Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics
{
	struct SteamCoreUpdateSession_eventOnCompleted_Parms
	{
		FName SessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCompleted constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCompleted constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCompleted Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUpdateSession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUpdateSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers) < 2048);
// ********** End Function OnCompleted Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "OnCompleted", 	Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::SteamCoreUpdateSession_eventOnCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::SteamCoreUpdateSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUpdateSession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUpdateSession Function OnCompleted *******************************

// ********** Begin Class USteamCoreUpdateSession Function UpdateSteamCoreSession ******************
struct Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics
{
	struct SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> Settings;
		FString SessionName;
		int32 MaxPlayers;
		USteamCoreUpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "CPP_Default_MaxPlayers", "4" },
		{ "CPP_Default_SessionName", "SteamCoreSession" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSteamCoreSession constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSteamCoreSession constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSteamCoreSession Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers) < 2048);
// ********** End Function UpdateSteamCoreSession Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "UpdateSteamCoreSession", 	Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUpdateSession::execUpdateSteamCoreSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUpdateSession**)Z_Param__Result=USteamCoreUpdateSession::UpdateSteamCoreSession(Z_Param_WorldContextObject,Z_Param_Settings,Z_Param_SessionName,Z_Param_MaxPlayers);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUpdateSession Function UpdateSteamCoreSession ********************

// ********** Begin Class USteamCoreUpdateSession **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUpdateSession;
UClass* USteamCoreUpdateSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreUpdateSession;
	if (!Z_Registration_Info_UClass_USteamCoreUpdateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUpdateSession"),
			Z_Registration_Info_UClass_USteamCoreUpdateSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreUpdateSession,
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
	return Z_Registration_Info_UClass_USteamCoreUpdateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister()
{
	return USteamCoreUpdateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUpdateSession constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUpdateSession constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnCompleted"), .Pointer = &USteamCoreUpdateSession::execOnCompleted },
		{ .NameUTF8 = UTF8TEXT("UpdateSteamCoreSession"), .Pointer = &USteamCoreUpdateSession::execUpdateSteamCoreSession },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted, "OnCompleted" }, // 489158767
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession, "UpdateSteamCoreSession" }, // 1307347292
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUpdateSession_Statics

// ********** Begin Class USteamCoreUpdateSession Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUpdateSession, OnCallback), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2345629309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUpdateSession Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USteamCoreUpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUpdateSession_Statics::ClassParams = {
	&USteamCoreUpdateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams)
};
void USteamCoreUpdateSession::StaticRegisterNativesUSteamCoreUpdateSession()
{
	UClass* Class = USteamCoreUpdateSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUpdateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton, Z_Construct_UClass_USteamCoreUpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUpdateSession);
USteamCoreUpdateSession::~USteamCoreUpdateSession() {}
// ********** End Class USteamCoreUpdateSession ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionCreateLobby"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionCreateLobby), 2092608577U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionRequestLobbyList"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionRequestLobbyList), 1885541120U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionJoinLobby"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionJoinLobby), 1007445223U) },
		{ Z_Construct_UClass_USteamCoreCreateSession, USteamCoreCreateSession::StaticClass, TEXT("USteamCoreCreateSession"), &Z_Registration_Info_UClass_USteamCoreCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreCreateSession), 985013679U) },
		{ Z_Construct_UClass_USteamCoreFindSession, USteamCoreFindSession::StaticClass, TEXT("USteamCoreFindSession"), &Z_Registration_Info_UClass_USteamCoreFindSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFindSession), 3579868109U) },
		{ Z_Construct_UClass_USteamCoreDestroySession, USteamCoreDestroySession::StaticClass, TEXT("USteamCoreDestroySession"), &Z_Registration_Info_UClass_USteamCoreDestroySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreDestroySession), 2334151861U) },
		{ Z_Construct_UClass_USteamCoreUpdateSession, USteamCoreUpdateSession::StaticClass, TEXT("USteamCoreUpdateSession"), &Z_Registration_Info_UClass_USteamCoreUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUpdateSession), 3470557960U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_SteamCore_2452101496{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
