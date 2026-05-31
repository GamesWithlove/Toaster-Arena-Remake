// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntryBatteryState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntryBatteryState() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntryBatteryState *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryBatteryState;
static UEnum* ELowEntryBatteryState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryBatteryState"));
	}
	return Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryBatteryState>()
{
	return ELowEntryBatteryState_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Charging.Name", "ELowEntryBatteryState::Charging" },
		{ "Discharging.Name", "ELowEntryBatteryState::Discharging" },
		{ "Full.Name", "ELowEntryBatteryState::Full" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryBatteryState.h" },
		{ "NotCharging.Name", "ELowEntryBatteryState::NotCharging" },
		{ "Unknown.Name", "ELowEntryBatteryState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntryBatteryState::Charging", (int64)ELowEntryBatteryState::Charging },
		{ "ELowEntryBatteryState::Discharging", (int64)ELowEntryBatteryState::Discharging },
		{ "ELowEntryBatteryState::Full", (int64)ELowEntryBatteryState::Full },
		{ "ELowEntryBatteryState::NotCharging", (int64)ELowEntryBatteryState::NotCharging },
		{ "ELowEntryBatteryState::Unknown", (int64)ELowEntryBatteryState::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntryBatteryState",
	"ELowEntryBatteryState",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState()
{
	if (!Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton;
}
// ********** End Enum ELowEntryBatteryState *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntryBatteryState_StaticEnum, TEXT("ELowEntryBatteryState"), &Z_Registration_Info_UEnum_ELowEntryBatteryState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3730670140U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h__Script_LowEntryExtendedStandardLibrary_1472587080{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
