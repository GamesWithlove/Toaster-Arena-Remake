// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGTextureSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGTextureSampler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGTextureSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTextureColorChannel();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTextureDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGTextureSamplerSettings::StaticRegisterNativesUPCGTextureSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGTextureSamplerSettings);
	UClass* Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister()
	{
		return UPCGTextureSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGTextureSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTransform_MetaData[];
#endif
		static void NewProp_bUseAbsoluteTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdvancedTiling_MetaData[];
#endif
		static void NewProp_bUseAdvancedTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdvancedTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTileBounds_MetaData[];
#endif
		static void NewProp_bUseTileBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTileBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileBoundsMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileBoundsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileBoundsMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileBoundsMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGTextureSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Surface transform\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Surface transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_SetBit(void* Obj)
	{
		((UPCGTextureSamplerSettings*)Obj)->bUseAbsoluteTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform = { "bUseAbsoluteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTextureSamplerSettings), &Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Texture specific parameters\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "ToolTip", "Texture specific parameters" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "// Common members in BaseTextureData\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Common members in BaseTextureData" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGTextureDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction_MetaData)) }; // 2089783010
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel = { "ColorChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, ColorChannel), Z_Construct_UEnum_PCG_EPCGTextureColorChannel, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel_MetaData)) }; // 2151064442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TexelSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The size of one texel in cm, used when calling ToPointData. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The size of one texel in cm, used when calling ToPointData." },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TexelSize = { "TexelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, TexelSize), METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TexelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TexelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to tile the source or to stretch it to fit target area. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to tile the source or to stretch it to fit target area." },
	};
#endif
	void Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_SetBit(void* Obj)
	{
		((UPCGTextureSamplerSettings*)Obj)->bUseAdvancedTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling = { "bUseAdvancedTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTextureSamplerSettings), &Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Tiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_CenterOffset_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, CenterOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_CenterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_CenterOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation to apply when sampling texture. */" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rotation to apply when sampling texture." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, Rotation), METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditionCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_SetBit(void* Obj)
	{
		((UPCGTextureSamplerSettings*)Obj)->bUseTileBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds = { "bUseTileBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTextureSamplerSettings), &Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMin_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling && bUseTileBounds" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMin = { "TileBoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, TileBoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMax_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling && bUseTileBounds" },
		{ "ModuleRelativePath", "Public/Elements/PCGTextureSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMax = { "TileBoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureSamplerSettings, TileBoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_ColorChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TexelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_CenterOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_TileBoundsMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGTextureSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::ClassParams = {
		&UPCGTextureSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGTextureSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGTextureSamplerSettings>()
	{
		return UPCGTextureSamplerSettings::StaticClass();
	}
	UPCGTextureSamplerSettings::UPCGTextureSamplerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGTextureSamplerSettings);
	UPCGTextureSamplerSettings::~UPCGTextureSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGTextureSamplerSettings, UPCGTextureSamplerSettings::StaticClass, TEXT("UPCGTextureSamplerSettings"), &Z_Registration_Info_UClass_UPCGTextureSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGTextureSamplerSettings), 3133710870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_3217545817(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
