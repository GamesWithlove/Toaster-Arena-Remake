// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUser/SteamUserAsyncActions.h"
#include "SteamCore/Public/SteamUser/SteamUserTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserAsyncActions() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms
		{
			FEncryptedAppTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3467077057
	void Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestEncryptedAppTicketDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms
		{
			FStoreAuthURLResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2176716195
	void Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestStoreAuthURLDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEncryptedAppTicketResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket()
	{
		UClass* Class = USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execHandleCallback },
			{ "RequestEncryptedAppTicketAsync", &USteamCoreUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics
	{
		struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms
		{
			FEncryptedAppTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3467077057
	void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics
	{
		struct SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> DataToInclude;
			float Timeout;
			USteamCoreUserAsyncActionRequestEncryptedAppTicket* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, nullptr, "RequestEncryptedAppTicketAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::SteamCoreUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreUserAsyncActionRequestEncryptedAppTicket);
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister()
	{
		return USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback, "HandleCallback" }, // 1269040677
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync, "RequestEncryptedAppTicketAsync" }, // 901428363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserAsyncActionRequestEncryptedAppTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserAsyncActionRequestEncryptedAppTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestEncryptedAppTicket, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestEncryptedAppTicketDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback_MetaData)) }; // 772030386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestEncryptedAppTicket>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket()
	{
		if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton, Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserAsyncActionRequestEncryptedAppTicket>()
	{
		return USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	}
	USteamCoreUserAsyncActionRequestEncryptedAppTicket::USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserAsyncActionRequestEncryptedAppTicket);
	USteamCoreUserAsyncActionRequestEncryptedAppTicket::~USteamCoreUserAsyncActionRequestEncryptedAppTicket() {}
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback)
	{
		P_GET_STRUCT_REF(FStoreAuthURLResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreUserAsyncActionRequestStoreAuthURL::StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL()
	{
		UClass* Class = USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback },
			{ "RequestStoreAuthURLAsync", &USteamCoreUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics
	{
		struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms
		{
			FStoreAuthURLResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 2176716195
	void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics
	{
		struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms
		{
			UObject* WorldContextObject;
			FString RedirectURL;
			float Timeout;
			USteamCoreUserAsyncActionRequestStoreAuthURL* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, RedirectURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|User|Async" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Store Auth URL" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "RequestStoreAuthURLAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreUserAsyncActionRequestStoreAuthURL);
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister()
	{
		return USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback, "HandleCallback" }, // 3024051721
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync, "RequestStoreAuthURLAsync" }, // 4122949752
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserAsyncActionRequestStoreAuthURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserAsyncActionRequestStoreAuthURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestStoreAuthURL, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData)) }; // 3347121278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestStoreAuthURL>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL()
	{
		if (!Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton, Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserAsyncActionRequestStoreAuthURL>()
	{
		return USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
	}
	USteamCoreUserAsyncActionRequestStoreAuthURL::USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserAsyncActionRequestStoreAuthURL);
	USteamCoreUserAsyncActionRequestStoreAuthURL::~USteamCoreUserAsyncActionRequestStoreAuthURL() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass, TEXT("USteamCoreUserAsyncActionRequestEncryptedAppTicket"), &Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserAsyncActionRequestEncryptedAppTicket), 2261077194U) },
		{ Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass, TEXT("USteamCoreUserAsyncActionRequestStoreAuthURL"), &Z_Registration_Info_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserAsyncActionRequestStoreAuthURL), 262097574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_1833009250(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
