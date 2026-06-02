// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshObjLoader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshObjLoader() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshObjLoader();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshObjLoader_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJTextureInfo ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshOBJTextureInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshOBJTextureInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sharpness_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Turbulence_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clamp_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMFChannel_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendU_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendV_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BumpMultiplier_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshOBJTextureInfo constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Turbulence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureResolution;
	static void NewProp_Clamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Clamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IMFChannel;
	static void NewProp_BlendU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlendU;
	static void NewProp_BlendV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlendV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BumpMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshOBJTextureInfo constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshOBJTextureInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo;
class UScriptStruct* FRealtimeMeshOBJTextureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshOBJTextureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshOBJTextureInfo Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Sharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sharpness_MetaData), NewProp_Sharpness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Origin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Turbulence = { "Turbulence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, Turbulence), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Turbulence_MetaData), NewProp_Turbulence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, TextureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResolution_MetaData), NewProp_TextureResolution_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Clamp_SetBit(void* Obj)
{
	((FRealtimeMeshOBJTextureInfo*)Obj)->Clamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Clamp = { "Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJTextureInfo), &Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Clamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clamp_MetaData), NewProp_Clamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_IMFChannel = { "IMFChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, IMFChannel), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMFChannel_MetaData), NewProp_IMFChannel_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendU_SetBit(void* Obj)
{
	((FRealtimeMeshOBJTextureInfo*)Obj)->BlendU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendU = { "BlendU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJTextureInfo), &Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendU_MetaData), NewProp_BlendU_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendV_SetBit(void* Obj)
{
	((FRealtimeMeshOBJTextureInfo*)Obj)->BlendV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendV = { "BlendV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJTextureInfo), &Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendV_MetaData), NewProp_BlendV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BumpMultiplier = { "BumpMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, BumpMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BumpMultiplier_MetaData), NewProp_BumpMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJTextureInfo, ColorSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpace_MetaData), NewProp_ColorSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Sharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Turbulence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_TextureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_Clamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_IMFChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BlendV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_BumpMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewProp_ColorSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshOBJTextureInfo Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshOBJTextureInfo",
	Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::PropPointers),
	sizeof(FRealtimeMeshOBJTextureInfo),
	alignof(FRealtimeMeshOBJTextureInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshOBJTextureInfo *****************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJMaterial ******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshOBJMaterial); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshOBJMaterial); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ambient_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffuse_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transmittance_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Emission_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shininess_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IOR_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dissolve_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Illum_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularHighlightTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BumpTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sheen_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearcoatThickness_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearcoatRoughness_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnisotropyRotation_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetallicTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheenTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalTexture_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshOBJMaterial constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ambient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Diffuse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transmittance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Emission;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Shininess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IOR;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dissolve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Illum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiffuseTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularHighlightTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BumpTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReflectionTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Metallic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sheen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearcoatThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearcoatRoughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Anisotropy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnisotropyRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoughnessTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetallicTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SheenTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshOBJMaterial constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshOBJMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial;
class UScriptStruct* FRealtimeMeshOBJMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshOBJMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshOBJMaterial Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Ambient = { "Ambient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Ambient), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ambient_MetaData), NewProp_Ambient_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Diffuse = { "Diffuse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Diffuse), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffuse_MetaData), NewProp_Diffuse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Specular), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Specular_MetaData), NewProp_Specular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Transmittance = { "Transmittance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Transmittance), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transmittance_MetaData), NewProp_Transmittance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Emission = { "Emission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Emission), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Emission_MetaData), NewProp_Emission_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Shininess = { "Shininess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Shininess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shininess_MetaData), NewProp_Shininess_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_IOR = { "IOR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, IOR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IOR_MetaData), NewProp_IOR_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Dissolve = { "Dissolve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Dissolve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dissolve_MetaData), NewProp_Dissolve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Illum = { "Illum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Illum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Illum_MetaData), NewProp_Illum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AmbientTexture = { "AmbientTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, AmbientTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientTexture_MetaData), NewProp_AmbientTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_DiffuseTexture = { "DiffuseTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, DiffuseTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffuseTexture_MetaData), NewProp_DiffuseTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SpecularTexture = { "SpecularTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, SpecularTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularTexture_MetaData), NewProp_SpecularTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SpecularHighlightTexture = { "SpecularHighlightTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, SpecularHighlightTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularHighlightTexture_MetaData), NewProp_SpecularHighlightTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_BumpTexture = { "BumpTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, BumpTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BumpTexture_MetaData), NewProp_BumpTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_DisplacementTexture = { "DisplacementTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, DisplacementTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementTexture_MetaData), NewProp_DisplacementTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AlphaTexture = { "AlphaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, AlphaTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaTexture_MetaData), NewProp_AlphaTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ReflectionTexture = { "ReflectionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, ReflectionTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionTexture_MetaData), NewProp_ReflectionTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Roughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roughness_MetaData), NewProp_Roughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Metallic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metallic_MetaData), NewProp_Metallic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Sheen = { "Sheen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Sheen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sheen_MetaData), NewProp_Sheen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ClearcoatThickness = { "ClearcoatThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, ClearcoatThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearcoatThickness_MetaData), NewProp_ClearcoatThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ClearcoatRoughness = { "ClearcoatRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, ClearcoatRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearcoatRoughness_MetaData), NewProp_ClearcoatRoughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, Anisotropy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anisotropy_MetaData), NewProp_Anisotropy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AnisotropyRotation = { "AnisotropyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, AnisotropyRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnisotropyRotation_MetaData), NewProp_AnisotropyRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_RoughnessTexture = { "RoughnessTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, RoughnessTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessTexture_MetaData), NewProp_RoughnessTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_MetallicTexture = { "MetallicTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, MetallicTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetallicTexture_MetaData), NewProp_MetallicTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SheenTexture = { "SheenTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, SheenTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheenTexture_MetaData), NewProp_SheenTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_EmissiveTexture = { "EmissiveTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, EmissiveTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveTexture_MetaData), NewProp_EmissiveTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_NormalTexture = { "NormalTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJMaterial, NormalTexture), Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalTexture_MetaData), NewProp_NormalTexture_MetaData) }; // 4213189005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Ambient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Diffuse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Specular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Transmittance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Emission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Shininess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_IOR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Dissolve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Illum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AmbientTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_DiffuseTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SpecularTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SpecularHighlightTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_BumpTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_DisplacementTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AlphaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ReflectionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Roughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Metallic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Sheen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ClearcoatThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_ClearcoatRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_Anisotropy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_AnisotropyRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_RoughnessTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_MetallicTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_SheenTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_EmissiveTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewProp_NormalTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshOBJMaterial Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshOBJMaterial",
	Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::PropPointers),
	sizeof(FRealtimeMeshOBJMaterial),
	alignof(FRealtimeMeshOBJMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshOBJMaterial ********************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadResult ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshOBJLoadResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshOBJLoadResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadResult constinit property declarations ********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshOBJLoadResult constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshOBJLoadResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult;
class UScriptStruct* FRealtimeMeshOBJLoadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshOBJLoadResult"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadResult Property Definitions *******************
void Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FRealtimeMeshOBJLoadResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJLoadResult), &Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJLoadResult, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshOBJLoadResult Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshOBJLoadResult",
	Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::PropPointers),
	sizeof(FRealtimeMeshOBJLoadResult),
	alignof(FRealtimeMeshOBJLoadResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshOBJLoadResult ******************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadOptions ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshOBJLoadOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshOBJLoadOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSearchPath_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseWinding_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSmoothTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadOptions constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialSearchPath;
	static void NewProp_bReverseWinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseWinding;
	static void NewProp_bGenerateTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateTangents;
	static void NewProp_bGenerateSmoothTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSmoothTangents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshOBJLoadOptions constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshOBJLoadOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions;
class UScriptStruct* FRealtimeMeshOBJLoadOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshOBJLoadOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadOptions Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_MaterialSearchPath = { "MaterialSearchPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshOBJLoadOptions, MaterialSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSearchPath_MetaData), NewProp_MaterialSearchPath_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bReverseWinding_SetBit(void* Obj)
{
	((FRealtimeMeshOBJLoadOptions*)Obj)->bReverseWinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bReverseWinding = { "bReverseWinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJLoadOptions), &Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bReverseWinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseWinding_MetaData), NewProp_bReverseWinding_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateTangents_SetBit(void* Obj)
{
	((FRealtimeMeshOBJLoadOptions*)Obj)->bGenerateTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateTangents = { "bGenerateTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJLoadOptions), &Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateTangents_MetaData), NewProp_bGenerateTangents_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateSmoothTangents_SetBit(void* Obj)
{
	((FRealtimeMeshOBJLoadOptions*)Obj)->bGenerateSmoothTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateSmoothTangents = { "bGenerateSmoothTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshOBJLoadOptions), &Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateSmoothTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateSmoothTangents_MetaData), NewProp_bGenerateSmoothTangents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_MaterialSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bReverseWinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewProp_bGenerateSmoothTangents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshOBJLoadOptions Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshOBJLoadOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshOBJLoadOptions),
	alignof(FRealtimeMeshOBJLoadOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshOBJLoadOptions *****************************************

// ********** Begin Class URealtimeMeshObjLoader Function LoadStreamSetFromOBJFile *****************
struct Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics
{
	struct RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms
	{
		URealtimeMeshStreamSet* OutStreams;
		TArray<FRealtimeMeshOBJMaterial> OutMaterials;
		FString FileName;
		FRealtimeMeshOBJLoadOptions Options;
		FRealtimeMeshOBJLoadResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Loading|OBJ" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadStreamSetFromOBJFile constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutStreams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMaterials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadStreamSetFromOBJFile constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadStreamSetFromOBJFile Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutStreams = { "OutStreams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms, OutStreams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutMaterials_Inner = { "OutMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial, METADATA_PARAMS(0, nullptr) }; // 398272053
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutMaterials = { "OutMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms, OutMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 398272053
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1263369177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult, METADATA_PARAMS(0, nullptr) }; // 2375866577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_OutMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::PropPointers) < 2048);
// ********** End Function LoadStreamSetFromOBJFile Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshObjLoader, nullptr, "LoadStreamSetFromOBJFile", 	Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::RealtimeMeshObjLoader_eventLoadStreamSetFromOBJFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshObjLoader::execLoadStreamSetFromOBJFile)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_OutStreams);
	P_GET_TARRAY_REF(FRealtimeMeshOBJMaterial,Z_Param_Out_OutMaterials);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_STRUCT_REF(FRealtimeMeshOBJLoadOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshOBJLoadResult*)Z_Param__Result=URealtimeMeshObjLoader::LoadStreamSetFromOBJFile(Z_Param_OutStreams,Z_Param_Out_OutMaterials,Z_Param_FileName,Z_Param_Out_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshObjLoader Function LoadStreamSetFromOBJFile *******************

// ********** Begin Class URealtimeMeshObjLoader ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshObjLoader;
UClass* URealtimeMeshObjLoader::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshObjLoader;
	if (!Z_Registration_Info_UClass_URealtimeMeshObjLoader.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshObjLoader"),
			Z_Registration_Info_UClass_URealtimeMeshObjLoader.InnerSingleton,
			StaticRegisterNativesURealtimeMeshObjLoader,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URealtimeMeshObjLoader.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshObjLoader_NoRegister()
{
	return URealtimeMeshObjLoader::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshObjLoader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RealtimeMeshObjLoader.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshObjLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshObjLoader constinit property declarations *******************
// ********** End Class URealtimeMeshObjLoader constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadStreamSetFromOBJFile"), .Pointer = &URealtimeMeshObjLoader::execLoadStreamSetFromOBJFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshObjLoader_LoadStreamSetFromOBJFile, "LoadStreamSetFromOBJFile" }, // 345770215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshObjLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshObjLoader_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshObjLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshObjLoader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshObjLoader_Statics::ClassParams = {
	&URealtimeMeshObjLoader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshObjLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshObjLoader_Statics::Class_MetaDataParams)
};
void URealtimeMeshObjLoader::StaticRegisterNativesURealtimeMeshObjLoader()
{
	UClass* Class = URealtimeMeshObjLoader::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshObjLoader_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshObjLoader()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshObjLoader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshObjLoader.OuterSingleton, Z_Construct_UClass_URealtimeMeshObjLoader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshObjLoader.OuterSingleton;
}
URealtimeMeshObjLoader::URealtimeMeshObjLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshObjLoader);
URealtimeMeshObjLoader::~URealtimeMeshObjLoader() {}
// ********** End Class URealtimeMeshObjLoader *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshOBJTextureInfo::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics::NewStructOps, TEXT("RealtimeMeshOBJTextureInfo"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJTextureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshOBJTextureInfo), 4213189005U) },
		{ FRealtimeMeshOBJMaterial::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics::NewStructOps, TEXT("RealtimeMeshOBJMaterial"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshOBJMaterial), 398272053U) },
		{ FRealtimeMeshOBJLoadResult::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics::NewStructOps, TEXT("RealtimeMeshOBJLoadResult"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshOBJLoadResult), 2375866577U) },
		{ FRealtimeMeshOBJLoadOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics::NewStructOps, TEXT("RealtimeMeshOBJLoadOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshOBJLoadOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshOBJLoadOptions), 1263369177U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshObjLoader, URealtimeMeshObjLoader::StaticClass, TEXT("URealtimeMeshObjLoader"), &Z_Registration_Info_UClass_URealtimeMeshObjLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshObjLoader), 2309790107U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_1566392531{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
