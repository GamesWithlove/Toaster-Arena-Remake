// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGSplineSampler.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSplineSampler() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingFill();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGSplineSamplerParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSplineSamplingMode;
	static UEnum* EPCGSplineSamplingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSplineSamplingMode"));
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSplineSamplingMode>()
	{
		return EPCGSplineSamplingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enumerators[] = {
		{ "EPCGSplineSamplingMode::Subdivision", (int64)EPCGSplineSamplingMode::Subdivision },
		{ "EPCGSplineSamplingMode::Distance", (int64)EPCGSplineSamplingMode::Distance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enum_MetaDataParams[] = {
		{ "Distance.Name", "EPCGSplineSamplingMode::Distance" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "Subdivision.Name", "EPCGSplineSamplingMode::Subdivision" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSplineSamplingMode",
		"EPCGSplineSamplingMode",
		Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSplineSamplingDimension;
	static UEnum* EPCGSplineSamplingDimension_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSplineSamplingDimension"));
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSplineSamplingDimension>()
	{
		return EPCGSplineSamplingDimension_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enumerators[] = {
		{ "EPCGSplineSamplingDimension::OnSpline", (int64)EPCGSplineSamplingDimension::OnSpline },
		{ "EPCGSplineSamplingDimension::OnHorizontal", (int64)EPCGSplineSamplingDimension::OnHorizontal },
		{ "EPCGSplineSamplingDimension::OnVertical", (int64)EPCGSplineSamplingDimension::OnVertical },
		{ "EPCGSplineSamplingDimension::OnVolume", (int64)EPCGSplineSamplingDimension::OnVolume },
		{ "EPCGSplineSamplingDimension::OnInterior", (int64)EPCGSplineSamplingDimension::OnInterior },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "OnHorizontal.Name", "EPCGSplineSamplingDimension::OnHorizontal" },
		{ "OnInterior.Name", "EPCGSplineSamplingDimension::OnInterior" },
		{ "OnSpline.Name", "EPCGSplineSamplingDimension::OnSpline" },
		{ "OnVertical.Name", "EPCGSplineSamplingDimension::OnVertical" },
		{ "OnVolume.Name", "EPCGSplineSamplingDimension::OnVolume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSplineSamplingDimension",
		"EPCGSplineSamplingDimension",
		Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSplineSamplingFill;
	static UEnum* EPCGSplineSamplingFill_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSplineSamplingFill"));
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSplineSamplingFill>()
	{
		return EPCGSplineSamplingFill_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enumerators[] = {
		{ "EPCGSplineSamplingFill::Fill", (int64)EPCGSplineSamplingFill::Fill },
		{ "EPCGSplineSamplingFill::EdgesOnly", (int64)EPCGSplineSamplingFill::EdgesOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enum_MetaDataParams[] = {
		{ "EdgesOnly.Name", "EPCGSplineSamplingFill::EdgesOnly" },
		{ "Fill.Name", "EPCGSplineSamplingFill::Fill" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSplineSamplingFill",
		"EPCGSplineSamplingFill",
		Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingFill()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation;
	static UEnum* EPCGSplineSamplingInteriorOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSplineSamplingInteriorOrientation"));
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSplineSamplingInteriorOrientation>()
	{
		return EPCGSplineSamplingInteriorOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enumerators[] = {
		{ "EPCGSplineSamplingInteriorOrientation::Uniform", (int64)EPCGSplineSamplingInteriorOrientation::Uniform },
		{ "EPCGSplineSamplingInteriorOrientation::FollowCurvature", (int64)EPCGSplineSamplingInteriorOrientation::FollowCurvature },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enum_MetaDataParams[] = {
		{ "FollowCurvature.Name", "EPCGSplineSamplingInteriorOrientation::FollowCurvature" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "Uniform.Name", "EPCGSplineSamplingInteriorOrientation::Uniform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSplineSamplingInteriorOrientation",
		"EPCGSplineSamplingInteriorOrientation",
		Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation()
	{
		if (!Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams;
class UScriptStruct* FPCGSplineSamplerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineSamplerParams, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGSplineSamplerParams"));
	}
	return Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGSplineSamplerParams>()
{
	return FPCGSplineSamplerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Dimension_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Dimension;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Fill_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fill_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Fill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionsPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivisionsPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPlanarSubdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlanarSubdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHeightSubdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHeightSubdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeDirectionDelta_MetaData[];
#endif
		static void NewProp_bComputeDirectionDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeDirectionDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextDirectionDeltaAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextDirectionDeltaAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeCurvature_MetaData[];
#endif
		static void NewProp_bComputeCurvature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeCurvature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurvatureAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorSampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorBorderSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorBorderSampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTreatSplineAsPolyline_MetaData[];
#endif
		static void NewProp_bTreatSplineAsPolyline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatSplineAsPolyline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteriorOrientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteriorOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectOntoSurface_MetaData[];
#endif
		static void NewProp_bProjectOntoSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectOntoSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorDensityFalloffCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteriorDensityFalloffCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeedFromLocalPosition_MetaData[];
#endif
		static void NewProp_bSeedFromLocalPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeedFromLocalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeedFrom2DPosition_MetaData[];
#endif
		static void NewProp_bSeedFrom2DPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeedFrom2DPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGSplineSamplerParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Dimension!=EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, Mode), Z_Construct_UEnum_PCG_EPCGSplineSamplingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode_MetaData)) }; // 1453346055
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, Dimension), Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension_MetaData)) }; // 3163143601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Dimension!=EPCGSplineSamplingDimension::OnSpline&&Dimension!=EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill = { "Fill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, Fill), Z_Construct_UEnum_PCG_EPCGSplineSamplingFill, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill_MetaData)) }; // 333605197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_SubdivisionsPerSegment_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "Mode==EPCGSplineSamplingMode::Subdivision&&Dimension!=EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_SubdivisionsPerSegment = { "SubdivisionsPerSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, SubdivisionsPerSegment), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_SubdivisionsPerSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_SubdivisionsPerSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_DistanceIncrement_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "Mode==EPCGSplineSamplingMode::Distance&&Dimension!=EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_DistanceIncrement = { "DistanceIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, DistanceIncrement), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_DistanceIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_DistanceIncrement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumPlanarSubdivisions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnHorizontal||Dimension==EPCGSplineSamplingDimension::OnVolume" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumPlanarSubdivisions = { "NumPlanarSubdivisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, NumPlanarSubdivisions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumPlanarSubdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumPlanarSubdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumHeightSubdivisions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnVertical||Dimension==EPCGSplineSamplingDimension::OnVolume" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumHeightSubdivisions = { "NumHeightSubdivisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, NumHeightSubdivisions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumHeightSubdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumHeightSubdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bComputeDirectionDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta = { "bComputeDirectionDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NextDirectionDeltaAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute that wil contain the delta angle to the next point on the spline w.r.t to the current's point Up vector. */" },
		{ "EditCondition", "bComputeDirectionDelta" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Attribute that wil contain the delta angle to the next point on the spline w.r.t to the current's point Up vector." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NextDirectionDeltaAttribute = { "NextDirectionDeltaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, NextDirectionDeltaAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NextDirectionDeltaAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NextDirectionDeltaAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bComputeCurvature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature = { "bComputeCurvature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_CurvatureAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute that will contain the curvature. Note that the radius of curvature is defined as 1/Curvature, and might need you to scale to world units */" },
		{ "EditCondition", "bComputeCurvature" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Attribute that will contain the curvature. Note that the radius of curvature is defined as 1/Curvature, and might need you to scale to world units" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_CurvatureAttribute = { "CurvatureAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, CurvatureAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_CurvatureAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_CurvatureAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorSampleSpacing_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** The space between each sample point */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "The space between each sample point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorSampleSpacing = { "InteriorSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, InteriorSampleSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorSampleSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorSampleSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorBorderSampleSpacing_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** The space between each sample point on the spline boundary. Used for computation; lower spacing is more expensive but more accurate. */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior&&!bTreatSplineAsPolyline" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "The space between each sample point on the spline boundary. Used for computation; lower spacing is more expensive but more accurate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorBorderSampleSpacing = { "InteriorBorderSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, InteriorBorderSampleSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorBorderSampleSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorBorderSampleSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use the spline points to form a polyline, instead of computing many sample points along the spline. This is more accurate if your spline is linear. */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Use the spline points to form a polyline, instead of computing many sample points along the spline. This is more accurate if your spline is linear." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bTreatSplineAsPolyline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline = { "bTreatSplineAsPolyline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Determines the orientation of interior points */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Determines the orientation of interior points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation = { "InteriorOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, InteriorOrientation), Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation_MetaData)) }; // 1029503081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Project sample points onto one possible surface given by the spline boundary */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Project sample points onto one possible surface given by the spline boundary" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bProjectOntoSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface = { "bProjectOntoSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorDensityFalloffCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the density for each sample based on its distance from the spline. X axis is normalized distance to boundary (0-1), Y axis is density value. */" },
		{ "EditCondition", "Dimension==EPCGSplineSamplingDimension::OnInterior" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Defines the density for each sample based on its distance from the spline. X axis is normalized distance to boundary (0-1), Y axis is density value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorDensityFalloffCurve = { "InteriorDensityFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGSplineSamplerParams, InteriorDensityFalloffCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorDensityFalloffCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorDensityFalloffCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_MetaData[] = {
		{ "Category", "Settings|Seeding" },
		{ "Comment", "/** Controls whether we will seed the sampled points using the final world position or the local position */" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Controls whether we will seed the sampled points using the final world position or the local position" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bSeedFromLocalPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition = { "bSeedFromLocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_MetaData[] = {
		{ "Category", "Settings|Seeding" },
		{ "Comment", "/** Controls whether we will seed the sampled points using the 3D position or the 2D (XY) position */" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "ToolTip", "Controls whether we will seed the sampled points using the 3D position or the 2D (XY) position" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_SetBit(void* Obj)
	{
		((FPCGSplineSamplerParams*)Obj)->bSeedFrom2DPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition = { "bSeedFrom2DPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGSplineSamplerParams), &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Dimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_Fill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_SubdivisionsPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_DistanceIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumPlanarSubdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NumHeightSubdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_NextDirectionDeltaAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_CurvatureAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorSampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorBorderSampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_InteriorDensityFalloffCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGSplineSamplerParams",
		sizeof(FPCGSplineSamplerParams),
		alignof(FPCGSplineSamplerParams),
		Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGSplineSamplerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.InnerSingleton, Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams.InnerSingleton;
	}
	void UPCGSplineSamplerSettings::StaticRegisterNativesUPCGSplineSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSplineSamplerSettings);
	UClass* Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister()
	{
		return UPCGSplineSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSplineSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplerParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplerParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSplineSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::NewProp_SamplerParams_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSplineSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::NewProp_SamplerParams = { "SamplerParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSplineSamplerSettings, SamplerParams), Z_Construct_UScriptStruct_FPCGSplineSamplerParams, METADATA_PARAMS(Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::NewProp_SamplerParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::NewProp_SamplerParams_MetaData)) }; // 2463059298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::NewProp_SamplerParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSplineSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::ClassParams = {
		&UPCGSplineSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSplineSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSplineSamplerSettings>()
	{
		return UPCGSplineSamplerSettings::StaticClass();
	}
	UPCGSplineSamplerSettings::UPCGSplineSamplerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSplineSamplerSettings);
	UPCGSplineSamplerSettings::~UPCGSplineSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::EnumInfo[] = {
		{ EPCGSplineSamplingMode_StaticEnum, TEXT("EPCGSplineSamplingMode"), &Z_Registration_Info_UEnum_EPCGSplineSamplingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1453346055U) },
		{ EPCGSplineSamplingDimension_StaticEnum, TEXT("EPCGSplineSamplingDimension"), &Z_Registration_Info_UEnum_EPCGSplineSamplingDimension, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3163143601U) },
		{ EPCGSplineSamplingFill_StaticEnum, TEXT("EPCGSplineSamplingFill"), &Z_Registration_Info_UEnum_EPCGSplineSamplingFill, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 333605197U) },
		{ EPCGSplineSamplingInteriorOrientation_StaticEnum, TEXT("EPCGSplineSamplingInteriorOrientation"), &Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1029503081U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ScriptStructInfo[] = {
		{ FPCGSplineSamplerParams::StaticStruct, Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewStructOps, TEXT("PCGSplineSamplerParams"), &Z_Registration_Info_UScriptStruct_PCGSplineSamplerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGSplineSamplerParams), 2463059298U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSplineSamplerSettings, UPCGSplineSamplerSettings::StaticClass, TEXT("UPCGSplineSamplerSettings"), &Z_Registration_Info_UClass_UPCGSplineSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSplineSamplerSettings), 3778642031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_3613563894(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
