// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntryHmacAlgorithm.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntryHmacAlgorithm() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntryHmacAlgorithm ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm;
static UEnum* ELowEntryHmacAlgorithm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryHmacAlgorithm"));
	}
	return Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryHmacAlgorithm>()
{
	return ELowEntryHmacAlgorithm_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MD5.Name", "ELowEntryHmacAlgorithm::MD5" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryHmacAlgorithm.h" },
		{ "SHA1.Name", "ELowEntryHmacAlgorithm::SHA1" },
		{ "SHA256.Name", "ELowEntryHmacAlgorithm::SHA256" },
		{ "SHA512.Name", "ELowEntryHmacAlgorithm::SHA512" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntryHmacAlgorithm::MD5", (int64)ELowEntryHmacAlgorithm::MD5 },
		{ "ELowEntryHmacAlgorithm::SHA1", (int64)ELowEntryHmacAlgorithm::SHA1 },
		{ "ELowEntryHmacAlgorithm::SHA256", (int64)ELowEntryHmacAlgorithm::SHA256 },
		{ "ELowEntryHmacAlgorithm::SHA512", (int64)ELowEntryHmacAlgorithm::SHA512 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntryHmacAlgorithm",
	"ELowEntryHmacAlgorithm",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm()
{
	if (!Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm.InnerSingleton;
}
// ********** End Enum ELowEntryHmacAlgorithm ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntryHmacAlgorithm_StaticEnum, TEXT("ELowEntryHmacAlgorithm"), &Z_Registration_Info_UEnum_ELowEntryHmacAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2241932433U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h__Script_LowEntryExtendedStandardLibrary_2499938619{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
