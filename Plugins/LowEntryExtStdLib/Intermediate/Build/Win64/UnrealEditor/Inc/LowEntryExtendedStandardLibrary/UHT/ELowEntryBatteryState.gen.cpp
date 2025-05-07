// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/ELowEntryBatteryState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryBatteryState() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryBatteryState;
	static UEnum* ELowEntryBatteryState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryBatteryState"));
		}
		return Z_Registration_Info_UEnum_ELowEntryBatteryState.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryBatteryState>()
	{
		return ELowEntryBatteryState_StaticEnum();
	}
	struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enumerators[] = {
		{ "ELowEntryBatteryState::Charging", (int64)ELowEntryBatteryState::Charging },
		{ "ELowEntryBatteryState::Discharging", (int64)ELowEntryBatteryState::Discharging },
		{ "ELowEntryBatteryState::Full", (int64)ELowEntryBatteryState::Full },
		{ "ELowEntryBatteryState::NotCharging", (int64)ELowEntryBatteryState::NotCharging },
		{ "ELowEntryBatteryState::Unknown", (int64)ELowEntryBatteryState::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Charging.Name", "ELowEntryBatteryState::Charging" },
		{ "Discharging.Name", "ELowEntryBatteryState::Discharging" },
		{ "Full.Name", "ELowEntryBatteryState::Full" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryBatteryState.h" },
		{ "NotCharging.Name", "ELowEntryBatteryState::NotCharging" },
		{ "Unknown.Name", "ELowEntryBatteryState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		"ELowEntryBatteryState",
		"ELowEntryBatteryState",
		Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState()
	{
		if (!Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryBatteryState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELowEntryBatteryState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h_Statics::EnumInfo[] = {
		{ ELowEntryBatteryState_StaticEnum, TEXT("ELowEntryBatteryState"), &Z_Registration_Info_UEnum_ELowEntryBatteryState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1070692246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h_756740455(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
