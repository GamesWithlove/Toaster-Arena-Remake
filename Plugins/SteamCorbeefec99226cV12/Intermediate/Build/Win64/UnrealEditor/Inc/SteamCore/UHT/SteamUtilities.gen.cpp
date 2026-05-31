// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUtilities.h"
#include "FindSessionsCallbackProxy.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUtilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreVoice();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities();
STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAttributeType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamComparisonOp();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSteamMessage *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamMessage constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamMessage constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamMessage Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamMessageType, METADATA_PARAMS(0, nullptr) }; // 24989067
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamMessage Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamMessage__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message)
{
	struct _Script_SteamCore_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
	_Script_SteamCore_eventOnSteamMessage_Parms Parms;
	Parms.Type=Type;
	Parms.Message=Message;
	OnSteamMessage.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamMessage *********************************************************

// ********** Begin Delegate FOnHTTPResponse *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHTTPResponse constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHTTPResponse constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHTTPResponse Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnHTTPResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHTTPResponse Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnHTTPResponse__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnHTTPResponse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnHTTPResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response)
{
	struct _Script_SteamCore_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
	_Script_SteamCore_eventOnHTTPResponse_Parms Parms;
	Parms.Response=Response;
	OnHTTPResponse.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHTTPResponse *********************************************************

// ********** Begin Delegate FOnControllerChangedCallback ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnControllerChangedCallback constinit property declarations **********
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnControllerChangedCallback constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnControllerChangedCallback Property Definitions *********************
void Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnControllerChangedCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnControllerChangedCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnControllerChangedCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnControllerChangedCallback Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnControllerChangedCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnControllerChangedCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnControllerChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId)
{
	struct _Script_SteamCore_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
	_Script_SteamCore_eventOnControllerChangedCallback_Parms Parms;
	Parms.bIsConnected=bIsConnected ? true : false;
	Parms.UserId=UserId;
	OnControllerChangedCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnControllerChangedCallback ********************************************

// ********** Begin Class USteamCoreVoice Function AddAudioBuffer **********************************
struct Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics
{
	struct SteamCoreVoice_eventAddAudioBuffer_Parms
	{
		TArray<uint8> Buffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreVoice" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAudioBuffer constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAudioBuffer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAudioBuffer Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreVoice_eventAddAudioBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers) < 2048);
// ********** End Function AddAudioBuffer Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "AddAudioBuffer", 	Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::SteamCoreVoice_eventAddAudioBuffer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::SteamCoreVoice_eventAddAudioBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreVoice::execAddAudioBuffer)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAudioBuffer(Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class USteamCoreVoice Function AddAudioBuffer ************************************

// ********** Begin Class USteamCoreVoice Function ConstructSteamCoreVoice *************************
struct Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics
{
	struct SteamCoreVoice_eventConstructSteamCoreVoice_Parms
	{
		int32 AudioSampleRate;
		USteamCoreVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CPP_Default_AudioSampleRate", "24000" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructSteamCoreVoice constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructSteamCoreVoice constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructSteamCoreVoice Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, AudioSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, ReturnValue), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers) < 2048);
// ********** End Function ConstructSteamCoreVoice Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "ConstructSteamCoreVoice", 	Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::SteamCoreVoice_eventConstructSteamCoreVoice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::SteamCoreVoice_eventConstructSteamCoreVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreVoice::execConstructSteamCoreVoice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AudioSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreVoice**)Z_Param__Result=USteamCoreVoice::ConstructSteamCoreVoice(Z_Param_AudioSampleRate);
	P_NATIVE_END;
}
// ********** End Class USteamCoreVoice Function ConstructSteamCoreVoice ***************************

// ********** Begin Class USteamCoreVoice Function DestroySteamCoreVoice ***************************
struct Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics
{
	struct SteamCoreVoice_eventDestroySteamCoreVoice_Parms
	{
		USteamCoreVoice* OBJ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroySteamCoreVoice constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OBJ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroySteamCoreVoice constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroySteamCoreVoice Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_OBJ = { "OBJ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreVoice_eventDestroySteamCoreVoice_Parms, OBJ), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_OBJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers) < 2048);
// ********** End Function DestroySteamCoreVoice Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "DestroySteamCoreVoice", 	Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::SteamCoreVoice_eventDestroySteamCoreVoice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::SteamCoreVoice_eventDestroySteamCoreVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreVoice::execDestroySteamCoreVoice)
{
	P_GET_OBJECT(USteamCoreVoice,Z_Param_OBJ);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreVoice::DestroySteamCoreVoice(Z_Param_OBJ);
	P_NATIVE_END;
}
// ********** End Class USteamCoreVoice Function DestroySteamCoreVoice *****************************

// ********** Begin Class USteamCoreVoice **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreVoice;
UClass* USteamCoreVoice::GetPrivateStaticClass()
{
	using TClass = USteamCoreVoice;
	if (!Z_Registration_Info_UClass_USteamCoreVoice.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreVoice"),
			Z_Registration_Info_UClass_USteamCoreVoice.InnerSingleton,
			StaticRegisterNativesUSteamCoreVoice,
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
	return Z_Registration_Info_UClass_USteamCoreVoice.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister()
{
	return USteamCoreVoice::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreVoice constinit property declarations **************************
// ********** End Class USteamCoreVoice constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAudioBuffer"), .Pointer = &USteamCoreVoice::execAddAudioBuffer },
		{ .NameUTF8 = UTF8TEXT("ConstructSteamCoreVoice"), .Pointer = &USteamCoreVoice::execConstructSteamCoreVoice },
		{ .NameUTF8 = UTF8TEXT("DestroySteamCoreVoice"), .Pointer = &USteamCoreVoice::execDestroySteamCoreVoice },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer, "AddAudioBuffer" }, // 1987679158
		{ &Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice, "ConstructSteamCoreVoice" }, // 2725129632
		{ &Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice, "DestroySteamCoreVoice" }, // 2989868525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreVoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreVoice_Statics
UObject* (*const Z_Construct_UClass_USteamCoreVoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreVoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams = {
	&USteamCoreVoice::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams)
};
void USteamCoreVoice::StaticRegisterNativesUSteamCoreVoice()
{
	UClass* Class = USteamCoreVoice::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreVoice_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreVoice()
{
	if (!Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton, Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreVoice);
USteamCoreVoice::~USteamCoreVoice() {}
// ********** End Class USteamCoreVoice ************************************************************

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange Function HandleCallback ***
struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics
{
	struct SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms
	{
		bool bIsConnected;
		int32 PlatformUserId;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
void Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, PlatformUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAsyncActionListenForControllerChange::execHandleCallback)
{
	P_GET_UBOOL(Z_Param_bIsConnected);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlatformUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_bIsConnected,Z_Param_PlatformUserId,Z_Param_UserId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAsyncActionListenForControllerChange Function HandleCallback *****

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange Function ListenForControllerChange 
struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics
{
	struct SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms
	{
		UObject* WorldContextObject;
		USteamCoreAsyncActionListenForControllerChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForControllerChange constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForControllerChange constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForControllerChange Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers) < 2048);
// ********** End Function ListenForControllerChange Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "ListenForControllerChange", 	Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAsyncActionListenForControllerChange**)Z_Param__Result=USteamCoreAsyncActionListenForControllerChange::ListenForControllerChange(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAsyncActionListenForControllerChange Function ListenForControllerChange 

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange;
UClass* USteamCoreAsyncActionListenForControllerChange::GetPrivateStaticClass()
{
	using TClass = USteamCoreAsyncActionListenForControllerChange;
	if (!Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAsyncActionListenForControllerChange"),
			Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.InnerSingleton,
			StaticRegisterNativesUSteamCoreAsyncActionListenForControllerChange,
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
	return Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister()
{
	return USteamCoreAsyncActionListenForControllerChange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAsyncActionListenForControllerChange\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAsyncActionListenForControllerChange\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreAsyncActionListenForControllerChange constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreAsyncActionListenForControllerChange::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("ListenForControllerChange"), .Pointer = &USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback, "HandleCallback" }, // 3256692990
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange, "ListenForControllerChange" }, // 3776056757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncActionListenForControllerChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange Property Definitions ******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreAsyncActionListenForControllerChange, OnControllerChanged), Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerChanged_MetaData), NewProp_OnControllerChanged_MetaData) }; // 1282623731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreAsyncActionListenForControllerChange Property Definitions ********
UObject* (*const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::ClassParams = {
	&USteamCoreAsyncActionListenForControllerChange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams)
};
void USteamCoreAsyncActionListenForControllerChange::StaticRegisterNativesUSteamCoreAsyncActionListenForControllerChange()
{
	UClass* Class = USteamCoreAsyncActionListenForControllerChange::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange()
{
	if (!Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton, Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton;
}
USteamCoreAsyncActionListenForControllerChange::USteamCoreAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAsyncActionListenForControllerChange);
USteamCoreAsyncActionListenForControllerChange::~USteamCoreAsyncActionListenForControllerChange() {}
// ********** End Class USteamCoreAsyncActionListenForControllerChange *****************************

// ********** Begin Enum ESteamCoreValid ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreValid;
static UEnum* ESteamCoreValid_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreValid, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreValid"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreValid>()
{
	return ESteamCoreValid_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NotValid.Name", "ESteamCoreValid::NotValid" },
		{ "Valid.Name", "ESteamCoreValid::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreValid::Valid", (int64)ESteamCoreValid::Valid },
		{ "ESteamCoreValid::NotValid", (int64)ESteamCoreValid::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreValid",
	"ESteamCoreValid",
	Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton;
}
// ********** End Enum ESteamCoreValid *************************************************************

// ********** Begin Enum ESteamCoreIdentical *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreIdentical;
static UEnum* ESteamCoreIdentical_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreIdentical"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreIdentical>()
{
	return ESteamCoreIdentical_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Identical.Name", "ESteamCoreIdentical::Identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NotIdentical.Name", "ESteamCoreIdentical::NotIdentical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreIdentical::Identical", (int64)ESteamCoreIdentical::Identical },
		{ "ESteamCoreIdentical::NotIdentical", (int64)ESteamCoreIdentical::NotIdentical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreIdentical",
	"ESteamCoreIdentical",
	Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton;
}
// ********** End Enum ESteamCoreIdentical *********************************************************

// ********** Begin Class USteamUtilities Function BP_BytesToString ********************************
struct Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics
{
	struct SteamUtilities_eventBP_BytesToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Bytes to String" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_BytesToString constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_BytesToString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_BytesToString Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers) < 2048);
// ********** End Function BP_BytesToString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_BytesToString", 	Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::SteamUtilities_eventBP_BytesToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::SteamUtilities_eventBP_BytesToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BP_BytesToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBP_BytesToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BP_BytesToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BP_BytesToString **********************************

// ********** Begin Class USteamUtilities Function BP_StringToBytes ********************************
struct Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics
{
	struct SteamUtilities_eventBP_StringToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "String to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_StringToBytes constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_StringToBytes constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_StringToBytes Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers) < 2048);
// ********** End Function BP_StringToBytes Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_StringToBytes", 	Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::SteamUtilities_eventBP_StringToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::SteamUtilities_eventBP_StringToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BP_StringToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBP_StringToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::BP_StringToBytes(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BP_StringToBytes **********************************

// ********** Begin Class USteamUtilities Function BreakInventoryUpdateHandle **********************
struct Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics
{
	struct SteamUtilities_eventBreakInventoryUpdateHandle_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakInventoryUpdateHandle constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakInventoryUpdateHandle constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakInventoryUpdateHandle Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers) < 2048);
// ********** End Function BreakInventoryUpdateHandle Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakInventoryUpdateHandle", 	Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::SteamUtilities_eventBreakInventoryUpdateHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::SteamUtilities_eventBreakInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakInventoryUpdateHandle)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakInventoryUpdateHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakInventoryUpdateHandle ************************

// ********** Begin Class USteamUtilities Function BreakPublishedFileID ****************************
struct Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics
{
	struct SteamUtilities_eventBreakPublishedFileID_Parms
	{
		FPublishedFileID FileID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakPublishedFileID constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakPublishedFileID constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakPublishedFileID Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, FileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers) < 2048);
// ********** End Function BreakPublishedFileID Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakPublishedFileID", 	Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::SteamUtilities_eventBreakPublishedFileID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::SteamUtilities_eventBreakPublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakPublishedFileID)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_FileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakPublishedFileID(Z_Param_FileID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakPublishedFileID ******************************

// ********** Begin Class USteamUtilities Function BreakSteamGameID ********************************
struct Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics
{
	struct SteamUtilities_eventBreakSteamGameID_Parms
	{
		FSteamGameID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakSteamGameID constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakSteamGameID constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakSteamGameID Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 3781658651
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers) < 2048);
// ********** End Function BreakSteamGameID Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamGameID", 	Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::SteamUtilities_eventBreakSteamGameID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::SteamUtilities_eventBreakSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakSteamGameID)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakSteamGameID(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakSteamGameID **********************************

// ********** Begin Class USteamUtilities Function BreakSteamID ************************************
struct Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics
{
	struct SteamUtilities_eventBreakSteamID_Parms
	{
		FSteamID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakSteamID constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakSteamID constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakSteamID Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers) < 2048);
// ********** End Function BreakSteamID Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamID", 	Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::SteamUtilities_eventBreakSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::SteamUtilities_eventBreakSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakSteamID)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakSteamID(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakSteamID **************************************

// ********** Begin Class USteamUtilities Function BreakTicketHandle *******************************
struct Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics
{
	struct SteamUtilities_eventBreakTicketHandle_Parms
	{
		FSteamTicketHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakTicketHandle constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakTicketHandle constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakTicketHandle Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 1701472596
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers) < 2048);
// ********** End Function BreakTicketHandle Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakTicketHandle", 	Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::SteamUtilities_eventBreakTicketHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::SteamUtilities_eventBreakTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakTicketHandle)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakTicketHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakTicketHandle *********************************

// ********** Begin Class USteamUtilities Function BreakUGCHandle **********************************
struct Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics
{
	struct SteamUtilities_eventBreakUGCHandle_Parms
	{
		FSteamUGCHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakUGCHandle constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakUGCHandle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakUGCHandle Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3346822915
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers) < 2048);
// ********** End Function BreakUGCHandle Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakUGCHandle", 	Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::SteamUtilities_eventBreakUGCHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::SteamUtilities_eventBreakUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakUGCHandle)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakUGCHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function BreakUGCHandle ************************************

// ********** Begin Class USteamUtilities Function ConstructServerFilter ***************************
struct Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics
{
	struct SteamUtilities_eventConstructServerFilter_Parms
	{
		UObject* WorldContextObject;
		UServerFilter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructServerFilter constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructServerFilter constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructServerFilter Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers) < 2048);
// ********** End Function ConstructServerFilter Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ConstructServerFilter", 	Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::SteamUtilities_eventConstructServerFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::SteamUtilities_eventConstructServerFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ConstructServerFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execConstructServerFilter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UServerFilter**)Z_Param__Result=USteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function ConstructServerFilter *****************************

// ********** Begin Class USteamUtilities Function EncryptString ***********************************
struct Z_Construct_UFunction_USteamUtilities_EncryptString_Statics
{
	struct SteamUtilities_eventEncryptString_Parms
	{
		FString String;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a hashed/encrypted version of the string\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a hashed/encrypted version of the string" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EncryptString constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EncryptString constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EncryptString Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers) < 2048);
// ********** End Function EncryptString Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "EncryptString", 	Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::SteamUtilities_eventEncryptString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::SteamUtilities_eventEncryptString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_EncryptString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEncryptString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::EncryptString(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function EncryptString *************************************

// ********** Begin Class USteamUtilities Function Equal *******************************************
struct Z_Construct_UFunction_USteamUtilities_Equal_Statics
{
	struct SteamUtilities_eventEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Equal constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Equal constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Equal Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
void Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers) < 2048);
// ********** End Function Equal Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal", 	Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Statics::SteamUtilities_eventEqual_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Statics::SteamUtilities_eventEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::Equal(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function Equal *********************************************

// ********** Begin Class USteamUtilities Function Equal_Exec **************************************
struct Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics
{
	struct SteamUtilities_eventEqual_Exec_Parms
	{
		FSteamID A;
		FSteamID b;
		ESteamCoreIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Equal_Exec constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_b;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Equal_Exec constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Equal_Exec Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b_MetaData), NewProp_b_MetaData) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(0, nullptr) }; // 1789098645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers) < 2048);
// ********** End Function Equal_Exec Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal_Exec", 	Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::SteamUtilities_eventEqual_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::SteamUtilities_eventEqual_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_Equal_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEqual_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_b);
	P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::Equal_Exec(Z_Param_A,Z_Param_b,(ESteamCoreIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function Equal_Exec ****************************************

// ********** Begin Class USteamUtilities Function FromUnixTimestamp *******************************
struct Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics
{
	struct SteamUtilities_eventFromUnixTimestamp_Parms
	{
		FString Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FromUnixTimestamp constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FromUnixTimestamp constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FromUnixTimestamp Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers) < 2048);
// ********** End Function FromUnixTimestamp Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "FromUnixTimestamp", 	Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::SteamUtilities_eventFromUnixTimestamp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::SteamUtilities_eventFromUnixTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execFromUnixTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USteamUtilities::FromUnixTimestamp(Z_Param_Timestamp);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function FromUnixTimestamp *********************************

// ********** Begin Class USteamUtilities Function GetAccountType **********************************
struct Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics
{
	struct SteamUtilities_eventGetAccountType_Parms
	{
		FSteamID SteamID;
		ESteamAccountType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAccountType constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAccountType constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAccountType Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAccountType, METADATA_PARAMS(0, nullptr) }; // 4094613392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers) < 2048);
// ********** End Function GetAccountType Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetAccountType", 	Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::SteamUtilities_eventGetAccountType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::SteamUtilities_eventGetAccountType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetAccountType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetAccountType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAccountType*)Z_Param__Result=USteamUtilities::GetAccountType(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetAccountType ************************************

// ********** Begin Class USteamUtilities Function GetGameEngineInitialized ************************
struct Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics
{
	struct SteamUtilities_eventGetGameEngineInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGameEngineInitialized constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGameEngineInitialized constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGameEngineInitialized Property Definitions *************************
void Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetGameEngineInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetGameEngineInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers) < 2048);
// ********** End Function GetGameEngineInitialized Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetGameEngineInitialized", 	Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::SteamUtilities_eventGetGameEngineInitialized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::SteamUtilities_eventGetGameEngineInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetGameEngineInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetGameEngineInitialized();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetGameEngineInitialized **************************

// ********** Begin Class USteamUtilities Function GetHostPingData *********************************
struct Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics
{
	struct SteamUtilities_eventGetHostPingData_Parms
	{
		FHostPingData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the P2P relay ping information for the current machine. This information can be\n\x09 * serialized over the network and used to calculate the ping data between a client and a host.\n\x09 *\n\x09 * @return relay information blob stored as a string for relaying over the network.\n\x09 *         If an error occurred, the return is an empty string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the P2P relay ping information for the current machine. This information can be\nserialized over the network and used to calculate the ping data between a client and a host.\n\n@return relay information blob stored as a string for relaying over the network.\n        If an error occurred, the return is an empty string." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHostPingData constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHostPingData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHostPingData Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetHostPingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(0, nullptr) }; // 2748338699
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers) < 2048);
// ********** End Function GetHostPingData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetHostPingData", 	Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::SteamUtilities_eventGetHostPingData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::SteamUtilities_eventGetHostPingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetHostPingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetHostPingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHostPingData*)Z_Param__Result=USteamUtilities::GetHostPingData();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetHostPingData ***********************************

// ********** Begin Class USteamUtilities Function GetInteger **************************************
struct Z_Construct_UFunction_USteamUtilities_GetInteger_Statics
{
	struct SteamUtilities_eventGetInteger_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Function for getting a Integer attribute from session settings\n\x09* the function will return false if the string was not found or is not a integer\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a Integer attribute from session settings\n* the function will return false if the string was not found or is not a integer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteger constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteger constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteger Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetInteger_Parms), &Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers) < 2048);
// ********** End Function GetInteger Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetInteger", 	Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::SteamUtilities_eventGetInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::SteamUtilities_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetInteger)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetInteger(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetInteger ****************************************

// ********** Begin Class USteamUtilities Function GetPingFromHostData *****************************
struct Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics
{
	struct SteamUtilities_eventGetPingFromHostData_Parms
	{
		FHostPingData Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\x09 *\n\x09 * @param HostPingStr The relay information blob we got from the host. This information\n\x09 *                    should be directly serialized over the network and not tampered with.\n\x09 *\n\x09 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\n@param HostPingStr The relay information blob we got from the host. This information\n                   should be directly serialized over the network and not tampered with.\n\n@return The ping value to the given host if it can be calculated, otherwise -1 on error." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPingFromHostData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPingFromHostData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPingFromHostData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, Data), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2748338699
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers) < 2048);
// ********** End Function GetPingFromHostData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPingFromHostData", 	Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::SteamUtilities_eventGetPingFromHostData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::SteamUtilities_eventGetPingFromHostData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetPingFromHostData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetPingFromHostData)
{
	P_GET_STRUCT_REF(FHostPingData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamUtilities::GetPingFromHostData(Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetPingFromHostData *******************************

// ********** Begin Class USteamUtilities Function GetPublicIp *************************************
struct Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics
{
	struct SteamUtilities_eventGetPublicIp_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Try getting our public ip\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try getting our public ip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublicIp constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublicIp constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublicIp Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPublicIp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2625092957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers) < 2048);
// ********** End Function GetPublicIp Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPublicIp", 	Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::SteamUtilities_eventGetPublicIp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::SteamUtilities_eventGetPublicIp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetPublicIp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetPublicIp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::GetPublicIp(FOnHTTPResponse(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetPublicIp ***************************************

// ********** Begin Class USteamUtilities Function GetSteamIdFromPlayerState ***********************
struct Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics
{
	struct SteamUtilities_eventGetSteamIdFromPlayerState_Parms
	{
		APlayerState* PlayerState;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamIdFromPlayerState constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamIdFromPlayerState constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamIdFromPlayerState Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers) < 2048);
// ********** End Function GetSteamIdFromPlayerState Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetSteamIdFromPlayerState", 	Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::SteamUtilities_eventGetSteamIdFromPlayerState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::SteamUtilities_eventGetSteamIdFromPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetSteamIdFromPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamUtilities::GetSteamIdFromPlayerState(Z_Param_PlayerState);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetSteamIdFromPlayerState *************************

// ********** Begin Class USteamUtilities Function GetString ***************************************
struct Z_Construct_UFunction_USteamUtilities_GetString_Statics
{
	struct SteamUtilities_eventGetString_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Function for getting a String attribute from session settings\n\x09* the function will return false if the string was not found or is not a string\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a String attribute from session settings\n* the function will return false if the string was not found or is not a string" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetString constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetString constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetString Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetString_Parms), &Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers) < 2048);
// ********** End Function GetString Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetString", 	Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetString_Statics::SteamUtilities_eventGetString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetString_Statics::SteamUtilities_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetString)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetString(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetString *****************************************

// ********** Begin Class USteamUtilities Function GetType *****************************************
struct Z_Construct_UFunction_USteamUtilities_GetType_Statics
{
	struct SteamUtilities_eventGetType_Parms
	{
		FSteamSessionSetting Settings;
		ESteamAttributeType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAttributeType, METADATA_PARAMS(0, nullptr) }; // 2298858195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetType", 	Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_GetType_Statics::SteamUtilities_eventGetType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetType_Statics::SteamUtilities_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetType)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAttributeType*)Z_Param__Result=USteamUtilities::GetType(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function GetType *******************************************

// ********** Begin Class USteamUtilities Function IsGameIDValid ***********************************
struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics
{
	struct SteamUtilities_eventIsGameIDValid_Parms
	{
		FSteamGameID GameID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsGameIDValid constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGameIDValid constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGameIDValid Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
void Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers) < 2048);
// ********** End Function IsGameIDValid Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid", 	Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::SteamUtilities_eventIsGameIDValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::SteamUtilities_eventIsGameIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsGameIDValid(Z_Param_GameID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsGameIDValid *************************************

// ********** Begin Class USteamUtilities Function IsGameIDValid_Exec ******************************
struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsGameIDValid_Exec_Parms
	{
		FSteamGameID GameID;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsGameIDValid_Exec constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGameIDValid_Exec constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGameIDValid_Exec Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsGameIDValid_Exec Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::SteamUtilities_eventIsGameIDValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::SteamUtilities_eventIsGameIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid_Exec)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsGameIDValid_Exec(Z_Param_GameID,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsGameIDValid_Exec ********************************

// ********** Begin Class USteamUtilities Function IsLobby *****************************************
struct Z_Construct_UFunction_USteamUtilities_IsLobby_Statics
{
	struct SteamUtilities_eventIsLobby_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLobby constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLobby constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLobby Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
void Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers) < 2048);
// ********** End Function IsLobby Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLobby", 	Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::SteamUtilities_eventIsLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::SteamUtilities_eventIsLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsLobby(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsLobby *******************************************

// ********** Begin Class USteamUtilities Function IsPublishedFileIDValid **************************
struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics
{
	struct SteamUtilities_eventIsPublishedFileIDValid_Parms
	{
		FPublishedFileID PublishedFileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPublishedFileIDValid constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPublishedFileIDValid constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPublishedFileIDValid Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Parms, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsPublishedFileIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsPublishedFileIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers) < 2048);
// ********** End Function IsPublishedFileIDValid Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid", 	Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::SteamUtilities_eventIsPublishedFileIDValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::SteamUtilities_eventIsPublishedFileIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsPublishedFileIDValid(Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsPublishedFileIDValid ****************************

// ********** Begin Class USteamUtilities Function IsPublishedFileIDValid_Exec *********************
struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms
	{
		FPublishedFileID Handle;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPublishedFileIDValid_Exec constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPublishedFileIDValid_Exec constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPublishedFileIDValid_Exec Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2947869779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsPublishedFileIDValid_Exec Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsPublishedFileIDValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsPublishedFileIDValid_Exec ***********************

// ********** Begin Class USteamUtilities Function IsRecalculatingPing *****************************
struct Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics
{
	struct SteamUtilities_eventIsRecalculatingPing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* An informative member that allows us to check if we are recalculating our ping\n\x09* information over the Valve network. Data is additively modified during recalculation\n\x09* such that we do not need to block on this function returning false before using\n\x09* ping data.\n\x09*\n\x09* @return true if we're recalculating our ping within the Valve relay network.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An informative member that allows us to check if we are recalculating our ping\ninformation over the Valve network. Data is additively modified during recalculation\nsuch that we do not need to block on this function returning false before using\nping data.\n\n@return true if we're recalculating our ping within the Valve relay network." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsRecalculatingPing constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRecalculatingPing constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRecalculatingPing Property Definitions ******************************
void Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers) < 2048);
// ********** End Function IsRecalculatingPing Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRecalculatingPing", 	Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::SteamUtilities_eventIsRecalculatingPing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::SteamUtilities_eventIsRecalculatingPing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsRecalculatingPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsRecalculatingPing();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsRecalculatingPing *******************************

// ********** Begin Class USteamUtilities Function IsSteamAvailable ********************************
struct Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics
{
	struct SteamUtilities_eventIsSteamAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamAvailable constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamAvailable constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamAvailable Property Definitions *********************************
void Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers) < 2048);
// ********** End Function IsSteamAvailable Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamAvailable", 	Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::SteamUtilities_eventIsSteamAvailable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::SteamUtilities_eventIsSteamAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamAvailable();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamAvailable **********************************

// ********** Begin Class USteamUtilities Function IsSteamIDValid_Exec *****************************
struct Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamIDValid_Exec_Parms
	{
		FSteamID SteamID;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamIDValid_Exec constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamIDValid_Exec constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamIDValid_Exec Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsSteamIDValid_Exec Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamIDValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::SteamUtilities_eventIsSteamIDValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::SteamUtilities_eventIsSteamIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamIDValid_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamIDValid_Exec(Z_Param_SteamID,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamIDValid_Exec *******************************

// ********** Begin Class USteamUtilities Function IsSteamInventoryUpdateHandleValid ***************
struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
{
	struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamInventoryUpdateHandleValid constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamInventoryUpdateHandleValid constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamInventoryUpdateHandleValid Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 344035006
void Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers) < 2048);
// ********** End Function IsSteamInventoryUpdateHandleValid Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", 	Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamInventoryUpdateHandleValid *****************

// ********** Begin Class USteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec **********
struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamInventoryUpdateHandleValid_Exec constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamInventoryUpdateHandleValid_Exec constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamInventoryUpdateHandleValid_Exec Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 344035006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsSteamInventoryUpdateHandleValid_Exec Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec ************

// ********** Begin Class USteamUtilities Function IsSteamServerInitialized ************************
struct Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics
{
	struct SteamUtilities_eventIsSteamServerInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamServerInitialized constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamServerInitialized constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamServerInitialized Property Definitions *************************
void Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamServerInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamServerInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers) < 2048);
// ********** End Function IsSteamServerInitialized Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamServerInitialized", 	Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::SteamUtilities_eventIsSteamServerInitialized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::SteamUtilities_eventIsSteamServerInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamServerInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamServerInitialized();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamServerInitialized **************************

// ********** Begin Class USteamUtilities Function IsSteamTicketHandleValid ************************
struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics
{
	struct SteamUtilities_eventIsSteamTicketHandleValid_Parms
	{
		FSteamTicketHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamTicketHandleValid constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamTicketHandleValid constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamTicketHandleValid Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1701472596
void Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers) < 2048);
// ********** End Function IsSteamTicketHandleValid Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid", 	Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamTicketHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamTicketHandleValid **************************

// ********** Begin Class USteamUtilities Function IsSteamTicketHandleValid_Exec *******************
struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
	{
		FSteamTicketHandle Handle;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamTicketHandleValid_Exec constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamTicketHandleValid_Exec constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamTicketHandleValid_Exec Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1701472596
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsSteamTicketHandleValid_Exec Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid_Exec)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamTicketHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsSteamTicketHandleValid_Exec *********************

// ********** Begin Class USteamUtilities Function IsUGCHandleValid ********************************
struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics
{
	struct SteamUtilities_eventIsUGCHandleValid_Parms
	{
		FSteamUGCHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsUGCHandleValid constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUGCHandleValid constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUGCHandleValid Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3346822915
void Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers) < 2048);
// ********** End Function IsUGCHandleValid Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid", 	Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::SteamUtilities_eventIsUGCHandleValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::SteamUtilities_eventIsUGCHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsUGCHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsUGCHandleValid **********************************

// ********** Begin Class USteamUtilities Function IsUGCHandleValid_Exec ***************************
struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsUGCHandleValid_Exec_Parms
	{
		FSteamUGCHandle Handle;
		ESteamCoreValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsUGCHandleValid_Exec constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUGCHandleValid_Exec constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUGCHandleValid_Exec Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3346822915
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(0, nullptr) }; // 3238081293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers) < 2048);
// ********** End Function IsUGCHandleValid_Exec Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid_Exec", 	Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::SteamUtilities_eventIsUGCHandleValid_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::SteamUtilities_eventIsUGCHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid_Exec)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsUGCHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsUGCHandleValid_Exec *****************************

// ********** Begin Class USteamUtilities Function IsUsingP2PRelays ********************************
struct Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics
{
	struct SteamUtilities_eventIsUsingP2PRelays_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns if this application is set up to use the Steam P2P Relay Network\n\x09 * for communication.\n\x09 *\n\x09 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\x09 *\n\x09 * @return true if relays are enabled for P2P connections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if this application is set up to use the Steam P2P Relay Network\nfor communication.\n\nUses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\n@return true if relays are enabled for P2P connections." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsUsingP2PRelays constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUsingP2PRelays constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUsingP2PRelays Property Definitions *********************************
void Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers) < 2048);
// ********** End Function IsUsingP2PRelays Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUsingP2PRelays", 	Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::SteamUtilities_eventIsUsingP2PRelays_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::SteamUtilities_eventIsUsingP2PRelays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUsingP2PRelays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsUsingP2PRelays();
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsUsingP2PRelays **********************************

// ********** Begin Class USteamUtilities Function IsValid *****************************************
struct Z_Construct_UFunction_USteamUtilities_IsValid_Statics
{
	struct SteamUtilities_eventIsValid_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValid constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValid constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValid Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsValid_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
void Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers) < 2048);
// ********** End Function IsValid Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsValid", 	Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::SteamUtilities_eventIsValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::SteamUtilities_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsValid)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsValid(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function IsValid *******************************************

// ********** Begin Class USteamUtilities Function K2_HexToBytes ***********************************
struct Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics
{
	struct SteamUtilities_eventK2_HexToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_HexToBytes constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_HexToBytes constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_HexToBytes Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers) < 2048);
// ********** End Function K2_HexToBytes Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToBytes", 	Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::SteamUtilities_eventK2_HexToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::SteamUtilities_eventK2_HexToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_HexToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::K2_HexToBytes(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function K2_HexToBytes *************************************

// ********** Begin Class USteamUtilities Function K2_HexToString **********************************
struct Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics
{
	struct SteamUtilities_eventK2_HexToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to String" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_HexToString constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_HexToString constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_HexToString Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers) < 2048);
// ********** End Function K2_HexToString Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToString", 	Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::SteamUtilities_eventK2_HexToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::SteamUtilities_eventK2_HexToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_HexToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::K2_HexToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function K2_HexToString ************************************

// ********** Begin Class USteamUtilities Function K2_IsPlayerInSession ****************************
struct Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics
{
	struct SteamUtilities_eventK2_IsPlayerInSession_Parms
	{
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine if the player is registered in the specified session\n\x09 *\n\x09 * @return true if the player is registered in the session\n\x09 */" },
#endif
		{ "DisplayName", "Is Player In Session" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if the player is registered in the specified session\n\n@return true if the player is registered in the session" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function K2_IsPlayerInSession constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_IsPlayerInSession constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_IsPlayerInSession Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_IsPlayerInSession_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventK2_IsPlayerInSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventK2_IsPlayerInSession_Parms), &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers) < 2048);
// ********** End Function K2_IsPlayerInSession Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_IsPlayerInSession", 	Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::SteamUtilities_eventK2_IsPlayerInSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::SteamUtilities_eventK2_IsPlayerInSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_IsPlayerInSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::K2_IsPlayerInSession(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function K2_IsPlayerInSession ******************************

// ********** Begin Class USteamUtilities Function ListenForSteamMessages **************************
struct Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics
{
	struct SteamUtilities_eventListenForSteamMessages_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForSteamMessages constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForSteamMessages constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForSteamMessages Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventListenForSteamMessages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 913012511
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers) < 2048);
// ********** End Function ListenForSteamMessages Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSteamMessages", 	Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::SteamUtilities_eventListenForSteamMessages_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::SteamUtilities_eventListenForSteamMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execListenForSteamMessages)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function ListenForSteamMessages ****************************

// ********** Begin Class USteamUtilities Function MakeInteger *************************************
struct Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics
{
	struct SteamUtilities_eventMakeInteger_Parms
	{
		int32 Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInteger constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInteger constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInteger Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers) < 2048);
// ********** End Function MakeInteger Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInteger", 	Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::SteamUtilities_eventMakeInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::SteamUtilities_eventMakeInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeInteger ***************************************

// ********** Begin Class USteamUtilities Function MakeInventoryUpdateHandle ***********************
struct Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics
{
	struct SteamUtilities_eventMakeInventoryUpdateHandle_Parms
	{
		FString Value;
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeInventoryUpdateHandle constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeInventoryUpdateHandle constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeInventoryUpdateHandle Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 344035006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers) < 2048);
// ********** End Function MakeInventoryUpdateHandle Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInventoryUpdateHandle", 	Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::SteamUtilities_eventMakeInventoryUpdateHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::SteamUtilities_eventMakeInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeInventoryUpdateHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamUtilities::MakeInventoryUpdateHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeInventoryUpdateHandle *************************

// ********** Begin Class USteamUtilities Function MakePublishedFileID *****************************
struct Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics
{
	struct SteamUtilities_eventMakePublishedFileID_Parms
	{
		FString Value;
		FPublishedFileID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakePublishedFileID constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakePublishedFileID constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakePublishedFileID Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers) < 2048);
// ********** End Function MakePublishedFileID Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakePublishedFileID", 	Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::SteamUtilities_eventMakePublishedFileID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::SteamUtilities_eventMakePublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakePublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakePublishedFileID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPublishedFileID*)Z_Param__Result=USteamUtilities::MakePublishedFileID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakePublishedFileID *******************************

// ********** Begin Class USteamUtilities Function MakeSearchInteger *******************************
struct Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics
{
	struct SteamUtilities_eventMakeSearchInteger_Parms
	{
		ESteamComparisonOp ComparisonOperator;
		int32 Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOperator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSearchInteger constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonOperator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSearchInteger constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSearchInteger Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator = { "ComparisonOperator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ComparisonOperator), Z_Construct_UEnum_SteamCore_ESteamComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOperator_MetaData), NewProp_ComparisonOperator_MetaData) }; // 601356492
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 3224929249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers) < 2048);
// ********** End Function MakeSearchInteger Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchInteger", 	Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::SteamUtilities_eventMakeSearchInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::SteamUtilities_eventMakeSearchInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSearchInteger)
{
	P_GET_ENUM(ESteamComparisonOp,Z_Param_ComparisonOperator);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchInteger(ESteamComparisonOp(Z_Param_ComparisonOperator),Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeSearchInteger *********************************

// ********** Begin Class USteamUtilities Function MakeSearchString ********************************
struct Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics
{
	struct SteamUtilities_eventMakeSearchString_Parms
	{
		FString Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSearchString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSearchString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSearchString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 3224929249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers) < 2048);
// ********** End Function MakeSearchString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchString", 	Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::SteamUtilities_eventMakeSearchString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::SteamUtilities_eventMakeSearchString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSearchString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchString(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeSearchString **********************************

// ********** Begin Class USteamUtilities Function MakeSteamGameID *********************************
struct Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics
{
	struct SteamUtilities_eventMakeSteamGameID_Parms
	{
		FString Value;
		FSteamGameID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSteamGameID constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSteamGameID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSteamGameID Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 3781658651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers) < 2048);
// ********** End Function MakeSteamGameID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamGameID", 	Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::SteamUtilities_eventMakeSteamGameID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::SteamUtilities_eventMakeSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSteamGameID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamGameID*)Z_Param__Result=USteamUtilities::MakeSteamGameID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeSteamGameID ***********************************

// ********** Begin Class USteamUtilities Function MakeSteamID *************************************
struct Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics
{
	struct SteamUtilities_eventMakeSteamID_Parms
	{
		FString Value;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSteamID constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSteamID constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSteamID Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers) < 2048);
// ********** End Function MakeSteamID Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamID", 	Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::SteamUtilities_eventMakeSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::SteamUtilities_eventMakeSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSteamID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamUtilities::MakeSteamID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeSteamID ***************************************

// ********** Begin Class USteamUtilities Function MakeString **************************************
struct Z_Construct_UFunction_USteamUtilities_MakeString_Statics
{
	struct SteamUtilities_eventMakeString_Parms
	{
		FString Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeString constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeString constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeString Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers) < 2048);
// ********** End Function MakeString Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeString", 	Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::SteamUtilities_eventMakeString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::SteamUtilities_eventMakeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeString(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeString ****************************************

// ********** Begin Class USteamUtilities Function MakeTicketHandle ********************************
struct Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics
{
	struct SteamUtilities_eventMakeTicketHandle_Parms
	{
		FString Value;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeTicketHandle constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeTicketHandle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeTicketHandle Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 1701472596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers) < 2048);
// ********** End Function MakeTicketHandle Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeTicketHandle", 	Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::SteamUtilities_eventMakeTicketHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::SteamUtilities_eventMakeTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeTicketHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=USteamUtilities::MakeTicketHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeTicketHandle **********************************

// ********** Begin Class USteamUtilities Function MakeUGCHandle ***********************************
struct Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics
{
	struct SteamUtilities_eventMakeUGCHandle_Parms
	{
		FString Value;
		FSteamUGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeUGCHandle constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeUGCHandle constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeUGCHandle Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3346822915
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers) < 2048);
// ********** End Function MakeUGCHandle Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeUGCHandle", 	Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::SteamUtilities_eventMakeUGCHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::SteamUtilities_eventMakeUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeUGCHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamUGCHandle*)Z_Param__Result=USteamUtilities::MakeUGCHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function MakeUGCHandle *************************************

// ********** Begin Class USteamUtilities Function NotEqual ****************************************
struct Z_Construct_UFunction_USteamUtilities_NotEqual_Statics
{
	struct SteamUtilities_eventNotEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotEqual constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotEqual constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotEqual Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
void Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers) < 2048);
// ********** End Function NotEqual Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "NotEqual", 	Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::SteamUtilities_eventNotEqual_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::SteamUtilities_eventNotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execNotEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::NotEqual(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function NotEqual ******************************************

// ********** Begin Class USteamUtilities Function PatchSessionResult ******************************
struct Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics
{
	struct SteamUtilities_eventPatchSessionResult_Parms
	{
		FBlueprintSessionResult SearchResult;
		FBlueprintSessionResult SessionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Workaround for Multiplayer Sessions in Unreal Engine 5.5\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Workaround for Multiplayer Sessions in Unreal Engine 5.5" },
#endif
		{ "Uparam", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PatchSessionResult constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PatchSessionResult constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PatchSessionResult Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPatchSessionResult_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchResult_MetaData), NewProp_SearchResult_MetaData) }; // 2609908441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPatchSessionResult_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 2609908441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::NewProp_SearchResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::NewProp_SessionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::PropPointers) < 2048);
// ********** End Function PatchSessionResult Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PatchSessionResult", 	Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::SteamUtilities_eventPatchSessionResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::SteamUtilities_eventPatchSessionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PatchSessionResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PatchSessionResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPatchSessionResult)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SearchResult);
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::PatchSessionResult(Z_Param_Out_SearchResult,Z_Param_Out_SessionResult);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function PatchSessionResult ********************************

// ********** Begin Class USteamUtilities Function PublishedFileID_Equals **************************
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics
{
	struct SteamUtilities_eventPublishedFileID_Equals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PublishedFileID_Equals constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PublishedFileID_Equals constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PublishedFileID_Equals Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers) < 2048);
// ********** End Function PublishedFileID_Equals Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals", 	Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::SteamUtilities_eventPublishedFileID_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::SteamUtilities_eventPublishedFileID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function PublishedFileID_Equals ****************************

// ********** Begin Class USteamUtilities Function PublishedFileID_Equals_Exec *********************
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics
{
	struct SteamUtilities_eventPublishedFileID_Equals_Exec_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		ESteamCoreIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PublishedFileID_Equals_Exec constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PublishedFileID_Equals_Exec constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PublishedFileID_Equals_Exec Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(0, nullptr) }; // 1789098645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers) < 2048);
// ********** End Function PublishedFileID_Equals_Exec Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals_Exec", 	Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::SteamUtilities_eventPublishedFileID_Equals_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::SteamUtilities_eventPublishedFileID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::PublishedFileID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function PublishedFileID_Equals_Exec ***********************

// ********** Begin Class USteamUtilities Function PublishedFileID_NotEquals ***********************
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics
{
	struct SteamUtilities_eventPublishedFileID_NotEquals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PublishedFileID_NotEquals constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PublishedFileID_NotEquals constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PublishedFileID_NotEquals Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers) < 2048);
// ********** End Function PublishedFileID_NotEquals Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_NotEquals", 	Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::SteamUtilities_eventPublishedFileID_NotEquals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::SteamUtilities_eventPublishedFileID_NotEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_NotEquals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_NotEquals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function PublishedFileID_NotEquals *************************

// ********** Begin Class USteamUtilities Function ReadFileToBytes *********************************
struct Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics
{
	struct SteamUtilities_eventReadFileToBytes_Parms
	{
		FString AbsoluteFilePath;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Reads a binary file and returns an array of uint8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Reads a binary file and returns an array of uint8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadFileToBytes constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadFileToBytes constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadFileToBytes Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers) < 2048);
// ********** End Function ReadFileToBytes Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ReadFileToBytes", 	Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::SteamUtilities_eventReadFileToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::SteamUtilities_eventReadFileToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ReadFileToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execReadFileToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::ReadFileToBytes(Z_Param_AbsoluteFilePath);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function ReadFileToBytes ***********************************

// ********** Begin Class USteamUtilities Function SteamItemInstanceID_Equals **********************
struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics
{
	struct SteamUtilities_eventSteamItemInstanceID_Equals_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SteamItemInstanceID_Equals constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SteamItemInstanceID_Equals constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SteamItemInstanceID_Equals Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2457742601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2457742601
void Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventSteamItemInstanceID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers) < 2048);
// ********** End Function SteamItemInstanceID_Equals Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals", 	Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::SteamItemInstanceID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function SteamItemInstanceID_Equals ************************

// ********** Begin Class USteamUtilities Function SteamItemInstanceID_Equals_Exec *****************
struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics
{
	struct SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		ESteamCoreIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SteamItemInstanceID_Equals_Exec constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SteamItemInstanceID_Equals_Exec constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SteamItemInstanceID_Equals_Exec Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2457742601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2457742601
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(0, nullptr) }; // 1789098645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers) < 2048);
// ********** End Function SteamItemInstanceID_Equals_Exec Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals_Exec", 	Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals_Exec)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SteamItemInstanceID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function SteamItemInstanceID_Equals_Exec *******************

// ********** Begin Class USteamUtilities Function WriteBytesToFile ********************************
struct Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics
{
	struct SteamUtilities_eventWriteBytesToFile_Parms
	{
		bool bOverwriteIfExists;
		FString AbsoluteFilePath;
		TArray<uint8> DataBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Writes an array of uint8 to a binary file\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Writes an array of uint8 to a binary file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteBytesToFile constinit property declarations **********************
	static void NewProp_bOverwriteIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteIfExists;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteBytesToFile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteBytesToFile Property Definitions *********************************
void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit(void* Obj)
{
	((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->bOverwriteIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists = { "bOverwriteIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBuffer_MetaData), NewProp_DataBuffer_MetaData) };
void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers) < 2048);
// ********** End Function WriteBytesToFile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "WriteBytesToFile", 	Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::SteamUtilities_eventWriteBytesToFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::SteamUtilities_eventWriteBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_WriteBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execWriteBytesToFile)
{
	P_GET_UBOOL(Z_Param_bOverwriteIfExists);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::WriteBytesToFile(Z_Param_bOverwriteIfExists,Z_Param_AbsoluteFilePath,Z_Param_Out_DataBuffer);
	P_NATIVE_END;
}
// ********** End Class USteamUtilities Function WriteBytesToFile **********************************

// ********** Begin Class USteamUtilities **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamUtilities;
UClass* USteamUtilities::GetPrivateStaticClass()
{
	using TClass = USteamUtilities;
	if (!Z_Registration_Info_UClass_USteamUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamUtilities"),
			Z_Registration_Info_UClass_USteamUtilities.InnerSingleton,
			StaticRegisterNativesUSteamUtilities,
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
	return Z_Registration_Info_UClass_USteamUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamUtilities_NoRegister()
{
	return USteamUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamUtilities constinit property declarations **************************
// ********** End Class USteamUtilities constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BP_BytesToString"), .Pointer = &USteamUtilities::execBP_BytesToString },
		{ .NameUTF8 = UTF8TEXT("BP_StringToBytes"), .Pointer = &USteamUtilities::execBP_StringToBytes },
		{ .NameUTF8 = UTF8TEXT("BreakInventoryUpdateHandle"), .Pointer = &USteamUtilities::execBreakInventoryUpdateHandle },
		{ .NameUTF8 = UTF8TEXT("BreakPublishedFileID"), .Pointer = &USteamUtilities::execBreakPublishedFileID },
		{ .NameUTF8 = UTF8TEXT("BreakSteamGameID"), .Pointer = &USteamUtilities::execBreakSteamGameID },
		{ .NameUTF8 = UTF8TEXT("BreakSteamID"), .Pointer = &USteamUtilities::execBreakSteamID },
		{ .NameUTF8 = UTF8TEXT("BreakTicketHandle"), .Pointer = &USteamUtilities::execBreakTicketHandle },
		{ .NameUTF8 = UTF8TEXT("BreakUGCHandle"), .Pointer = &USteamUtilities::execBreakUGCHandle },
		{ .NameUTF8 = UTF8TEXT("ConstructServerFilter"), .Pointer = &USteamUtilities::execConstructServerFilter },
		{ .NameUTF8 = UTF8TEXT("EncryptString"), .Pointer = &USteamUtilities::execEncryptString },
		{ .NameUTF8 = UTF8TEXT("Equal"), .Pointer = &USteamUtilities::execEqual },
		{ .NameUTF8 = UTF8TEXT("Equal_Exec"), .Pointer = &USteamUtilities::execEqual_Exec },
		{ .NameUTF8 = UTF8TEXT("FromUnixTimestamp"), .Pointer = &USteamUtilities::execFromUnixTimestamp },
		{ .NameUTF8 = UTF8TEXT("GetAccountType"), .Pointer = &USteamUtilities::execGetAccountType },
		{ .NameUTF8 = UTF8TEXT("GetGameEngineInitialized"), .Pointer = &USteamUtilities::execGetGameEngineInitialized },
		{ .NameUTF8 = UTF8TEXT("GetHostPingData"), .Pointer = &USteamUtilities::execGetHostPingData },
		{ .NameUTF8 = UTF8TEXT("GetInteger"), .Pointer = &USteamUtilities::execGetInteger },
		{ .NameUTF8 = UTF8TEXT("GetPingFromHostData"), .Pointer = &USteamUtilities::execGetPingFromHostData },
		{ .NameUTF8 = UTF8TEXT("GetPublicIp"), .Pointer = &USteamUtilities::execGetPublicIp },
		{ .NameUTF8 = UTF8TEXT("GetSteamIdFromPlayerState"), .Pointer = &USteamUtilities::execGetSteamIdFromPlayerState },
		{ .NameUTF8 = UTF8TEXT("GetString"), .Pointer = &USteamUtilities::execGetString },
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &USteamUtilities::execGetType },
		{ .NameUTF8 = UTF8TEXT("IsGameIDValid"), .Pointer = &USteamUtilities::execIsGameIDValid },
		{ .NameUTF8 = UTF8TEXT("IsGameIDValid_Exec"), .Pointer = &USteamUtilities::execIsGameIDValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsLobby"), .Pointer = &USteamUtilities::execIsLobby },
		{ .NameUTF8 = UTF8TEXT("IsPublishedFileIDValid"), .Pointer = &USteamUtilities::execIsPublishedFileIDValid },
		{ .NameUTF8 = UTF8TEXT("IsPublishedFileIDValid_Exec"), .Pointer = &USteamUtilities::execIsPublishedFileIDValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsRecalculatingPing"), .Pointer = &USteamUtilities::execIsRecalculatingPing },
		{ .NameUTF8 = UTF8TEXT("IsSteamAvailable"), .Pointer = &USteamUtilities::execIsSteamAvailable },
		{ .NameUTF8 = UTF8TEXT("IsSteamIDValid_Exec"), .Pointer = &USteamUtilities::execIsSteamIDValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsSteamInventoryUpdateHandleValid"), .Pointer = &USteamUtilities::execIsSteamInventoryUpdateHandleValid },
		{ .NameUTF8 = UTF8TEXT("IsSteamInventoryUpdateHandleValid_Exec"), .Pointer = &USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsSteamServerInitialized"), .Pointer = &USteamUtilities::execIsSteamServerInitialized },
		{ .NameUTF8 = UTF8TEXT("IsSteamTicketHandleValid"), .Pointer = &USteamUtilities::execIsSteamTicketHandleValid },
		{ .NameUTF8 = UTF8TEXT("IsSteamTicketHandleValid_Exec"), .Pointer = &USteamUtilities::execIsSteamTicketHandleValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsUGCHandleValid"), .Pointer = &USteamUtilities::execIsUGCHandleValid },
		{ .NameUTF8 = UTF8TEXT("IsUGCHandleValid_Exec"), .Pointer = &USteamUtilities::execIsUGCHandleValid_Exec },
		{ .NameUTF8 = UTF8TEXT("IsUsingP2PRelays"), .Pointer = &USteamUtilities::execIsUsingP2PRelays },
		{ .NameUTF8 = UTF8TEXT("IsValid"), .Pointer = &USteamUtilities::execIsValid },
		{ .NameUTF8 = UTF8TEXT("K2_HexToBytes"), .Pointer = &USteamUtilities::execK2_HexToBytes },
		{ .NameUTF8 = UTF8TEXT("K2_HexToString"), .Pointer = &USteamUtilities::execK2_HexToString },
		{ .NameUTF8 = UTF8TEXT("K2_IsPlayerInSession"), .Pointer = &USteamUtilities::execK2_IsPlayerInSession },
		{ .NameUTF8 = UTF8TEXT("ListenForSteamMessages"), .Pointer = &USteamUtilities::execListenForSteamMessages },
		{ .NameUTF8 = UTF8TEXT("MakeInteger"), .Pointer = &USteamUtilities::execMakeInteger },
		{ .NameUTF8 = UTF8TEXT("MakeInventoryUpdateHandle"), .Pointer = &USteamUtilities::execMakeInventoryUpdateHandle },
		{ .NameUTF8 = UTF8TEXT("MakePublishedFileID"), .Pointer = &USteamUtilities::execMakePublishedFileID },
		{ .NameUTF8 = UTF8TEXT("MakeSearchInteger"), .Pointer = &USteamUtilities::execMakeSearchInteger },
		{ .NameUTF8 = UTF8TEXT("MakeSearchString"), .Pointer = &USteamUtilities::execMakeSearchString },
		{ .NameUTF8 = UTF8TEXT("MakeSteamGameID"), .Pointer = &USteamUtilities::execMakeSteamGameID },
		{ .NameUTF8 = UTF8TEXT("MakeSteamID"), .Pointer = &USteamUtilities::execMakeSteamID },
		{ .NameUTF8 = UTF8TEXT("MakeString"), .Pointer = &USteamUtilities::execMakeString },
		{ .NameUTF8 = UTF8TEXT("MakeTicketHandle"), .Pointer = &USteamUtilities::execMakeTicketHandle },
		{ .NameUTF8 = UTF8TEXT("MakeUGCHandle"), .Pointer = &USteamUtilities::execMakeUGCHandle },
		{ .NameUTF8 = UTF8TEXT("NotEqual"), .Pointer = &USteamUtilities::execNotEqual },
		{ .NameUTF8 = UTF8TEXT("PatchSessionResult"), .Pointer = &USteamUtilities::execPatchSessionResult },
		{ .NameUTF8 = UTF8TEXT("PublishedFileID_Equals"), .Pointer = &USteamUtilities::execPublishedFileID_Equals },
		{ .NameUTF8 = UTF8TEXT("PublishedFileID_Equals_Exec"), .Pointer = &USteamUtilities::execPublishedFileID_Equals_Exec },
		{ .NameUTF8 = UTF8TEXT("PublishedFileID_NotEquals"), .Pointer = &USteamUtilities::execPublishedFileID_NotEquals },
		{ .NameUTF8 = UTF8TEXT("ReadFileToBytes"), .Pointer = &USteamUtilities::execReadFileToBytes },
		{ .NameUTF8 = UTF8TEXT("SteamItemInstanceID_Equals"), .Pointer = &USteamUtilities::execSteamItemInstanceID_Equals },
		{ .NameUTF8 = UTF8TEXT("SteamItemInstanceID_Equals_Exec"), .Pointer = &USteamUtilities::execSteamItemInstanceID_Equals_Exec },
		{ .NameUTF8 = UTF8TEXT("WriteBytesToFile"), .Pointer = &USteamUtilities::execWriteBytesToFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtilities_BP_BytesToString, "BP_BytesToString" }, // 1482372123
		{ &Z_Construct_UFunction_USteamUtilities_BP_StringToBytes, "BP_StringToBytes" }, // 4197188484
		{ &Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 2501868809
		{ &Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 2163420594
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 124975089
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamID, "BreakSteamID" }, // 1251761867
		{ &Z_Construct_UFunction_USteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 2721651729
		{ &Z_Construct_UFunction_USteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 1120820390
		{ &Z_Construct_UFunction_USteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 1184628210
		{ &Z_Construct_UFunction_USteamUtilities_EncryptString, "EncryptString" }, // 4006641828
		{ &Z_Construct_UFunction_USteamUtilities_Equal, "Equal" }, // 1794732418
		{ &Z_Construct_UFunction_USteamUtilities_Equal_Exec, "Equal_Exec" }, // 1845605957
		{ &Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp, "FromUnixTimestamp" }, // 1990734671
		{ &Z_Construct_UFunction_USteamUtilities_GetAccountType, "GetAccountType" }, // 1197517080
		{ &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized, "GetGameEngineInitialized" }, // 2306913279
		{ &Z_Construct_UFunction_USteamUtilities_GetHostPingData, "GetHostPingData" }, // 3561737302
		{ &Z_Construct_UFunction_USteamUtilities_GetInteger, "GetInteger" }, // 1516664035
		{ &Z_Construct_UFunction_USteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 109271085
		{ &Z_Construct_UFunction_USteamUtilities_GetPublicIp, "GetPublicIp" }, // 1688862126
		{ &Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState, "GetSteamIdFromPlayerState" }, // 2144442745
		{ &Z_Construct_UFunction_USteamUtilities_GetString, "GetString" }, // 261903401
		{ &Z_Construct_UFunction_USteamUtilities_GetType, "GetType" }, // 2940660575
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 3595606759
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 3751874076
		{ &Z_Construct_UFunction_USteamUtilities_IsLobby, "IsLobby" }, // 2601706652
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid, "IsPublishedFileIDValid" }, // 2609221196
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec, "IsPublishedFileIDValid_Exec" }, // 1708914278
		{ &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 1209865219
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 405305073
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 629362541
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 2878735297
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 1599960767
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized, "IsSteamServerInitialized" }, // 2493428423
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 1524286173
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 3290694399
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 2288115676
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 4145134925
		{ &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 1863724372
		{ &Z_Construct_UFunction_USteamUtilities_IsValid, "IsValid" }, // 3458324124
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToBytes, "K2_HexToBytes" }, // 3062701642
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToString, "K2_HexToString" }, // 1603061235
		{ &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession, "K2_IsPlayerInSession" }, // 362286356
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 3229152913
		{ &Z_Construct_UFunction_USteamUtilities_MakeInteger, "MakeInteger" }, // 1091512731
		{ &Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 103681794
		{ &Z_Construct_UFunction_USteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 1680877746
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchInteger, "MakeSearchInteger" }, // 804840919
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchString, "MakeSearchString" }, // 379145735
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 3261335912
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamID, "MakeSteamID" }, // 270765694
		{ &Z_Construct_UFunction_USteamUtilities_MakeString, "MakeString" }, // 949291365
		{ &Z_Construct_UFunction_USteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 35556802
		{ &Z_Construct_UFunction_USteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 983160728
		{ &Z_Construct_UFunction_USteamUtilities_NotEqual, "NotEqual" }, // 1248996582
		{ &Z_Construct_UFunction_USteamUtilities_PatchSessionResult, "PatchSessionResult" }, // 2554404817
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 1233767646
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 996987616
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 2790372080
		{ &Z_Construct_UFunction_USteamUtilities_ReadFileToBytes, "ReadFileToBytes" }, // 2273606384
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals, "SteamItemInstanceID_Equals" }, // 3218634597
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec, "SteamItemInstanceID_Equals_Exec" }, // 4001354949
		{ &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile, "WriteBytesToFile" }, // 3883440293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamUtilities_Statics
UObject* (*const Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamUtilities_Statics::ClassParams = {
	&USteamUtilities::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams)
};
void USteamUtilities::StaticRegisterNativesUSteamUtilities()
{
	UClass* Class = USteamUtilities::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamUtilities_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamUtilities()
{
	if (!Z_Registration_Info_UClass_USteamUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamUtilities.OuterSingleton, Z_Construct_UClass_USteamUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamUtilities.OuterSingleton;
}
USteamUtilities::USteamUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamUtilities);
USteamUtilities::~USteamUtilities() {}
// ********** End Class USteamUtilities ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreValid_StaticEnum, TEXT("ESteamCoreValid"), &Z_Registration_Info_UEnum_ESteamCoreValid, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3238081293U) },
		{ ESteamCoreIdentical_StaticEnum, TEXT("ESteamCoreIdentical"), &Z_Registration_Info_UEnum_ESteamCoreIdentical, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1789098645U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreVoice, USteamCoreVoice::StaticClass, TEXT("USteamCoreVoice"), &Z_Registration_Info_UClass_USteamCoreVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreVoice), 1436254230U) },
		{ Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, USteamCoreAsyncActionListenForControllerChange::StaticClass, TEXT("USteamCoreAsyncActionListenForControllerChange"), &Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAsyncActionListenForControllerChange), 794374617U) },
		{ Z_Construct_UClass_USteamUtilities, USteamUtilities::StaticClass, TEXT("USteamUtilities"), &Z_Registration_Info_UClass_USteamUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamUtilities), 3159006430U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_230289710{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
