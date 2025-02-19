// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGTypedGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGTypedGetter() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDataFromActorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGetLandscapeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGetLandscapeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGetPrimitiveSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGetPrimitiveSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGetSplineSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGetSplineSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGetVolumeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGetVolumeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGGetLandscapeSettings::StaticRegisterNativesUPCGGetLandscapeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGetLandscapeSettings);
	UClass* Z_Construct_UClass_UPCGGetLandscapeSettings_NoRegister()
	{
		return UPCGGetLandscapeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGetLandscapeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGDataFromActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of landscape data from the selected actors. */" },
		{ "IncludePath", "Elements/PCGTypedGetter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTypedGetter.h" },
		{ "ToolTip", "Builds a collection of landscape data from the selected actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGetLandscapeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::ClassParams = {
		&UPCGGetLandscapeSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGetLandscapeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton, Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGetLandscapeSettings>()
	{
		return UPCGGetLandscapeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGetLandscapeSettings);
	UPCGGetLandscapeSettings::~UPCGGetLandscapeSettings() {}
	void UPCGGetSplineSettings::StaticRegisterNativesUPCGGetSplineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGetSplineSettings);
	UClass* Z_Construct_UClass_UPCGGetSplineSettings_NoRegister()
	{
		return UPCGGetSplineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGetSplineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGetSplineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGDataFromActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGetSplineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of spline data from the selected actors. */" },
		{ "IncludePath", "Elements/PCGTypedGetter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTypedGetter.h" },
		{ "ToolTip", "Builds a collection of spline data from the selected actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGetSplineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGetSplineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGetSplineSettings_Statics::ClassParams = {
		&UPCGGetSplineSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGGetSplineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGetSplineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGetSplineSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton, Z_Construct_UClass_UPCGGetSplineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGetSplineSettings>()
	{
		return UPCGGetSplineSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGetSplineSettings);
	UPCGGetSplineSettings::~UPCGGetSplineSettings() {}
	void UPCGGetVolumeSettings::StaticRegisterNativesUPCGGetVolumeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGetVolumeSettings);
	UClass* Z_Construct_UClass_UPCGGetVolumeSettings_NoRegister()
	{
		return UPCGGetVolumeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGetVolumeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGetVolumeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGDataFromActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGetVolumeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of volume data from the selected actors. */" },
		{ "IncludePath", "Elements/PCGTypedGetter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTypedGetter.h" },
		{ "ToolTip", "Builds a collection of volume data from the selected actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGetVolumeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGetVolumeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGetVolumeSettings_Statics::ClassParams = {
		&UPCGGetVolumeSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGGetVolumeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGetVolumeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGetVolumeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton, Z_Construct_UClass_UPCGGetVolumeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGetVolumeSettings>()
	{
		return UPCGGetVolumeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGetVolumeSettings);
	UPCGGetVolumeSettings::~UPCGGetVolumeSettings() {}
	void UPCGGetPrimitiveSettings::StaticRegisterNativesUPCGGetPrimitiveSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGetPrimitiveSettings);
	UClass* Z_Construct_UClass_UPCGGetPrimitiveSettings_NoRegister()
	{
		return UPCGGetPrimitiveSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGDataFromActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of primitive data from primitive components on the selected actors. */" },
		{ "IncludePath", "Elements/PCGTypedGetter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTypedGetter.h" },
		{ "ToolTip", "Builds a collection of primitive data from primitive components on the selected actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGetPrimitiveSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::ClassParams = {
		&UPCGGetPrimitiveSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGetPrimitiveSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton, Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGetPrimitiveSettings>()
	{
		return UPCGGetPrimitiveSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGetPrimitiveSettings);
	UPCGGetPrimitiveSettings::~UPCGGetPrimitiveSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGetLandscapeSettings, UPCGGetLandscapeSettings::StaticClass, TEXT("UPCGGetLandscapeSettings"), &Z_Registration_Info_UClass_UPCGGetLandscapeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGetLandscapeSettings), 1673198685U) },
		{ Z_Construct_UClass_UPCGGetSplineSettings, UPCGGetSplineSettings::StaticClass, TEXT("UPCGGetSplineSettings"), &Z_Registration_Info_UClass_UPCGGetSplineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGetSplineSettings), 3930462438U) },
		{ Z_Construct_UClass_UPCGGetVolumeSettings, UPCGGetVolumeSettings::StaticClass, TEXT("UPCGGetVolumeSettings"), &Z_Registration_Info_UClass_UPCGGetVolumeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGetVolumeSettings), 2358234320U) },
		{ Z_Construct_UClass_UPCGGetPrimitiveSettings, UPCGGetPrimitiveSettings::StaticClass, TEXT("UPCGGetPrimitiveSettings"), &Z_Registration_Info_UClass_UPCGGetPrimitiveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGetPrimitiveSettings), 3311420897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h_128859782(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
