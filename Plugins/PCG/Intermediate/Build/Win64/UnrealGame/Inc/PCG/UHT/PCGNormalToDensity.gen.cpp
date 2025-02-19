// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGNormalToDensity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGNormalToDensity() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGNormalToDensitySettings();
	PCG_API UClass* Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_PCGNormalToDensityMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGNormalToDensityMode;
	static UEnum* PCGNormalToDensityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PCGNormalToDensityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PCGNormalToDensityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_PCGNormalToDensityMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGNormalToDensityMode"));
		}
		return Z_Registration_Info_UEnum_PCGNormalToDensityMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<PCGNormalToDensityMode>()
	{
		return PCGNormalToDensityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enumerators[] = {
		{ "PCGNormalToDensityMode::Set", (int64)PCGNormalToDensityMode::Set },
		{ "PCGNormalToDensityMode::Minimum", (int64)PCGNormalToDensityMode::Minimum },
		{ "PCGNormalToDensityMode::Maximum", (int64)PCGNormalToDensityMode::Maximum },
		{ "PCGNormalToDensityMode::Add", (int64)PCGNormalToDensityMode::Add },
		{ "PCGNormalToDensityMode::Subtract", (int64)PCGNormalToDensityMode::Subtract },
		{ "PCGNormalToDensityMode::Multiply", (int64)PCGNormalToDensityMode::Multiply },
		{ "PCGNormalToDensityMode::Divide", (int64)PCGNormalToDensityMode::Divide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "PCGNormalToDensityMode::Add" },
		{ "Divide.Name", "PCGNormalToDensityMode::Divide" },
		{ "Maximum.Name", "PCGNormalToDensityMode::Maximum" },
		{ "Minimum.Name", "PCGNormalToDensityMode::Minimum" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "Multiply.Name", "PCGNormalToDensityMode::Multiply" },
		{ "Set.Name", "PCGNormalToDensityMode::Set" },
		{ "Subtract.Name", "PCGNormalToDensityMode::Subtract" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"PCGNormalToDensityMode",
		"PCGNormalToDensityMode",
		Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_PCGNormalToDensityMode()
	{
		if (!Z_Registration_Info_UEnum_PCGNormalToDensityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGNormalToDensityMode.InnerSingleton, Z_Construct_UEnum_PCG_PCGNormalToDensityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PCGNormalToDensityMode.InnerSingleton;
	}
	void UPCGNormalToDensitySettings::StaticRegisterNativesUPCGNormalToDensitySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGNormalToDensitySettings);
	UClass* Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister()
	{
		return UPCGNormalToDensitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGNormalToDensitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Strength;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DensityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Finds the angle against the specified direction and applies that to the density\n */" },
		{ "IncludePath", "Elements/PCGNormalToDensity.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "ToolTip", "Finds the angle against the specified direction and applies that to the density" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The normal to compare against\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The normal to compare against" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNormalToDensitySettings, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This is biases the value towards or against the normal (positive or negative)\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This is biases the value towards or against the normal (positive or negative)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNormalToDensitySettings, Offset), METADATA_PARAMS(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "// This applies a curve to scale the result density with Result = Result^(1/Strength)\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This applies a curve to scale the result density with Result = Result^(1/Strength)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNormalToDensitySettings, Strength), METADATA_PARAMS(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Strength_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The operator to apply to the output density \n" },
		{ "ModuleRelativePath", "Public/Elements/PCGNormalToDensity.h" },
		{ "ToolTip", "The operator to apply to the output density" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode = { "DensityMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNormalToDensitySettings, DensityMode), Z_Construct_UEnum_PCG_PCGNormalToDensityMode, METADATA_PARAMS(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode_MetaData)) }; // 3768312905
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::NewProp_DensityMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGNormalToDensitySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::ClassParams = {
		&UPCGNormalToDensitySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGNormalToDensitySettings()
	{
		if (!Z_Registration_Info_UClass_UPCGNormalToDensitySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGNormalToDensitySettings.OuterSingleton, Z_Construct_UClass_UPCGNormalToDensitySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGNormalToDensitySettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGNormalToDensitySettings>()
	{
		return UPCGNormalToDensitySettings::StaticClass();
	}
	UPCGNormalToDensitySettings::UPCGNormalToDensitySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGNormalToDensitySettings);
	UPCGNormalToDensitySettings::~UPCGNormalToDensitySettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::EnumInfo[] = {
		{ PCGNormalToDensityMode_StaticEnum, TEXT("PCGNormalToDensityMode"), &Z_Registration_Info_UEnum_PCGNormalToDensityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3768312905U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGNormalToDensitySettings, UPCGNormalToDensitySettings::StaticClass, TEXT("UPCGNormalToDensitySettings"), &Z_Registration_Info_UClass_UPCGNormalToDensitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGNormalToDensitySettings), 1625310050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_2620016738(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
