// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/ELowEntrySplitScreenTypeTwoPlayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntrySplitScreenTypeTwoPlayers() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers;
	static UEnum* ELowEntrySplitScreenTypeTwoPlayers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntrySplitScreenTypeTwoPlayers"));
		}
		return Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntrySplitScreenTypeTwoPlayers>()
	{
		return ELowEntrySplitScreenTypeTwoPlayers_StaticEnum();
	}
	struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enumerators[] = {
		{ "ELowEntrySplitScreenTypeTwoPlayers::Horizontal", (int64)ELowEntrySplitScreenTypeTwoPlayers::Horizontal },
		{ "ELowEntrySplitScreenTypeTwoPlayers::Vertical", (int64)ELowEntrySplitScreenTypeTwoPlayers::Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Horizontal.Name", "ELowEntrySplitScreenTypeTwoPlayers::Horizontal" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntrySplitScreenTypeTwoPlayers.h" },
		{ "Vertical.Name", "ELowEntrySplitScreenTypeTwoPlayers::Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		"ELowEntrySplitScreenTypeTwoPlayers",
		"ELowEntrySplitScreenTypeTwoPlayers",
		Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers()
	{
		if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeTwoPlayers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeTwoPlayers_h_Statics::EnumInfo[] = {
		{ ELowEntrySplitScreenTypeTwoPlayers_StaticEnum, TEXT("ELowEntrySplitScreenTypeTwoPlayers"), &Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeTwoPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3266540088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeTwoPlayers_h_787142491(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeTwoPlayers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeTwoPlayers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
