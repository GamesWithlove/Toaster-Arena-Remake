// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/InstancePackers/PCGInstancePackerByRegex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInstancePackerByRegex() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerBase();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerByRegex();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerByRegex_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGInstancePackerByRegex::StaticRegisterNativesUPCGInstancePackerByRegex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInstancePackerByRegex);
	UClass* Z_Construct_UClass_UPCGInstancePackerByRegex_NoRegister()
	{
		return UPCGInstancePackerByRegex::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInstancePackerByRegex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegexPatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegexPatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegexPatterns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGInstancePackerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "InstancePackers/PCGInstancePackerByRegex.h" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerByRegex.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns_Inner = { "RegexPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerByRegex.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns = { "RegexPatterns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGInstancePackerByRegex, RegexPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::NewProp_RegexPatterns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInstancePackerByRegex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::ClassParams = {
		&UPCGInstancePackerByRegex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGInstancePackerByRegex()
	{
		if (!Z_Registration_Info_UClass_UPCGInstancePackerByRegex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInstancePackerByRegex.OuterSingleton, Z_Construct_UClass_UPCGInstancePackerByRegex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInstancePackerByRegex.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInstancePackerByRegex>()
	{
		return UPCGInstancePackerByRegex::StaticClass();
	}
	UPCGInstancePackerByRegex::UPCGInstancePackerByRegex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInstancePackerByRegex);
	UPCGInstancePackerByRegex::~UPCGInstancePackerByRegex() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByRegex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByRegex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInstancePackerByRegex, UPCGInstancePackerByRegex::StaticClass, TEXT("UPCGInstancePackerByRegex"), &Z_Registration_Info_UClass_UPCGInstancePackerByRegex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInstancePackerByRegex), 735662418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByRegex_h_1320448622(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByRegex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByRegex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
