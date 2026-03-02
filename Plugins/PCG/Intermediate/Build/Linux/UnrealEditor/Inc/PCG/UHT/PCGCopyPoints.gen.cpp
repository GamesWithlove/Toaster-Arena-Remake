// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGCopyPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCopyPoints() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGCopyPointsSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCopyPointsSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode;
	static UEnum* EPCGCopyPointsInheritanceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGCopyPointsInheritanceMode"));
		}
		return Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGCopyPointsInheritanceMode>()
	{
		return EPCGCopyPointsInheritanceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enumerators[] = {
		{ "EPCGCopyPointsInheritanceMode::Relative", (int64)EPCGCopyPointsInheritanceMode::Relative },
		{ "EPCGCopyPointsInheritanceMode::Source", (int64)EPCGCopyPointsInheritanceMode::Source },
		{ "EPCGCopyPointsInheritanceMode::Target", (int64)EPCGCopyPointsInheritanceMode::Target },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "Relative.Name", "EPCGCopyPointsInheritanceMode::Relative" },
		{ "Source.Name", "EPCGCopyPointsInheritanceMode::Source" },
		{ "Target.Name", "EPCGCopyPointsInheritanceMode::Target" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGCopyPointsInheritanceMode",
		"EPCGCopyPointsInheritanceMode",
		Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode;
	static UEnum* EPCGCopyPointsMetadataInheritanceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGCopyPointsMetadataInheritanceMode"));
		}
		return Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGCopyPointsMetadataInheritanceMode>()
	{
		return EPCGCopyPointsMetadataInheritanceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enumerators[] = {
		{ "EPCGCopyPointsMetadataInheritanceMode::SourceFirst", (int64)EPCGCopyPointsMetadataInheritanceMode::SourceFirst },
		{ "EPCGCopyPointsMetadataInheritanceMode::TargetFirst", (int64)EPCGCopyPointsMetadataInheritanceMode::TargetFirst },
		{ "EPCGCopyPointsMetadataInheritanceMode::SourceOnly", (int64)EPCGCopyPointsMetadataInheritanceMode::SourceOnly },
		{ "EPCGCopyPointsMetadataInheritanceMode::TargetOnly", (int64)EPCGCopyPointsMetadataInheritanceMode::TargetOnly },
		{ "EPCGCopyPointsMetadataInheritanceMode::None", (int64)EPCGCopyPointsMetadataInheritanceMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "None.Name", "EPCGCopyPointsMetadataInheritanceMode::None" },
		{ "None.Tooltip", "Points will have no metadata." },
		{ "SourceFirst.Name", "EPCGCopyPointsMetadataInheritanceMode::SourceFirst" },
		{ "SourceFirst.Tooltip", "Points will inherit from source metadata and apply only unique attributes from target." },
		{ "SourceOnly.Name", "EPCGCopyPointsMetadataInheritanceMode::SourceOnly" },
		{ "SourceOnly.Tooltip", "Points will inherit metadata only from the source." },
		{ "TargetFirst.Name", "EPCGCopyPointsMetadataInheritanceMode::TargetFirst" },
		{ "TargetFirst.Tooltip", "Points will inherit from target metadata and apply only unique attributes from source." },
		{ "TargetOnly.Name", "EPCGCopyPointsMetadataInheritanceMode::TargetOnly" },
		{ "TargetOnly.Tooltip", "Points will inherit metadata only from the target." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGCopyPointsMetadataInheritanceMode",
		"EPCGCopyPointsMetadataInheritanceMode",
		Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode.InnerSingleton;
	}
	void UPCGCopyPointsSettings::StaticRegisterNativesUPCGCopyPointsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCopyPointsSettings);
	UClass* Z_Construct_UClass_UPCGCopyPointsSettings_NoRegister()
	{
		return UPCGCopyPointsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCopyPointsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationInheritance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInheritance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationInheritance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleInheritance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleInheritance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleInheritance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorInheritance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorInheritance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorInheritance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SeedInheritance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedInheritance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedInheritance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeInheritance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInheritance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeInheritance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCopyPointsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGCopyPoints.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The method used to determine output point rotation */" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The method used to determine output point rotation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance = { "RotationInheritance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCopyPointsSettings, RotationInheritance), Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance_MetaData)) }; // 656462190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The method used to determine output point scale */" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The method used to determine output point scale" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance = { "ScaleInheritance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCopyPointsSettings, ScaleInheritance), Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance_MetaData)) }; // 656462190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The method used to determine output point color */" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The method used to determine output point color" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance = { "ColorInheritance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCopyPointsSettings, ColorInheritance), Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance_MetaData)) }; // 656462190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The method used to determine output seed values. Relative recomputes the seed from the new location. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The method used to determine output seed values. Relative recomputes the seed from the new location." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance = { "SeedInheritance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCopyPointsSettings, SeedInheritance), Z_Construct_UEnum_PCG_EPCGCopyPointsInheritanceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance_MetaData)) }; // 656462190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The method used to determine output data attributes */" },
		{ "ModuleRelativePath", "Public/Elements/PCGCopyPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The method used to determine output data attributes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance = { "AttributeInheritance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCopyPointsSettings, AttributeInheritance), Z_Construct_UEnum_PCG_EPCGCopyPointsMetadataInheritanceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance_MetaData)) }; // 3428622912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCopyPointsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_RotationInheritance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ScaleInheritance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_ColorInheritance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_SeedInheritance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCopyPointsSettings_Statics::NewProp_AttributeInheritance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCopyPointsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCopyPointsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCopyPointsSettings_Statics::ClassParams = {
		&UPCGCopyPointsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGCopyPointsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCopyPointsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGCopyPointsSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCopyPointsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCopyPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGCopyPointsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCopyPointsSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCopyPointsSettings>()
	{
		return UPCGCopyPointsSettings::StaticClass();
	}
	UPCGCopyPointsSettings::UPCGCopyPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCopyPointsSettings);
	UPCGCopyPointsSettings::~UPCGCopyPointsSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::EnumInfo[] = {
		{ EPCGCopyPointsInheritanceMode_StaticEnum, TEXT("EPCGCopyPointsInheritanceMode"), &Z_Registration_Info_UEnum_EPCGCopyPointsInheritanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 656462190U) },
		{ EPCGCopyPointsMetadataInheritanceMode_StaticEnum, TEXT("EPCGCopyPointsMetadataInheritanceMode"), &Z_Registration_Info_UEnum_EPCGCopyPointsMetadataInheritanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3428622912U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCopyPointsSettings, UPCGCopyPointsSettings::StaticClass, TEXT("UPCGCopyPointsSettings"), &Z_Registration_Info_UClass_UPCGCopyPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCopyPointsSettings), 3265540790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_2065325938(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
