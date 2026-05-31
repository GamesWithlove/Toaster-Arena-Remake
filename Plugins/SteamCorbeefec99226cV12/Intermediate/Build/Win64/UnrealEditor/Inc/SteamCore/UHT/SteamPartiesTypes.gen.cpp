// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParties/SteamPartiesTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamPartiesTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamPartiesBeaconLocationType *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType;
static UEnum* ESteamPartiesBeaconLocationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPartiesBeaconLocationType"));
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>()
{
	return ESteamPartiesBeaconLocationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatGroup.Name", "ESteamPartiesBeaconLocationType::ChatGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Invalid.Name", "ESteamPartiesBeaconLocationType::Invalid" },
		{ "Max.Name", "ESteamPartiesBeaconLocationType::Max" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPartiesBeaconLocationType::Invalid", (int64)ESteamPartiesBeaconLocationType::Invalid },
		{ "ESteamPartiesBeaconLocationType::ChatGroup", (int64)ESteamPartiesBeaconLocationType::ChatGroup },
		{ "ESteamPartiesBeaconLocationType::Max", (int64)ESteamPartiesBeaconLocationType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamPartiesBeaconLocationType",
	"ESteamPartiesBeaconLocationType",
	Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton;
}
// ********** End Enum ESteamPartiesBeaconLocationType *********************************************

// ********** Begin Enum ESteamPartiesBeaconLocationData *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData;
static UEnum* ESteamPartiesBeaconLocationData_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPartiesBeaconLocationData"));
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>()
{
	return ESteamPartiesBeaconLocationData_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IconURLLarge.Name", "ESteamPartiesBeaconLocationData::IconURLLarge" },
		{ "IconURLMedium.Name", "ESteamPartiesBeaconLocationData::IconURLMedium" },
		{ "IconURLSmall.Name", "ESteamPartiesBeaconLocationData::IconURLSmall" },
		{ "Invalid.Name", "ESteamPartiesBeaconLocationData::Invalid" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
		{ "Name.Name", "ESteamPartiesBeaconLocationData::Name" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPartiesBeaconLocationData::Invalid", (int64)ESteamPartiesBeaconLocationData::Invalid },
		{ "ESteamPartiesBeaconLocationData::Name", (int64)ESteamPartiesBeaconLocationData::Name },
		{ "ESteamPartiesBeaconLocationData::IconURLSmall", (int64)ESteamPartiesBeaconLocationData::IconURLSmall },
		{ "ESteamPartiesBeaconLocationData::IconURLMedium", (int64)ESteamPartiesBeaconLocationData::IconURLMedium },
		{ "ESteamPartiesBeaconLocationData::IconURLLarge", (int64)ESteamPartiesBeaconLocationData::IconURLLarge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamPartiesBeaconLocationData",
	"ESteamPartiesBeaconLocationData",
	Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton;
}
// ********** End Enum ESteamPartiesBeaconLocationData *********************************************

// ********** Begin ScriptStruct FSteamPartyBeaconLocation *****************************************
struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamPartyBeaconLocation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamPartyBeaconLocation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationId_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamPartyBeaconLocation constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamPartyBeaconLocation constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamPartyBeaconLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation;
class UScriptStruct* FSteamPartyBeaconLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamPartyBeaconLocation"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamPartyBeaconLocation Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, Type), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 785961422
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId = { "LocationId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, LocationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationId_MetaData), NewProp_LocationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamPartyBeaconLocation Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamPartyBeaconLocation",
	Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers),
	sizeof(FSteamPartyBeaconLocation),
	alignof(FSteamPartyBeaconLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.InnerSingleton, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation.InnerSingleton);
}
// ********** End ScriptStruct FSteamPartyBeaconLocation *******************************************

// ********** Begin ScriptStruct FJoinPartyData ****************************************************
struct Z_Construct_UScriptStruct_FJoinPartyData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJoinPartyData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJoinPartyData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDBeaconOwner_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJoinPartyData constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDBeaconOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJoinPartyData constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinPartyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJoinPartyData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJoinPartyData;
class UScriptStruct* FJoinPartyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJoinPartyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJoinPartyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinPartyData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinPartyData"));
	}
	return Z_Registration_Info_UScriptStruct_FJoinPartyData.OuterSingleton;
	}

// ********** Begin ScriptStruct FJoinPartyData Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconID_MetaData), NewProp_BeaconID_MetaData) }; // 3499776562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_SteamIDBeaconOwner = { "SteamIDBeaconOwner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, SteamIDBeaconOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDBeaconOwner_MetaData), NewProp_SteamIDBeaconOwner_MetaData) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, ConnectString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectString_MetaData), NewProp_ConnectString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_SteamIDBeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJoinPartyData Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"JoinPartyData",
	Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers),
	sizeof(FJoinPartyData),
	alignof(FJoinPartyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoinPartyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData()
{
	if (!Z_Registration_Info_UScriptStruct_FJoinPartyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJoinPartyData.InnerSingleton, Z_Construct_UScriptStruct_FJoinPartyData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJoinPartyData.InnerSingleton);
}
// ********** End ScriptStruct FJoinPartyData ******************************************************

// ********** Begin ScriptStruct FCreateBeaconData *************************************************
struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCreateBeaconData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCreateBeaconData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCreateBeaconData constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCreateBeaconData constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateBeaconData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCreateBeaconData;
class UScriptStruct* FCreateBeaconData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCreateBeaconData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCreateBeaconData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateBeaconData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("CreateBeaconData"));
	}
	return Z_Registration_Info_UScriptStruct_FCreateBeaconData.OuterSingleton;
	}

