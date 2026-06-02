// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamTypes.h"
#include "FindSessionsCallbackProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamTypes() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAttributeType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamComparisonOp();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamAttributeType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAttributeType;
static UEnum* ESteamAttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamAttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAttributeType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAttributeType"));
	}
	return Z_Registration_Info_UEnum_ESteamAttributeType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamAttributeType>()
{
	return ESteamAttributeType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Global enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "INTEGER.Name", "ESteamAttributeType::INTEGER" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NOT_SET.Name", "ESteamAttributeType::NOT_SET" },
		{ "STRING.Name", "ESteamAttributeType::STRING" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Global enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamAttributeType::NOT_SET", (int64)ESteamAttributeType::NOT_SET },
		{ "ESteamAttributeType::INTEGER", (int64)ESteamAttributeType::INTEGER },
		{ "ESteamAttributeType::STRING", (int64)ESteamAttributeType::STRING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamAttributeType",
	"ESteamAttributeType",
	Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamAttributeType()
{
	if (!Z_Registration_Info_UEnum_ESteamAttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAttributeType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamAttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamAttributeType.InnerSingleton;
}
// ********** End Enum ESteamAttributeType *********************************************************

// ********** Begin Enum ESteamComparisonOp ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamComparisonOp;
static UEnum* ESteamComparisonOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamComparisonOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamComparisonOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamComparisonOp, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamComparisonOp"));
	}
	return Z_Registration_Info_UEnum_ESteamComparisonOp.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamComparisonOp>()
{
	return ESteamComparisonOp_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equals.Name", "ESteamComparisonOp::Equals" },
		{ "GreaterThan.Name", "ESteamComparisonOp::GreaterThan" },
		{ "GreaterThanEquals.Name", "ESteamComparisonOp::GreaterThanEquals" },
		{ "In.Name", "ESteamComparisonOp::In" },
		{ "LessThan.Name", "ESteamComparisonOp::LessThan" },
		{ "LessThanEquals.Name", "ESteamComparisonOp::LessThanEquals" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "Near.Name", "ESteamComparisonOp::Near" },
		{ "NotEquals.Name", "ESteamComparisonOp::NotEquals" },
		{ "NotIn.Name", "ESteamComparisonOp::NotIn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamComparisonOp::Equals", (int64)ESteamComparisonOp::Equals },
		{ "ESteamComparisonOp::NotEquals", (int64)ESteamComparisonOp::NotEquals },
		{ "ESteamComparisonOp::GreaterThan", (int64)ESteamComparisonOp::GreaterThan },
		{ "ESteamComparisonOp::GreaterThanEquals", (int64)ESteamComparisonOp::GreaterThanEquals },
		{ "ESteamComparisonOp::LessThan", (int64)ESteamComparisonOp::LessThan },
		{ "ESteamComparisonOp::LessThanEquals", (int64)ESteamComparisonOp::LessThanEquals },
		{ "ESteamComparisonOp::Near", (int64)ESteamComparisonOp::Near },
		{ "ESteamComparisonOp::In", (int64)ESteamComparisonOp::In },
		{ "ESteamComparisonOp::NotIn", (int64)ESteamComparisonOp::NotIn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamComparisonOp",
	"ESteamComparisonOp",
	Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamComparisonOp()
{
	if (!Z_Registration_Info_UEnum_ESteamComparisonOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamComparisonOp.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamComparisonOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamComparisonOp.InnerSingleton;
}
// ********** End Enum ESteamComparisonOp **********************************************************

// ********** Begin Enum ESteamMessageType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamMessageType;
static UEnum* ESteamMessageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamMessageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamMessageType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamMessageType"));
	}
	return Z_Registration_Info_UEnum_ESteamMessageType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamMessageType>()
{
	return ESteamMessageType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMessage.Name", "ESteamMessageType::EMessage" },
		{ "ENotification.Name", "ESteamMessageType::ENotification" },
		{ "EWarning.Name", "ESteamMessageType::EWarning" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamMessageType::ENotification", (int64)ESteamMessageType::ENotification },
		{ "ESteamMessageType::EMessage", (int64)ESteamMessageType::EMessage },
		{ "ESteamMessageType::EWarning", (int64)ESteamMessageType::EWarning },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamMessageType",
	"ESteamMessageType",
	Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType()
{
	if (!Z_Registration_Info_UEnum_ESteamMessageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamMessageType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamMessageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamMessageType.InnerSingleton;
}
// ********** End Enum ESteamMessageType ***********************************************************

// ********** Begin Enum EOnlineComparison *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineComparison;
static UEnum* EOnlineComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnlineComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnlineComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_EOnlineComparison, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("EOnlineComparison"));
	}
	return Z_Registration_Info_UEnum_EOnlineComparison.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOnlineComparison>()
{
	return EOnlineComparison_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equals.Name", "EOnlineComparison::Equals" },
		{ "GreaterThan.Name", "EOnlineComparison::GreaterThan" },
		{ "GreaterThanEquals.Name", "EOnlineComparison::GreaterThanEquals" },
		{ "LessThan.Name", "EOnlineComparison::LessThan" },
		{ "LessThanEquals.Name", "EOnlineComparison::LessThanEquals" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NotEquals.Name", "EOnlineComparison::NotEquals" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnlineComparison::Equals", (int64)EOnlineComparison::Equals },
		{ "EOnlineComparison::NotEquals", (int64)EOnlineComparison::NotEquals },
		{ "EOnlineComparison::GreaterThan", (int64)EOnlineComparison::GreaterThan },
		{ "EOnlineComparison::GreaterThanEquals", (int64)EOnlineComparison::GreaterThanEquals },
		{ "EOnlineComparison::LessThan", (int64)EOnlineComparison::LessThan },
		{ "EOnlineComparison::LessThanEquals", (int64)EOnlineComparison::LessThanEquals },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"EOnlineComparison",
	"EOnlineComparison",
	Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison()
{
	if (!Z_Registration_Info_UEnum_EOnlineComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineComparison.InnerSingleton, Z_Construct_UEnum_SteamCore_EOnlineComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnlineComparison.InnerSingleton;
}
// ********** End Enum EOnlineComparison ***********************************************************

// ********** Begin Enum ESteamDenyReason **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamDenyReason;
static UEnum* ESteamDenyReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamDenyReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamDenyReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamDenyReason, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamDenyReason"));
	}
	return Z_Registration_Info_UEnum_ESteamDenyReason.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamDenyReason>()
{
	return ESteamDenyReason_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cheater.Name", "ESteamDenyReason::Cheater" },
		{ "Generic.Name", "ESteamDenyReason::Generic" },
		{ "IncompatibleAnticheat.Name", "ESteamDenyReason::IncompatibleAnticheat" },
		{ "IncompatibleSoftware.Name", "ESteamDenyReason::IncompatibleSoftware" },
		{ "Invalid.Name", "ESteamDenyReason::Invalid" },
		{ "InvalidVersion.Name", "ESteamDenyReason::InvalidVersion" },
		{ "LoggedInElseWhere.Name", "ESteamDenyReason::LoggedInElseWhere" },
		{ "MemoryCorruption.Name", "ESteamDenyReason::MemoryCorruption" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NoLicense.Name", "ESteamDenyReason::NoLicense" },
		{ "NotLoggedOn.Name", "ESteamDenyReason::NotLoggedOn" },
		{ "SteamConnectionError.Name", "ESteamDenyReason::SteamConnectionError" },
		{ "SteamConnectionLost.Name", "ESteamDenyReason::SteamConnectionLost" },
		{ "SteamOwnerLeftGuestUser.Name", "ESteamDenyReason::SteamOwnerLeftGuestUser" },
		{ "SteamResponseTimedOut.Name", "ESteamDenyReason::SteamResponseTimedOut" },
		{ "SteamValidationStalled.Name", "ESteamDenyReason::SteamValidationStalled" },
		{ "UnknownText.Name", "ESteamDenyReason::UnknownText" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamDenyReason::Invalid", (int64)ESteamDenyReason::Invalid },
		{ "ESteamDenyReason::InvalidVersion", (int64)ESteamDenyReason::InvalidVersion },
		{ "ESteamDenyReason::Generic", (int64)ESteamDenyReason::Generic },
		{ "ESteamDenyReason::NotLoggedOn", (int64)ESteamDenyReason::NotLoggedOn },
		{ "ESteamDenyReason::NoLicense", (int64)ESteamDenyReason::NoLicense },
		{ "ESteamDenyReason::Cheater", (int64)ESteamDenyReason::Cheater },
		{ "ESteamDenyReason::LoggedInElseWhere", (int64)ESteamDenyReason::LoggedInElseWhere },
		{ "ESteamDenyReason::UnknownText", (int64)ESteamDenyReason::UnknownText },
		{ "ESteamDenyReason::IncompatibleAnticheat", (int64)ESteamDenyReason::IncompatibleAnticheat },
		{ "ESteamDenyReason::MemoryCorruption", (int64)ESteamDenyReason::MemoryCorruption },
		{ "ESteamDenyReason::IncompatibleSoftware", (int64)ESteamDenyReason::IncompatibleSoftware },
		{ "ESteamDenyReason::SteamConnectionLost", (int64)ESteamDenyReason::SteamConnectionLost },
		{ "ESteamDenyReason::SteamConnectionError", (int64)ESteamDenyReason::SteamConnectionError },
		{ "ESteamDenyReason::SteamResponseTimedOut", (int64)ESteamDenyReason::SteamResponseTimedOut },
		{ "ESteamDenyReason::SteamValidationStalled", (int64)ESteamDenyReason::SteamValidationStalled },
		{ "ESteamDenyReason::SteamOwnerLeftGuestUser", (int64)ESteamDenyReason::SteamOwnerLeftGuestUser },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamDenyReason",
	"ESteamDenyReason",
	Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason()
{
	if (!Z_Registration_Info_UEnum_ESteamDenyReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamDenyReason.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamDenyReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamDenyReason.InnerSingleton;
}
// ********** End Enum ESteamDenyReason ************************************************************

// ********** Begin Enum ESteamAuthSessionResponse *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAuthSessionResponse;
static UEnum* ESteamAuthSessionResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamAuthSessionResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamAuthSessionResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAuthSessionResponse"));
	}
	return Z_Registration_Info_UEnum_ESteamAuthSessionResponse.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamAuthSessionResponse>()
{
	return ESteamAuthSessionResponse_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AuthTicketCanceled.Name", "ESteamAuthSessionResponse::AuthTicketCanceled" },
		{ "AuthTicketInvalid.Name", "ESteamAuthSessionResponse::AuthTicketInvalid" },
		{ "AuthTicketInvalidAlreadyUsed.Name", "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed" },
		{ "BlueprintType", "true" },
		{ "LoggedInElseWhere.Name", "ESteamAuthSessionResponse::LoggedInElseWhere" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NoLicenseOrExpired.Name", "ESteamAuthSessionResponse::NoLicenseOrExpired" },
		{ "OK.Name", "ESteamAuthSessionResponse::OK" },
		{ "PublisherIssuedBan.Name", "ESteamAuthSessionResponse::PublisherIssuedBan" },
		{ "UserNotConnectedToSteam.Name", "ESteamAuthSessionResponse::UserNotConnectedToSteam" },
		{ "VACBanned.Name", "ESteamAuthSessionResponse::VACBanned" },
		{ "VACCheckTimedOut.Name", "ESteamAuthSessionResponse::VACCheckTimedOut" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamAuthSessionResponse::OK", (int64)ESteamAuthSessionResponse::OK },
		{ "ESteamAuthSessionResponse::UserNotConnectedToSteam", (int64)ESteamAuthSessionResponse::UserNotConnectedToSteam },
		{ "ESteamAuthSessionResponse::NoLicenseOrExpired", (int64)ESteamAuthSessionResponse::NoLicenseOrExpired },
		{ "ESteamAuthSessionResponse::VACBanned", (int64)ESteamAuthSessionResponse::VACBanned },
		{ "ESteamAuthSessionResponse::LoggedInElseWhere", (int64)ESteamAuthSessionResponse::LoggedInElseWhere },
		{ "ESteamAuthSessionResponse::VACCheckTimedOut", (int64)ESteamAuthSessionResponse::VACCheckTimedOut },
		{ "ESteamAuthSessionResponse::AuthTicketCanceled", (int64)ESteamAuthSessionResponse::AuthTicketCanceled },
		{ "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed", (int64)ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed },
		{ "ESteamAuthSessionResponse::AuthTicketInvalid", (int64)ESteamAuthSessionResponse::AuthTicketInvalid },
		{ "ESteamAuthSessionResponse::PublisherIssuedBan", (int64)ESteamAuthSessionResponse::PublisherIssuedBan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamAuthSessionResponse",
	"ESteamAuthSessionResponse",
	Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse()
{
	if (!Z_Registration_Info_UEnum_ESteamAuthSessionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAuthSessionResponse.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamAuthSessionResponse.InnerSingleton;
}
// ********** End Enum ESteamAuthSessionResponse ***************************************************

// ********** Begin Enum ESteamUserHasLicenseForAppResult ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult;
static UEnum* ESteamUserHasLicenseForAppResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserHasLicenseForAppResult"));
	}
	return Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>()
{
	return ESteamUserHasLicenseForAppResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoesNotHaveLicense.Name", "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense" },
		{ "HasLicense.Name", "ESteamUserHasLicenseForAppResult::HasLicense" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NoAuth.Name", "ESteamUserHasLicenseForAppResult::NoAuth" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamUserHasLicenseForAppResult::HasLicense", (int64)ESteamUserHasLicenseForAppResult::HasLicense },
		{ "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense", (int64)ESteamUserHasLicenseForAppResult::DoesNotHaveLicense },
		{ "ESteamUserHasLicenseForAppResult::NoAuth", (int64)ESteamUserHasLicenseForAppResult::NoAuth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamUserHasLicenseForAppResult",
	"ESteamUserHasLicenseForAppResult",
	Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult()
{
	if (!Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult.InnerSingleton;
}
// ********** End Enum ESteamUserHasLicenseForAppResult ********************************************

// ********** Begin Enum ESteamBeginAuthSessionResult **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult;
static UEnum* ESteamBeginAuthSessionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamBeginAuthSessionResult"));
	}
	return Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>()
{
	return ESteamBeginAuthSessionResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DuplicateRequest.Name", "ESteamBeginAuthSessionResult::DuplicateRequest" },
		{ "ExpiredTicket.Name", "ESteamBeginAuthSessionResult::ExpiredTicket" },
		{ "GameMismatch.Name", "ESteamBeginAuthSessionResult::GameMismatch" },
		{ "InvalidTicket.Name", "ESteamBeginAuthSessionResult::InvalidTicket" },
		{ "InvalidVersion.Name", "ESteamBeginAuthSessionResult::InvalidVersion" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "OK.Name", "ESteamBeginAuthSessionResult::OK" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamBeginAuthSessionResult::OK", (int64)ESteamBeginAuthSessionResult::OK },
		{ "ESteamBeginAuthSessionResult::InvalidTicket", (int64)ESteamBeginAuthSessionResult::InvalidTicket },
		{ "ESteamBeginAuthSessionResult::DuplicateRequest", (int64)ESteamBeginAuthSessionResult::DuplicateRequest },
		{ "ESteamBeginAuthSessionResult::InvalidVersion", (int64)ESteamBeginAuthSessionResult::InvalidVersion },
		{ "ESteamBeginAuthSessionResult::GameMismatch", (int64)ESteamBeginAuthSessionResult::GameMismatch },
		{ "ESteamBeginAuthSessionResult::ExpiredTicket", (int64)ESteamBeginAuthSessionResult::ExpiredTicket },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamBeginAuthSessionResult",
	"ESteamBeginAuthSessionResult",
	Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult()
{
	if (!Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult.InnerSingleton;
}
// ********** End Enum ESteamBeginAuthSessionResult ************************************************

// ********** Begin Enum ESteamResult **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamResult;
static UEnum* ESteamResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamResult"));
	}
	return Z_Registration_Info_UEnum_ESteamResult.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamResult>()
{
	return ESteamResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AccessDenied.Comment", "// name is not unique\n" },
		{ "AccessDenied.Name", "ESteamResult::AccessDenied" },
		{ "AccessDenied.ToolTip", "name is not unique" },
		{ "AccountActivityLimitExceeded.Comment", "// Too many accounts access this resource\n" },
		{ "AccountActivityLimitExceeded.Name", "ESteamResult::AccountActivityLimitExceeded" },
		{ "AccountActivityLimitExceeded.ToolTip", "Too many accounts access this resource" },
		{ "AccountAssociatedToMultiplePartners.Comment", "// activation code for two-factor didn't match\n" },
		{ "AccountAssociatedToMultiplePartners.Name", "ESteamResult::AccountAssociatedToMultiplePartners" },
		{ "AccountAssociatedToMultiplePartners.ToolTip", "activation code for two-factor didn't match" },
		{ "AccountDisabled.Comment", "// nothing matching the request found\n" },
		{ "AccountDisabled.Name", "ESteamResult::AccountDisabled" },
		{ "AccountDisabled.ToolTip", "nothing matching the request found" },
		{ "AccountLimitExceeded.Comment", "// SMS code failure (no match, none pending, etc.)\n" },
		{ "AccountLimitExceeded.Name", "ESteamResult::AccountLimitExceeded" },
		{ "AccountLimitExceeded.ToolTip", "SMS code failure (no match, none pending, etc.)" },
		{ "AccountLockedDown.Name", "ESteamResult::AccountLockedDown" },
		{ "AccountLoginDeniedNeedTwoFactor.Comment", "// Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent\n" },
		{ "AccountLoginDeniedNeedTwoFactor.Name", "ESteamResult::AccountLoginDeniedNeedTwoFactor" },
		{ "AccountLoginDeniedNeedTwoFactor.ToolTip", "Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent" },
		{ "AccountLoginDeniedThrottle.Comment", "// The thing we're trying to access has been deleted\n" },
		{ "AccountLoginDeniedThrottle.Name", "ESteamResult::AccountLoginDeniedThrottle" },
		{ "AccountLoginDeniedThrottle.ToolTip", "The thing we're trying to access has been deleted" },
		{ "AccountLogonDenied.Comment", "// new value is the same as the old one ( secret question and answer )\n" },
		{ "AccountLogonDenied.Name", "ESteamResult::AccountLogonDenied" },
		{ "AccountLogonDenied.ToolTip", "new value is the same as the old one ( secret question and answer )" },
		{ "AccountLogonDeniedNoMail.Comment", "// account login denied due to auth code invalid\n" },
		{ "AccountLogonDeniedNoMail.Name", "ESteamResult::AccountLogonDeniedNoMail" },
		{ "AccountLogonDeniedNoMail.ToolTip", "account login denied due to auth code invalid" },
		{ "AccountLogonDeniedVerifiedEmailRequired.Name", "ESteamResult::AccountLogonDeniedVerifiedEmailRequired" },
		{ "AccountNotFeatured.Comment", "// this service is not accepting content changes right now\n" },
		{ "AccountNotFeatured.Name", "ESteamResult::AccountNotFeatured" },
		{ "AccountNotFeatured.ToolTip", "this service is not accepting content changes right now" },
		{ "AccountNotFound.Comment", "// VAC2 banned\n" },
		{ "AccountNotFound.Name", "ESteamResult::AccountNotFound" },
		{ "AccountNotFound.ToolTip", "VAC2 banned" },
		{ "AccountNotFriends.Comment", "// the WG couldn't send a response because we exceeded max network send size\n" },
		{ "AccountNotFriends.Name", "ESteamResult::AccountNotFriends" },
		{ "AccountNotFriends.ToolTip", "the WG couldn't send a response because we exceeded max network send size" },
		{ "AdministratorOK.Comment", "// account doesn't have value, so this feature isn't available\n" },
		{ "AdministratorOK.Name", "ESteamResult::AdministratorOK" },
		{ "AdministratorOK.ToolTip", "account doesn't have value, so this feature isn't available" },
		{ "AlreadyLoggedInElsewhere.Comment", "// You are already logged in elsewhere, this cached credential login has failed.\n" },
		{ "AlreadyLoggedInElsewhere.Name", "ESteamResult::AlreadyLoggedInElsewhere" },
		{ "AlreadyLoggedInElsewhere.ToolTip", "You are already logged in elsewhere, this cached credential login has failed." },
		{ "AlreadyOwned.Comment", "// The request is a duplicate and the action has already occurred in the past, ignored this time\n" },
		{ "AlreadyOwned.Name", "ESteamResult::AlreadyOwned" },
		{ "AlreadyOwned.ToolTip", "The request is a duplicate and the action has already occurred in the past, ignored this time" },
		{ "AlreadyRedeemed.Comment", "// License/Guest pass the user is trying to access is expired\n" },
		{ "AlreadyRedeemed.Name", "ESteamResult::AlreadyRedeemed" },
		{ "AlreadyRedeemed.ToolTip", "License/Guest pass the user is trying to access is expired" },
		{ "BadResponse.Name", "ESteamResult::BadResponse" },
		{ "Banned.Comment", "// operation timed out\n" },
		{ "Banned.Name", "ESteamResult::Banned" },
		{ "Banned.ToolTip", "operation timed out" },
		{ "Blocked.Comment", "// failed to find the shopping cart requested\n" },
		{ "Blocked.Name", "ESteamResult::Blocked" },
		{ "Blocked.ToolTip", "failed to find the shopping cart requested" },
		{ "BlueprintType", "true" },
		{ "Busy.Comment", "// file was not found\n" },
		{ "Busy.Name", "ESteamResult::Busy" },
		{ "Busy.ToolTip", "file was not found" },
		{ "Cancelled.Comment", "// Long running operation (content download) suspended/paused\n" },
		{ "Cancelled.Name", "ESteamResult::Cancelled" },
		{ "Cancelled.ToolTip", "Long running operation (content download) suspended/paused" },
		{ "CannotUseOldPassword.Comment", "// account login denied due to 2nd factor authentication failure\n" },
		{ "CannotUseOldPassword.Name", "ESteamResult::CannotUseOldPassword" },
		{ "CannotUseOldPassword.ToolTip", "account login denied due to 2nd factor authentication failure" },
		{ "CantRemoveItem.Comment", "// the user is limited\n" },
		{ "CantRemoveItem.Name", "ESteamResult::CantRemoveItem" },
		{ "CantRemoveItem.ToolTip", "the user is limited" },
		{ "ConnectFailed.Name", "ESteamResult::ConnectFailed" },
		{ "ContentVersion.Comment", "// allowed to take this action, but only because requester is admin\n" },
		{ "ContentVersion.Name", "ESteamResult::ContentVersion" },
		{ "ContentVersion.ToolTip", "allowed to take this action, but only because requester is admin" },
		{ "DataCorruption.Comment", "// Operation canceled (typically by user: content download)\n" },
		{ "DataCorruption.Name", "ESteamResult::DataCorruption" },
		{ "DataCorruption.ToolTip", "Operation canceled (typically by user: content download)" },
		{ "Disabled.Comment", "// something happened that we didn't expect to ever happen\n" },
		{ "Disabled.Name", "ESteamResult::Disabled" },
		{ "Disabled.ToolTip", "something happened that we didn't expect to ever happen" },
		{ "DiskFull.Comment", "// Operation canceled because data is ill formed or unrecoverable\n" },
		{ "DiskFull.Name", "ESteamResult::DiskFull" },
		{ "DiskFull.ToolTip", "Operation canceled because data is ill formed or unrecoverable" },
		{ "DuplicateName.Comment", "// email is invalid\n" },
		{ "DuplicateName.Name", "ESteamResult::DuplicateName" },
		{ "DuplicateName.ToolTip", "email is invalid" },
		{ "DuplicateRequest.Comment", "// Guest pass has already been redeemed by account, cannot be acked again\n" },
		{ "DuplicateRequest.Name", "ESteamResult::DuplicateRequest" },
		{ "DuplicateRequest.ToolTip", "Guest pass has already been redeemed by account, cannot be acked again" },
		{ "EmailSendFailure.Comment", "// Cannot refund to payment method, must use wallet\n" },
		{ "EmailSendFailure.Name", "ESteamResult::EmailSendFailure" },
		{ "EmailSendFailure.ToolTip", "Cannot refund to payment method, must use wallet" },
		{ "EncryptionFailure.Comment", "// Request is pending (may be in process, or waiting on third party)\n" },
		{ "EncryptionFailure.Name", "ESteamResult::EncryptionFailure" },
		{ "EncryptionFailure.ToolTip", "Request is pending (may be in process, or waiting on third party)" },
		{ "Expired.Comment", "// Access has been revoked (used for revoked guest passes)\n" },
		{ "Expired.Name", "ESteamResult::Expired" },
		{ "Expired.ToolTip", "Access has been revoked (used for revoked guest passes)" },
		{ "ExpiredLoginAuthCode.Comment", "// Facebook query returned an error\n" },
		{ "ExpiredLoginAuthCode.Name", "ESteamResult::ExpiredLoginAuthCode" },
		{ "ExpiredLoginAuthCode.ToolTip", "Facebook query returned an error" },
		{ "ExternalAccountAlreadyLinked.Comment", "// PSN ticket was invalid\n" },
		{ "ExternalAccountAlreadyLinked.Name", "ESteamResult::ExternalAccountAlreadyLinked" },
		{ "ExternalAccountAlreadyLinked.ToolTip", "PSN ticket was invalid" },
		{ "ExternalAccountUnlinked.Comment", "// Password could not be verified as it's unset server side\n" },
		{ "ExternalAccountUnlinked.Name", "ESteamResult::ExternalAccountUnlinked" },
		{ "ExternalAccountUnlinked.ToolTip", "Password could not be verified as it's unset server side" },
		{ "FacebookQueryError.Comment", "// \n// \n// operation failed due to parental control restrictions for current user\n" },
		{ "FacebookQueryError.Name", "ESteamResult::FacebookQueryError" },
		{ "FacebookQueryError.ToolTip", "operation failed due to parental control restrictions for current user" },
		{ "Fail.Comment", "// success\n" },
		{ "Fail.Name", "ESteamResult::Fail" },
		{ "Fail.ToolTip", "success" },
		{ "FileNotFound.Comment", "// a parameter is incorrect\n" },
		{ "FileNotFound.Name", "ESteamResult::FileNotFound" },
		{ "FileNotFound.ToolTip", "a parameter is incorrect" },
		{ "GSLTDenied.Comment", "// Needs to provide a valid captcha\n" },
		{ "GSLTDenied.Name", "ESteamResult::GSLTDenied" },
		{ "GSLTDenied.ToolTip", "Needs to provide a valid captcha" },
		{ "GSLTExpired.Comment", "// the ip address has been banned from taking this action\n" },
		{ "GSLTExpired.Name", "ESteamResult::GSLTExpired" },
		{ "GSLTExpired.ToolTip", "the ip address has been banned from taking this action" },
		{ "GSOwnerDenied.Comment", "// a game server login token owned by this token's owner has been banned\n" },
		{ "GSOwnerDenied.Name", "ESteamResult::GSOwnerDenied" },
		{ "GSOwnerDenied.ToolTip", "a game server login token owned by this token's owner has been banned" },
		{ "HandshakeFailed.Name", "ESteamResult::HandshakeFailed" },
		{ "HardwareNotCapableOfIPT.Comment", "// account login denied due to 2nd factor auth failure - and no mail has been sent\n" },
		{ "HardwareNotCapableOfIPT.Name", "ESteamResult::HardwareNotCapableOfIPT" },
		{ "HardwareNotCapableOfIPT.ToolTip", "account login denied due to 2nd factor auth failure - and no mail has been sent" },
		{ "Ignored.Comment", "// a user didn't allow it\n" },
		{ "Ignored.Name", "ESteamResult::Ignored" },
		{ "Ignored.ToolTip", "a user didn't allow it" },
		{ "IllegalPassword.Comment", "// The sync cannot resume due to a conflict between the local and remote files\n" },
		{ "IllegalPassword.Name", "ESteamResult::IllegalPassword" },
		{ "IllegalPassword.ToolTip", "The sync cannot resume due to a conflict between the local and remote files" },
		{ "InsufficientFunds.Comment", "// this token has expired from disuse; can be reset for use\n" },
		{ "InsufficientFunds.Name", "ESteamResult::InsufficientFunds" },
		{ "InsufficientFunds.ToolTip", "this token has expired from disuse; can be reset for use" },
		{ "InsufficientPrivilege.Comment", "// Encryption or Decryption failed\n" },
		{ "InsufficientPrivilege.Name", "ESteamResult::InsufficientPrivilege" },
		{ "InsufficientPrivilege.ToolTip", "Encryption or Decryption failed" },
		{ "InvalidCEGSubmission.Comment", "// The requested service has been configured to be unavailable\n" },
		{ "InvalidCEGSubmission.Name", "ESteamResult::InvalidCEGSubmission" },
		{ "InvalidCEGSubmission.ToolTip", "The requested service has been configured to be unavailable" },
		{ "InvalidEmail.Comment", "// name is invalid\n" },
		{ "InvalidEmail.Name", "ESteamResult::InvalidEmail" },
		{ "InvalidEmail.ToolTip", "name is invalid" },
		{ "InvalidItemType.Comment", "// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)\n" },
		{ "InvalidItemType.Name", "ESteamResult::InvalidItemType" },
		{ "InvalidItemType.ToolTip", "game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)" },
		{ "InvalidLoginAuthCode.Comment", "// The requested new password is not legal\n" },
		{ "InvalidLoginAuthCode.Name", "ESteamResult::InvalidLoginAuthCode" },
		{ "InvalidLoginAuthCode.ToolTip", "The requested new password is not legal" },
		{ "InvalidName.Comment", "// called object was in an invalid state\n" },
		{ "InvalidName.Name", "ESteamResult::InvalidName" },
		{ "InvalidName.ToolTip", "called object was in an invalid state" },
		{ "InvalidParam.Comment", "// protocol version is incorrect\n" },
		{ "InvalidParam.Name", "ESteamResult::InvalidParam" },
		{ "InvalidParam.ToolTip", "protocol version is incorrect" },
		{ "InvalidPassword.Comment", "// OBSOLETE - removed\n" },
		{ "InvalidPassword.Name", "ESteamResult::InvalidPassword" },
		{ "InvalidPassword.ToolTip", "OBSOLETE - removed" },
		{ "InvalidProtocolVer.Comment", "// same user logged in elsewhere\n" },
		{ "InvalidProtocolVer.Name", "ESteamResult::InvalidProtocolVer" },
		{ "InvalidProtocolVer.ToolTip", "same user logged in elsewhere" },
		{ "InvalidState.Comment", "// called method busy - action not taken\n" },
		{ "InvalidState.Name", "ESteamResult::InvalidState" },
		{ "InvalidState.ToolTip", "called method busy - action not taken" },
		{ "InvalidSteamID.Comment", "// account not found\n" },
		{ "InvalidSteamID.Name", "ESteamResult::InvalidSteamID" },
		{ "InvalidSteamID.ToolTip", "account not found" },
		{ "IOFailure.Name", "ESteamResult::IOFailure" },
		{ "IPBanned.Comment", "// the type of thing we were requested to act on is invalid\n" },
		{ "IPBanned.Name", "ESteamResult::IPBanned" },
		{ "IPBanned.ToolTip", "the type of thing we were requested to act on is invalid" },
		{ "IPLoginRestrictionFailed.Comment", "// account login denied due to auth code expired\n" },
		{ "IPLoginRestrictionFailed.Name", "ESteamResult::IPLoginRestrictionFailed" },
		{ "IPLoginRestrictionFailed.ToolTip", "account login denied due to auth code expired" },
		{ "IPNotFound.Comment", "// All the games in this guest pass redemption request are already owned by the user\n" },
		{ "IPNotFound.Name", "ESteamResult::IPNotFound" },
		{ "IPNotFound.ToolTip", "All the games in this guest pass redemption request are already owned by the user" },
		{ "IPTInitError.Comment", "// \n" },
		{ "IPTInitError.Name", "ESteamResult::IPTInitError" },
		{ "ItemDeleted.Comment", "// Need two-factor code to login\n" },
		{ "ItemDeleted.Name", "ESteamResult::ItemDeleted" },
		{ "ItemDeleted.ToolTip", "Need two-factor code to login" },
		{ "LimitedUserAccount.Comment", "// the user is not mutually friends\n" },
		{ "LimitedUserAccount.Name", "ESteamResult::LimitedUserAccount" },
		{ "LimitedUserAccount.ToolTip", "the user is not mutually friends" },
		{ "LimitExceeded.Comment", "// Insufficient privilege\n" },
		{ "LimitExceeded.Name", "ESteamResult::LimitExceeded" },
		{ "LimitExceeded.ToolTip", "Insufficient privilege" },
		{ "LockingFailed.Comment", "// failed to write change to the data store\n" },
		{ "LockingFailed.Name", "ESteamResult::LockingFailed" },
		{ "LockingFailed.ToolTip", "failed to write change to the data store" },
		{ "LoggedInElsewhere.Comment", "// password/ticket is invalid\n" },
		{ "LoggedInElsewhere.Name", "ESteamResult::LoggedInElsewhere" },
		{ "LoggedInElsewhere.ToolTip", "password/ticket is invalid" },
		{ "LogonSessionReplaced.Comment", "// failed to acquire access lock for this operation\n" },
		{ "LogonSessionReplaced.Name", "ESteamResult::LogonSessionReplaced" },
		{ "LogonSessionReplaced.ToolTip", "failed to acquire access lock for this operation" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "NeedCaptcha.Comment", "// Can't perform operation till payment has settled\n" },
		{ "NeedCaptcha.Name", "ESteamResult::NeedCaptcha" },
		{ "NeedCaptcha.ToolTip", "Can't perform operation till payment has settled" },
		{ "NoConnection.Comment", "// generic failure \n" },
		{ "NoConnection.Name", "ESteamResult::NoConnection" },
		{ "NoConnection.ToolTip", "generic failure" },
		{ "NoMatch.Comment", "// target is ignoring sender\n" },
		{ "NoMatch.Name", "ESteamResult::NoMatch" },
		{ "NoMatch.ToolTip", "target is ignoring sender" },
		{ "NoMatchingURL.Name", "ESteamResult::NoMatchingURL" },
		{ "NoMobileDevice.Comment", "// data not modified\n" },
		{ "NoMobileDevice.Name", "ESteamResult::NoMobileDevice" },
		{ "NoMobileDevice.ToolTip", "data not modified" },
		{ "None.Name", "ESteamResult::None" },
		{ "NoSiteLicensesFound.Comment", "// There are too many of this thing pending already\n" },
		{ "NoSiteLicensesFound.Name", "ESteamResult::NoSiteLicensesFound" },
		{ "NoSiteLicensesFound.ToolTip", "There are too many of this thing pending already" },
		{ "NotLoggedOn.Comment", "// The requested service is currently unavailable\n" },
		{ "NotLoggedOn.Name", "ESteamResult::NotLoggedOn" },
		{ "NotLoggedOn.ToolTip", "The requested service is currently unavailable" },
		{ "NotModified.Comment", "// account has been associated with multiple partners\n" },
		{ "NotModified.Name", "ESteamResult::NotModified" },
		{ "NotModified.ToolTip", "account has been associated with multiple partners" },
		{ "NotSettled.Comment", "// Cannot send an email\n" },
		{ "NotSettled.Name", "ESteamResult::NotSettled" },
		{ "NotSettled.ToolTip", "Cannot send an email" },
		{ "OK.Name", "ESteamResult::OK" },
		{ "ParentalControlRestricted.Comment", "// \n// \n" },
		{ "ParentalControlRestricted.Name", "ESteamResult::ParentalControlRestricted" },
		{ "PasswordRequiredToKickSession.Comment", "// The current CM can't service the user making a request, user should try another.\n" },
		{ "PasswordRequiredToKickSession.Name", "ESteamResult::PasswordRequiredToKickSession" },
		{ "PasswordRequiredToKickSession.ToolTip", "The current CM can't service the user making a request, user should try another." },
		{ "PasswordUnset.Comment", "// an remote call or IPC call failed\n" },
		{ "PasswordUnset.Name", "ESteamResult::PasswordUnset" },
		{ "PasswordUnset.ToolTip", "an remote call or IPC call failed" },
		{ "Pending.Comment", "// The user is not logged on\n" },
		{ "Pending.Name", "ESteamResult::Pending" },
		{ "Pending.ToolTip", "The user is not logged on" },
		{ "PersistFailed.Comment", "// IP address not found\n" },
		{ "PersistFailed.Name", "ESteamResult::PersistFailed" },
		{ "PersistFailed.ToolTip", "IP address not found" },
		{ "PhoneActivityLimitExceeded.Comment", "// Too many changes to this account\n" },
		{ "PhoneActivityLimitExceeded.Name", "ESteamResult::PhoneActivityLimitExceeded" },
		{ "PhoneActivityLimitExceeded.ToolTip", "Too many changes to this account" },
		{ "PSNTicketInvalid.Comment", "// External account (PSN, Facebook...) is not linked to a Steam account\n" },
		{ "PSNTicketInvalid.Name", "ESteamResult::PSNTicketInvalid" },
		{ "PSNTicketInvalid.ToolTip", "External account (PSN, Facebook...) is not linked to a Steam account" },
		{ "RateLimitExceeded.Comment", "// The action could not be complete because it is region restricted\n" },
		{ "RateLimitExceeded.Name", "ESteamResult::RateLimitExceeded" },
		{ "RateLimitExceeded.ToolTip", "The action could not be complete because it is region restricted" },
		{ "RefundToWallet.Comment", "// Too many changes to this phone\n" },
		{ "RefundToWallet.Name", "ESteamResult::RefundToWallet" },
		{ "RefundToWallet.ToolTip", "Too many changes to this phone" },
		{ "RegionLocked.Comment", "// The device being used is not allowed to perform this action\n" },
		{ "RegionLocked.Name", "ESteamResult::RegionLocked" },
		{ "RegionLocked.ToolTip", "The device being used is not allowed to perform this action" },
		{ "RemoteCallFailed.Comment", "// Operation canceled - not enough disk space.\n" },
		{ "RemoteCallFailed.Name", "ESteamResult::RemoteCallFailed" },
		{ "RemoteCallFailed.ToolTip", "Operation canceled - not enough disk space." },
		{ "RemoteDisconnect.Name", "ESteamResult::RemoteDisconnect" },
		{ "RemoteFileConflict.Comment", "// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first\n" },
		{ "RemoteFileConflict.Name", "ESteamResult::RemoteFileConflict" },
		{ "RemoteFileConflict.ToolTip", "External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first" },
		{ "RequirePasswordReEntry.Comment", "// parse failure, missing field, etc.\n" },
		{ "RequirePasswordReEntry.Name", "ESteamResult::RequirePasswordReEntry" },
		{ "RequirePasswordReEntry.ToolTip", "parse failure, missing field, etc." },
		{ "RestrictedDevice.Comment", "// The set of files submitted to the CEG server are not valid !\n" },
		{ "RestrictedDevice.Name", "ESteamResult::RestrictedDevice" },
		{ "RestrictedDevice.ToolTip", "The set of files submitted to the CEG server are not valid !" },
		{ "Revoked.Comment", "// Too much of a good thing\n" },
		{ "Revoked.Name", "ESteamResult::Revoked" },
		{ "Revoked.ToolTip", "Too much of a good thing" },
		{ "SameAsPreviousValue.Comment", "// The requested new password is not legal\n" },
		{ "SameAsPreviousValue.Name", "ESteamResult::SameAsPreviousValue" },
		{ "SameAsPreviousValue.ToolTip", "The requested new password is not legal" },
		{ "ServiceReadOnly.Name", "ESteamResult::ServiceReadOnly" },
		{ "ServiceUnavailable.Comment", "// steamID is invalid\n" },
		{ "ServiceUnavailable.Name", "ESteamResult::ServiceUnavailable" },
		{ "ServiceUnavailable.ToolTip", "steamID is invalid" },
		{ "ShoppingCartNotFound.Name", "ESteamResult::ShoppingCartNotFound" },
		{ "SmsCodeFailed.Comment", "// the time presented is out of range or tolerance\n" },
		{ "SmsCodeFailed.Name", "ESteamResult::SmsCodeFailed" },
		{ "SmsCodeFailed.ToolTip", "the time presented is out of range or tolerance" },
		{ "sultNoConnectionRetry.Comment", "// no/failed network connection\n" },
		{ "sultNoConnectionRetry.Name", "ESteamResult::sultNoConnectionRetry" },
		{ "sultNoConnectionRetry.ToolTip", "no/failed network connection" },
		{ "Suspended.Comment", "// You are already logged in elsewhere, you must wait\n" },
		{ "Suspended.Name", "ESteamResult::Suspended" },
		{ "Suspended.ToolTip", "You are already logged in elsewhere, you must wait" },
		{ "TimeNotSynced.Comment", "// the account does not have a mobile device associated with it\n" },
		{ "TimeNotSynced.Name", "ESteamResult::TimeNotSynced" },
		{ "TimeNotSynced.ToolTip", "the account does not have a mobile device associated with it" },
		{ "Timeout.Comment", "// access is denied\n" },
		{ "Timeout.Name", "ESteamResult::Timeout" },
		{ "Timeout.ToolTip", "access is denied" },
		{ "TooManyPending.Comment", "// user doesn't have enough wallet funds to complete the action\n" },
		{ "TooManyPending.Name", "ESteamResult::TooManyPending" },
		{ "TooManyPending.ToolTip", "user doesn't have enough wallet funds to complete the action" },
		{ "TryAnotherCM.Comment", "// A Version mismatch in content transmitted within the Steam protocol.\n" },
		{ "TryAnotherCM.Name", "ESteamResult::TryAnotherCM" },
		{ "TryAnotherCM.ToolTip", "A Version mismatch in content transmitted within the Steam protocol." },
		{ "TwoFactorActivationCodeMismatch.Comment", "// two factor code mismatch\n" },
		{ "TwoFactorActivationCodeMismatch.Name", "ESteamResult::TwoFactorActivationCodeMismatch" },
		{ "TwoFactorActivationCodeMismatch.ToolTip", "two factor code mismatch" },
		{ "TwoFactorCodeMismatch.Comment", "// login attempt failed, try to throttle response to possible attacker\n" },
		{ "TwoFactorCodeMismatch.Name", "ESteamResult::TwoFactorCodeMismatch" },
		{ "TwoFactorCodeMismatch.ToolTip", "login attempt failed, try to throttle response to possible attacker" },
		{ "UnexpectedError.Comment", "// the value entered is outside the acceptable range\n" },
		{ "UnexpectedError.Name", "ESteamResult::UnexpectedError" },
		{ "UnexpectedError.ToolTip", "the value entered is outside the acceptable range" },
		{ "ValueOutOfRange.Comment", "// The user cannot complete the action until they re-enter their password\n" },
		{ "ValueOutOfRange.Name", "ESteamResult::ValueOutOfRange" },
		{ "ValueOutOfRange.ToolTip", "The user cannot complete the action until they re-enter their password" },
		{ "WGNetworkSendExceeded.Comment", "// No site licenses found\n" },
		{ "WGNetworkSendExceeded.Name", "ESteamResult::WGNetworkSendExceeded" },
		{ "WGNetworkSendExceeded.ToolTip", "No site licenses found" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamResult::None", (int64)ESteamResult::None },
		{ "ESteamResult::OK", (int64)ESteamResult::OK },
		{ "ESteamResult::Fail", (int64)ESteamResult::Fail },
		{ "ESteamResult::NoConnection", (int64)ESteamResult::NoConnection },
		{ "ESteamResult::sultNoConnectionRetry", (int64)ESteamResult::sultNoConnectionRetry },
		{ "ESteamResult::InvalidPassword", (int64)ESteamResult::InvalidPassword },
		{ "ESteamResult::LoggedInElsewhere", (int64)ESteamResult::LoggedInElsewhere },
		{ "ESteamResult::InvalidProtocolVer", (int64)ESteamResult::InvalidProtocolVer },
		{ "ESteamResult::InvalidParam", (int64)ESteamResult::InvalidParam },
		{ "ESteamResult::FileNotFound", (int64)ESteamResult::FileNotFound },
		{ "ESteamResult::Busy", (int64)ESteamResult::Busy },
		{ "ESteamResult::InvalidState", (int64)ESteamResult::InvalidState },
		{ "ESteamResult::InvalidName", (int64)ESteamResult::InvalidName },
		{ "ESteamResult::InvalidEmail", (int64)ESteamResult::InvalidEmail },
		{ "ESteamResult::DuplicateName", (int64)ESteamResult::DuplicateName },
		{ "ESteamResult::AccessDenied", (int64)ESteamResult::AccessDenied },
		{ "ESteamResult::Timeout", (int64)ESteamResult::Timeout },
		{ "ESteamResult::Banned", (int64)ESteamResult::Banned },
		{ "ESteamResult::AccountNotFound", (int64)ESteamResult::AccountNotFound },
		{ "ESteamResult::InvalidSteamID", (int64)ESteamResult::InvalidSteamID },
		{ "ESteamResult::ServiceUnavailable", (int64)ESteamResult::ServiceUnavailable },
		{ "ESteamResult::NotLoggedOn", (int64)ESteamResult::NotLoggedOn },
		{ "ESteamResult::Pending", (int64)ESteamResult::Pending },
		{ "ESteamResult::EncryptionFailure", (int64)ESteamResult::EncryptionFailure },
		{ "ESteamResult::InsufficientPrivilege", (int64)ESteamResult::InsufficientPrivilege },
		{ "ESteamResult::LimitExceeded", (int64)ESteamResult::LimitExceeded },
		{ "ESteamResult::Revoked", (int64)ESteamResult::Revoked },
		{ "ESteamResult::Expired", (int64)ESteamResult::Expired },
		{ "ESteamResult::AlreadyRedeemed", (int64)ESteamResult::AlreadyRedeemed },
		{ "ESteamResult::DuplicateRequest", (int64)ESteamResult::DuplicateRequest },
		{ "ESteamResult::AlreadyOwned", (int64)ESteamResult::AlreadyOwned },
		{ "ESteamResult::IPNotFound", (int64)ESteamResult::IPNotFound },
		{ "ESteamResult::PersistFailed", (int64)ESteamResult::PersistFailed },
		{ "ESteamResult::LockingFailed", (int64)ESteamResult::LockingFailed },
		{ "ESteamResult::LogonSessionReplaced", (int64)ESteamResult::LogonSessionReplaced },
		{ "ESteamResult::ConnectFailed", (int64)ESteamResult::ConnectFailed },
		{ "ESteamResult::HandshakeFailed", (int64)ESteamResult::HandshakeFailed },
		{ "ESteamResult::IOFailure", (int64)ESteamResult::IOFailure },
		{ "ESteamResult::RemoteDisconnect", (int64)ESteamResult::RemoteDisconnect },
		{ "ESteamResult::ShoppingCartNotFound", (int64)ESteamResult::ShoppingCartNotFound },
		{ "ESteamResult::Blocked", (int64)ESteamResult::Blocked },
		{ "ESteamResult::Ignored", (int64)ESteamResult::Ignored },
		{ "ESteamResult::NoMatch", (int64)ESteamResult::NoMatch },
		{ "ESteamResult::AccountDisabled", (int64)ESteamResult::AccountDisabled },
		{ "ESteamResult::ServiceReadOnly", (int64)ESteamResult::ServiceReadOnly },
		{ "ESteamResult::AccountNotFeatured", (int64)ESteamResult::AccountNotFeatured },
		{ "ESteamResult::AdministratorOK", (int64)ESteamResult::AdministratorOK },
		{ "ESteamResult::ContentVersion", (int64)ESteamResult::ContentVersion },
		{ "ESteamResult::TryAnotherCM", (int64)ESteamResult::TryAnotherCM },
		{ "ESteamResult::PasswordRequiredToKickSession", (int64)ESteamResult::PasswordRequiredToKickSession },
		{ "ESteamResult::AlreadyLoggedInElsewhere", (int64)ESteamResult::AlreadyLoggedInElsewhere },
		{ "ESteamResult::Suspended", (int64)ESteamResult::Suspended },
		{ "ESteamResult::Cancelled", (int64)ESteamResult::Cancelled },
		{ "ESteamResult::DataCorruption", (int64)ESteamResult::DataCorruption },
		{ "ESteamResult::DiskFull", (int64)ESteamResult::DiskFull },
		{ "ESteamResult::RemoteCallFailed", (int64)ESteamResult::RemoteCallFailed },
		{ "ESteamResult::PasswordUnset", (int64)ESteamResult::PasswordUnset },
		{ "ESteamResult::ExternalAccountUnlinked", (int64)ESteamResult::ExternalAccountUnlinked },
		{ "ESteamResult::PSNTicketInvalid", (int64)ESteamResult::PSNTicketInvalid },
		{ "ESteamResult::ExternalAccountAlreadyLinked", (int64)ESteamResult::ExternalAccountAlreadyLinked },
		{ "ESteamResult::RemoteFileConflict", (int64)ESteamResult::RemoteFileConflict },
		{ "ESteamResult::IllegalPassword", (int64)ESteamResult::IllegalPassword },
		{ "ESteamResult::SameAsPreviousValue", (int64)ESteamResult::SameAsPreviousValue },
		{ "ESteamResult::AccountLogonDenied", (int64)ESteamResult::AccountLogonDenied },
		{ "ESteamResult::CannotUseOldPassword", (int64)ESteamResult::CannotUseOldPassword },
		{ "ESteamResult::InvalidLoginAuthCode", (int64)ESteamResult::InvalidLoginAuthCode },
		{ "ESteamResult::AccountLogonDeniedNoMail", (int64)ESteamResult::AccountLogonDeniedNoMail },
		{ "ESteamResult::HardwareNotCapableOfIPT", (int64)ESteamResult::HardwareNotCapableOfIPT },
		{ "ESteamResult::IPTInitError", (int64)ESteamResult::IPTInitError },
		{ "ESteamResult::ParentalControlRestricted", (int64)ESteamResult::ParentalControlRestricted },
		{ "ESteamResult::FacebookQueryError", (int64)ESteamResult::FacebookQueryError },
		{ "ESteamResult::ExpiredLoginAuthCode", (int64)ESteamResult::ExpiredLoginAuthCode },
		{ "ESteamResult::IPLoginRestrictionFailed", (int64)ESteamResult::IPLoginRestrictionFailed },
		{ "ESteamResult::AccountLockedDown", (int64)ESteamResult::AccountLockedDown },
		{ "ESteamResult::AccountLogonDeniedVerifiedEmailRequired", (int64)ESteamResult::AccountLogonDeniedVerifiedEmailRequired },
		{ "ESteamResult::NoMatchingURL", (int64)ESteamResult::NoMatchingURL },
		{ "ESteamResult::BadResponse", (int64)ESteamResult::BadResponse },
		{ "ESteamResult::RequirePasswordReEntry", (int64)ESteamResult::RequirePasswordReEntry },
		{ "ESteamResult::ValueOutOfRange", (int64)ESteamResult::ValueOutOfRange },
		{ "ESteamResult::UnexpectedError", (int64)ESteamResult::UnexpectedError },
		{ "ESteamResult::Disabled", (int64)ESteamResult::Disabled },
		{ "ESteamResult::InvalidCEGSubmission", (int64)ESteamResult::InvalidCEGSubmission },
		{ "ESteamResult::RestrictedDevice", (int64)ESteamResult::RestrictedDevice },
		{ "ESteamResult::RegionLocked", (int64)ESteamResult::RegionLocked },
		{ "ESteamResult::RateLimitExceeded", (int64)ESteamResult::RateLimitExceeded },
		{ "ESteamResult::AccountLoginDeniedNeedTwoFactor", (int64)ESteamResult::AccountLoginDeniedNeedTwoFactor },
		{ "ESteamResult::ItemDeleted", (int64)ESteamResult::ItemDeleted },
		{ "ESteamResult::AccountLoginDeniedThrottle", (int64)ESteamResult::AccountLoginDeniedThrottle },
		{ "ESteamResult::TwoFactorCodeMismatch", (int64)ESteamResult::TwoFactorCodeMismatch },
		{ "ESteamResult::TwoFactorActivationCodeMismatch", (int64)ESteamResult::TwoFactorActivationCodeMismatch },
		{ "ESteamResult::AccountAssociatedToMultiplePartners", (int64)ESteamResult::AccountAssociatedToMultiplePartners },
		{ "ESteamResult::NotModified", (int64)ESteamResult::NotModified },
		{ "ESteamResult::NoMobileDevice", (int64)ESteamResult::NoMobileDevice },
		{ "ESteamResult::TimeNotSynced", (int64)ESteamResult::TimeNotSynced },
		{ "ESteamResult::SmsCodeFailed", (int64)ESteamResult::SmsCodeFailed },
		{ "ESteamResult::AccountLimitExceeded", (int64)ESteamResult::AccountLimitExceeded },
		{ "ESteamResult::AccountActivityLimitExceeded", (int64)ESteamResult::AccountActivityLimitExceeded },
		{ "ESteamResult::PhoneActivityLimitExceeded", (int64)ESteamResult::PhoneActivityLimitExceeded },
		{ "ESteamResult::RefundToWallet", (int64)ESteamResult::RefundToWallet },
		{ "ESteamResult::EmailSendFailure", (int64)ESteamResult::EmailSendFailure },
		{ "ESteamResult::NotSettled", (int64)ESteamResult::NotSettled },
		{ "ESteamResult::NeedCaptcha", (int64)ESteamResult::NeedCaptcha },
		{ "ESteamResult::GSLTDenied", (int64)ESteamResult::GSLTDenied },
		{ "ESteamResult::GSOwnerDenied", (int64)ESteamResult::GSOwnerDenied },
		{ "ESteamResult::InvalidItemType", (int64)ESteamResult::InvalidItemType },
		{ "ESteamResult::IPBanned", (int64)ESteamResult::IPBanned },
		{ "ESteamResult::GSLTExpired", (int64)ESteamResult::GSLTExpired },
		{ "ESteamResult::InsufficientFunds", (int64)ESteamResult::InsufficientFunds },
		{ "ESteamResult::TooManyPending", (int64)ESteamResult::TooManyPending },
		{ "ESteamResult::NoSiteLicensesFound", (int64)ESteamResult::NoSiteLicensesFound },
		{ "ESteamResult::WGNetworkSendExceeded", (int64)ESteamResult::WGNetworkSendExceeded },
		{ "ESteamResult::AccountNotFriends", (int64)ESteamResult::AccountNotFriends },
		{ "ESteamResult::LimitedUserAccount", (int64)ESteamResult::LimitedUserAccount },
		{ "ESteamResult::CantRemoveItem", (int64)ESteamResult::CantRemoveItem },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamResult",
	"ESteamResult",
	Z_Construct_UEnum_SteamCore_ESteamResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamResult()
{
	if (!Z_Registration_Info_UEnum_ESteamResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamResult.InnerSingleton;
}
// ********** End Enum ESteamResult ****************************************************************

// ********** Begin Enum ESteamChatRoomEnterResponse ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse;
static UEnum* ESteamChatRoomEnterResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatRoomEnterResponse"));
	}
	return Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>()
{
	return ESteamChatRoomEnterResponse_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Banned.Name", "ESteamChatRoomEnterResponse::Banned" },
		{ "BlueprintType", "true" },
		{ "ClanDisabled.Name", "ESteamChatRoomEnterResponse::ClanDisabled" },
		{ "CommunityBan.Name", "ESteamChatRoomEnterResponse::CommunityBan" },
		{ "DoesntExist.Name", "ESteamChatRoomEnterResponse::DoesntExist" },
		{ "Error.Name", "ESteamChatRoomEnterResponse::Error" },
		{ "Full.Name", "ESteamChatRoomEnterResponse::Full" },
		{ "Limited.Name", "ESteamChatRoomEnterResponse::Limited" },
		{ "MemberBlockedYou.Name", "ESteamChatRoomEnterResponse::MemberBlockedYou" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "None.Name", "ESteamChatRoomEnterResponse::None" },
		{ "NotAllowed.Name", "ESteamChatRoomEnterResponse::NotAllowed" },
		{ "RatelimitExceeded.Name", "ESteamChatRoomEnterResponse::RatelimitExceeded" },
		{ "Success.Name", "ESteamChatRoomEnterResponse::Success" },
		{ "YouBlockedMember.Name", "ESteamChatRoomEnterResponse::YouBlockedMember" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamChatRoomEnterResponse::None", (int64)ESteamChatRoomEnterResponse::None },
		{ "ESteamChatRoomEnterResponse::Success", (int64)ESteamChatRoomEnterResponse::Success },
		{ "ESteamChatRoomEnterResponse::DoesntExist", (int64)ESteamChatRoomEnterResponse::DoesntExist },
		{ "ESteamChatRoomEnterResponse::NotAllowed", (int64)ESteamChatRoomEnterResponse::NotAllowed },
		{ "ESteamChatRoomEnterResponse::Full", (int64)ESteamChatRoomEnterResponse::Full },
		{ "ESteamChatRoomEnterResponse::Error", (int64)ESteamChatRoomEnterResponse::Error },
		{ "ESteamChatRoomEnterResponse::Banned", (int64)ESteamChatRoomEnterResponse::Banned },
		{ "ESteamChatRoomEnterResponse::Limited", (int64)ESteamChatRoomEnterResponse::Limited },
		{ "ESteamChatRoomEnterResponse::ClanDisabled", (int64)ESteamChatRoomEnterResponse::ClanDisabled },
		{ "ESteamChatRoomEnterResponse::CommunityBan", (int64)ESteamChatRoomEnterResponse::CommunityBan },
		{ "ESteamChatRoomEnterResponse::MemberBlockedYou", (int64)ESteamChatRoomEnterResponse::MemberBlockedYou },
		{ "ESteamChatRoomEnterResponse::YouBlockedMember", (int64)ESteamChatRoomEnterResponse::YouBlockedMember },
		{ "ESteamChatRoomEnterResponse::RatelimitExceeded", (int64)ESteamChatRoomEnterResponse::RatelimitExceeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamChatRoomEnterResponse",
	"ESteamChatRoomEnterResponse",
	Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse()
{
	if (!Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton;
}
// ********** End Enum ESteamChatRoomEnterResponse *************************************************

// ********** Begin Enum ESteamChatEntryType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatEntryType;
static UEnum* ESteamChatEntryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatEntryType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatEntryType"));
	}
	return Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamChatEntryType>()
{
	return ESteamChatEntryType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatMsg.Name", "ESteamChatEntryType::ChatMsg" },
		{ "Disconnected.Name", "ESteamChatEntryType::Disconnected" },
		{ "Emote.Name", "ESteamChatEntryType::Emote" },
		{ "Entered.Name", "ESteamChatEntryType::Entered" },
		{ "HistoricalChat.Name", "ESteamChatEntryType::HistoricalChat" },
		{ "Invalid.Name", "ESteamChatEntryType::Invalid" },
		{ "InviteGame.Name", "ESteamChatEntryType::InviteGame" },
		{ "LeftConversation.Name", "ESteamChatEntryType::LeftConversation" },
		{ "LinkBlocked.Name", "ESteamChatEntryType::LinkBlocked" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "Typing.Name", "ESteamChatEntryType::Typing" },
		{ "WasBanned.Name", "ESteamChatEntryType::WasBanned" },
		{ "WasKicked.Name", "ESteamChatEntryType::WasKicked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamChatEntryType::Invalid", (int64)ESteamChatEntryType::Invalid },
		{ "ESteamChatEntryType::ChatMsg", (int64)ESteamChatEntryType::ChatMsg },
		{ "ESteamChatEntryType::Typing", (int64)ESteamChatEntryType::Typing },
		{ "ESteamChatEntryType::InviteGame", (int64)ESteamChatEntryType::InviteGame },
		{ "ESteamChatEntryType::Emote", (int64)ESteamChatEntryType::Emote },
		{ "ESteamChatEntryType::LeftConversation", (int64)ESteamChatEntryType::LeftConversation },
		{ "ESteamChatEntryType::Entered", (int64)ESteamChatEntryType::Entered },
		{ "ESteamChatEntryType::WasKicked", (int64)ESteamChatEntryType::WasKicked },
		{ "ESteamChatEntryType::WasBanned", (int64)ESteamChatEntryType::WasBanned },
		{ "ESteamChatEntryType::Disconnected", (int64)ESteamChatEntryType::Disconnected },
		{ "ESteamChatEntryType::HistoricalChat", (int64)ESteamChatEntryType::HistoricalChat },
		{ "ESteamChatEntryType::LinkBlocked", (int64)ESteamChatEntryType::LinkBlocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamChatEntryType",
	"ESteamChatEntryType",
	Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType()
{
	if (!Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton;
}
// ********** End Enum ESteamChatEntryType *********************************************************

// ********** Begin Enum ESteamAccountType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAccountType;
static UEnum* ESteamAccountType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamAccountType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamAccountType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAccountType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAccountType"));
	}
	return Z_Registration_Info_UEnum_ESteamAccountType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamAccountType>()
{
	return ESteamAccountType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnonGameServer.Name", "ESteamAccountType::AnonGameServer" },
		{ "AnonUser.Name", "ESteamAccountType::AnonUser" },
		{ "BlueprintType", "true" },
		{ "Chat.Name", "ESteamAccountType::Chat" },
		{ "Clan.Name", "ESteamAccountType::Clan" },
		{ "ConsoleUser.Name", "ESteamAccountType::ConsoleUser" },
		{ "ContentServer.Name", "ESteamAccountType::ContentServer" },
		{ "GameServer.Name", "ESteamAccountType::GameServer" },
		{ "Individual.Name", "ESteamAccountType::Individual" },
		{ "Invalid.Name", "ESteamAccountType::Invalid" },
		{ "Max.Name", "ESteamAccountType::Max" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "Multiseat.Name", "ESteamAccountType::Multiseat" },
		{ "Pending.Name", "ESteamAccountType::Pending" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamAccountType::Invalid", (int64)ESteamAccountType::Invalid },
		{ "ESteamAccountType::Individual", (int64)ESteamAccountType::Individual },
		{ "ESteamAccountType::Multiseat", (int64)ESteamAccountType::Multiseat },
		{ "ESteamAccountType::GameServer", (int64)ESteamAccountType::GameServer },
		{ "ESteamAccountType::AnonGameServer", (int64)ESteamAccountType::AnonGameServer },
		{ "ESteamAccountType::Pending", (int64)ESteamAccountType::Pending },
		{ "ESteamAccountType::ContentServer", (int64)ESteamAccountType::ContentServer },
		{ "ESteamAccountType::Clan", (int64)ESteamAccountType::Clan },
		{ "ESteamAccountType::Chat", (int64)ESteamAccountType::Chat },
		{ "ESteamAccountType::ConsoleUser", (int64)ESteamAccountType::ConsoleUser },
		{ "ESteamAccountType::AnonUser", (int64)ESteamAccountType::AnonUser },
		{ "ESteamAccountType::Max", (int64)ESteamAccountType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamAccountType",
	"ESteamAccountType",
	Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType()
{
	if (!Z_Registration_Info_UEnum_ESteamAccountType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAccountType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamAccountType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamAccountType.InnerSingleton;
}
// ********** End Enum ESteamAccountType ***********************************************************

// ********** Begin ScriptStruct FSteamID **********************************************************
struct Z_Construct_UScriptStruct_FSteamID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs \n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "HasNativeBreak", "/Script/SteamCore.SteamUtilities:BreakSteamID" },
		{ "HasNativeMake", "/Script/SteamCore.SteamUtilities:MakeSteamID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamID constinit property declarations **************************
// ********** End ScriptStruct FSteamID constinit property declarations ****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamID;
class UScriptStruct* FSteamID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamID, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamID"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamID",
	nullptr,
	0,
	sizeof(FSteamID),
	alignof(FSteamID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamID()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamID.InnerSingleton, Z_Construct_UScriptStruct_FSteamID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamID.InnerSingleton);
}
// ********** End ScriptStruct FSteamID ************************************************************

// ********** Begin ScriptStruct FSteamGameID ******************************************************
struct Z_Construct_UScriptStruct_FSteamGameID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamGameID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamGameID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/SteamCore.SteamUtilities:BreakSteamGameID" },
		{ "HasNativeMake", "/Script/SteamCore.SteamUtilities:MakeSteamGameID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamGameID constinit property declarations **********************
// ********** End ScriptStruct FSteamGameID constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamGameID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamGameID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamGameID;
class UScriptStruct* FSteamGameID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamGameID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamGameID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamGameID, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamGameID"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamGameID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamGameID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamGameID",
	nullptr,
	0,
	sizeof(FSteamGameID),
	alignof(FSteamGameID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamGameID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamGameID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamGameID.InnerSingleton, Z_Construct_UScriptStruct_FSteamGameID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamGameID.InnerSingleton);
}
// ********** End ScriptStruct FSteamGameID ********************************************************

// ********** Begin ScriptStruct FSteamUGCHandle ***************************************************
struct Z_Construct_UScriptStruct_FSteamUGCHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamUGCHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamUGCHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/SteamCore.SteamUtilities:BreakUGCHandle" },
		{ "HasNativeMake", "/Script/SteamCore.SteamUtilities:MakeUGCHandle" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamUGCHandle constinit property declarations *******************
// ********** End ScriptStruct FSteamUGCHandle constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamUGCHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamUGCHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamUGCHandle;
class UScriptStruct* FSteamUGCHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamUGCHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamUGCHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamUGCHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamUGCHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamUGCHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamUGCHandle",
	nullptr,
	0,
	sizeof(FSteamUGCHandle),
	alignof(FSteamUGCHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamUGCHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamUGCHandle.InnerSingleton, Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamUGCHandle.InnerSingleton);
}
// ********** End ScriptStruct FSteamUGCHandle *****************************************************

// ********** Begin ScriptStruct FSteamInventoryUpdateHandle ***************************************
struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamInventoryUpdateHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamInventoryUpdateHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/SteamCore.SteamUtilities:BreakInventoryUpdateHandle" },
		{ "HasNativeMake", "/Script/SteamCore.SteamUtilities:MakeInventoryUpdateHandle" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamInventoryUpdateHandle constinit property declarations *******
// ********** End ScriptStruct FSteamInventoryUpdateHandle constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryUpdateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle;
class UScriptStruct* FSteamInventoryUpdateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryUpdateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamInventoryUpdateHandle",
	nullptr,
	0,
	sizeof(FSteamInventoryUpdateHandle),
	alignof(FSteamInventoryUpdateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle.InnerSingleton);
}
// ********** End ScriptStruct FSteamInventoryUpdateHandle *****************************************

// ********** Begin ScriptStruct FSteamTicketHandle ************************************************
struct Z_Construct_UScriptStruct_FSteamTicketHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamTicketHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamTicketHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamTicketHandle constinit property declarations ****************
// ********** End ScriptStruct FSteamTicketHandle constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamTicketHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamTicketHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamTicketHandle;
class UScriptStruct* FSteamTicketHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTicketHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamTicketHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamTicketHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamTicketHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamTicketHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamTicketHandle",
	nullptr,
	0,
	sizeof(FSteamTicketHandle),
	alignof(FSteamTicketHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTicketHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamTicketHandle.InnerSingleton, Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamTicketHandle.InnerSingleton);
}
// ********** End ScriptStruct FSteamTicketHandle **************************************************

// ********** Begin ScriptStruct FValidateAuthTicketResponse ***************************************
struct Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FValidateAuthTicketResponse); }
	static inline consteval int16 GetStructAlignment() { return alignof(FValidateAuthTicketResponse); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthSessionResponse_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FValidateAuthTicketResponse constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AuthSessionResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AuthSessionResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FValidateAuthTicketResponse constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateAuthTicketResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse;
class UScriptStruct* FValidateAuthTicketResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateAuthTicketResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ValidateAuthTicketResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.OuterSingleton;
	}

// ********** Begin ScriptStruct FValidateAuthTicketResponse Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse = { "AuthSessionResponse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, AuthSessionResponse), Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthSessionResponse_MetaData), NewProp_AuthSessionResponse_MetaData) }; // 2166579645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSteamID_MetaData), NewProp_OwnerSteamID_MetaData) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FValidateAuthTicketResponse Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ValidateAuthTicketResponse",
	Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers),
	sizeof(FValidateAuthTicketResponse),
	alignof(FValidateAuthTicketResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.InnerSingleton, Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse.InnerSingleton);
}
// ********** End ScriptStruct FValidateAuthTicketResponse *****************************************

// ********** Begin ScriptStruct FPublishedFileID **************************************************
struct Z_Construct_UScriptStruct_FPublishedFileID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPublishedFileID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPublishedFileID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/SteamCore.SteamUtilities:BreakPublishedFileID" },
		{ "HasNativeMake", "/Script/SteamCore.SteamUtilities:MakePublishedFileID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPublishedFileID constinit property declarations ******************
// ********** End ScriptStruct FPublishedFileID constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPublishedFileID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPublishedFileID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPublishedFileID;
class UScriptStruct* FPublishedFileID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPublishedFileID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPublishedFileID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPublishedFileID, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("PublishedFileID"));
	}
	return Z_Registration_Info_UScriptStruct_FPublishedFileID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPublishedFileID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"PublishedFileID",
	nullptr,
	0,
	sizeof(FPublishedFileID),
	alignof(FPublishedFileID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublishedFileID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPublishedFileID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID()
{
	if (!Z_Registration_Info_UScriptStruct_FPublishedFileID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPublishedFileID.InnerSingleton, Z_Construct_UScriptStruct_FPublishedFileID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPublishedFileID.InnerSingleton);
}
// ********** End ScriptStruct FPublishedFileID ****************************************************

// ********** Begin ScriptStruct FRemoteStorageSubscribePublishedFileResult ************************
struct Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRemoteStorageSubscribePublishedFileResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRemoteStorageSubscribePublishedFileResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[] = {
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRemoteStorageSubscribePublishedFileResult constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRemoteStorageSubscribePublishedFileResult constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageSubscribePublishedFileResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult;
class UScriptStruct* FRemoteStorageSubscribePublishedFileResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageSubscribePublishedFileResult"));
	}
	return Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FRemoteStorageSubscribePublishedFileResult Property Definitions ***
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageSubscribePublishedFileResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageSubscribePublishedFileResult, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileID_MetaData), NewProp_PublishedFileID_MetaData) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRemoteStorageSubscribePublishedFileResult Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"RemoteStorageSubscribePublishedFileResult",
	Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers),
	sizeof(FRemoteStorageSubscribePublishedFileResult),
	alignof(FRemoteStorageSubscribePublishedFileResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult()
{
	if (!Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult.InnerSingleton);
}
// ********** End ScriptStruct FRemoteStorageSubscribePublishedFileResult **************************

// ********** Begin ScriptStruct FHostPingData *****************************************************
struct Z_Construct_UScriptStruct_FHostPingData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FHostPingData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FHostPingData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostString_MetaData[] = {
		{ "Category", "Steam" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FHostPingData constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FHostPingData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHostPingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FHostPingData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHostPingData;
class UScriptStruct* FHostPingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHostPingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHostPingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHostPingData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("HostPingData"));
	}
	return Z_Registration_Info_UScriptStruct_FHostPingData.OuterSingleton;
	}

// ********** Begin ScriptStruct FHostPingData Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString = { "HostString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHostPingData, HostString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostString_MetaData), NewProp_HostString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FHostPingData Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHostPingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"HostPingData",
	Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers),
	sizeof(FHostPingData),
	alignof(FHostPingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHostPingData()
{
	if (!Z_Registration_Info_UScriptStruct_FHostPingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHostPingData.InnerSingleton, Z_Construct_UScriptStruct_FHostPingData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FHostPingData.InnerSingleton);
}
// ********** End ScriptStruct FHostPingData *******************************************************

// ********** Begin ScriptStruct FSteamSessionSetting **********************************************
struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamSessionSetting); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamSessionSetting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamSessionSetting constinit property declarations **************
// ********** End ScriptStruct FSteamSessionSetting constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamSessionSetting;
class UScriptStruct* FSteamSessionSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionSetting, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamSessionSetting",
	nullptr,
	0,
	sizeof(FSteamSessionSetting),
	alignof(FSteamSessionSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton, Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton);
}
// ********** End ScriptStruct FSteamSessionSetting ************************************************

// ********** Begin ScriptStruct FSteamSessionSearchSetting ****************************************
struct Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamSessionSearchSetting); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamSessionSearchSetting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamSessionSearchSetting constinit property declarations ********
// ********** End ScriptStruct FSteamSessionSearchSetting constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionSearchSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting;
class UScriptStruct* FSteamSessionSearchSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionSearchSetting, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionSearchSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamSessionSearchSetting",
	nullptr,
	0,
	sizeof(FSteamSessionSearchSetting),
	alignof(FSteamSessionSearchSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.InnerSingleton, Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting.InnerSingleton);
}
// ********** End ScriptStruct FSteamSessionSearchSetting ******************************************

// ********** Begin ScriptStruct FSteamSessionResult ***********************************************
struct Z_Construct_UScriptStruct_FSteamSessionResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamSessionResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamSessionResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamSessionResult constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamSessionResult constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamSessionResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamSessionResult;
class UScriptStruct* FSteamSessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamSessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamSessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamSessionResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamSessionResult Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamSessionResult, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2609908441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_Inner = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 3210574507
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamSessionResult, SessionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionSettings_MetaData), NewProp_SessionSettings_MetaData) }; // 3210574507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewProp_SessionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamSessionResult Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamSessionResult",
	Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::PropPointers),
	sizeof(FSteamSessionResult),
	alignof(FSteamSessionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamSessionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamSessionResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamSessionResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamSessionResult.InnerSingleton);
}
// ********** End ScriptStruct FSteamSessionResult *************************************************

// ********** Begin ScriptStruct FPartyBeaconID ****************************************************
struct Z_Construct_UScriptStruct_FPartyBeaconID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPartyBeaconID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPartyBeaconID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPartyBeaconID constinit property declarations ********************
// ********** End ScriptStruct FPartyBeaconID constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyBeaconID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPartyBeaconID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPartyBeaconID;
class UScriptStruct* FPartyBeaconID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPartyBeaconID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPartyBeaconID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyBeaconID, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("PartyBeaconID"));
	}
	return Z_Registration_Info_UScriptStruct_FPartyBeaconID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyBeaconID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"PartyBeaconID",
	nullptr,
	0,
	sizeof(FPartyBeaconID),
	alignof(FPartyBeaconID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyBeaconID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyBeaconID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID()
{
	if (!Z_Registration_Info_UScriptStruct_FPartyBeaconID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPartyBeaconID.InnerSingleton, Z_Construct_UScriptStruct_FPartyBeaconID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPartyBeaconID.InnerSingleton);
}
// ********** End ScriptStruct FPartyBeaconID ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamAttributeType_StaticEnum, TEXT("ESteamAttributeType"), &Z_Registration_Info_UEnum_ESteamAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1433770806U) },
		{ ESteamComparisonOp_StaticEnum, TEXT("ESteamComparisonOp"), &Z_Registration_Info_UEnum_ESteamComparisonOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601356492U) },
		{ ESteamMessageType_StaticEnum, TEXT("ESteamMessageType"), &Z_Registration_Info_UEnum_ESteamMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 24989067U) },
		{ EOnlineComparison_StaticEnum, TEXT("EOnlineComparison"), &Z_Registration_Info_UEnum_EOnlineComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1107288270U) },
		{ ESteamDenyReason_StaticEnum, TEXT("ESteamDenyReason"), &Z_Registration_Info_UEnum_ESteamDenyReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898653394U) },
		{ ESteamAuthSessionResponse_StaticEnum, TEXT("ESteamAuthSessionResponse"), &Z_Registration_Info_UEnum_ESteamAuthSessionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2166579645U) },
		{ ESteamUserHasLicenseForAppResult_StaticEnum, TEXT("ESteamUserHasLicenseForAppResult"), &Z_Registration_Info_UEnum_ESteamUserHasLicenseForAppResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3692570237U) },
		{ ESteamBeginAuthSessionResult_StaticEnum, TEXT("ESteamBeginAuthSessionResult"), &Z_Registration_Info_UEnum_ESteamBeginAuthSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1657082080U) },
		{ ESteamResult_StaticEnum, TEXT("ESteamResult"), &Z_Registration_Info_UEnum_ESteamResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1466539257U) },
		{ ESteamChatRoomEnterResponse_StaticEnum, TEXT("ESteamChatRoomEnterResponse"), &Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1845029404U) },
		{ ESteamChatEntryType_StaticEnum, TEXT("ESteamChatEntryType"), &Z_Registration_Info_UEnum_ESteamChatEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2279825220U) },
		{ ESteamAccountType_StaticEnum, TEXT("ESteamAccountType"), &Z_Registration_Info_UEnum_ESteamAccountType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4094613392U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamID::StaticStruct, Z_Construct_UScriptStruct_FSteamID_Statics::NewStructOps, TEXT("SteamID"),&Z_Registration_Info_UScriptStruct_FSteamID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamID), 3382971600U) },
		{ FSteamGameID::StaticStruct, Z_Construct_UScriptStruct_FSteamGameID_Statics::NewStructOps, TEXT("SteamGameID"),&Z_Registration_Info_UScriptStruct_FSteamGameID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamGameID), 3781658651U) },
		{ FSteamUGCHandle::StaticStruct, Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::NewStructOps, TEXT("SteamUGCHandle"),&Z_Registration_Info_UScriptStruct_FSteamUGCHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamUGCHandle), 3346822915U) },
		{ FSteamInventoryUpdateHandle::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::NewStructOps, TEXT("SteamInventoryUpdateHandle"),&Z_Registration_Info_UScriptStruct_FSteamInventoryUpdateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryUpdateHandle), 344035006U) },
		{ FSteamTicketHandle::StaticStruct, Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::NewStructOps, TEXT("SteamTicketHandle"),&Z_Registration_Info_UScriptStruct_FSteamTicketHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamTicketHandle), 1701472596U) },
		{ FValidateAuthTicketResponse::StaticStruct, Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewStructOps, TEXT("ValidateAuthTicketResponse"),&Z_Registration_Info_UScriptStruct_FValidateAuthTicketResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValidateAuthTicketResponse), 1516683318U) },
		{ FPublishedFileID::StaticStruct, Z_Construct_UScriptStruct_FPublishedFileID_Statics::NewStructOps, TEXT("PublishedFileID"),&Z_Registration_Info_UScriptStruct_FPublishedFileID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPublishedFileID), 2947869779U) },
		{ FRemoteStorageSubscribePublishedFileResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewStructOps, TEXT("RemoteStorageSubscribePublishedFileResult"),&Z_Registration_Info_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageSubscribePublishedFileResult), 922000564U) },
		{ FHostPingData::StaticStruct, Z_Construct_UScriptStruct_FHostPingData_Statics::NewStructOps, TEXT("HostPingData"),&Z_Registration_Info_UScriptStruct_FHostPingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHostPingData), 2748338699U) },
		{ FSteamSessionSetting::StaticStruct, Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::NewStructOps, TEXT("SteamSessionSetting"),&Z_Registration_Info_UScriptStruct_FSteamSessionSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamSessionSetting), 3210574507U) },
		{ FSteamSessionSearchSetting::StaticStruct, Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics::NewStructOps, TEXT("SteamSessionSearchSetting"),&Z_Registration_Info_UScriptStruct_FSteamSessionSearchSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamSessionSearchSetting), 3224929249U) },
		{ FSteamSessionResult::StaticStruct, Z_Construct_UScriptStruct_FSteamSessionResult_Statics::NewStructOps, TEXT("SteamSessionResult"),&Z_Registration_Info_UScriptStruct_FSteamSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamSessionResult), 572596804U) },
		{ FPartyBeaconID::StaticStruct, Z_Construct_UScriptStruct_FPartyBeaconID_Statics::NewStructOps, TEXT("PartyBeaconID"),&Z_Registration_Info_UScriptStruct_FPartyBeaconID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyBeaconID), 3499776562U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_2834862587{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
