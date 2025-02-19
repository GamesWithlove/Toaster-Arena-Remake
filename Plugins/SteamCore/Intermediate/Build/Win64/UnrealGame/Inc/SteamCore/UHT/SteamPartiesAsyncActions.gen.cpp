// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamParties/SteamPartiesAsyncActions.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamParties/SteamPartiesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamPartiesAsyncActions() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinPartyCallback_Parms
		{
			FJoinPartyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinPartyCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1675397119
	void Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnJoinPartyCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinPartyCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinPartyCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinPartyCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCreateBeaconCallback_Parms
		{
			FCreateBeaconData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateBeaconCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2332543906
	void Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnCreateBeaconCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateBeaconCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateBeaconCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeaconCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms
		{
			FChangeNumOpenSlotsData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3328501000
	void Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnChangeNumOpenSlotsCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionJoinParty::execHandleCallback)
	{
		P_GET_STRUCT_REF(FJoinPartyData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreSteamPartiesAsyncActionJoinParty::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty()
	{
		UClass* Class = USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreSteamPartiesAsyncActionJoinParty::execHandleCallback },
			{ "JoinPartyAsync", &USteamCoreSteamPartiesAsyncActionJoinParty::execJoinPartyAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms
		{
			FJoinPartyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 1675397119
	void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms
		{
			UObject* WorldContextObject;
			FPartyBeaconID BeaconId;
			float Timeout;
			USteamCoreSteamPartiesAsyncActionJoinParty* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) }; // 2114853006
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* When the user indicates they wish to join the party advertised by a given beacon, call this method.\n\x09* On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09""Beacon ID for the party you wish to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Party" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param        BeaconId                Beacon ID for the party you wish to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, nullptr, "JoinPartyAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::SteamCoreSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSteamPartiesAsyncActionJoinParty);
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister()
	{
		return USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback, "HandleCallback" }, // 730159777
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync, "JoinPartyAsync" }, // 1411250980
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionJoinParty\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionJoinParty\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionJoinParty, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback_MetaData)) }; // 4024758349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionJoinParty>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty()
	{
		if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSteamPartiesAsyncActionJoinParty>()
	{
		return USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass();
	}
	USteamCoreSteamPartiesAsyncActionJoinParty::USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSteamPartiesAsyncActionJoinParty);
	USteamCoreSteamPartiesAsyncActionJoinParty::~USteamCoreSteamPartiesAsyncActionJoinParty() {}
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback)
	{
		P_GET_STRUCT_REF(FCreateBeaconData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon()
	{
		UClass* Class = USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBeaconAsync", &USteamCoreSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync },
			{ "HandleCallback", &USteamCoreSteamPartiesAsyncActionCreateBeacon::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) }; // 2208324015
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ConnectString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Metadata), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09""BeaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09* @param\x09""ConnectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09* @param\x09Metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Beacon" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        BeaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param        ConnectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param        Metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n@param        Timeout                                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "CreateBeaconAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms
		{
			FCreateBeaconData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 2332543906
	void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSteamPartiesAsyncActionCreateBeacon);
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister()
	{
		return USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync, "CreateBeaconAsync" }, // 751976354
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback, "HandleCallback" }, // 906203349
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionCreateBeacon, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback_MetaData)) }; // 2987790578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionCreateBeacon>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon()
	{
		if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSteamPartiesAsyncActionCreateBeacon>()
	{
		return USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass();
	}
	USteamCoreSteamPartiesAsyncActionCreateBeacon::USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSteamPartiesAsyncActionCreateBeacon);
	USteamCoreSteamPartiesAsyncActionCreateBeacon::~USteamCoreSteamPartiesAsyncActionCreateBeacon() {}
	DEFINE_FUNCTION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback)
	{
		P_GET_STRUCT_REF(FChangeNumOpenSlotsData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
	{
		UClass* Class = USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeNumOpenSlotsAsync", &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync },
			{ "HandleCallback", &USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) }; // 2114853006
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Change Num Open Slots" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "ChangeNumOpenSlotsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics
	{
		struct SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms
		{
			FChangeNumOpenSlotsData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3328501000
	void Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots);
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister()
	{
		return USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync, "ChangeNumOpenSlotsAsync" }, // 486298641
		{ &Z_Construct_UFunction_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback, "HandleCallback" }, // 548965282
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback_MetaData)) }; // 2688763445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots()
	{
		if (!Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton, Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>()
	{
		return USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	}
	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots);
	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::~USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionJoinParty"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionJoinParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionJoinParty), 2111050653U) },
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionCreateBeacon"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionCreateBeacon), 3991009844U) },
		{ Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass, TEXT("USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots"), &Z_Registration_Info_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots), 2210552926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_1686769383(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
