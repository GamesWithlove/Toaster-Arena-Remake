// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDebug() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod;
	static UEnum* EPCGDebugVisScaleMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDebugVisScaleMethod"));
		}
		return Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDebugVisScaleMethod>()
	{
		return EPCGDebugVisScaleMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enumerators[] = {
		{ "EPCGDebugVisScaleMethod::Relative", (int64)EPCGDebugVisScaleMethod::Relative },
		{ "EPCGDebugVisScaleMethod::Absolute", (int64)EPCGDebugVisScaleMethod::Absolute },
		{ "EPCGDebugVisScaleMethod::Extents", (int64)EPCGDebugVisScaleMethod::Extents },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Name", "EPCGDebugVisScaleMethod::Absolute" },
		{ "Extents.Name", "EPCGDebugVisScaleMethod::Extents" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
		{ "Relative.Name", "EPCGDebugVisScaleMethod::Relative" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDebugVisScaleMethod",
		"EPCGDebugVisScaleMethod",
		Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod()
	{
		if (!Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings;
class UScriptStruct* FPCGDebugVisualizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDebugVisualizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGDebugVisualizationSettings>()
{
	return FPCGDebugVisualizationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PointMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForDuplicates_MetaData[];
#endif
		static void NewProp_bCheckForDuplicates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForDuplicates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGDebugVisualizationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ScaleMethod != EPCGDebugVisScaleMethod::Extents" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointScale = { "PointScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDebugVisualizationSettings, PointScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod = { "ScaleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDebugVisualizationSettings, ScaleMethod), Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod_MetaData)) }; // 906738506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointMesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointMesh = { "PointMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDebugVisualizationSettings, PointMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDebugVisualizationSettings, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_MaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Warning: enabling this flag will have severe performance impact */" },
		{ "ModuleRelativePath", "Public/PCGDebug.h" },
		{ "ToolTip", "Warning: enabling this flag will have severe performance impact" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates_SetBit(void* Obj)
	{
		((FPCGDebugVisualizationSettings*)Obj)->bCheckForDuplicates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates = { "bCheckForDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGDebugVisualizationSettings), &Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_ScaleMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_PointMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_MaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewProp_bCheckForDuplicates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGDebugVisualizationSettings",
		sizeof(FPCGDebugVisualizationSettings),
		alignof(FPCGDebugVisualizationSettings),
		Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::EnumInfo[] = {
		{ EPCGDebugVisScaleMethod_StaticEnum, TEXT("EPCGDebugVisScaleMethod"), &Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 906738506U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::ScriptStructInfo[] = {
		{ FPCGDebugVisualizationSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewStructOps, TEXT("PCGDebugVisualizationSettings"), &Z_Registration_Info_UScriptStruct_PCGDebugVisualizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGDebugVisualizationSettings), 2443692724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_2593805976(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
