// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPoint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointProperties;
	static UEnum* EPCGPointProperties_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointProperties, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointProperties"));
		}
		return Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointProperties>()
	{
		return EPCGPointProperties_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointProperties_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enumerators[] = {
		{ "EPCGPointProperties::Density", (int64)EPCGPointProperties::Density },
		{ "EPCGPointProperties::BoundsMin", (int64)EPCGPointProperties::BoundsMin },
		{ "EPCGPointProperties::BoundsMax", (int64)EPCGPointProperties::BoundsMax },
		{ "EPCGPointProperties::Extents", (int64)EPCGPointProperties::Extents },
		{ "EPCGPointProperties::Color", (int64)EPCGPointProperties::Color },
		{ "EPCGPointProperties::Position", (int64)EPCGPointProperties::Position },
		{ "EPCGPointProperties::Rotation", (int64)EPCGPointProperties::Rotation },
		{ "EPCGPointProperties::Scale", (int64)EPCGPointProperties::Scale },
		{ "EPCGPointProperties::Transform", (int64)EPCGPointProperties::Transform },
		{ "EPCGPointProperties::Steepness", (int64)EPCGPointProperties::Steepness },
		{ "EPCGPointProperties::LocalCenter", (int64)EPCGPointProperties::LocalCenter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enum_MetaDataParams[] = {
		{ "BoundsMax.Name", "EPCGPointProperties::BoundsMax" },
		{ "BoundsMin.Name", "EPCGPointProperties::BoundsMin" },
		{ "Color.Name", "EPCGPointProperties::Color" },
		{ "Density.Name", "EPCGPointProperties::Density" },
		{ "Extents.Name", "EPCGPointProperties::Extents" },
		{ "LocalCenter.Name", "EPCGPointProperties::LocalCenter" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
		{ "Position.Name", "EPCGPointProperties::Position" },
		{ "Rotation.Name", "EPCGPointProperties::Rotation" },
		{ "Scale.Name", "EPCGPointProperties::Scale" },
		{ "Steepness.Name", "EPCGPointProperties::Steepness" },
		{ "Transform.Name", "EPCGPointProperties::Transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointProperties",
		"EPCGPointProperties",
		Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPoint;
class UScriptStruct* FPCGPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPoint, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPoint"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPoint.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPoint>()
{
	return FPCGPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataEntry_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_MetadataEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, BoundsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, BoundsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, Color), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Steepness_MetaData[] = {
		{ "Category", "Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, Steepness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Steepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Steepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_MetadataEntry_MetaData[] = {
		{ "Category", "Properties|Metadata" },
		{ "ModuleRelativePath", "Public/PCGPoint.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_MetadataEntry = { "MetadataEntry", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPoint, MetadataEntry), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_MetadataEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_MetadataEntry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_BoundsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Steepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPoint_Statics::NewProp_MetadataEntry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPoint",
		sizeof(FPCGPoint),
		alignof(FPCGPoint),
		Z_Construct_UScriptStruct_FPCGPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPoint.InnerSingleton, Z_Construct_UScriptStruct_FPCGPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPoint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::EnumInfo[] = {
		{ EPCGPointProperties_StaticEnum, TEXT("EPCGPointProperties"), &Z_Registration_Info_UEnum_EPCGPointProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 672201325U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::ScriptStructInfo[] = {
		{ FPCGPoint::StaticStruct, Z_Construct_UScriptStruct_FPCGPoint_Statics::NewStructOps, TEXT("PCGPoint"), &Z_Registration_Info_UScriptStruct_PCGPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPoint), 877907965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_1766008112(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
