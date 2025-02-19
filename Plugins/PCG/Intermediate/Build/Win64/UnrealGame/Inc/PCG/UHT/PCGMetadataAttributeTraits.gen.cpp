// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGMetadataAttributeTraits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataAttributeTraits() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataTypes;
	static UEnum* EPCGMetadataTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataTypes, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataTypes"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataTypes.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataTypes>()
	{
		return EPCGMetadataTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enumerators[] = {
		{ "EPCGMetadataTypes::Float", (int64)EPCGMetadataTypes::Float },
		{ "EPCGMetadataTypes::Double", (int64)EPCGMetadataTypes::Double },
		{ "EPCGMetadataTypes::Integer32", (int64)EPCGMetadataTypes::Integer32 },
		{ "EPCGMetadataTypes::Integer64", (int64)EPCGMetadataTypes::Integer64 },
		{ "EPCGMetadataTypes::Vector2", (int64)EPCGMetadataTypes::Vector2 },
		{ "EPCGMetadataTypes::Vector", (int64)EPCGMetadataTypes::Vector },
		{ "EPCGMetadataTypes::Vector4", (int64)EPCGMetadataTypes::Vector4 },
		{ "EPCGMetadataTypes::Quaternion", (int64)EPCGMetadataTypes::Quaternion },
		{ "EPCGMetadataTypes::Transform", (int64)EPCGMetadataTypes::Transform },
		{ "EPCGMetadataTypes::String", (int64)EPCGMetadataTypes::String },
		{ "EPCGMetadataTypes::Boolean", (int64)EPCGMetadataTypes::Boolean },
		{ "EPCGMetadataTypes::Rotator", (int64)EPCGMetadataTypes::Rotator },
		{ "EPCGMetadataTypes::Name", (int64)EPCGMetadataTypes::Name },
		{ "EPCGMetadataTypes::Count", (int64)EPCGMetadataTypes::Count },
		{ "EPCGMetadataTypes::Unknown", (int64)EPCGMetadataTypes::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EPCGMetadataTypes::Boolean" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EPCGMetadataTypes::Count" },
		{ "Double.Name", "EPCGMetadataTypes::Double" },
		{ "Float.Name", "EPCGMetadataTypes::Float" },
		{ "Integer32.Name", "EPCGMetadataTypes::Integer32" },
		{ "Integer64.Name", "EPCGMetadataTypes::Integer64" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAttributeTraits.h" },
		{ "Name.Name", "EPCGMetadataTypes::Name" },
		{ "Quaternion.Name", "EPCGMetadataTypes::Quaternion" },
		{ "Rotator.Name", "EPCGMetadataTypes::Rotator" },
		{ "String.Name", "EPCGMetadataTypes::String" },
		{ "Transform.Name", "EPCGMetadataTypes::Transform" },
		{ "Unknown.Name", "EPCGMetadataTypes::Unknown" },
		{ "Vector.Name", "EPCGMetadataTypes::Vector" },
		{ "Vector2.Name", "EPCGMetadataTypes::Vector2" },
		{ "Vector4.Name", "EPCGMetadataTypes::Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataTypes",
		"EPCGMetadataTypes",
		Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataTypes.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataTypes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h_Statics::EnumInfo[] = {
		{ EPCGMetadataTypes_StaticEnum, TEXT("EPCGMetadataTypes"), &Z_Registration_Info_UEnum_EPCGMetadataTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168356382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h_3707794714(TEXT("/Script/PCG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