// ********** Begin ScriptStruct FCreateBeaconData Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBeaconData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBeaconData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconID_MetaData), NewProp_BeaconID_MetaData) }; // 3499776562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCreateBeaconData Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"CreateBeaconData",
	Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers),
	sizeof(FCreateBeaconData),
	alignof(FCreateBeaconData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData()
{
	if (!Z_Registration_Info_UScriptStruct_FCreateBeaconData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCreateBeaconData.InnerSingleton, Z_Construct_UScriptStruct_FCreateBeaconData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCreateBeaconData.InnerSingleton);
}
// ********** End ScriptStruct FCreateBeaconData ***************************************************

// ********** Begin ScriptStruct FReservationNotificationData **************************************
struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReservationNotificationData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReservationNotificationData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconId_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDJoiner_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReservationNotificationData constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDJoiner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReservationNotificationData constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReservationNotificationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReservationNotificationData;
class UScriptStruct* FReservationNotificationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReservationNotificationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReservationNotificationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReservationNotificationData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ReservationNotificationData"));
	}
	return Z_Registration_Info_UScriptStruct_FReservationNotificationData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReservationNotificationData Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReservationNotificationData, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconId_MetaData), NewProp_BeaconId_MetaData) }; // 3499776562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner = { "SteamIDJoiner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReservationNotificationData, SteamIDJoiner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDJoiner_MetaData), NewProp_SteamIDJoiner_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReservationNotificationData Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ReservationNotificationData",
	Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers),
	sizeof(FReservationNotificationData),
	alignof(FReservationNotificationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData()
{
	if (!Z_Registration_Info_UScriptStruct_FReservationNotificationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReservationNotificationData.InnerSingleton, Z_Construct_UScriptStruct_FReservationNotificationData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReservationNotificationData.InnerSingleton);
}
// ********** End ScriptStruct FReservationNotificationData ****************************************

// ********** Begin ScriptStruct FChangeNumOpenSlotsData *******************************************
struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FChangeNumOpenSlotsData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FChangeNumOpenSlotsData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FChangeNumOpenSlotsData constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FChangeNumOpenSlotsData constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeNumOpenSlotsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData;
class UScriptStruct* FChangeNumOpenSlotsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ChangeNumOpenSlotsData"));
	}
	return Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.OuterSingleton;
	}

