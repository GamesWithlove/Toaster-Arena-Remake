// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	PCG_API UClass* Z_Construct_UClass_APCGVolume();
	PCG_API UClass* Z_Construct_UClass_APCGVolume_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void APCGVolume::StaticRegisterNativesAPCGVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGVolume);
	UClass* Z_Construct_UClass_APCGVolume_NoRegister()
	{
		return APCGVolume::StaticClass();
	}
	struct Z_Construct_UClass_APCGVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PCGComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCGVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "PCGVolume.h" },
		{ "ModuleRelativePath", "Public/PCGVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGVolume_Statics::NewProp_PCGComponent_MetaData[] = {
		{ "Category", "PCG" },
		{ "Comment", "//~ End AActor Interface\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGVolume_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGVolume, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCGVolume_Statics::NewProp_PCGComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGVolume_Statics::NewProp_PCGComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGVolume_Statics::NewProp_PCGComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCGVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGVolume_Statics::ClassParams = {
		&APCGVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCGVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCGVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCGVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCGVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCGVolume()
	{
		if (!Z_Registration_Info_UClass_APCGVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGVolume.OuterSingleton, Z_Construct_UClass_APCGVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCGVolume.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<APCGVolume>()
	{
		return APCGVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCGVolume);
	APCGVolume::~APCGVolume() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCGVolume, APCGVolume::StaticClass, TEXT("APCGVolume"), &Z_Registration_Info_UClass_APCGVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGVolume), 3844920916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGVolume_h_4250119901(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
