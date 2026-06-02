// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParties/SteamPartiesAsyncActions.h"
#include "SteamParties/SteamPartiesTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamPartiesAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnJoinPartyCallback **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinPartyCallback constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinPartyCallback constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinPartyCallback Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinPartyCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1204988696
void Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnJoinPartyCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinPartyCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinPartyCallback Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinPartyCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinPartyCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinPartyCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnJoinPartyCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinPartyCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinPartyCallback ****************************************************

// ********** Begin Delegate FOnCreateBeaconCallback ***********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateBeaconCallback constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateBeaconCallback constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateBeaconCallback Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateBeaconCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2412098477
void Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnCreateBeaconCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateBeaconCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateBeaconCallback Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateBeaconCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeaconCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeaconCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnCreateBeaconCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateBeaconCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateBeaconCallback *************************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback *****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnChangeNumOpenSlotsCallback constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4169376836
void Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnChangeNumOpenSlotsCallback Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnChangeNumOpenSlotsCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnChangeNumOpenSlotsCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChangeNumOpenSlotsCallback *******************************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty Function HandleCallback *******
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics
{
	struct SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1204988696
void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionJoinParty::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinPartyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty Function HandleCallback *********

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty Function JoinPartyAsync *******
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics
{
	struct SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		float Timeout;
		USteamCoreSteamPartiesAsyncActionJoinParty* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* When the user indicates they wish to join the party advertised by a given beacon, call this method.\n\x09* On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09""Beacon ID for the party you wish to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Party" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param        BeaconId                Beacon ID for the party you wish to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinPartyAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinPartyAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinPartyAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 3499776562
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers) < 2048);
// ********** End Function JoinPartyAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, nullptr, "JoinPartyAsync", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionJoinParty::execJoinPartyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreSteamPartiesAsyncActionJoinParty**)Z_Param__Result=USteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty Function JoinPartyAsync *********

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty;
UClass* USteamCoreSteamPartiesAsyncActionJoinParty::GetPrivateStaticClass()
{
	using TClass = USteamCoreSteamPartiesAsyncActionJoinParty;
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreSteamPartiesAsyncActionJoinParty"),
			Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.InnerSingleton,
			StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty,
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
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister()
{
	return USteamCoreSteamPartiesAsyncActionJoinParty::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionJoinParty\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionJoinParty\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreSteamPartiesAsyncActionJoinParty::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("JoinPartyAsync"), .Pointer = &USteamCoreSteamPartiesAsyncActionJoinParty::execJoinPartyAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback, "HandleCallback" }, // 2454191687
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync, "JoinPartyAsync" }, // 3261261494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionJoinParty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty Property Definitions **********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionJoinParty, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 578589730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty Property Definitions ************
UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::ClassParams = {
	&USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams)
};
void USteamCoreSteamPartiesAsyncActionJoinParty::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty()
{
	UClass* Class = USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty()
{
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton;
}
USteamCoreSteamPartiesAsyncActionJoinParty::USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreSteamPartiesAsyncActionJoinParty);
USteamCoreSteamPartiesAsyncActionJoinParty::~USteamCoreSteamPartiesAsyncActionJoinParty() {}
// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty *********************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync *
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics
{
	struct SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms
	{
		UObject* WorldContextObject;
		int32 OpenSlots;
		FSteamPartyBeaconLocation BeaconLocation;
		FString ConnectString;
		FString Metadata;
		float Timeout;
		USteamCoreSteamPartiesAsyncActionCreateBeacon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09""BeaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09* @param\x09""ConnectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09* @param\x09Metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Beacon" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        BeaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param        ConnectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param        Metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n@param        Timeout                                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateBeaconAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateBeaconAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateBeaconAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3280647280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Metadata), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers) < 2048);
// ********** End Function CreateBeaconAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "CreateBeaconAsync", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreSteamPartiesAsyncActionCreateBeacon**)Z_Param__Result=USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(Z_Param_WorldContextObject,Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_Metadata,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync ***

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon Function HandleCallback ****
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics
{
	struct SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2412098477
void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateBeaconData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon Function HandleCallback ******

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon;
UClass* USteamCoreSteamPartiesAsyncActionCreateBeacon::GetPrivateStaticClass()
{
	using TClass = USteamCoreSteamPartiesAsyncActionCreateBeacon;
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreSteamPartiesAsyncActionCreateBeacon"),
			Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.InnerSingleton,
			StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon,
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
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister()
{
	return USteamCoreSteamPartiesAsyncActionCreateBeacon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateBeaconAsync"), .Pointer = &USteamCoreSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync, "CreateBeaconAsync" }, // 4189557358
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback, "HandleCallback" }, // 1438146563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionCreateBeacon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon Property Definitions *******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionCreateBeacon, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4240145630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon Property Definitions *********
UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams = {
	&USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams)
};
void USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon()
{
	UClass* Class = USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon()
{
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton;
}
USteamCoreSteamPartiesAsyncActionCreateBeacon::USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreSteamPartiesAsyncActionCreateBeacon);
USteamCoreSteamPartiesAsyncActionCreateBeacon::~USteamCoreSteamPartiesAsyncActionCreateBeacon() {}
// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon ******************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync 
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics
{
	struct SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		int32 OpenSlots;
		float Timeout;
		USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Change Num Open Slots" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeNumOpenSlotsAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChangeNumOpenSlotsAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChangeNumOpenSlotsAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 3499776562
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers) < 2048);
// ********** End Function ChangeNumOpenSlotsAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "ChangeNumOpenSlotsAsync", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots**)Z_Param__Result=USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_OpenSlots,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync 

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics
{
	struct SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4169376836
void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback)
{
	P_GET_STRUCT_REF(FChangeNumOpenSlotsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback 

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots **********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
UClass* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::GetPrivateStaticClass()
{
	using TClass = USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots"),
			Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton,
			StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots,
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
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister()
{
	return USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChangeNumOpenSlotsAsync"), .Pointer = &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync, "ChangeNumOpenSlotsAsync" }, // 1491896170
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback, "HandleCallback" }, // 2127446457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Property Definitions *
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3745933180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots Property Definitions ***
UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams = {
	&USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams)
};
void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
{
	UClass* Class = USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
{
	if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton;
}
USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots);
USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::~USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots() {}
// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionJoinParty"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionJoinParty), 3855097922U) },
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionCreateBeacon"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionCreateBeacon), 7779071U) },
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots), 2080280334U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h__Script_SteamCore_4121811109{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
