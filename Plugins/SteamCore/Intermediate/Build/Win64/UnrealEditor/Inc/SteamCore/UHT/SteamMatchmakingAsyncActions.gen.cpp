// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamMatchmaking/SteamMatchmakingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingAsyncActions() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms
		{
			FLobbyMatchList Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2702632852
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyListAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms
		{
			FCreateLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1474197689
	void Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms
		{
			FJoinLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3599679146
	void Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback)
	{
		P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobbyAsync", &USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) }; // 4181664104
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
		{
			FCreateLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 1474197689
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreMatchmakingAsyncActionCreateLobby);
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 345856503
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 767489955
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionCreateLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionCreateLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionCreateLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback_MetaData)) }; // 4043476520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby()
	{
		if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionCreateLobby>()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	USteamCoreMatchmakingAsyncActionCreateLobby::USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionCreateLobby);
	USteamCoreMatchmakingAsyncActionCreateLobby::~USteamCoreMatchmakingAsyncActionCreateLobby() {}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
			{ "RequestLobbyListAsync", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
		{
			FLobbyMatchList Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 2702632852
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
		{
			UObject* WorldContextObject;
			float Timeout;
			USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09* \n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreMatchmakingAsyncActionRequestLobbyList);
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 3337323280
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 2290693610
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionRequestLobbyList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionRequestLobbyList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionRequestLobbyList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData)) }; // 1825795801
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionRequestLobbyList>()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	USteamCoreMatchmakingAsyncActionRequestLobbyList::USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionRequestLobbyList);
	USteamCoreMatchmakingAsyncActionRequestLobbyList::~USteamCoreMatchmakingAsyncActionRequestLobbyList() {}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback)
	{
		P_GET_STRUCT_REF(FJoinLobbyData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreMatchmakingAsyncActionJoinLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback },
			{ "JoinLobbyAsync", &USteamCoreMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms
		{
			FJoinLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3599679146
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamIDLobby;
			float Timeout;
			USteamCoreMatchmakingAsyncActionJoinLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Joins an existing lobby.\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "JoinLobbyAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreMatchmakingAsyncActionJoinLobby);
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback, "HandleCallback" }, // 400328576
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync, "JoinLobbyAsync" }, // 1151749691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionJoinLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionJoinLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionJoinLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback_MetaData)) }; // 1873413213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionJoinLobby>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby()
	{
		if (!Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionJoinLobby>()
	{
		return USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
	}
	USteamCoreMatchmakingAsyncActionJoinLobby::USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionJoinLobby);
	USteamCoreMatchmakingAsyncActionJoinLobby::~USteamCoreMatchmakingAsyncActionJoinLobby() {}
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
	void USteamCoreCreateSession::StaticRegisterNativesUSteamCoreCreateSession()
	{
		UClass* Class = USteamCoreCreateSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSteamCoreSession", &USteamCoreCreateSession::execCreateSteamCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAntiCheatProtected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreCreateSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Creates an online session\n\x09* \n\x09* Automatically detects if we're running a dedicated or listen server\n\x09*\n\x09* Listen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\x09*\n\x09*    @param SessionName\x09\x09\x09\x09\x09\x09\x09Name of our session\n\x09*    @param MaxPlayers\x09\x09\x09\x09\x09\x09\x09Number of public connections\n\x09*    @param bUsesPresence\x09\x09\x09\x09\x09\x09""Create a lobby for the session (disabled for dedicated servers)\n\x09*    @param bUseLAN\x09\x09\x09\x09\x09\x09\x09\x09Used for LAN server\n\x09*    @param bUseLobbiesIfAvailable\x09\x09\x09\x09(4.27 only, Whether to prefer lobbies APIs if the platform supports them)\n\x09*    @param bUseLobbiesVoiceChatIfAvailable\x09\x09(4.27 only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n\x09*    @param\x09Timeout\x09\x09\x09\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
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
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\n   @param SessionName                                                 Name of our session\n   @param MaxPlayers                                                  Number of public connections\n   @param bUsesPresence                                               Create a lobby for the session (disabled for dedicated servers)\n   @param bUseLAN                                                             Used for LAN server\n   @param bUseLobbiesIfAvailable                              (4.27 only, Whether to prefer lobbies APIs if the platform supports them)\n   @param bUseLobbiesVoiceChatIfAvailable             (4.27 only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n   @param     Timeout                                                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreCreateSession, nullptr, "CreateSteamCoreSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreCreateSession);
	UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreCreateSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreCreateSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreCreateSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession, "CreateSteamCoreSession" }, // 68532012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreCreateSession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreCreateSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreCreateSession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreCreateSession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton, Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreCreateSession.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreCreateSession>()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreCreateSession);
	USteamCoreCreateSession::~USteamCoreCreateSession() {}
	struct Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms
		{
			TArray<FSteamSessionResult> Results;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamSessionResult, METADATA_PARAMS(nullptr, 0) }; // 2166608235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData)) }; // 2166608235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "FindSteamSessionsResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USteamCoreFindSession::execOnCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_bSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFindSession::StaticRegisterNativesUSteamCoreFindSession()
	{
		UClass* Class = USteamCoreFindSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSteamCoreSessions", &USteamCoreFindSession::execFindSteamCoreSessions },
			{ "OnCompleted", &USteamCoreFindSession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_ValueProp = { "SearchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) }; // 2709255642
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings_Key_KeyProp = { "SearchSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_SearchSettings = { "SearchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, SearchSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2709255642
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ServerType), Z_Construct_UEnum_SteamCore_ESteamSessionFindType, METADATA_PARAMS(nullptr, 0) }; // 2510680304
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bEmptyServersOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bSecureServersOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFindSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SearchSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Find Online Sessions\n\x09*\n\x09* This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\x09*\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max Number of Servers\n\x09* @param\x09ServerType\x09\x09\x09\x09Search for Listen or Dedicated servers\n\x09* @param\x09""bUseLAN\x09\x09\x09\x09Search for LAN servers only\n\x09* @param\x09""bEmptyServersOnly\x09\x09Only empty servers\n\x09* @param\x09""bSecureServersOnly\x09\x09Only secure servers\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerType", "Listen" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Find Online Sessions\n\nThis is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\n@param        MaxResults                              Max Number of Servers\n@param        ServerType                              Search for Listen or Dedicated servers\n@param        bUseLAN                         Search for LAN servers only\n@param        bEmptyServersOnly               Only empty servers\n@param        bSecureServersOnly              Only secure servers\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "FindSteamCoreSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::SteamCoreFindSession_eventFindSteamCoreSessions_Parms), Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics
	{
		struct SteamCoreFindSession_eventOnCompleted_Parms
		{
			bool bSuccessful;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::SteamCoreFindSession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFindSession);
	UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister()
	{
		return USteamCoreFindSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFindSession_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreFindSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFindSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions, "FindSteamCoreSessions" }, // 3028519393
		{ &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted, "OnCompleted" }, // 2890550092
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFindSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFindSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFindSession, OnCallback), Z_Construct_UDelegateFunction_SteamCore_FindSteamSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback_MetaData)) }; // 822383978
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFindSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFindSession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFindSession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton, Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFindSession.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFindSession>()
	{
		return USteamCoreFindSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFindSession);
	USteamCoreFindSession::~USteamCoreFindSession() {}
	DEFINE_FUNCTION(USteamCoreDestroySession::execOnCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_sessionName,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreDestroySession::StaticRegisterNativesUSteamCoreDestroySession()
	{
		UClass* Class = USteamCoreDestroySession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySteamCoreSession", &USteamCoreDestroySession::execDestroySteamCoreSession },
			{ "OnCompleted", &USteamCoreDestroySession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics
	{
		struct SteamCoreDestroySession_eventDestroySteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			float Timeout;
			USteamCoreDestroySession* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreDestroySession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Destroy an Online Session\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Destroy an Online Session\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "DestroySteamCoreSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::SteamCoreDestroySession_eventDestroySteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics
	{
		struct SteamCoreDestroySession_eventOnCompleted_Parms
		{
			FName sessionName;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_sessionName;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreDestroySession_eventOnCompleted_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::SteamCoreDestroySession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreDestroySession);
	UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreDestroySession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreDestroySession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreDestroySession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession, "DestroySteamCoreSession" }, // 1666739772
		{ &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted, "OnCompleted" }, // 1104391362
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreDestroySession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreDestroySession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreDestroySession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreDestroySession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreDestroySession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreDestroySession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton, Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreDestroySession.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreDestroySession>()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreDestroySession);
	USteamCoreDestroySession::~USteamCoreDestroySession() {}
	DEFINE_FUNCTION(USteamCoreUpdateSession::execOnCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreUpdateSession::StaticRegisterNativesUSteamCoreUpdateSession()
	{
		UClass* Class = USteamCoreUpdateSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompleted", &USteamCoreUpdateSession::execOnCompleted },
			{ "UpdateSteamCoreSession", &USteamCoreUpdateSession::execUpdateSteamCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics
	{
		struct SteamCoreUpdateSession_eventOnCompleted_Parms
		{
			FName SessionName;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUpdateSession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreUpdateSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::SteamCoreUpdateSession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, Settings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3556044493
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, MaxPlayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUpdateSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "CPP_Default_MaxPlayers", "4" },
		{ "CPP_Default_SessionName", "SteamCoreSession" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUpdateSession, nullptr, "UpdateSteamCoreSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::SteamCoreUpdateSession_eventUpdateSteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreUpdateSession);
	UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister()
	{
		return USteamCoreUpdateSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUpdateSession_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUpdateSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUpdateSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_OnCompleted, "OnCompleted" }, // 315231194
		{ &Z_Construct_UFunction_USteamCoreUpdateSession_UpdateSteamCoreSession, "UpdateSteamCoreSession" }, // 1816590762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreUpdateSession, OnCallback), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUpdateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUpdateSession_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUpdateSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUpdateSession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUpdateSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUpdateSession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton, Z_Construct_UClass_USteamCoreUpdateSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreUpdateSession.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUpdateSession>()
	{
		return USteamCoreUpdateSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUpdateSession);
	USteamCoreUpdateSession::~USteamCoreUpdateSession() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionCreateLobby"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionCreateLobby), 3047120751U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionRequestLobbyList"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionRequestLobbyList), 4182603948U) },
		{ Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass, TEXT("USteamCoreMatchmakingAsyncActionJoinLobby"), &Z_Registration_Info_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreMatchmakingAsyncActionJoinLobby), 1334872642U) },
		{ Z_Construct_UClass_USteamCoreCreateSession, USteamCoreCreateSession::StaticClass, TEXT("USteamCoreCreateSession"), &Z_Registration_Info_UClass_USteamCoreCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreCreateSession), 3100594324U) },
		{ Z_Construct_UClass_USteamCoreFindSession, USteamCoreFindSession::StaticClass, TEXT("USteamCoreFindSession"), &Z_Registration_Info_UClass_USteamCoreFindSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFindSession), 109266804U) },
		{ Z_Construct_UClass_USteamCoreDestroySession, USteamCoreDestroySession::StaticClass, TEXT("USteamCoreDestroySession"), &Z_Registration_Info_UClass_USteamCoreDestroySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreDestroySession), 2232017158U) },
		{ Z_Construct_UClass_USteamCoreUpdateSession, USteamCoreUpdateSession::StaticClass, TEXT("USteamCoreUpdateSession"), &Z_Registration_Info_UClass_USteamCoreUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUpdateSession), 2204657922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_2857814889(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
