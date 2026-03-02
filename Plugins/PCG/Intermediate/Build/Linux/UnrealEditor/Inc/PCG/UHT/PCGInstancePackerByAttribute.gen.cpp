// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/InstancePackers/PCGInstancePackerByAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInstancePackerByAttribute() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerBase();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerByAttribute();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerByAttribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGInstancePackerByAttribute::StaticRegisterNativesUPCGInstancePackerByAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInstancePackerByAttribute);
	UClass* Z_Construct_UClass_UPCGInstancePackerByAttribute_NoRegister()
	{
		return UPCGInstancePackerByAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGInstancePackerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "InstancePackers/PCGInstancePackerByAttribute.h" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames_Inner = { "AttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames = { "AttributeNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGInstancePackerByAttribute, AttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::NewProp_AttributeNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInstancePackerByAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::ClassParams = {
		&UPCGInstancePackerByAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGInstancePackerByAttribute()
	{
		if (!Z_Registration_Info_UClass_UPCGInstancePackerByAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInstancePackerByAttribute.OuterSingleton, Z_Construct_UClass_UPCGInstancePackerByAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInstancePackerByAttribute.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInstancePackerByAttribute>()
	{
		return UPCGInstancePackerByAttribute::StaticClass();
	}
	UPCGInstancePackerByAttribute::UPCGInstancePackerByAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInstancePackerByAttribute);
	UPCGInstancePackerByAttribute::~UPCGInstancePackerByAttribute() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInstancePackerByAttribute, UPCGInstancePackerByAttribute::StaticClass, TEXT("UPCGInstancePackerByAttribute"), &Z_Registration_Info_UClass_UPCGInstancePackerByAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInstancePackerByAttribute), 286782503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByAttribute_h_106105348(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerByAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
