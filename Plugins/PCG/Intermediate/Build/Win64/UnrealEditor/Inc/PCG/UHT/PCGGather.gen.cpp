// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGGather.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGGather() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGGatherSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGatherSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGGatherSettings::StaticRegisterNativesUPCGGatherSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGatherSettings);
	UClass* Z_Construct_UClass_UPCGGatherSettings_NoRegister()
	{
		return UPCGGatherSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGatherSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGatherSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGatherSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Used to wrangle multiple input wires into one output wire for organizational purposes.\n */" },
		{ "IncludePath", "Elements/PCGGather.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGGather.h" },
		{ "ToolTip", "Used to wrangle multiple input wires into one output wire for organizational purposes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGatherSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGatherSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGatherSettings_Statics::ClassParams = {
		&UPCGGatherSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGatherSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGatherSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGatherSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGatherSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGatherSettings.OuterSingleton, Z_Construct_UClass_UPCGGatherSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGatherSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGatherSettings>()
	{
		return UPCGGatherSettings::StaticClass();
	}
	UPCGGatherSettings::UPCGGatherSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGatherSettings);
	UPCGGatherSettings::~UPCGGatherSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGatherSettings, UPCGGatherSettings::StaticClass, TEXT("UPCGGatherSettings"), &Z_Registration_Info_UClass_UPCGGatherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGatherSettings), 2461125449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_3054432887(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
