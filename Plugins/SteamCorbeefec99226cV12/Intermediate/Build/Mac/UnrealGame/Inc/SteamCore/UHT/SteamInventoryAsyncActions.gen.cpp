// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInventory/SteamInventoryAsyncActions.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamInventoryAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ****************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1377159239
void Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate Property Definitions 
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ******************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate *********************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2844162997
void Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate Property Definitions **
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryRequestPricesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate ***********************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate *********************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3937171694
void Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate Property Definitions **
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryStartPurchaseResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate ***********************

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics
{
	struct SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1377159239
void Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryEligiblePromoItemDefIDs,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function HandleCallback 

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function RequestEligiblePromoItemDefinitionsIDsAsync 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics
{
	struct SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Eligible Promo Item Definitions IDs" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        SteamID         The Steam ID of the user to request the eligible promo items for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDsAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEligiblePromoItemDefinitionsIDsAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDsAsync Property Definitions ******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestEligiblePromoItemDefinitionsIDsAsync Property Definitions ********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "RequestEligiblePromoItemDefinitionsIDsAsync", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execRequestEligiblePromoItemDefinitionsIDsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs**)Z_Param__Result=USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function RequestEligiblePromoItemDefinitionsIDsAsync 

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs *****
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
UClass* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::GetPrivateStaticClass()
{
	using TClass = USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs"),
			Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.InnerSingleton,
			StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs,
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
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister()
{
	return USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestEligiblePromoItemDefinitionsIDsAsync"), .Pointer = &USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execRequestEligiblePromoItemDefinitionsIDsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback, "HandleCallback" }, // 897803692
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync, "RequestEligiblePromoItemDefinitionsIDsAsync" }, // 3420038104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics

// ********** Begin Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2097268899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::ClassParams = {
	&USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams)
};
void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
{
	UClass* Class = USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
{
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton;
}
USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs);
USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::~USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs() {}
// ********** End Class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs *******

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics
{
	struct SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2844162997
void Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestPricesResult::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryRequestPricesResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult Function HandleCallback **

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult Function RequestPricesAsync 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics
{
	struct SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreInventoryAsyncActionRequestPricesResult* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency.\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Prices" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPricesAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPricesAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPricesAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestPricesAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, nullptr, "RequestPricesAsync", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestPricesResult::execRequestPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreInventoryAsyncActionRequestPricesResult**)Z_Param__Result=USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult Function RequestPricesAsync 

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult;
UClass* USteamCoreInventoryAsyncActionRequestPricesResult::GetPrivateStaticClass()
{
	using TClass = USteamCoreInventoryAsyncActionRequestPricesResult;
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreInventoryAsyncActionRequestPricesResult"),
			Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.InnerSingleton,
			StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult,
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
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister()
{
	return USteamCoreInventoryAsyncActionRequestPricesResult::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionRequestPricesResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionRequestPricesResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreInventoryAsyncActionRequestPricesResult::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestPricesAsync"), .Pointer = &USteamCoreInventoryAsyncActionRequestPricesResult::execRequestPricesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback, "HandleCallback" }, // 76165655
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync, "RequestPricesAsync" }, // 1512142095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionRequestPricesResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics

// ********** Begin Class USteamCoreInventoryAsyncActionRequestPricesResult Property Definitions ***
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreInventoryAsyncActionRequestPricesResult, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2730684390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult Property Definitions *****
UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::ClassParams = {
	&USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams)
};
void USteamCoreInventoryAsyncActionRequestPricesResult::StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult()
{
	UClass* Class = USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult()
{
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton;
}
USteamCoreInventoryAsyncActionRequestPricesResult::USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreInventoryAsyncActionRequestPricesResult);
USteamCoreInventoryAsyncActionRequestPricesResult::~USteamCoreInventoryAsyncActionRequestPricesResult() {}
// ********** End Class USteamCoreInventoryAsyncActionRequestPricesResult **************************

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics
{
	struct SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3937171694
void Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionStartPurchaseResult::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryStartPurchaseResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult Function HandleCallback **

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult Function StartPurchaseAsync 
struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics
{
	struct SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		float Timeout;
		USteamCoreInventoryAsyncActionStartPurchaseResult* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Start Purchase" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        ItemDefs                The array of item definition ids that the user wants to purchase.\n@param        Quantity                The array of quantities of each item definition that the user wants to purchase.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartPurchaseAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartPurchaseAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartPurchaseAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2266433612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2266433612
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers) < 2048);
// ********** End Function StartPurchaseAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, nullptr, "StartPurchaseAsync", 	Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreInventoryAsyncActionStartPurchaseResult::execStartPurchaseAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreInventoryAsyncActionStartPurchaseResult**)Z_Param__Result=USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(Z_Param_WorldContextObject,Z_Param_ItemDefs,Z_Param_Quantity,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult Function StartPurchaseAsync 

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult;
UClass* USteamCoreInventoryAsyncActionStartPurchaseResult::GetPrivateStaticClass()
{
	using TClass = USteamCoreInventoryAsyncActionStartPurchaseResult;
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreInventoryAsyncActionStartPurchaseResult"),
			Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.InnerSingleton,
			StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult,
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
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister()
{
	return USteamCoreInventoryAsyncActionStartPurchaseResult::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionStartPurchaseResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionStartPurchaseResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreInventoryAsyncActionStartPurchaseResult::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("StartPurchaseAsync"), .Pointer = &USteamCoreInventoryAsyncActionStartPurchaseResult::execStartPurchaseAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback, "HandleCallback" }, // 2486039076
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync, "StartPurchaseAsync" }, // 3085571413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionStartPurchaseResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics

// ********** Begin Class USteamCoreInventoryAsyncActionStartPurchaseResult Property Definitions ***
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreInventoryAsyncActionStartPurchaseResult, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2993950544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult Property Definitions *****
UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::ClassParams = {
	&USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams)
};
void USteamCoreInventoryAsyncActionStartPurchaseResult::StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult()
{
	UClass* Class = USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult()
{
	if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton;
}
USteamCoreInventoryAsyncActionStartPurchaseResult::USteamCoreInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreInventoryAsyncActionStartPurchaseResult);
USteamCoreInventoryAsyncActionStartPurchaseResult::~USteamCoreInventoryAsyncActionStartPurchaseResult() {}
// ********** End Class USteamCoreInventoryAsyncActionStartPurchaseResult **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass, TEXT("USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs), 926124298U) },
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass, TEXT("USteamCoreInventoryAsyncActionRequestPricesResult"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionRequestPricesResult), 4216638785U) },
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass, TEXT("USteamCoreInventoryAsyncActionStartPurchaseResult"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionStartPurchaseResult), 4071559136U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h__Script_SteamCore_1821228202{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
