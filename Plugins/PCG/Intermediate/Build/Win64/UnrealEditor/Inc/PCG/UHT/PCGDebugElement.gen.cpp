// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDebugElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDebugElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDebugSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDebugSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGDebugSettings::StaticRegisterNativesUPCGDebugSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDebugSettings);
	UClass* Z_Construct_UClass_UPCGDebugSettings_NoRegister()
	{
		return UPCGDebugSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDebugSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDebugSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDebugSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGDebugElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDebugElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDebugSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDebugSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDebugSettings_Statics::ClassParams = {
		&UPCGDebugSettings::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDebugSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDebugSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDebugSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDebugSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDebugSettings.OuterSingleton, Z_Construct_UClass_UPCGDebugSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDebugSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDebugSettings>()
	{
		return UPCGDebugSettings::StaticClass();
	}
	UPCGDebugSettings::UPCGDebugSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDebugSettings);
	UPCGDebugSettings::~UPCGDebugSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDebugSettings, UPCGDebugSettings::StaticClass, TEXT("UPCGDebugSettings"), &Z_Registration_Info_UClass_UPCGDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDebugSettings), 2818044220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_701695084(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
