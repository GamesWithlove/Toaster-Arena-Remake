// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	PCG_API UClass* Z_Construct_UClass_UPCGSubsystem();
	PCG_API UClass* Z_Construct_UClass_UPCGSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSubsystem::StaticRegisterNativesUPCGSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSubsystem);
	UClass* Z_Construct_UClass_UPCGSubsystem_NoRegister()
	{
		return UPCGSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UPCGSubsystem\n*/" },
		{ "IncludePath", "PCGSubsystem.h" },
		{ "ModuleRelativePath", "Public/PCGSubsystem.h" },
		{ "ToolTip", "UPCGSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSubsystem_Statics::ClassParams = {
		&UPCGSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton, Z_Construct_UClass_UPCGSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSubsystem>()
	{
		return UPCGSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSubsystem);
	UPCGSubsystem::~UPCGSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSubsystem, UPCGSubsystem::StaticClass, TEXT("UPCGSubsystem"), &Z_Registration_Info_UClass_UPCGSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSubsystem), 3739800521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubsystem_h_2694172750(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
