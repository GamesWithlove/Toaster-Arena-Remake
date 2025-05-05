// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameServerStats/SteamGameServerStatsTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameServerStatsTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsReceived();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsStored();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsUnloaded();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSStatsReceived;
class UScriptStruct* FGSStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_GSStatsReceived.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSStatsReceived>()
{
	return FGSStatsReceived::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSStatsReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsReceived>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSStatsReceived, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSStatsReceived",
		sizeof(FGSStatsReceived),
		alignof(FGSStatsReceived),
		Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSStatsReceived()
	{
		if (!Z_Registration_Info_UScriptStruct_GSStatsReceived.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsReceived_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSStatsReceived.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSStatsStored;
class UScriptStruct* FGSStatsStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSStatsStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSStatsStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsStored, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSStatsStored"));
	}
	return Z_Registration_Info_UScriptStruct_GSStatsStored.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSStatsStored>()
{
	return FGSStatsStored::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSStatsStored_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsStored>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSStatsStored, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSStatsStored, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSStatsStored",
		sizeof(FGSStatsStored),
		alignof(FGSStatsStored),
		Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSStatsStored()
	{
		if (!Z_Registration_Info_UScriptStruct_GSStatsStored.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSStatsStored.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsStored_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSStatsStored.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSStatsUnloaded;
class UScriptStruct* FGSStatsUnloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSStatsUnloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSStatsUnloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsUnloaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSStatsUnloaded"));
	}
	return Z_Registration_Info_UScriptStruct_GSStatsUnloaded.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSStatsUnloaded>()
{
	return FGSStatsUnloaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsUnloaded>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSStatsUnloaded",
		sizeof(FGSStatsUnloaded),
		alignof(FGSStatsUnloaded),
		Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSStatsUnloaded()
	{
		if (!Z_Registration_Info_UScriptStruct_GSStatsUnloaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSStatsUnloaded.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSStatsUnloaded.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerRequestUserStats_Parms
		{
			FGSStatsReceived Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRequestUserStats_Parms, Data), Z_Construct_UScriptStruct_FGSStatsReceived, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2669981537
	void Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRequestUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRequestUserStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRequestUserStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerRequestUserStats_DelegateWrapper(const FScriptDelegate& OnServerRequestUserStats, FGSStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnServerRequestUserStats_Parms
	{
		FGSStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnServerRequestUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRequestUserStats.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerStoreUserStats_Parms
		{
			FGSStatsStored Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnServerStoreUserStats_Parms, Data), Z_Construct_UScriptStruct_FGSStatsStored, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2766538239
	void Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerStoreUserStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerStoreUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerStoreUserStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::_Script_SteamCore_eventOnServerStoreUserStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnServerStoreUserStats_Parms
	{
		FGSStatsStored Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnServerStoreUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerStoreUserStats.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSStatsUnloaded_Parms
		{
			FGSStatsUnloaded Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSStatsUnloaded_Parms, Data), Z_Construct_UScriptStruct_FGSStatsUnloaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2349342069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSStatsUnloaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::_Script_SteamCore_eventOnGSStatsUnloaded_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& Data)
{
	struct _Script_SteamCore_eventOnGSStatsUnloaded_Parms
	{
		FGSStatsUnloaded Data;
	};
	_Script_SteamCore_eventOnGSStatsUnloaded_Parms Parms;
	Parms.Data=Data;
	OnGSStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_Statics::ScriptStructInfo[] = {
		{ FGSStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewStructOps, TEXT("GSStatsReceived"), &Z_Registration_Info_UScriptStruct_GSStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsReceived), 2669981537U) },
		{ FGSStatsStored::StaticStruct, Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewStructOps, TEXT("GSStatsStored"), &Z_Registration_Info_UScriptStruct_GSStatsStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsStored), 2766538239U) },
		{ FGSStatsUnloaded::StaticStruct, Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewStructOps, TEXT("GSStatsUnloaded"), &Z_Registration_Info_UScriptStruct_GSStatsUnloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsUnloaded), 2349342069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_40911449(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
