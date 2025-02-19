// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamNetworking/SteamNetworkingTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamP2PSend;
	static UEnum* ESteamP2PSend_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamP2PSend, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamP2PSend"));
		}
		return Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSend>()
	{
		return ESteamP2PSend_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enumerators[] = {
		{ "ESteamP2PSend::Unreliable", (int64)ESteamP2PSend::Unreliable },
		{ "ESteamP2PSend::UnreliableNoDelay", (int64)ESteamP2PSend::UnreliableNoDelay },
		{ "ESteamP2PSend::Reliable", (int64)ESteamP2PSend::Reliable },
		{ "ESteamP2PSend::ReliableWithBuffering", (int64)ESteamP2PSend::ReliableWithBuffering },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "Reliable.Name", "ESteamP2PSend::Reliable" },
		{ "ReliableWithBuffering.Name", "ESteamP2PSend::ReliableWithBuffering" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Unreliable.Name", "ESteamP2PSend::Unreliable" },
		{ "UnreliableNoDelay.Name", "ESteamP2PSend::UnreliableNoDelay" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamP2PSend",
		"ESteamP2PSend",
		Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend()
	{
		if (!Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamP2PSend_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamP2PSessionError;
	static UEnum* ESteamP2PSessionError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamP2PSessionError"));
		}
		return Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSessionError>()
	{
		return ESteamP2PSessionError_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enumerators[] = {
		{ "ESteamP2PSessionError::None", (int64)ESteamP2PSessionError::None },
		{ "ESteamP2PSessionError::NotRunningApp", (int64)ESteamP2PSessionError::NotRunningApp },
		{ "ESteamP2PSessionError::NoRightsToApp", (int64)ESteamP2PSessionError::NoRightsToApp },
		{ "ESteamP2PSessionError::DestinationNotLoggedIn", (int64)ESteamP2PSessionError::DestinationNotLoggedIn },
		{ "ESteamP2PSessionError::Timeout", (int64)ESteamP2PSessionError::Timeout },
		{ "ESteamP2PSessionError::Max", (int64)ESteamP2PSessionError::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DestinationNotLoggedIn.Name", "ESteamP2PSessionError::DestinationNotLoggedIn" },
		{ "Max.Name", "ESteamP2PSessionError::Max" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "None.Name", "ESteamP2PSessionError::None" },
		{ "NoRightsToApp.Name", "ESteamP2PSessionError::NoRightsToApp" },
		{ "NotRunningApp.Name", "ESteamP2PSessionError::NotRunningApp" },
		{ "Timeout.Name", "ESteamP2PSessionError::Timeout" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamP2PSessionError",
		"ESteamP2PSessionError",
		Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError()
	{
		if (!Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamP2PSessionError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamP2PSessionState;
class UScriptStruct* FSteamP2PSessionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamP2PSessionState, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamP2PSessionState"));
	}
	return Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamP2PSessionState>()
{
	return FSteamP2PSessionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConnectionActive_MetaData[];
#endif
		static void NewProp_bConnectionActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConnecting_MetaData[];
#endif
		static void NewProp_bConnecting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnecting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingRelay_MetaData[];
#endif
		static void NewProp_bUsingRelay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingRelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BytesQueuedForSend_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesQueuedForSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacketsQueuedForSend_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PacketsQueuedForSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemotePort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamP2PSessionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bConnectionActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive = { "bConnectionActive", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bConnecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting = { "bConnecting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamP2PSessionState, P2PSessionError), Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData)) }; // 2079578591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bUsingRelay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay = { "bUsingRelay", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend = { "BytesQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamP2PSessionState, BytesQueuedForSend), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend = { "PacketsQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamP2PSessionState, PacketsQueuedForSend), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamP2PSessionState, RemoteIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamP2PSessionState, RemotePort), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamP2PSessionState",
		sizeof(FSteamP2PSessionState),
		alignof(FSteamP2PSessionState),
		Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton, Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_P2PSessionRequest;
class UScriptStruct* FP2PSessionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionRequest, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("P2PSessionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FP2PSessionRequest>()
{
	return FP2PSessionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FP2PSessionRequest, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"P2PSessionRequest",
		sizeof(FP2PSessionRequest),
		alignof(FP2PSessionRequest),
		Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton, Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_P2PSessionConnectFail;
class UScriptStruct* FP2PSessionConnectFail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionConnectFail, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("P2PSessionConnectFail"));
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FP2PSessionConnectFail>()
{
	return FP2PSessionConnectFail::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionConnectFail>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FP2PSessionConnectFail, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FP2PSessionConnectFail, P2PSessionError), Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData)) }; // 2079578591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"P2PSessionConnectFail",
		sizeof(FP2PSessionConnectFail),
		alignof(FP2PSessionConnectFail),
		Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail()
	{
		if (!Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton, Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnP2PSessionRequest_Parms
		{
			FP2PSessionRequest Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnP2PSessionRequest_Parms, Data), Z_Construct_UScriptStruct_FP2PSessionRequest, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2585263176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnP2PSessionRequest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::_Script_SteamCore_eventOnP2PSessionRequest_Parms), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& Data)
{
	struct _Script_SteamCore_eventOnP2PSessionRequest_Parms
	{
		FP2PSessionRequest Data;
	};
	_Script_SteamCore_eventOnP2PSessionRequest_Parms Parms;
	Parms.Data=Data;
	OnP2PSessionRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnP2PSessionConnectFail_Parms
		{
			FP2PSessionConnectFail Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnP2PSessionConnectFail_Parms, Data), Z_Construct_UScriptStruct_FP2PSessionConnectFail, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1844705130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnP2PSessionConnectFail__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::_Script_SteamCore_eventOnP2PSessionConnectFail_Parms), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& Data)
{
	struct _Script_SteamCore_eventOnP2PSessionConnectFail_Parms
	{
		FP2PSessionConnectFail Data;
	};
	_Script_SteamCore_eventOnP2PSessionConnectFail_Parms Parms;
	Parms.Data=Data;
	OnP2PSessionConnectFail.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::EnumInfo[] = {
		{ ESteamP2PSend_StaticEnum, TEXT("ESteamP2PSend"), &Z_Registration_Info_UEnum_ESteamP2PSend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3042410472U) },
		{ ESteamP2PSessionError_StaticEnum, TEXT("ESteamP2PSessionError"), &Z_Registration_Info_UEnum_ESteamP2PSessionError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2079578591U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamP2PSessionState::StaticStruct, Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewStructOps, TEXT("SteamP2PSessionState"), &Z_Registration_Info_UScriptStruct_SteamP2PSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamP2PSessionState), 2720587774U) },
		{ FP2PSessionRequest::StaticStruct, Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewStructOps, TEXT("P2PSessionRequest"), &Z_Registration_Info_UScriptStruct_P2PSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FP2PSessionRequest), 2585263176U) },
		{ FP2PSessionConnectFail::StaticStruct, Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewStructOps, TEXT("P2PSessionConnectFail"), &Z_Registration_Info_UScriptStruct_P2PSessionConnectFail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FP2PSessionConnectFail), 1844705130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_1931246812(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
