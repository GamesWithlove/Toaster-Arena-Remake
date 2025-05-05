// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCommon() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGChangeType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGChangeType;
	static UEnum* EPCGChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGChangeType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGChangeType"));
		}
		return Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGChangeType>()
	{
		return EPCGChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators[] = {
		{ "EPCGChangeType::None", (int64)EPCGChangeType::None },
		{ "EPCGChangeType::Cosmetic", (int64)EPCGChangeType::Cosmetic },
		{ "EPCGChangeType::Settings", (int64)EPCGChangeType::Settings },
		{ "EPCGChangeType::Input", (int64)EPCGChangeType::Input },
		{ "EPCGChangeType::Edge", (int64)EPCGChangeType::Edge },
		{ "EPCGChangeType::Node", (int64)EPCGChangeType::Node },
		{ "EPCGChangeType::Structural", (int64)EPCGChangeType::Structural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Cosmetic.Name", "EPCGChangeType::Cosmetic" },
		{ "Edge.Name", "EPCGChangeType::Edge" },
		{ "Input.Name", "EPCGChangeType::Input" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "Node.Name", "EPCGChangeType::Node" },
		{ "None.Name", "EPCGChangeType::None" },
		{ "Settings.Name", "EPCGChangeType::Settings" },
		{ "Structural.Name", "EPCGChangeType::Structural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGChangeType",
		"EPCGChangeType",
		Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGChangeType()
	{
		if (!Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDataType;
	static UEnum* EPCGDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDataType"));
		}
		return Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDataType>()
	{
		return EPCGDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators[] = {
		{ "EPCGDataType::None", (int64)EPCGDataType::None },
		{ "EPCGDataType::Point", (int64)EPCGDataType::Point },
		{ "EPCGDataType::Spline", (int64)EPCGDataType::Spline },
		{ "EPCGDataType::LandscapeSpline", (int64)EPCGDataType::LandscapeSpline },
		{ "EPCGDataType::PolyLine", (int64)EPCGDataType::PolyLine },
		{ "EPCGDataType::Landscape", (int64)EPCGDataType::Landscape },
		{ "EPCGDataType::Texture", (int64)EPCGDataType::Texture },
		{ "EPCGDataType::RenderTarget", (int64)EPCGDataType::RenderTarget },
		{ "EPCGDataType::BaseTexture", (int64)EPCGDataType::BaseTexture },
		{ "EPCGDataType::Surface", (int64)EPCGDataType::Surface },
		{ "EPCGDataType::Volume", (int64)EPCGDataType::Volume },
		{ "EPCGDataType::Primitive", (int64)EPCGDataType::Primitive },
		{ "EPCGDataType::Concrete", (int64)EPCGDataType::Concrete },
		{ "EPCGDataType::Composite", (int64)EPCGDataType::Composite },
		{ "EPCGDataType::Spatial", (int64)EPCGDataType::Spatial },
		{ "EPCGDataType::Param", (int64)EPCGDataType::Param },
		{ "EPCGDataType::Settings", (int64)EPCGDataType::Settings },
		{ "EPCGDataType::Other", (int64)EPCGDataType::Other },
		{ "EPCGDataType::Any", (int64)EPCGDataType::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EPCGDataType::Any" },
		{ "BaseTexture.Hidden", "" },
		{ "BaseTexture.Name", "EPCGDataType::BaseTexture" },
		{ "Bitflags", "" },
		{ "Composite.Comment", "/** Boolean operations like union, difference, intersection. */" },
		{ "Composite.Hidden", "" },
		{ "Composite.Name", "EPCGDataType::Composite" },
		{ "Composite.ToolTip", "Boolean operations like union, difference, intersection." },
		{ "Concrete.Comment", "/** Simple concrete data. */" },
		{ "Concrete.Name", "EPCGDataType::Concrete" },
		{ "Concrete.ToolTip", "Simple concrete data." },
		{ "Landscape.Name", "EPCGDataType::Landscape" },
		{ "LandscapeSpline.Name", "EPCGDataType::LandscapeSpline" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGDataType::None" },
		{ "Other.Name", "EPCGDataType::Other" },
		{ "Param.DisplayName", "Attribute Set" },
		{ "Param.Name", "EPCGDataType::Param" },
		{ "Point.Name", "EPCGDataType::Point" },
		{ "PolyLine.Hidden", "" },
		{ "PolyLine.Name", "EPCGDataType::PolyLine" },
		{ "Primitive.Name", "EPCGDataType::Primitive" },
		{ "RenderTarget.Name", "EPCGDataType::RenderTarget" },
		{ "Settings.Hidden", "" },
		{ "Settings.Name", "EPCGDataType::Settings" },
		{ "Spatial.Comment", "/** Combinations of concrete data and/or boolean operations. */" },
		{ "Spatial.Name", "EPCGDataType::Spatial" },
		{ "Spatial.ToolTip", "Combinations of concrete data and/or boolean operations." },
		{ "Spline.Name", "EPCGDataType::Spline" },
		{ "Surface.Name", "EPCGDataType::Surface" },
		{ "Texture.Name", "EPCGDataType::Texture" },
		{ "Volume.Name", "EPCGDataType::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDataType",
		"EPCGDataType",
		Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDataType()
	{
		if (!Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo[] = {
		{ EPCGChangeType_StaticEnum, TEXT("EPCGChangeType"), &Z_Registration_Info_UEnum_EPCGChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1821431824U) },
		{ EPCGDataType_StaticEnum, TEXT("EPCGDataType"), &Z_Registration_Info_UEnum_EPCGDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1627789319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h_1861504752(TEXT("/Script/PCG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
