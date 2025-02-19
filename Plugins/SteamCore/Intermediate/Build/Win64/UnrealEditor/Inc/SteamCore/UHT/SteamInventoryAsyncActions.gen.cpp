// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventory/SteamInventoryAsyncActions.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamInventory/SteamInventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryAsyncActions() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms
		{
			FSteamInventoryEligiblePromoItemDefIDs Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1282983039
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms
		{
			FSteamInventoryRequestPricesResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1190534170
	void Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms
		{
			FSteamInventoryStartPurchaseResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 276823948
	void Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback)
	{
		P_GET_STRUCT_REF(FSteamInventoryEligiblePromoItemDefIDs,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
	{
		UClass* Class = USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback },
			{ "RequestEligiblePromoItemDefinitionsIDsAsync", &USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execRequestEligiblePromoItemDefinitionsIDsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics
	{
		struct SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms
		{
			FSteamInventoryEligiblePromoItemDefIDs Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 1282983039
	void Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics
	{
		struct SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamID;
			float Timeout;
			USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Eligible Promo Item Definitions IDs" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        SteamID         The Steam ID of the user to request the eligible promo items for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "RequestEligiblePromoItemDefinitionsIDsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs);
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister()
	{
		return USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback, "HandleCallback" }, // 2149972138
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync, "RequestEligiblePromoItemDefinitionsIDsAsync" }, // 2082240431
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback_MetaData)) }; // 2364430812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
	{
		if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>()
	{
		return USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
	}
	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs);
	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::~USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs() {}
	DEFINE_FUNCTION(USteamCoreInventoryAsyncActionRequestPricesResult::execHandleCallback)
	{
		P_GET_STRUCT_REF(FSteamInventoryRequestPricesResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreInventoryAsyncActionRequestPricesResult::StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult()
	{
		UClass* Class = USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreInventoryAsyncActionRequestPricesResult::execHandleCallback },
			{ "RequestPricesAsync", &USteamCoreInventoryAsyncActionRequestPricesResult::execRequestPricesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics
	{
		struct SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms
		{
			FSteamInventoryRequestPricesResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 1190534170
	void Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics
	{
		struct SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms
		{
			UObject* WorldContextObject;
			float Timeout;
			USteamCoreInventoryAsyncActionRequestPricesResult* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency.\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Prices" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, nullptr, "RequestPricesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::SteamCoreInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreInventoryAsyncActionRequestPricesResult);
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_NoRegister()
	{
		return USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback, "HandleCallback" }, // 111008738
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync, "RequestPricesAsync" }, // 2371771029
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionRequestPricesResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionRequestPricesResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreInventoryAsyncActionRequestPricesResult, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback_MetaData)) }; // 1545867634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionRequestPricesResult>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult()
	{
		if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreInventoryAsyncActionRequestPricesResult>()
	{
		return USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass();
	}
	USteamCoreInventoryAsyncActionRequestPricesResult::USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreInventoryAsyncActionRequestPricesResult);
	USteamCoreInventoryAsyncActionRequestPricesResult::~USteamCoreInventoryAsyncActionRequestPricesResult() {}
	DEFINE_FUNCTION(USteamCoreInventoryAsyncActionStartPurchaseResult::execHandleCallback)
	{
		P_GET_STRUCT_REF(FSteamInventoryStartPurchaseResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreInventoryAsyncActionStartPurchaseResult::StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult()
	{
		UClass* Class = USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreInventoryAsyncActionStartPurchaseResult::execHandleCallback },
			{ "StartPurchaseAsync", &USteamCoreInventoryAsyncActionStartPurchaseResult::execStartPurchaseAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics
	{
		struct SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms
		{
			FSteamInventoryStartPurchaseResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 276823948
	void Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 2238260281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_MetaData)) }; // 2238260281
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Start Purchase" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        ItemDefs                The array of item definition ids that the user wants to purchase.\n@param        Quantity                The array of quantities of each item definition that the user wants to purchase.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, nullptr, "StartPurchaseAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::SteamCoreInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms), Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreInventoryAsyncActionStartPurchaseResult);
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_NoRegister()
	{
		return USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback, "HandleCallback" }, // 2778348616
		{ &Z_Construct_UFunction_USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync, "StartPurchaseAsync" }, // 306408975
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreInventoryAsyncActionStartPurchaseResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreInventoryAsyncActionStartPurchaseResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreInventoryAsyncActionStartPurchaseResult, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback_MetaData)) }; // 1292260373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInventoryAsyncActionStartPurchaseResult>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult()
	{
		if (!Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton, Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreInventoryAsyncActionStartPurchaseResult>()
	{
		return USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass();
	}
	USteamCoreInventoryAsyncActionStartPurchaseResult::USteamCoreInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreInventoryAsyncActionStartPurchaseResult);
	USteamCoreInventoryAsyncActionStartPurchaseResult::~USteamCoreInventoryAsyncActionStartPurchaseResult() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass, TEXT("USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs), 2490724295U) },
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass, TEXT("USteamCoreInventoryAsyncActionRequestPricesResult"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionRequestPricesResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionRequestPricesResult), 1923077901U) },
		{ Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass, TEXT("USteamCoreInventoryAsyncActionStartPurchaseResult"), &Z_Registration_Info_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInventoryAsyncActionStartPurchaseResult), 1861482900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_1448588196(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