// ********** Begin ScriptStruct FChangeNumOpenSlotsData Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChangeNumOpenSlotsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FChangeNumOpenSlotsData Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ChangeNumOpenSlotsData",
	Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers),
	sizeof(FChangeNumOpenSlotsData),
	alignof(FChangeNumOpenSlotsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData()
{
	if (!Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.InnerSingleton, Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData.InnerSingleton);
}
// ********** End ScriptStruct FChangeNumOpenSlotsData *********************************************

// ********** Begin Delegate FOnJoinPartyDelegate **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinPartyDelegate_Parms
	{
		FJoinPartyData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinPartyDelegate constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinPartyDelegate constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinPartyDelegate Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinPartyDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1204988696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinPartyDelegate Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinPartyDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinPartyDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinPartyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data)
{
	struct _Script_SteamCore_eventOnJoinPartyDelegate_Parms
	{
		FJoinPartyData Data;
	};
	_Script_SteamCore_eventOnJoinPartyDelegate_Parms Parms;
	Parms.Data=Data;
	OnJoinPartyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinPartyDelegate ****************************************************

// ********** Begin Delegate FOnCreateBeaconDelegate ***********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCreateBeaconDelegate_Parms
	{
		FCreateBeaconData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateBeaconDelegate constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateBeaconDelegate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateBeaconDelegate Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateBeaconDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2412098477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateBeaconDelegate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateBeaconDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeaconDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeaconDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data)
{
	struct _Script_SteamCore_eventOnCreateBeaconDelegate_Parms
	{
		FCreateBeaconData Data;
	};
	_Script_SteamCore_eventOnCreateBeaconDelegate_Parms Parms;
	Parms.Data=Data;
	OnCreateBeaconDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateBeaconDelegate *************************************************

// ********** Begin Delegate FOnReservationNotificationDelegate ************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnReservationNotificationDelegate_Parms
	{
		FReservationNotificationData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnReservationNotificationDelegate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnReservationNotificationDelegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnReservationNotificationDelegate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnReservationNotificationDelegate_Parms, Data), Z_Construct_UScriptStruct_FReservationNotificationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1158777208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnReservationNotificationDelegate Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnReservationNotificationDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnReservationNotificationDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnReservationNotificationDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data)
{
	struct _Script_SteamCore_eventOnReservationNotificationDelegate_Parms
	{
		FReservationNotificationData Data;
	};
	_Script_SteamCore_eventOnReservationNotificationDelegate_Parms Parms;
	Parms.Data=Data;
	OnReservationNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReservationNotificationDelegate **************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsDelegate *****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms
	{
		FChangeNumOpenSlotsData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChangeNumOpenSlotsDelegate constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnChangeNumOpenSlotsDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnChangeNumOpenSlotsDelegate Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4169376836
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnChangeNumOpenSlotsDelegate Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnChangeNumOpenSlotsDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data)
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms
	{
		FChangeNumOpenSlotsData Data;
	};
	_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms Parms;
	Parms.Data=Data;
	OnChangeNumOpenSlotsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChangeNumOpenSlotsDelegate *******************************************

// ********** Begin Delegate FOnAvailableBeaconLocationsDelegate ***********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAvailableBeaconLocationsDelegate constinit property declarations ***
// ********** End Delegate FOnAvailableBeaconLocationsDelegate constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAvailableBeaconLocationsDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate)
{
	OnAvailableBeaconLocationsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAvailableBeaconLocationsDelegate *************************************

// ********** Begin Delegate FOnActiveBeaconsDelegate **********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnActiveBeaconsDelegate constinit property declarations **************
// ********** End Delegate FOnActiveBeaconsDelegate constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnActiveBeaconsDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate)
{
	OnActiveBeaconsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnActiveBeaconsDelegate ************************************************

// ********** Begin Delegate FOnJoinParty **********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinParty_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinParty constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinParty constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinParty Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinParty_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1204988696
void Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnJoinParty_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinParty_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinParty Property Definitions ***************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinParty__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnJoinParty_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnJoinParty_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinParty.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinParty ************************************************************

// ********** Begin Delegate FOnCreateBeacon *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCreateBeacon_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateBeacon constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateBeacon constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateBeacon Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateBeacon_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2412098477
void Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnCreateBeacon_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateBeacon_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateBeacon Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateBeacon__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeacon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnCreateBeacon_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnCreateBeacon_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateBeacon.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateBeacon *********************************************************

// ********** Begin Delegate FOnChangeNumOpenSlots *************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlots_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChangeNumOpenSlots constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnChangeNumOpenSlots constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnChangeNumOpenSlots Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnChangeNumOpenSlots_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4169376836
void Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnChangeNumOpenSlots_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnChangeNumOpenSlots_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnChangeNumOpenSlots Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnChangeNumOpenSlots__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::_Script_SteamCore_eventOnChangeNumOpenSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnChangeNumOpenSlots_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnChangeNumOpenSlots_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnChangeNumOpenSlots.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChangeNumOpenSlots ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamPartiesBeaconLocationType_StaticEnum, TEXT("ESteamPartiesBeaconLocationType"), &Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 785961422U) },
		{ ESteamPartiesBeaconLocationData_StaticEnum, TEXT("ESteamPartiesBeaconLocationData"), &Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2108398180U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamPartyBeaconLocation::StaticStruct, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewStructOps, TEXT("SteamPartyBeaconLocation"),&Z_Registration_Info_UScriptStruct_FSteamPartyBeaconLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamPartyBeaconLocation), 3280647280U) },
		{ FJoinPartyData::StaticStruct, Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewStructOps, TEXT("JoinPartyData"),&Z_Registration_Info_UScriptStruct_FJoinPartyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinPartyData), 1204988696U) },
		{ FCreateBeaconData::StaticStruct, Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewStructOps, TEXT("CreateBeaconData"),&Z_Registration_Info_UScriptStruct_FCreateBeaconData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateBeaconData), 2412098477U) },
		{ FReservationNotificationData::StaticStruct, Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewStructOps, TEXT("ReservationNotificationData"),&Z_Registration_Info_UScriptStruct_FReservationNotificationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReservationNotificationData), 1158777208U) },
		{ FChangeNumOpenSlotsData::StaticStruct, Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewStructOps, TEXT("ChangeNumOpenSlotsData"),&Z_Registration_Info_UScriptStruct_FChangeNumOpenSlotsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChangeNumOpenSlotsData), 4169376836U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_2838070716{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
