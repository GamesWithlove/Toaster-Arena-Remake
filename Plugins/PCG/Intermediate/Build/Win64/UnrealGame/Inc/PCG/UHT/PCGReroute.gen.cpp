// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGReroute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGReroute() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGRerouteSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGRerouteSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGRerouteSettings::StaticRegisterNativesUPCGRerouteSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRerouteSettings);
	UClass* Z_Construct_UClass_UPCGRerouteSettings_NoRegister()
	{
		return UPCGRerouteSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGRerouteSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGRerouteSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGRerouteSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGReroute.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGReroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGRerouteSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRerouteSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRerouteSettings_Statics::ClassParams = {
		&UPCGRerouteSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGRerouteSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRerouteSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGRerouteSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGRerouteSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRerouteSettings.OuterSingleton, Z_Construct_UClass_UPCGRerouteSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGRerouteSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGRerouteSettings>()
	{
		return UPCGRerouteSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRerouteSettings);
	UPCGRerouteSettings::~UPCGRerouteSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGReroute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGReroute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRerouteSettings, UPCGRerouteSettings::StaticClass, TEXT("UPCGRerouteSettings"), &Z_Registration_Info_UClass_UPCGRerouteSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRerouteSettings), 3586952774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGReroute_h_510946722(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGReroute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGReroute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
