// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/SteamUserAsyncActions.h"
#include "SteamUser/SteamUserTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUserAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRequestEncryptedAppTicketDelegate ************************************
struct Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestEncryptedAppTicketDelegate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestEncryptedAppTicketDelegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestEncryptedAppTicketDelegate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 213977999
void Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestEncryptedAppTicketDelegate Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestEncryptedAppTicketDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestEncryptedAppTicketDelegate **************************************

// ********** Begin Delegate FRequestStoreAuthURLDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestStoreAuthURLDelegate constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestStoreAuthURLDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestStoreAuthURLDelegate Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 459009651
void Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestStoreAuthURLDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestStoreAuthURLDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestStoreAuthURLDelegate ********************************************

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics
{
	struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 213977999
void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback)
{
	P_GET_STRUCT_REF(FEncryptedAppTicketResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Function HandleCallback *

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync 
struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics
{
	struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> DataToInclude;
		float Timeout;
		USteamCoreUserAsyncActionRequestEncryptedAppTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DataToInclude" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|User|Async" },
		{ "Comment", "/**\n\x09* Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09*\n\x09* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09* After receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Encrypted App Ticket" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEncryptedAppTicketAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEncryptedAppTicketAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEncryptedAppTicketAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestEncryptedAppTicketAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "RequestEncryptedAppTicketAsync", 	Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(uint8,Z_Param_DataToInclude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserAsyncActionRequestEncryptedAppTicket**)Z_Param__Result=USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(Z_Param_WorldContextObject,Z_Param_DataToInclude,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync 

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket;
UClass* USteamCoreUserAsyncActionRequestEncryptedAppTicket::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserAsyncActionRequestEncryptedAppTicket;
	if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserAsyncActionRequestEncryptedAppTicket"),
			Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket,
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
	return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister()
{
	return USteamCoreUserAsyncActionRequestEncryptedAppTicket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserAsyncActionRequestEncryptedAppTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserAsyncActionRequestEncryptedAppTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestEncryptedAppTicketAsync"), .Pointer = &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback, "HandleCallback" }, // 1244959968
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync, "RequestEncryptedAppTicketAsync" }, // 524012630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestEncryptedAppTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestEncryptedAppTicket, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2218069751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams = {
	&USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams)
};
void USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket()
{
	UClass* Class = USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton, Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton;
}
USteamCoreUserAsyncActionRequestEncryptedAppTicket::USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserAsyncActionRequestEncryptedAppTicket);
USteamCoreUserAsyncActionRequestEncryptedAppTicket::~USteamCoreUserAsyncActionRequestEncryptedAppTicket() {}
// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket *************************

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL Function HandleCallback *****
struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics
{
	struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 459009651
void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback)
{
	P_GET_STRUCT_REF(FStoreAuthURLResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL Function HandleCallback *******

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync 
struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics
{
	struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms
	{
		UObject* WorldContextObject;
		FString RedirectURL;
		float Timeout;
		USteamCoreUserAsyncActionRequestStoreAuthURL* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|User|Async" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Store Auth URL" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestStoreAuthURLAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestStoreAuthURLAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestStoreAuthURLAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, RedirectURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestStoreAuthURLAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "RequestStoreAuthURLAsync", 	Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserAsyncActionRequestStoreAuthURL**)Z_Param__Result=USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(Z_Param_WorldContextObject,Z_Param_RedirectURL,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync 

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL;
UClass* USteamCoreUserAsyncActionRequestStoreAuthURL::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserAsyncActionRequestStoreAuthURL;
	if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserAsyncActionRequestStoreAuthURL"),
			Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL,
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
	return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister()
{
	return USteamCoreUserAsyncActionRequestStoreAuthURL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserAsyncActionRequestStoreAuthURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserAsyncActionRequestStoreAuthURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestStoreAuthURLAsync"), .Pointer = &USteamCoreUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback, "HandleCallback" }, // 3434296931
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync, "RequestStoreAuthURLAsync" }, // 2199931828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestStoreAuthURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL Property Definitions ********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestStoreAuthURL, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2588984387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL Property Definitions **********
UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::ClassParams = {
	&USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams)
};
void USteamCoreUserAsyncActionRequestStoreAuthURL::StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL()
{
	UClass* Class = USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton, Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton;
}
USteamCoreUserAsyncActionRequestStoreAuthURL::USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserAsyncActionRequestStoreAuthURL);
USteamCoreUserAsyncActionRequestStoreAuthURL::~USteamCoreUserAsyncActionRequestStoreAuthURL() {}
// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass, TEXT("USteamCoreUserAsyncActionRequestEncryptedAppTicket"), &Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserAsyncActionRequestEncryptedAppTicket), 2841255091U) },
		{ Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass, TEXT("USteamCoreUserAsyncActionRequestStoreAuthURL"), &Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserAsyncActionRequestStoreAuthURL), 2648848637U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h__Script_SteamCore_3220210572{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
