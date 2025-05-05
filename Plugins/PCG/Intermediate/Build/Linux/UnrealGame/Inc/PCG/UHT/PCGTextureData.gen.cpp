// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGTextureData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGTextureData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseTextureData();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseTextureData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData();
	PCG_API UClass* Z_Construct_UClass_UPCGTextureData();
	PCG_API UClass* Z_Construct_UClass_UPCGTextureData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTextureColorChannel();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTextureDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGTextureColorChannel;
	static UEnum* EPCGTextureColorChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureColorChannel, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGTextureColorChannel"));
		}
		return Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGTextureColorChannel>()
	{
		return EPCGTextureColorChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enumerators[] = {
		{ "EPCGTextureColorChannel::Red", (int64)EPCGTextureColorChannel::Red },
		{ "EPCGTextureColorChannel::Green", (int64)EPCGTextureColorChannel::Green },
		{ "EPCGTextureColorChannel::Blue", (int64)EPCGTextureColorChannel::Blue },
		{ "EPCGTextureColorChannel::Alpha", (int64)EPCGTextureColorChannel::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EPCGTextureColorChannel::Alpha" },
		{ "Blue.Name", "EPCGTextureColorChannel::Blue" },
		{ "BlueprintType", "true" },
		{ "Green.Name", "EPCGTextureColorChannel::Green" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "Red.Name", "EPCGTextureColorChannel::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGTextureColorChannel",
		"EPCGTextureColorChannel",
		Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGTextureColorChannel()
	{
		if (!Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton, Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGTextureDensityFunction;
	static UEnum* EPCGTextureDensityFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGTextureDensityFunction"));
		}
		return Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGTextureDensityFunction>()
	{
		return EPCGTextureDensityFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enumerators[] = {
		{ "EPCGTextureDensityFunction::Ignore", (int64)EPCGTextureDensityFunction::Ignore },
		{ "EPCGTextureDensityFunction::Multiply", (int64)EPCGTextureDensityFunction::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.Name", "EPCGTextureDensityFunction::Ignore" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "Multiply.Name", "EPCGTextureDensityFunction::Multiply" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGTextureDensityFunction",
		"EPCGTextureDensityFunction",
		Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGTextureDensityFunction()
	{
		if (!Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton, Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton;
	}
	void UPCGBaseTextureData::StaticRegisterNativesUPCGBaseTextureData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBaseTextureData);
	UClass* Z_Construct_UClass_UPCGBaseTextureData_NoRegister()
	{
		return UPCGBaseTextureData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBaseTextureData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBaseTextureData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSurfaceData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/PCGTextureData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, DensityFunction), Z_Construct_UEnum_PCG_EPCGTextureDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction_MetaData)) }; // 2089783010
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel = { "ColorChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, ColorChannel), Z_Construct_UEnum_PCG_EPCGTextureColorChannel, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel_MetaData)) }; // 2151064442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TexelSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The size of one texel in cm, used when calling ToPointData. */" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "ToolTip", "The size of one texel in cm, used when calling ToPointData." },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TexelSize = { "TexelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, TexelSize), METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TexelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TexelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to tile the source or to stretch it to fit target area. */" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "ToolTip", "Whether to tile the source or to stretch it to fit target area." },
	};
#endif
	void Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_SetBit(void* Obj)
	{
		((UPCGBaseTextureData*)Obj)->bUseAdvancedTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling = { "bUseAdvancedTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBaseTextureData), &Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Tiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_CenterOffset_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, CenterOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_CenterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_CenterOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation to apply when sampling texture. */" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "ToolTip", "Rotation to apply when sampling texture." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, Rotation), METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditionCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_SetBit(void* Obj)
	{
		((UPCGBaseTextureData*)Obj)->bUseTileBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds = { "bUseTileBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBaseTextureData), &Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TileBounds_MetaData[] = {
		{ "Category", "Settings|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling && bUseTileBounds" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TileBounds = { "TileBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, TileBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TileBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TileBounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, Height), METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBaseTextureData, Width), METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBaseTextureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TexelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_CenterOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_TileBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_ColorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBaseTextureData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBaseTextureData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBaseTextureData_Statics::ClassParams = {
		&UPCGBaseTextureData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGBaseTextureData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBaseTextureData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseTextureData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBaseTextureData()
	{
		if (!Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton, Z_Construct_UClass_UPCGBaseTextureData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBaseTextureData>()
	{
		return UPCGBaseTextureData::StaticClass();
	}
	UPCGBaseTextureData::UPCGBaseTextureData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBaseTextureData);
	UPCGBaseTextureData::~UPCGBaseTextureData() {}
	DEFINE_FUNCTION(UPCGTextureData::execInitialize)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InTexture,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	void UPCGTextureData::StaticRegisterNativesUPCGTextureData()
	{
		UClass* Class = UPCGTextureData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UPCGTextureData::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGTextureData_Initialize_Statics
	{
		struct PCGTextureData_eventInitialize_Parms
		{
			UTexture2D* InTexture;
			FTransform InTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGTextureData_eventInitialize_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGTextureData_eventInitialize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// ~End UPCGData interface\n" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
		{ "ToolTip", "~End UPCGData interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGTextureData, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::PCGTextureData_eventInitialize_Parms), Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGTextureData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGTextureData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGTextureData);
	UClass* Z_Construct_UClass_UPCGTextureData_NoRegister()
	{
		return UPCGTextureData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGTextureData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGTextureData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseTextureData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGTextureData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGTextureData_Initialize, "Initialize" }, // 3700530685
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGTextureData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTextureData_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Data/PCGTextureData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGTextureData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTextureData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGTextureData_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureData_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGTextureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTextureData_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGTextureData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGTextureData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGTextureData_Statics::ClassParams = {
		&UPCGTextureData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGTextureData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGTextureData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTextureData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGTextureData()
	{
		if (!Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton, Z_Construct_UClass_UPCGTextureData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGTextureData>()
	{
		return UPCGTextureData::StaticClass();
	}
	UPCGTextureData::UPCGTextureData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGTextureData);
	UPCGTextureData::~UPCGTextureData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::EnumInfo[] = {
		{ EPCGTextureColorChannel_StaticEnum, TEXT("EPCGTextureColorChannel"), &Z_Registration_Info_UEnum_EPCGTextureColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151064442U) },
		{ EPCGTextureDensityFunction_StaticEnum, TEXT("EPCGTextureDensityFunction"), &Z_Registration_Info_UEnum_EPCGTextureDensityFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2089783010U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBaseTextureData, UPCGBaseTextureData::StaticClass, TEXT("UPCGBaseTextureData"), &Z_Registration_Info_UClass_UPCGBaseTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBaseTextureData), 1937580877U) },
		{ Z_Construct_UClass_UPCGTextureData, UPCGTextureData::StaticClass, TEXT("UPCGTextureData"), &Z_Registration_Info_UClass_UPCGTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGTextureData), 3921125894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_3390435454(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
