// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGPointExtentsModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointExtentsModifier() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGPointExtentsModifierSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode;
	static UEnum* EPCGPointExtentsModifierMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointExtentsModifierMode"));
		}
		return Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointExtentsModifierMode>()
	{
		return EPCGPointExtentsModifierMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enumerators[] = {
		{ "EPCGPointExtentsModifierMode::Set", (int64)EPCGPointExtentsModifierMode::Set },
		{ "EPCGPointExtentsModifierMode::Minimum", (int64)EPCGPointExtentsModifierMode::Minimum },
		{ "EPCGPointExtentsModifierMode::Maximum", (int64)EPCGPointExtentsModifierMode::Maximum },
		{ "EPCGPointExtentsModifierMode::Add", (int64)EPCGPointExtentsModifierMode::Add },
		{ "EPCGPointExtentsModifierMode::Multiply", (int64)EPCGPointExtentsModifierMode::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EPCGPointExtentsModifierMode::Add" },
		{ "Maximum.Name", "EPCGPointExtentsModifierMode::Maximum" },
		{ "Minimum.Name", "EPCGPointExtentsModifierMode::Minimum" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointExtentsModifier.h" },
		{ "Multiply.Name", "EPCGPointExtentsModifierMode::Multiply" },
		{ "Set.Name", "EPCGPointExtentsModifierMode::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointExtentsModifierMode",
		"EPCGPointExtentsModifierMode",
		Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode.InnerSingleton;
	}
	void UPCGPointExtentsModifierSettings::StaticRegisterNativesUPCGPointExtentsModifierSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointExtentsModifierSettings);
	UClass* Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister()
	{
		return UPCGPointExtentsModifierSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGPointExtentsModifier.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointExtentsModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointExtentsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointExtentsModifierSettings, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Extents_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointExtentsModifier.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointExtentsModifierSettings, Mode), Z_Construct_UEnum_PCG_EPCGPointExtentsModifierMode, METADATA_PARAMS(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode_MetaData)) }; // 277968138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointExtentsModifierSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::ClassParams = {
		&UPCGPointExtentsModifierSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPointExtentsModifierSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.OuterSingleton, Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointExtentsModifierSettings>()
	{
		return UPCGPointExtentsModifierSettings::StaticClass();
	}
	UPCGPointExtentsModifierSettings::UPCGPointExtentsModifierSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointExtentsModifierSettings);
	UPCGPointExtentsModifierSettings::~UPCGPointExtentsModifierSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::EnumInfo[] = {
		{ EPCGPointExtentsModifierMode_StaticEnum, TEXT("EPCGPointExtentsModifierMode"), &Z_Registration_Info_UEnum_EPCGPointExtentsModifierMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 277968138U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointExtentsModifierSettings, UPCGPointExtentsModifierSettings::StaticClass, TEXT("UPCGPointExtentsModifierSettings"), &Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointExtentsModifierSettings), 2453056306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_4268246602(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
