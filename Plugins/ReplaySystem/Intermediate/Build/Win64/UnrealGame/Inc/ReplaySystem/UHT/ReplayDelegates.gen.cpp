// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayDelegates.h"
#include "ReplayStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplayDelegates() {}

// ********** Begin Cross Module References ********************************************************
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayEvent();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestEventsComplete **********************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics
{
	struct _Script_ReplaySystem_eventOnRequestEventsComplete_Parms
	{
		TArray<FReplayEvent> Events;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestEventsComplete constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestEventsComplete constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestEventsComplete Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayEvent, METADATA_PARAMS(0, nullptr) }; // 3931045147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplaySystem_eventOnRequestEventsComplete_Parms, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 3931045147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::NewProp_Events,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestEventsComplete Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnRequestEventsComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnRequestEventsComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnRequestEventsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEventsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEventsComplete, TArray<FReplayEvent> const& Events)
{
	struct _Script_ReplaySystem_eventOnRequestEventsComplete_Parms
	{
		TArray<FReplayEvent> Events;
	};
	_Script_ReplaySystem_eventOnRequestEventsComplete_Parms Parms;
	Parms.Events=Events;
	OnRequestEventsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEventsComplete ************************************************

// ********** Begin Delegate FOnRenameReplayComplete ***********************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics
{
	struct _Script_ReplaySystem_eventOnRenameReplayComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRenameReplayComplete constinit property declarations ***************
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRenameReplayComplete constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRenameReplayComplete Property Definitions **************************
void Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_ReplaySystem_eventOnRenameReplayComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplaySystem_eventOnRenameReplayComplete_Parms), &Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRenameReplayComplete Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnRenameReplayComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnRenameReplayComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnRenameReplayComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRenameReplayComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRenameReplayComplete, bool bWasSuccessful)
{
	struct _Script_ReplaySystem_eventOnRenameReplayComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_ReplaySystem_eventOnRenameReplayComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRenameReplayComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRenameReplayComplete *************************************************

// ********** Begin Delegate FOnGetReplaysComplete *************************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics
{
	struct _Script_ReplaySystem_eventOnGetReplaysComplete_Parms
	{
		TArray<UReplayObject*> Replays;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetReplaysComplete constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Replays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Replays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetReplaysComplete constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetReplaysComplete Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::NewProp_Replays_Inner = { "Replays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UReplayObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::NewProp_Replays = { "Replays", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReplaySystem_eventOnGetReplaysComplete_Parms, Replays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replays_MetaData), NewProp_Replays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::NewProp_Replays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::NewProp_Replays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetReplaysComplete Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnGetReplaysComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnGetReplaysComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnGetReplaysComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetReplaysComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetReplaysComplete, TArray<UReplayObject*> const& Replays)
{
	struct _Script_ReplaySystem_eventOnGetReplaysComplete_Parms
	{
		TArray<UReplayObject*> Replays;
	};
	_Script_ReplaySystem_eventOnGetReplaysComplete_Parms Parms;
	Parms.Replays=Replays;
	OnGetReplaysComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetReplaysComplete ***************************************************

// ********** Begin Delegate FOnDeleteComplete *****************************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics
{
	struct _Script_ReplaySystem_eventOnDeleteComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDeleteComplete constinit property declarations *********************
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDeleteComplete constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDeleteComplete Property Definitions ********************************
void Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_ReplaySystem_eventOnDeleteComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplaySystem_eventOnDeleteComplete_Parms), &Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDeleteComplete Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnDeleteComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnDeleteComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnDeleteComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeleteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteComplete, bool bWasSuccessful)
{
	struct _Script_ReplaySystem_eventOnDeleteComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_ReplaySystem_eventOnDeleteComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDeleteComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeleteComplete *******************************************************

// ********** Begin Delegate FOnGotoTimeComplete ***************************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics
{
	struct _Script_ReplaySystem_eventOnGotoTimeComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGotoTimeComplete constinit property declarations *******************
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGotoTimeComplete constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGotoTimeComplete Property Definitions ******************************
void Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_ReplaySystem_eventOnGotoTimeComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ReplaySystem_eventOnGotoTimeComplete_Parms), &Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGotoTimeComplete Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnGotoTimeComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnGotoTimeComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::_Script_ReplaySystem_eventOnGotoTimeComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGotoTimeComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGotoTimeComplete, bool bWasSuccessful)
{
	struct _Script_ReplaySystem_eventOnGotoTimeComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_ReplaySystem_eventOnGotoTimeComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGotoTimeComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGotoTimeComplete *****************************************************

// ********** Begin Delegate FOnReplayComplete *****************************************************
struct Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayDelegates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnReplayComplete constinit property declarations *********************
// ********** End Delegate FOnReplayComplete constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ReplaySystem, nullptr, "OnReplayComplete__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplaySystem_OnReplayComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayComplete_DelegateWrapper(const FMulticastScriptDelegate& OnReplayComplete)
{
	OnReplayComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnReplayComplete *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
