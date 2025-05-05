// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUser/SteamUserTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFailureType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVoiceResult;
	static UEnum* ESteamVoiceResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVoiceResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVoiceResult"));
		}
		return Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamVoiceResult>()
	{
		return ESteamVoiceResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enumerators[] = {
		{ "ESteamVoiceResult::OK", (int64)ESteamVoiceResult::OK },
		{ "ESteamVoiceResult::NotInitialized", (int64)ESteamVoiceResult::NotInitialized },
		{ "ESteamVoiceResult::NotRecording", (int64)ESteamVoiceResult::NotRecording },
		{ "ESteamVoiceResult::NoData", (int64)ESteamVoiceResult::NoData },
		{ "ESteamVoiceResult::BufferTooSmall", (int64)ESteamVoiceResult::BufferTooSmall },
		{ "ESteamVoiceResult::DataCorrupted", (int64)ESteamVoiceResult::DataCorrupted },
		{ "ESteamVoiceResult::Restricted", (int64)ESteamVoiceResult::Restricted },
		{ "ESteamVoiceResult::UnsupportedCodec", (int64)ESteamVoiceResult::UnsupportedCodec },
		{ "ESteamVoiceResult::ReceiverOutOfDate", (int64)ESteamVoiceResult::ReceiverOutOfDate },
		{ "ESteamVoiceResult::ReceiverDidNotAnswer", (int64)ESteamVoiceResult::ReceiverDidNotAnswer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BufferTooSmall.Name", "ESteamVoiceResult::BufferTooSmall" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "DataCorrupted.Name", "ESteamVoiceResult::DataCorrupted" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
		{ "NoData.Name", "ESteamVoiceResult::NoData" },
		{ "NotInitialized.Name", "ESteamVoiceResult::NotInitialized" },
		{ "NotRecording.Name", "ESteamVoiceResult::NotRecording" },
		{ "OK.Name", "ESteamVoiceResult::OK" },
		{ "ReceiverDidNotAnswer.Name", "ESteamVoiceResult::ReceiverDidNotAnswer" },
		{ "ReceiverOutOfDate.Name", "ESteamVoiceResult::ReceiverOutOfDate" },
		{ "Restricted.Name", "ESteamVoiceResult::Restricted" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "UnsupportedCodec.Name", "ESteamVoiceResult::UnsupportedCodec" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamVoiceResult",
		"ESteamVoiceResult",
		Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult()
	{
		if (!Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFailureType;
	static UEnum* ESteamFailureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFailureType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFailureType"));
		}
		return Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFailureType>()
	{
		return ESteamFailureType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enumerators[] = {
		{ "ESteamFailureType::FlushedCallbackQueue", (int64)ESteamFailureType::FlushedCallbackQueue },
		{ "ESteamFailureType::PipeFail", (int64)ESteamFailureType::PipeFail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlushedCallbackQueue.Name", "ESteamFailureType::FlushedCallbackQueue" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
		{ "PipeFail.Name", "ESteamFailureType::PipeFail" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamFailureType",
		"ESteamFailureType",
		Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFailureType()
	{
		if (!Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamFailureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientGameServerDeny;
class UScriptStruct* FClientGameServerDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientGameServerDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientGameServerDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGameServerDeny, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ClientGameServerDeny"));
	}
	return Z_Registration_Info_UScriptStruct_ClientGameServerDeny.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FClientGameServerDeny>()
{
	return FClientGameServerDeny::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientGameServerDeny_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGameServerDeny>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientGameServerDeny, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientGameServerDeny, GameServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientGameServerDeny, GameServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FClientGameServerDeny*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClientGameServerDeny), &Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientGameServerDeny, Reason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData)) }; // 2699660404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ClientGameServerDeny",
		sizeof(FClientGameServerDeny),
		alignof(FClientGameServerDeny),
		Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientGameServerDeny.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientGameServerDeny.InnerSingleton, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientGameServerDeny.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameWebCallback;
class UScriptStruct* FGameWebCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameWebCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameWebCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameWebCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GameWebCallback"));
	}
	return Z_Registration_Info_UScriptStruct_GameWebCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameWebCallback>()
{
	return FGameWebCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameWebCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameWebCallback>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameWebCallback, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameWebCallback",
		sizeof(FGameWebCallback),
		alignof(FGameWebCallback),
		Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_GameWebCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameWebCallback.InnerSingleton, Z_Construct_UScriptStruct_FGameWebCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameWebCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse;
class UScriptStruct* FGetAuthSessionTicketResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GetAuthSessionTicketResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetAuthSessionTicketResponse>()
{
	return FGetAuthSessionTicketResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthTicket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAuthSessionTicketResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetAuthSessionTicketResponse, AuthTicket), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData)) }; // 1818574373
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetAuthSessionTicketResponse, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetAuthSessionTicketResponse",
		sizeof(FGetAuthSessionTicketResponse),
		alignof(FGetAuthSessionTicketResponse),
		Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IPCFailure;
class UScriptStruct* FIPCFailure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IPCFailure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IPCFailure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCFailure, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCFailure"));
	}
	return Z_Registration_Info_UScriptStruct_IPCFailure.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FIPCFailure>()
{
	return FIPCFailure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIPCFailure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIPCFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCFailure>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIPCFailure, FailureType), Z_Construct_UEnum_SteamCore_ESteamFailureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData)) }; // 2302806811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"IPCFailure",
		sizeof(FIPCFailure),
		alignof(FIPCFailure),
		Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure()
	{
		if (!Z_Registration_Info_UScriptStruct_IPCFailure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IPCFailure.InnerSingleton, Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IPCFailure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LicensesUpdated;
class UScriptStruct* FLicensesUpdated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LicensesUpdated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LicensesUpdated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicensesUpdated, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LicensesUpdated"));
	}
	return Z_Registration_Info_UScriptStruct_LicensesUpdated.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLicensesUpdated>()
{
	return FLicensesUpdated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLicensesUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLicensesUpdated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicensesUpdated>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicensesUpdated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LicensesUpdated",
		sizeof(FLicensesUpdated),
		alignof(FLicensesUpdated),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated()
	{
		if (!Z_Registration_Info_UScriptStruct_LicensesUpdated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LicensesUpdated.InnerSingleton, Z_Construct_UScriptStruct_FLicensesUpdated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LicensesUpdated.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse;
class UScriptStruct* FMicroTxnAuthorizationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("MicroTxnAuthorizationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FMicroTxnAuthorizationResponse>()
{
	return FMicroTxnAuthorizationResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrderID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAuthorized_MetaData[];
#endif
		static void NewProp_bAuthorized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthorized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMicroTxnAuthorizationResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, OrderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit(void* Obj)
	{
		((FMicroTxnAuthorizationResponse*)Obj)->bAuthorized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized = { "bAuthorized", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMicroTxnAuthorizationResponse), &Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"MicroTxnAuthorizationResponse",
		sizeof(FMicroTxnAuthorizationResponse),
		alignof(FMicroTxnAuthorizationResponse),
		Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.InnerSingleton, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamServersConnected;
class UScriptStruct* FSteamServersConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServersConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamServersConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersConnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServersConnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamServersConnected.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServersConnected>()
{
	return FSteamServersConnected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamServersConnected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServersConnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersConnected>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersConnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServersConnected",
		sizeof(FSteamServersConnected),
		alignof(FSteamServersConnected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamServersConnected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamServersConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamServersConnected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamServersConnected.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamServerConnectFailure;
class UScriptStruct* FSteamServerConnectFailure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerConnectFailure, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerConnectFailure"));
	}
	return Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerConnectFailure>()
{
	return FSteamServerConnectFailure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStillRetrying_MetaData[];
#endif
		static void NewProp_bStillRetrying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStillRetrying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerConnectFailure>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerConnectFailure, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit(void* Obj)
	{
		((FSteamServerConnectFailure*)Obj)->bStillRetrying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying = { "bStillRetrying", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamServerConnectFailure), &Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerConnectFailure",
		sizeof(FSteamServerConnectFailure),
		alignof(FSteamServerConnectFailure),
		Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.InnerSingleton, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamServerConnectFailure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamServersDisconnected;
class UScriptStruct* FSteamServersDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServersDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamServersDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersDisconnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServersDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamServersDisconnected.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServersDisconnected>()
{
	return FSteamServersDisconnected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersDisconnected>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServersDisconnected, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServersDisconnected",
		sizeof(FSteamServersDisconnected),
		alignof(FSteamServersDisconnected),
		Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamServersDisconnected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamServersDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamServersDisconnected.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse;
class UScriptStruct* FEncryptedAppTicketResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("EncryptedAppTicketResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FEncryptedAppTicketResponse>()
{
	return FEncryptedAppTicketResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncryptedAppTicketResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEncryptedAppTicketResponse, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"EncryptedAppTicketResponse",
		sizeof(FEncryptedAppTicketResponse),
		alignof(FEncryptedAppTicketResponse),
		Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.InnerSingleton, Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoreAuthURLResponse;
class UScriptStruct* FStoreAuthURLResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreAuthURLResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("StoreAuthURLResponse"));
	}
	return Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FStoreAuthURLResponse>()
{
	return FStoreAuthURLResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreAuthURLResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStoreAuthURLResponse, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"StoreAuthURLResponse",
		sizeof(FStoreAuthURLResponse),
		alignof(FStoreAuthURLResponse),
		Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.InnerSingleton, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StoreAuthURLResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnClientGameServerDeny_Parms
		{
			FClientGameServerDeny Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnClientGameServerDeny_Parms, Data), Z_Construct_UScriptStruct_FClientGameServerDeny, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2069083153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnClientGameServerDeny__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::_Script_SteamCore_eventOnClientGameServerDeny_Parms), Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClientGameServerDeny_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDeny, FClientGameServerDeny const& Data)
{
	struct _Script_SteamCore_eventOnClientGameServerDeny_Parms
	{
		FClientGameServerDeny Data;
	};
	_Script_SteamCore_eventOnClientGameServerDeny_Parms Parms;
	Parms.Data=Data;
	OnClientGameServerDeny.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGameWebCallback_Parms
		{
			FGameWebCallback Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGameWebCallback_Parms, Data), Z_Construct_UScriptStruct_FGameWebCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 513405389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGameWebCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::_Script_SteamCore_eventOnGameWebCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGameWebCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallback, FGameWebCallback const& Data)
{
	struct _Script_SteamCore_eventOnGameWebCallback_Parms
	{
		FGameWebCallback Data;
	};
	_Script_SteamCore_eventOnGameWebCallback_Parms Parms;
	Parms.Data=Data;
	OnGameWebCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms
		{
			FGetAuthSessionTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2068438175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetAuthSessionTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetAuthSessionTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponse, FGetAuthSessionTicketResponse const& Data)
{
	struct _Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms
	{
		FGetAuthSessionTicketResponse Data;
	};
	_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnGetAuthSessionTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnIPCFailure_Parms
		{
			FIPCFailure Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnIPCFailure_Parms, Data), Z_Construct_UScriptStruct_FIPCFailure, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1097752918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIPCFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::_Script_SteamCore_eventOnIPCFailure_Parms), Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnIPCFailure_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailure, FIPCFailure const& Data)
{
	struct _Script_SteamCore_eventOnIPCFailure_Parms
	{
		FIPCFailure Data;
	};
	_Script_SteamCore_eventOnIPCFailure_Parms Parms;
	Parms.Data=Data;
	OnIPCFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLicensesUpdated_Parms
		{
			FLicensesUpdated Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLicensesUpdated_Parms, Data), Z_Construct_UScriptStruct_FLicensesUpdated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2959261016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLicensesUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnLicensesUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLicensesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdated, FLicensesUpdated const& Data)
{
	struct _Script_SteamCore_eventOnLicensesUpdated_Parms
	{
		FLicensesUpdated Data;
	};
	_Script_SteamCore_eventOnLicensesUpdated_Parms Parms;
	Parms.Data=Data;
	OnLicensesUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms
		{
			FMicroTxnAuthorizationResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms, Data), Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3093423448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnMicroTxnAuthorizationResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMicroTxnAuthorizationResponse_DelegateWrapper(const FMulticastScriptDelegate& OnMicroTxnAuthorizationResponse, FMicroTxnAuthorizationResponse const& Data)
{
	struct _Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms
	{
		FMicroTxnAuthorizationResponse Data;
	};
	_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms Parms;
	Parms.Data=Data;
	OnMicroTxnAuthorizationResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServersConnected_Parms
		{
			FSteamServersConnected Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServersConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamServersConnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1713857558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServersConnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamServersConnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServersConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnected, FSteamServersConnected const& Data)
{
	struct _Script_SteamCore_eventOnSteamServersConnected_Parms
	{
		FSteamServersConnected Data;
	};
	_Script_SteamCore_eventOnSteamServersConnected_Parms Parms;
	Parms.Data=Data;
	OnSteamServersConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServerConnectFailure_Parms
		{
			FSteamServerConnectFailure Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServerConnectFailure_Parms, Data), Z_Construct_UScriptStruct_FSteamServerConnectFailure, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3971412442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServerConnectFailure__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamServerConnectFailure_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServerConnectFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailure, FSteamServerConnectFailure const& Data)
{
	struct _Script_SteamCore_eventOnSteamServerConnectFailure_Parms
	{
		FSteamServerConnectFailure Data;
	};
	_Script_SteamCore_eventOnSteamServerConnectFailure_Parms Parms;
	Parms.Data=Data;
	OnSteamServerConnectFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServersDisconnected_Parms
		{
			FSteamServersDisconnected Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServersDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamServersDisconnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1273789973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServersDisconnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamServersDisconnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServersDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnected, FSteamServersDisconnected const& Data)
{
	struct _Script_SteamCore_eventOnSteamServersDisconnected_Parms
	{
		FSteamServersDisconnected Data;
	};
	_Script_SteamCore_eventOnSteamServersDisconnected_Parms Parms;
	Parms.Data=Data;
	OnSteamServersDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnValidateAuthTicketResponse_Parms
		{
			FValidateAuthTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 413646202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnValidateAuthTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data)
{
	struct _Script_SteamCore_eventOnValidateAuthTicketResponse_Parms
	{
		FValidateAuthTicketResponse Data;
	};
	_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms
		{
			FEncryptedAppTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3467077057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEncryptedAppTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestEncryptedAppTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEncryptedAppTicketResponse, FEncryptedAppTicketResponse const& Data)
{
	struct _Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms
	{
		FEncryptedAppTicketResponse Data;
	};
	_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnRequestEncryptedAppTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3467077057
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEncryptedAppTicket__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestEncryptedAppTicket_DelegateWrapper(const FScriptDelegate& OnRequestEncryptedAppTicket, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEncryptedAppTicket.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnStoreAuthURLResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnStoreAuthURLResponse_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2176716195
	void Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnStoreAuthURLResponse_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnStoreAuthURLResponse_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnStoreAuthURLResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnStoreAuthURLResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoreAuthURLResponse_DelegateWrapper(const FScriptDelegate& OnStoreAuthURLResponse, FStoreAuthURLResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnStoreAuthURLResponse_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnStoreAuthURLResponse_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnStoreAuthURLResponse.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::EnumInfo[] = {
		{ ESteamVoiceResult_StaticEnum, TEXT("ESteamVoiceResult"), &Z_Registration_Info_UEnum_ESteamVoiceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2544043136U) },
		{ ESteamFailureType_StaticEnum, TEXT("ESteamFailureType"), &Z_Registration_Info_UEnum_ESteamFailureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2302806811U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::ScriptStructInfo[] = {
		{ FClientGameServerDeny::StaticStruct, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewStructOps, TEXT("ClientGameServerDeny"), &Z_Registration_Info_UScriptStruct_ClientGameServerDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientGameServerDeny), 2069083153U) },
		{ FGameWebCallback::StaticStruct, Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewStructOps, TEXT("GameWebCallback"), &Z_Registration_Info_UScriptStruct_GameWebCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameWebCallback), 513405389U) },
		{ FGetAuthSessionTicketResponse::StaticStruct, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewStructOps, TEXT("GetAuthSessionTicketResponse"), &Z_Registration_Info_UScriptStruct_GetAuthSessionTicketResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetAuthSessionTicketResponse), 2068438175U) },
		{ FIPCFailure::StaticStruct, Z_Construct_UScriptStruct_FIPCFailure_Statics::NewStructOps, TEXT("IPCFailure"), &Z_Registration_Info_UScriptStruct_IPCFailure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIPCFailure), 1097752918U) },
		{ FLicensesUpdated::StaticStruct, Z_Construct_UScriptStruct_FLicensesUpdated_Statics::NewStructOps, TEXT("LicensesUpdated"), &Z_Registration_Info_UScriptStruct_LicensesUpdated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLicensesUpdated), 2959261016U) },
		{ FMicroTxnAuthorizationResponse::StaticStruct, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewStructOps, TEXT("MicroTxnAuthorizationResponse"), &Z_Registration_Info_UScriptStruct_MicroTxnAuthorizationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMicroTxnAuthorizationResponse), 3093423448U) },
		{ FSteamServersConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamServersConnected_Statics::NewStructOps, TEXT("SteamServersConnected"), &Z_Registration_Info_UScriptStruct_SteamServersConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServersConnected), 1713857558U) },
		{ FSteamServerConnectFailure::StaticStruct, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewStructOps, TEXT("SteamServerConnectFailure"), &Z_Registration_Info_UScriptStruct_SteamServerConnectFailure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServerConnectFailure), 3971412442U) },
		{ FSteamServersDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewStructOps, TEXT("SteamServersDisconnected"), &Z_Registration_Info_UScriptStruct_SteamServersDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServersDisconnected), 1273789973U) },
		{ FEncryptedAppTicketResponse::StaticStruct, Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewStructOps, TEXT("EncryptedAppTicketResponse"), &Z_Registration_Info_UScriptStruct_EncryptedAppTicketResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncryptedAppTicketResponse), 3467077057U) },
		{ FStoreAuthURLResponse::StaticStruct, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewStructOps, TEXT("StoreAuthURLResponse"), &Z_Registration_Info_UScriptStruct_StoreAuthURLResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoreAuthURLResponse), 2176716195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_708581916(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
