// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGBoundsModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGBoundsModifier() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGBoundsModifierSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBoundsModifierSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGBoundsModifierMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGBoundsModifierMode;
	static UEnum* EPCGBoundsModifierMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGBoundsModifierMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGBoundsModifierMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGBoundsModifierMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGBoundsModifierMode"));
		}
		return Z_Registration_Info_UEnum_EPCGBoundsModifierMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGBoundsModifierMode>()
	{
		return EPCGBoundsModifierMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enumerators[] = {
		{ "EPCGBoundsModifierMode::Set", (int64)EPCGBoundsModifierMode::Set },
		{ "EPCGBoundsModifierMode::Intersect", (int64)EPCGBoundsModifierMode::Intersect },
		{ "EPCGBoundsModifierMode::Include", (int64)EPCGBoundsModifierMode::Include },
		{ "EPCGBoundsModifierMode::Translate", (int64)EPCGBoundsModifierMode::Translate },
		{ "EPCGBoundsModifierMode::Scale", (int64)EPCGBoundsModifierMode::Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enum_MetaDataParams[] = {
		{ "Include.Name", "EPCGBoundsModifierMode::Include" },
		{ "Intersect.Name", "EPCGBoundsModifierMode::Intersect" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "Scale.Name", "EPCGBoundsModifierMode::Scale" },
		{ "Set.Name", "EPCGBoundsModifierMode::Set" },
		{ "Translate.Name", "EPCGBoundsModifierMode::Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGBoundsModifierMode",
		"EPCGBoundsModifierMode",
		Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGBoundsModifierMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGBoundsModifierMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGBoundsModifierMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGBoundsModifierMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGBoundsModifierMode.InnerSingleton;
	}
	void UPCGBoundsModifierSettings::StaticRegisterNativesUPCGBoundsModifierSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBoundsModifierSettings);
	UClass* Z_Construct_UClass_UPCGBoundsModifierSettings_NoRegister()
	{
		return UPCGBoundsModifierSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBoundsModifierSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectSteepness_MetaData[];
#endif
		static void NewProp_bAffectSteepness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steepness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* This class controls/sets up a node that modifies the min/max bounds of the input points.\n*/" },
		{ "IncludePath", "Elements/PCGBoundsModifier.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "ToolTip", "This class controls/sets up a node that modifies the min/max bounds of the input points." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBoundsModifierSettings, Mode), Z_Construct_UEnum_PCG_EPCGBoundsModifierMode, METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode_MetaData)) }; // 2313129013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBoundsModifierSettings, BoundsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBoundsModifierSettings, BoundsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness_SetBit(void* Obj)
	{
		((UPCGBoundsModifierSettings*)Obj)->bAffectSteepness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness = { "bAffectSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBoundsModifierSettings), &Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Steepness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bAffectSteepness" },
		{ "ModuleRelativePath", "Public/Elements/PCGBoundsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBoundsModifierSettings, Steepness), METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Steepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Steepness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_BoundsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_bAffectSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::NewProp_Steepness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBoundsModifierSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::ClassParams = {
		&UPCGBoundsModifierSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBoundsModifierSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBoundsModifierSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBoundsModifierSettings.OuterSingleton, Z_Construct_UClass_UPCGBoundsModifierSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBoundsModifierSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBoundsModifierSettings>()
	{
		return UPCGBoundsModifierSettings::StaticClass();
	}
	UPCGBoundsModifierSettings::UPCGBoundsModifierSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBoundsModifierSettings);
	UPCGBoundsModifierSettings::~UPCGBoundsModifierSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::EnumInfo[] = {
		{ EPCGBoundsModifierMode_StaticEnum, TEXT("EPCGBoundsModifierMode"), &Z_Registration_Info_UEnum_EPCGBoundsModifierMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2313129013U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBoundsModifierSettings, UPCGBoundsModifierSettings::StaticClass, TEXT("UPCGBoundsModifierSettings"), &Z_Registration_Info_UClass_UPCGBoundsModifierSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBoundsModifierSettings), 1233681871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_4064901496(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
