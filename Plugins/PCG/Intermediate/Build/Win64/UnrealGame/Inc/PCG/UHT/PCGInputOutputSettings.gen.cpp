// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGInputOutputSettings.h"
#include "PCG/Public/PCGPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInputOutputSettings() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInputOutputSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGGraphInputOutputSettings::StaticRegisterNativesUPCGGraphInputOutputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphInputOutputSettings);
	UClass* Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister()
	{
		return UPCGGraphInputOutputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinLabels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinLabels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PinLabels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGInputOutputSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PCGInputOutputSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels_ElementProp = { "PinLabels", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGInputOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels = { "PinLabels", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraphInputOutputSettings, PinLabels_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins_Inner = { "CustomPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(nullptr, 0) }; // 570377948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins_MetaData[] = {
		{ "Category", "Settings|Input" },
		{ "ModuleRelativePath", "Public/PCGInputOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins = { "CustomPins", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraphInputOutputSettings, CustomPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins_MetaData)) }; // 570377948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_PinLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_CustomPins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphInputOutputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::ClassParams = {
		&UPCGGraphInputOutputSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::PropPointers),
		0,
		0x011000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraphInputOutputSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton, Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraphInputOutputSettings>()
	{
		return UPCGGraphInputOutputSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphInputOutputSettings);
	UPCGGraphInputOutputSettings::~UPCGGraphInputOutputSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGraphInputOutputSettings, UPCGGraphInputOutputSettings::StaticClass, TEXT("UPCGGraphInputOutputSettings"), &Z_Registration_Info_UClass_UPCGGraphInputOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphInputOutputSettings), 597923647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_3940255642(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
