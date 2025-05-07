// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/ELowEntrySplitScreenType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntrySplitScreenType() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntrySplitScreenType;
	static UEnum* ELowEntrySplitScreenType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELowEntrySplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntrySplitScreenType"));
		}
		return Z_Registration_Info_UEnum_ELowEntrySplitScreenType.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntrySplitScreenType>()
	{
		return ELowEntrySplitScreenType_StaticEnum();
	}
	struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enumerators[] = {
		{ "ELowEntrySplitScreenType::None", (int64)ELowEntrySplitScreenType::None },
		{ "ELowEntrySplitScreenType::TwoPlayer_Horizontal", (int64)ELowEntrySplitScreenType::TwoPlayer_Horizontal },
		{ "ELowEntrySplitScreenType::TwoPlayer_Vertical", (int64)ELowEntrySplitScreenType::TwoPlayer_Vertical },
		{ "ELowEntrySplitScreenType::ThreePlayer_FavorTop", (int64)ELowEntrySplitScreenType::ThreePlayer_FavorTop },
		{ "ELowEntrySplitScreenType::ThreePlayer_FavorBottom", (int64)ELowEntrySplitScreenType::ThreePlayer_FavorBottom },
		{ "ELowEntrySplitScreenType::ThreePlayer_Vertical", (int64)ELowEntrySplitScreenType::ThreePlayer_Vertical },
		{ "ELowEntrySplitScreenType::FourPlayer_Grid", (int64)ELowEntrySplitScreenType::FourPlayer_Grid },
		{ "ELowEntrySplitScreenType::FourPlayer_Vertical", (int64)ELowEntrySplitScreenType::FourPlayer_Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FourPlayer_Grid.Name", "ELowEntrySplitScreenType::FourPlayer_Grid" },
		{ "FourPlayer_Vertical.Name", "ELowEntrySplitScreenType::FourPlayer_Vertical" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntrySplitScreenType.h" },
		{ "None.Name", "ELowEntrySplitScreenType::None" },
		{ "ThreePlayer_FavorBottom.Name", "ELowEntrySplitScreenType::ThreePlayer_FavorBottom" },
		{ "ThreePlayer_FavorTop.Name", "ELowEntrySplitScreenType::ThreePlayer_FavorTop" },
		{ "ThreePlayer_Vertical.Name", "ELowEntrySplitScreenType::ThreePlayer_Vertical" },
		{ "TwoPlayer_Horizontal.Name", "ELowEntrySplitScreenType::TwoPlayer_Horizontal" },
		{ "TwoPlayer_Vertical.Name", "ELowEntrySplitScreenType::TwoPlayer_Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		"ELowEntrySplitScreenType",
		"ELowEntrySplitScreenType",
		Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType()
	{
		if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntrySplitScreenType.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELowEntrySplitScreenType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h_Statics::EnumInfo[] = {
		{ ELowEntrySplitScreenType_StaticEnum, TEXT("ELowEntrySplitScreenType"), &Z_Registration_Info_UEnum_ELowEntrySplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2708328180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h_2306876649(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
