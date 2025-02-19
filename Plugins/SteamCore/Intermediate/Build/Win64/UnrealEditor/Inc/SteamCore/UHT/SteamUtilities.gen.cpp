// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamUtilities.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamInventory/SteamInventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamMessage_Parms
		{
			ESteamMessageType Type;
			FString Message;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamMessageType, METADATA_PARAMS(nullptr, 0) }; // 498240741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamMessage_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnHTTPResponse_Parms
		{
			FString Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnHTTPResponse_Parms, Response), METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnHTTPResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnHTTPResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnControllerChangedCallback_Parms
		{
			bool bIsConnected;
			int32 UserId;
		};
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnControllerChangedCallback_Parms*)Obj)->bIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnControllerChangedCallback_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnControllerChangedCallback_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnControllerChangedCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnControllerChangedCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreVoice::execConstructSteamCoreVoice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AudioSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreVoice**)Z_Param__Result=USteamCoreVoice::ConstructSteamCoreVoice(Z_Param_AudioSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreVoice::execDestroySteamCoreVoice)
	{
		P_GET_OBJECT(USteamCoreVoice,Z_Param_OBJ);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamCoreVoice::DestroySteamCoreVoice(Z_Param_OBJ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreVoice::execAddAudioBuffer)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAudioBuffer(Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	void USteamCoreVoice::StaticRegisterNativesUSteamCoreVoice()
	{
		UClass* Class = USteamCoreVoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAudioBuffer", &USteamCoreVoice::execAddAudioBuffer },
			{ "ConstructSteamCoreVoice", &USteamCoreVoice::execConstructSteamCoreVoice },
			{ "DestroySteamCoreVoice", &USteamCoreVoice::execDestroySteamCoreVoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics
	{
		struct SteamCoreVoice_eventAddAudioBuffer_Parms
		{
			TArray<uint8> Buffer;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreVoice_eventAddAudioBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreVoice" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "AddAudioBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::SteamCoreVoice_eventAddAudioBuffer_Parms), Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics
	{
		struct SteamCoreVoice_eventConstructSteamCoreVoice_Parms
		{
			int32 AudioSampleRate;
			USteamCoreVoice* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, AudioSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, ReturnValue), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CPP_Default_AudioSampleRate", "24000" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "ConstructSteamCoreVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::SteamCoreVoice_eventConstructSteamCoreVoice_Parms), Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics
	{
		struct SteamCoreVoice_eventDestroySteamCoreVoice_Parms
		{
			USteamCoreVoice* OBJ;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OBJ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_OBJ = { "OBJ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreVoice_eventDestroySteamCoreVoice_Parms, OBJ), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_OBJ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "DestroySteamCoreVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::SteamCoreVoice_eventDestroySteamCoreVoice_Parms), Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreVoice);
	UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister()
	{
		return USteamCoreVoice::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreVoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer, "AddAudioBuffer" }, // 2434936743
		{ &Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice, "ConstructSteamCoreVoice" }, // 4021473066
		{ &Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice, "DestroySteamCoreVoice" }, // 3232592247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreVoice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams = {
		&USteamCoreVoice::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreVoice()
	{
		if (!Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton, Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreVoice.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreVoice>()
	{
		return USteamCoreVoice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreVoice);
	USteamCoreVoice::~USteamCoreVoice() {}
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
	DEFINE_FUNCTION(USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAsyncActionListenForControllerChange**)Z_Param__Result=USteamCoreAsyncActionListenForControllerChange::ListenForControllerChange(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USteamCoreAsyncActionListenForControllerChange::StaticRegisterNativesUSteamCoreAsyncActionListenForControllerChange()
	{
		UClass* Class = USteamCoreAsyncActionListenForControllerChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreAsyncActionListenForControllerChange::execHandleCallback },
			{ "ListenForControllerChange", &USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics
	{
		struct SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms
		{
			bool bIsConnected;
			int32 PlatformUserId;
			int32 UserId;
		};
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformUserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms*)Obj)->bIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, PlatformUserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics
	{
		struct SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms
		{
			UObject* WorldContextObject;
			USteamCoreAsyncActionListenForControllerChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "ListenForControllerChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreAsyncActionListenForControllerChange);
	UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister()
	{
		return USteamCoreAsyncActionListenForControllerChange::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback, "HandleCallback" }, // 2601957904
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange, "ListenForControllerChange" }, // 2522799532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAsyncActionListenForControllerChange\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAsyncActionListenForControllerChange\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreAsyncActionListenForControllerChange, OnControllerChanged), Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData)) }; // 933708115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncActionListenForControllerChange>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange()
	{
		if (!Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton, Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreAsyncActionListenForControllerChange>()
	{
		return USteamCoreAsyncActionListenForControllerChange::StaticClass();
	}
	USteamCoreAsyncActionListenForControllerChange::USteamCoreAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAsyncActionListenForControllerChange);
	USteamCoreAsyncActionListenForControllerChange::~USteamCoreAsyncActionListenForControllerChange() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreValid;
	static UEnum* ESteamCoreValid_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreValid, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreValid"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreValid.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreValid>()
	{
		return ESteamCoreValid_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enumerators[] = {
		{ "ESteamCoreValid::Valid", (int64)ESteamCoreValid::Valid },
		{ "ESteamCoreValid::NotValid", (int64)ESteamCoreValid::NotValid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NotValid.Name", "ESteamCoreValid::NotValid" },
		{ "Valid.Name", "ESteamCoreValid::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreValid",
		"ESteamCoreValid",
		Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreValid_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreValid.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreIdentical;
	static UEnum* ESteamCoreIdentical_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreIdentical"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreIdentical.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreIdentical>()
	{
		return ESteamCoreIdentical_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enumerators[] = {
		{ "ESteamCoreIdentical::Identical", (int64)ESteamCoreIdentical::Identical },
		{ "ESteamCoreIdentical::NotIdentical", (int64)ESteamCoreIdentical::NotIdentical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Identical.Name", "ESteamCoreIdentical::Identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NotIdentical.Name", "ESteamCoreIdentical::NotIdentical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreIdentical",
		"ESteamCoreIdentical",
		Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreIdentical.InnerSingleton;
	}
	DEFINE_FUNCTION(USteamUtilities::execListenForSteamMessages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsRecalculatingPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsRecalculatingPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetPingFromHostData)
	{
		P_GET_STRUCT_REF(FHostPingData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamUtilities::GetPingFromHostData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetHostPingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHostPingData*)Z_Param__Result=USteamUtilities::GetHostPingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUsingP2PRelays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUsingP2PRelays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execK2_IsPlayerInSession)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::K2_IsPlayerInSession(Z_Param_LocalUserNum);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execReadFileToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USteamUtilities::ReadFileToBytes(Z_Param_AbsoluteFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execK2_HexToString)
	{
		P_GET_TARRAY(uint8,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::K2_HexToString(Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execK2_HexToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USteamUtilities::K2_HexToBytes(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamServerInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamServerInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBP_BytesToString)
	{
		P_GET_TARRAY(uint8,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BP_BytesToString(Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBP_StringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USteamUtilities::BP_StringToBytes(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetSteamIdFromPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=USteamUtilities::GetSteamIdFromPlayerState(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetPublicIp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::GetPublicIp(FOnHTTPResponse(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEncryptString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::EncryptString(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execFromUnixTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Timestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=USteamUtilities::FromUnixTimestamp(Z_Param_Timestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execConstructServerFilter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UServerFilter**)Z_Param__Result=USteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsLobby(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetAccountType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAccountType*)Z_Param__Result=USteamUtilities::GetAccountType(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetGameEngineInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::GetGameEngineInitialized();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals)
	{
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::SteamItemInstanceID_Equals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_A);
		P_GET_STRUCT(FPublishedFileID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_Equals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execEqual)
	{
		P_GET_STRUCT(FSteamID,Z_Param_A);
		P_GET_STRUCT(FSteamID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::Equal(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_Handle);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamTicketHandleValid(Z_Param_Handle);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUGCHandleValid(Z_Param_Handle);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsGameIDValid(Z_Param_GameID);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid_Exec)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_Handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsPublishedFileIDValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsPublishedFileIDValid(Z_Param_PublishedFileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsValid)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsValid(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakTicketHandle)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakTicketHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakInventoryUpdateHandle)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakInventoryUpdateHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakUGCHandle)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakUGCHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakPublishedFileID)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_FileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakPublishedFileID(Z_Param_FileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamGameID)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamGameID(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamID)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamID(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetType)
	{
		P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAttributeType*)Z_Param__Result=USteamUtilities::GetType(Z_Param_Settings);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamUtilities::execMakeSearchInteger)
	{
		P_GET_ENUM(ESteamComparisonOp,Z_Param_ComparisonOperator);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchInteger(ESteamComparisonOp(Z_Param_ComparisonOperator),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSearchString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeInteger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeInteger(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeTicketHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=USteamUtilities::MakeTicketHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeInventoryUpdateHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamUtilities::MakeInventoryUpdateHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeUGCHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=USteamUtilities::MakeUGCHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakePublishedFileID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPublishedFileID*)Z_Param__Result=USteamUtilities::MakePublishedFileID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamGameID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamGameID*)Z_Param__Result=USteamUtilities::MakeSteamGameID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=USteamUtilities::MakeSteamID(Z_Param_Value);
		P_NATIVE_END;
	}
	void USteamUtilities::StaticRegisterNativesUSteamUtilities()
	{
		UClass* Class = USteamUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_BytesToString", &USteamUtilities::execBP_BytesToString },
			{ "BP_StringToBytes", &USteamUtilities::execBP_StringToBytes },
			{ "BreakInventoryUpdateHandle", &USteamUtilities::execBreakInventoryUpdateHandle },
			{ "BreakPublishedFileID", &USteamUtilities::execBreakPublishedFileID },
			{ "BreakSteamGameID", &USteamUtilities::execBreakSteamGameID },
			{ "BreakSteamID", &USteamUtilities::execBreakSteamID },
			{ "BreakTicketHandle", &USteamUtilities::execBreakTicketHandle },
			{ "BreakUGCHandle", &USteamUtilities::execBreakUGCHandle },
			{ "ConstructServerFilter", &USteamUtilities::execConstructServerFilter },
			{ "EncryptString", &USteamUtilities::execEncryptString },
			{ "Equal", &USteamUtilities::execEqual },
			{ "Equal_Exec", &USteamUtilities::execEqual_Exec },
			{ "FromUnixTimestamp", &USteamUtilities::execFromUnixTimestamp },
			{ "GetAccountType", &USteamUtilities::execGetAccountType },
			{ "GetGameEngineInitialized", &USteamUtilities::execGetGameEngineInitialized },
			{ "GetHostPingData", &USteamUtilities::execGetHostPingData },
			{ "GetInteger", &USteamUtilities::execGetInteger },
			{ "GetPingFromHostData", &USteamUtilities::execGetPingFromHostData },
			{ "GetPublicIp", &USteamUtilities::execGetPublicIp },
			{ "GetSteamIdFromPlayerState", &USteamUtilities::execGetSteamIdFromPlayerState },
			{ "GetString", &USteamUtilities::execGetString },
			{ "GetType", &USteamUtilities::execGetType },
			{ "IsGameIDValid", &USteamUtilities::execIsGameIDValid },
			{ "IsGameIDValid_Exec", &USteamUtilities::execIsGameIDValid_Exec },
			{ "IsLobby", &USteamUtilities::execIsLobby },
			{ "IsPublishedFileIDValid", &USteamUtilities::execIsPublishedFileIDValid },
			{ "IsPublishedFileIDValid_Exec", &USteamUtilities::execIsPublishedFileIDValid_Exec },
			{ "IsRecalculatingPing", &USteamUtilities::execIsRecalculatingPing },
			{ "IsSteamAvailable", &USteamUtilities::execIsSteamAvailable },
			{ "IsSteamIDValid_Exec", &USteamUtilities::execIsSteamIDValid_Exec },
			{ "IsSteamInventoryUpdateHandleValid", &USteamUtilities::execIsSteamInventoryUpdateHandleValid },
			{ "IsSteamInventoryUpdateHandleValid_Exec", &USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
			{ "IsSteamServerInitialized", &USteamUtilities::execIsSteamServerInitialized },
			{ "IsSteamTicketHandleValid", &USteamUtilities::execIsSteamTicketHandleValid },
			{ "IsSteamTicketHandleValid_Exec", &USteamUtilities::execIsSteamTicketHandleValid_Exec },
			{ "IsUGCHandleValid", &USteamUtilities::execIsUGCHandleValid },
			{ "IsUGCHandleValid_Exec", &USteamUtilities::execIsUGCHandleValid_Exec },
			{ "IsUsingP2PRelays", &USteamUtilities::execIsUsingP2PRelays },
			{ "IsValid", &USteamUtilities::execIsValid },
			{ "K2_HexToBytes", &USteamUtilities::execK2_HexToBytes },
			{ "K2_HexToString", &USteamUtilities::execK2_HexToString },
			{ "K2_IsPlayerInSession", &USteamUtilities::execK2_IsPlayerInSession },
			{ "ListenForSteamMessages", &USteamUtilities::execListenForSteamMessages },
			{ "MakeInteger", &USteamUtilities::execMakeInteger },
			{ "MakeInventoryUpdateHandle", &USteamUtilities::execMakeInventoryUpdateHandle },
			{ "MakePublishedFileID", &USteamUtilities::execMakePublishedFileID },
			{ "MakeSearchInteger", &USteamUtilities::execMakeSearchInteger },
			{ "MakeSearchString", &USteamUtilities::execMakeSearchString },
			{ "MakeSteamGameID", &USteamUtilities::execMakeSteamGameID },
			{ "MakeSteamID", &USteamUtilities::execMakeSteamID },
			{ "MakeString", &USteamUtilities::execMakeString },
			{ "MakeTicketHandle", &USteamUtilities::execMakeTicketHandle },
			{ "MakeUGCHandle", &USteamUtilities::execMakeUGCHandle },
			{ "NotEqual", &USteamUtilities::execNotEqual },
			{ "PublishedFileID_Equals", &USteamUtilities::execPublishedFileID_Equals },
			{ "PublishedFileID_Equals_Exec", &USteamUtilities::execPublishedFileID_Equals_Exec },
			{ "PublishedFileID_NotEquals", &USteamUtilities::execPublishedFileID_NotEquals },
			{ "ReadFileToBytes", &USteamUtilities::execReadFileToBytes },
			{ "SteamItemInstanceID_Equals", &USteamUtilities::execSteamItemInstanceID_Equals },
			{ "SteamItemInstanceID_Equals_Exec", &USteamUtilities::execSteamItemInstanceID_Equals_Exec },
			{ "WriteBytesToFile", &USteamUtilities::execWriteBytesToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics
	{
		struct SteamUtilities_eventBP_BytesToString_Parms
		{
			TArray<uint8> Array;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Bytes to String" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::SteamUtilities_eventBP_BytesToString_Parms), Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BP_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics
	{
		struct SteamUtilities_eventBP_StringToBytes_Parms
		{
			FString String;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "String to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::SteamUtilities_eventBP_StringToBytes_Parms), Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BP_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventBreakInventoryUpdateHandle_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1527711130
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakInventoryUpdateHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::SteamUtilities_eventBreakInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics
	{
		struct SteamUtilities_eventBreakPublishedFileID_Parms
		{
			FPublishedFileID FileID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, FileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakPublishedFileID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::SteamUtilities_eventBreakPublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics
	{
		struct SteamUtilities_eventBreakSteamGameID_Parms
		{
			FSteamGameID SteamID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) }; // 419490198
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamGameID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::SteamUtilities_eventBreakSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics
	{
		struct SteamUtilities_eventBreakSteamID_Parms
		{
			FSteamID SteamID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::SteamUtilities_eventBreakSteamID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics
	{
		struct SteamUtilities_eventBreakTicketHandle_Parms
		{
			FSteamTicketHandle Handle;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakTicketHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::SteamUtilities_eventBreakTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics
	{
		struct SteamUtilities_eventBreakUGCHandle_Parms
		{
			FSteamUGCHandle Handle;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakUGCHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::SteamUtilities_eventBreakUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics
	{
		struct SteamUtilities_eventConstructServerFilter_Parms
		{
			UObject* WorldContextObject;
			UServerFilter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ConstructServerFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::SteamUtilities_eventConstructServerFilter_Parms), Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ConstructServerFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_EncryptString_Statics
	{
		struct SteamUtilities_eventEncryptString_Parms
		{
			FString String;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "// Returns a hashed/encrypted version of the string\n" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Returns a hashed/encrypted version of the string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "EncryptString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::SteamUtilities_eventEncryptString_Parms), Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_EncryptString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Statics
	{
		struct SteamUtilities_eventEqual_Parms
		{
			FSteamID A;
			FSteamID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Statics::SteamUtilities_eventEqual_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics
	{
		struct SteamUtilities_eventEqual_Exec_Parms
		{
			FSteamID A;
			FSteamID b;
			ESteamCoreIdentical Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_b;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) }; // 1717511915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::SteamUtilities_eventEqual_Exec_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics
	{
		struct SteamUtilities_eventFromUnixTimestamp_Parms
		{
			FString Timestamp;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, Timestamp), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "FromUnixTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::SteamUtilities_eventFromUnixTimestamp_Parms), Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics
	{
		struct SteamUtilities_eventGetAccountType_Parms
		{
			FSteamID SteamID;
			ESteamAccountType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAccountType, METADATA_PARAMS(nullptr, 0) }; // 2258141917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetAccountType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::SteamUtilities_eventGetAccountType_Parms), Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics
	{
		struct SteamUtilities_eventGetGameEngineInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventGetGameEngineInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventGetGameEngineInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetGameEngineInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::SteamUtilities_eventGetGameEngineInitialized_Parms), Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics
	{
		struct SteamUtilities_eventGetHostPingData_Parms
		{
			FHostPingData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetHostPingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(nullptr, 0) }; // 3495739129
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Returns the P2P relay ping information for the current machine. This information can be\n\x09 * serialized over the network and used to calculate the ping data between a client and a host.\n\x09 *\n\x09 * @return relay information blob stored as a string for relaying over the network.\n\x09 *         If an error occurred, the return is an empty string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Returns the P2P relay ping information for the current machine. This information can be\nserialized over the network and used to calculate the ping data between a client and a host.\n\n@return relay information blob stored as a string for relaying over the network.\n        If an error occurred, the return is an empty string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetHostPingData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::SteamUtilities_eventGetHostPingData_Parms), Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetHostPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetInteger_Statics
	{
		struct SteamUtilities_eventGetInteger_Parms
		{
			FSteamSessionSetting Settings;
			FString Key;
			int32 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventGetInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventGetInteger_Parms), &Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "/*\n\x09* Function for getting a Integer attribute from session settings\n\x09* the function will return false if the string was not found or is not a integer\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "* Function for getting a Integer attribute from session settings\n* the function will return false if the string was not found or is not a integer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::SteamUtilities_eventGetInteger_Parms), Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics
	{
		struct SteamUtilities_eventGetPingFromHostData_Parms
		{
			FHostPingData Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, Data), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData)) }; // 3495739129
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\x09 *\n\x09 * @param HostPingStr The relay information blob we got from the host. This information\n\x09 *                    should be directly serialized over the network and not tampered with.\n\x09 *\n\x09 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\n@param HostPingStr The relay information blob we got from the host. This information\n                   should be directly serialized over the network and not tampered with.\n\n@return The ping value to the given host if it can be calculated, otherwise -1 on error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPingFromHostData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::SteamUtilities_eventGetPingFromHostData_Parms), Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetPingFromHostData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics
	{
		struct SteamUtilities_eventGetPublicIp_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetPublicIp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData)) }; // 1905041753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "// Try getting our public ip\n" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Try getting our public ip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPublicIp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::SteamUtilities_eventGetPublicIp_Parms), Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetPublicIp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics
	{
		struct SteamUtilities_eventGetSteamIdFromPlayerState_Parms
		{
			APlayerState* PlayerState;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetSteamIdFromPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::SteamUtilities_eventGetSteamIdFromPlayerState_Parms), Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetString_Statics
	{
		struct SteamUtilities_eventGetString_Parms
		{
			FSteamSessionSetting Settings;
			FString Key;
			FString OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventGetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventGetString_Parms), &Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "/*\n\x09* Function for getting a String attribute from session settings\n\x09* the function will return false if the string was not found or is not a string\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "* Function for getting a String attribute from session settings\n* the function will return false if the string was not found or is not a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetString_Statics::SteamUtilities_eventGetString_Parms), Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetType_Statics
	{
		struct SteamUtilities_eventGetType_Parms
		{
			FSteamSessionSetting Settings;
			ESteamAttributeType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAttributeType, METADATA_PARAMS(nullptr, 0) }; // 1755357100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_GetType_Statics::SteamUtilities_eventGetType_Parms), Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Parms
		{
			FSteamGameID GameID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData)) }; // 419490198
	void Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::SteamUtilities_eventIsGameIDValid_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Exec_Parms
		{
			FSteamGameID GameID;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::SteamUtilities_eventIsGameIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsLobby_Statics
	{
		struct SteamUtilities_eventIsLobby_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::SteamUtilities_eventIsLobby_Parms), Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics
	{
		struct SteamUtilities_eventIsPublishedFileIDValid_Parms
		{
			FPublishedFileID PublishedFileId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Parms, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	void Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsPublishedFileIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsPublishedFileIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::SteamUtilities_eventIsPublishedFileIDValid_Parms), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms
		{
			FPublishedFileID Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData)) }; // 661584633
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics
	{
		struct SteamUtilities_eventIsRecalculatingPing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09* An informative member that allows us to check if we are recalculating our ping\n\x09* information over the Valve network. Data is additively modified during recalculation\n\x09* such that we do not need to block on this function returning false before using\n\x09* ping data.\n\x09*\n\x09* @return true if we're recalculating our ping within the Valve relay network.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "An informative member that allows us to check if we are recalculating our ping\ninformation over the Valve network. Data is additively modified during recalculation\nsuch that we do not need to block on this function returning false before using\nping data.\n\n@return true if we're recalculating our ping within the Valve relay network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRecalculatingPing", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::SteamUtilities_eventIsRecalculatingPing_Parms), Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics
	{
		struct SteamUtilities_eventIsSteamAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::SteamUtilities_eventIsSteamAvailable_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamIDValid_Exec_Parms
		{
			FSteamID SteamID;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamIDValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::SteamUtilities_eventIsSteamIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData)) }; // 1527711130
	void Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData)) }; // 1527711130
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics
	{
		struct SteamUtilities_eventIsSteamServerInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamServerInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsSteamServerInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamServerInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::SteamUtilities_eventIsSteamServerInitialized_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Parms
		{
			FSteamTicketHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData)) }; // 1818574373
	void Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
		{
			FSteamTicketHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData)) }; // 1818574373
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Parms
		{
			FSteamUGCHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData)) }; // 2878754911
	void Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::SteamUtilities_eventIsUGCHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Exec_Parms
		{
			FSteamUGCHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData)) }; // 2878754911
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) }; // 1411071737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::SteamUtilities_eventIsUGCHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics
	{
		struct SteamUtilities_eventIsUsingP2PRelays_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Returns if this application is set up to use the Steam P2P Relay Network\n\x09 * for communication.\n\x09 *\n\x09 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\x09 *\n\x09 * @return true if relays are enabled for P2P connections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Returns if this application is set up to use the Steam P2P Relay Network\nfor communication.\n\nUses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\n@return true if relays are enabled for P2P connections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUsingP2PRelays", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::SteamUtilities_eventIsUsingP2PRelays_Parms), Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsValid_Statics
	{
		struct SteamUtilities_eventIsValid_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventIsValid_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::SteamUtilities_eventIsValid_Parms), Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics
	{
		struct SteamUtilities_eventK2_HexToBytes_Parms
		{
			FString String;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::SteamUtilities_eventK2_HexToBytes_Parms), Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics
	{
		struct SteamUtilities_eventK2_HexToString_Parms
		{
			TArray<uint8> Array;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to String" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::SteamUtilities_eventK2_HexToString_Parms), Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics
	{
		struct SteamUtilities_eventK2_IsPlayerInSession_Parms
		{
			int32 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventK2_IsPlayerInSession_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventK2_IsPlayerInSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventK2_IsPlayerInSession_Parms), &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "/**\n\x09 * Determine if the player is registered in the specified session\n\x09 *\n\x09 * @return true if the player is registered in the session\n\x09 */" },
		{ "DisplayName", "Is Player In Session" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Determine if the player is registered in the specified session\n\n@return true if the player is registered in the session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_IsPlayerInSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::SteamUtilities_eventK2_IsPlayerInSession_Parms), Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics
	{
		struct SteamUtilities_eventListenForSteamMessages_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventListenForSteamMessages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData)) }; // 142997803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSteamMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::SteamUtilities_eventListenForSteamMessages_Parms), Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics
	{
		struct SteamUtilities_eventMakeInteger_Parms
		{
			int32 Value;
			FSteamSessionSetting ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::SteamUtilities_eventMakeInteger_Parms), Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventMakeInventoryUpdateHandle_Parms
		{
			FString Value;
			FSteamInventoryUpdateHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1527711130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInventoryUpdateHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::SteamUtilities_eventMakeInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics
	{
		struct SteamUtilities_eventMakePublishedFileID_Parms
		{
			FString Value;
			FPublishedFileID ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakePublishedFileID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::SteamUtilities_eventMakePublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakePublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics
	{
		struct SteamUtilities_eventMakeSearchInteger_Parms
		{
			ESteamComparisonOp ComparisonOperator;
			int32 Value;
			FSteamSessionSearchSetting ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOperator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOperator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonOperator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator = { "ComparisonOperator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ComparisonOperator), Z_Construct_UEnum_SteamCore_ESteamComparisonOp, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData)) }; // 1709359228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) }; // 2709255642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::SteamUtilities_eventMakeSearchInteger_Parms), Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics
	{
		struct SteamUtilities_eventMakeSearchString_Parms
		{
			FString Value;
			FSteamSessionSearchSetting ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) }; // 2709255642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::SteamUtilities_eventMakeSearchString_Parms), Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics
	{
		struct SteamUtilities_eventMakeSteamGameID_Parms
		{
			FString Value;
			FSteamGameID ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) }; // 419490198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamGameID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::SteamUtilities_eventMakeSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics
	{
		struct SteamUtilities_eventMakeSteamID_Parms
		{
			FString Value;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::SteamUtilities_eventMakeSteamID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeString_Statics
	{
		struct SteamUtilities_eventMakeString_Parms
		{
			FString Value;
			FSteamSessionSetting ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::SteamUtilities_eventMakeString_Parms), Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics
	{
		struct SteamUtilities_eventMakeTicketHandle_Parms
		{
			FString Value;
			FSteamTicketHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeTicketHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::SteamUtilities_eventMakeTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics
	{
		struct SteamUtilities_eventMakeUGCHandle_Parms
		{
			FString Value;
			FSteamUGCHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeUGCHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::SteamUtilities_eventMakeUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_NotEqual_Statics
	{
		struct SteamUtilities_eventNotEqual_Parms
		{
			FSteamID A;
			FSteamID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "NotEqual", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::SteamUtilities_eventNotEqual_Parms), Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::SteamUtilities_eventPublishedFileID_Equals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Exec_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			ESteamCoreIdentical Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) }; // 1717511915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::SteamUtilities_eventPublishedFileID_Equals_Exec_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_NotEquals_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_NotEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::SteamUtilities_eventPublishedFileID_NotEquals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics
	{
		struct SteamUtilities_eventReadFileToBytes_Parms
		{
			FString AbsoluteFilePath;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, AbsoluteFilePath), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "/*\n\x09 * Reads a binary file and returns an array of uint8\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "* Reads a binary file and returns an array of uint8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ReadFileToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::SteamUtilities_eventReadFileToBytes_Parms), Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ReadFileToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics
	{
		struct SteamUtilities_eventSteamItemInstanceID_Equals_Parms
		{
			FSteamItemInstanceID A;
			FSteamItemInstanceID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1921175290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1921175290
	void Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventSteamItemInstanceID_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Parms), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics
	{
		struct SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms
		{
			FSteamItemInstanceID A;
			FSteamItemInstanceID B;
			ESteamCoreIdentical Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1921175290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1921175290
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) }; // 1717511915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals_Exec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics
	{
		struct SteamUtilities_eventWriteBytesToFile_Parms
		{
			bool bOverwriteIfExists;
			FString AbsoluteFilePath;
			TArray<uint8> DataBuffer;
			bool ReturnValue;
		};
		static void NewProp_bOverwriteIfExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteIfExists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit(void* Obj)
	{
		((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->bOverwriteIfExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists = { "bOverwriteIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, AbsoluteFilePath), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_MetaData)) };
	void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "/*\n\x09 * Writes an array of uint8 to a binary file\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "* Writes an array of uint8 to a binary file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "WriteBytesToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::SteamUtilities_eventWriteBytesToFile_Parms), Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_WriteBytesToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamUtilities);
	UClass* Z_Construct_UClass_USteamUtilities_NoRegister()
	{
		return USteamUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtilities_BP_BytesToString, "BP_BytesToString" }, // 3969824991
		{ &Z_Construct_UFunction_USteamUtilities_BP_StringToBytes, "BP_StringToBytes" }, // 2241263764
		{ &Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 658822350
		{ &Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 86889821
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 3979874041
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamID, "BreakSteamID" }, // 273526333
		{ &Z_Construct_UFunction_USteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 3827087807
		{ &Z_Construct_UFunction_USteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 597757816
		{ &Z_Construct_UFunction_USteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 1368946465
		{ &Z_Construct_UFunction_USteamUtilities_EncryptString, "EncryptString" }, // 1670205792
		{ &Z_Construct_UFunction_USteamUtilities_Equal, "Equal" }, // 1329495255
		{ &Z_Construct_UFunction_USteamUtilities_Equal_Exec, "Equal_Exec" }, // 3097490638
		{ &Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp, "FromUnixTimestamp" }, // 3338931866
		{ &Z_Construct_UFunction_USteamUtilities_GetAccountType, "GetAccountType" }, // 3540687535
		{ &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized, "GetGameEngineInitialized" }, // 1248526929
		{ &Z_Construct_UFunction_USteamUtilities_GetHostPingData, "GetHostPingData" }, // 556016710
		{ &Z_Construct_UFunction_USteamUtilities_GetInteger, "GetInteger" }, // 2374097092
		{ &Z_Construct_UFunction_USteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 1193146973
		{ &Z_Construct_UFunction_USteamUtilities_GetPublicIp, "GetPublicIp" }, // 1865283399
		{ &Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState, "GetSteamIdFromPlayerState" }, // 2147299115
		{ &Z_Construct_UFunction_USteamUtilities_GetString, "GetString" }, // 3453343382
		{ &Z_Construct_UFunction_USteamUtilities_GetType, "GetType" }, // 2202020597
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 3461370941
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 3325776086
		{ &Z_Construct_UFunction_USteamUtilities_IsLobby, "IsLobby" }, // 407553000
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid, "IsPublishedFileIDValid" }, // 482681722
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec, "IsPublishedFileIDValid_Exec" }, // 507388540
		{ &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 1697924024
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 613334726
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 2019092426
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 3371807277
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 2129228839
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized, "IsSteamServerInitialized" }, // 3698725814
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 1004741906
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 1011483452
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 1253672766
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 624593992
		{ &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 867221051
		{ &Z_Construct_UFunction_USteamUtilities_IsValid, "IsValid" }, // 4017378193
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToBytes, "K2_HexToBytes" }, // 3046072532
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToString, "K2_HexToString" }, // 1641269810
		{ &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession, "K2_IsPlayerInSession" }, // 1967446288
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 732604722
		{ &Z_Construct_UFunction_USteamUtilities_MakeInteger, "MakeInteger" }, // 3777751037
		{ &Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 367782261
		{ &Z_Construct_UFunction_USteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 3538114577
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchInteger, "MakeSearchInteger" }, // 4028517831
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchString, "MakeSearchString" }, // 742440153
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 1007546179
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamID, "MakeSteamID" }, // 294877496
		{ &Z_Construct_UFunction_USteamUtilities_MakeString, "MakeString" }, // 3961097619
		{ &Z_Construct_UFunction_USteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 3869997810
		{ &Z_Construct_UFunction_USteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 4226878663
		{ &Z_Construct_UFunction_USteamUtilities_NotEqual, "NotEqual" }, // 4232797106
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 172339730
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 3810570562
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 3085799493
		{ &Z_Construct_UFunction_USteamUtilities_ReadFileToBytes, "ReadFileToBytes" }, // 2311744316
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals, "SteamItemInstanceID_Equals" }, // 4200529185
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec, "SteamItemInstanceID_Equals_Exec" }, // 2334861585
		{ &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile, "WriteBytesToFile" }, // 1979022813
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtilities>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamUtilities()
	{
		if (!Z_Registration_Info_UClass_USteamUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamUtilities.OuterSingleton, Z_Construct_UClass_USteamUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamUtilities.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamUtilities>()
	{
		return USteamUtilities::StaticClass();
	}
	USteamUtilities::USteamUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamUtilities);
	USteamUtilities::~USteamUtilities() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::EnumInfo[] = {
		{ ESteamCoreValid_StaticEnum, TEXT("ESteamCoreValid"), &Z_Registration_Info_UEnum_ESteamCoreValid, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1411071737U) },
		{ ESteamCoreIdentical_StaticEnum, TEXT("ESteamCoreIdentical"), &Z_Registration_Info_UEnum_ESteamCoreIdentical, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1717511915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreVoice, USteamCoreVoice::StaticClass, TEXT("USteamCoreVoice"), &Z_Registration_Info_UClass_USteamCoreVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreVoice), 4043376357U) },
		{ Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, USteamCoreAsyncActionListenForControllerChange::StaticClass, TEXT("USteamCoreAsyncActionListenForControllerChange"), &Z_Registration_Info_UClass_USteamCoreAsyncActionListenForControllerChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAsyncActionListenForControllerChange), 1075570480U) },
		{ Z_Construct_UClass_USteamUtilities, USteamUtilities::StaticClass, TEXT("USteamUtilities"), &Z_Registration_Info_UClass_USteamUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamUtilities), 2415531949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_3419653011(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
