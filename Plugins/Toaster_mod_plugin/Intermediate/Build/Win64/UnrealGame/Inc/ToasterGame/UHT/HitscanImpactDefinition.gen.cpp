// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitscanImpactDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHitscanImpactDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanImpactDefinition();
TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanImpactDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitscanImpactDefinition *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHitscanImpactDefinition;
UClass* UHitscanImpactDefinition::GetPrivateStaticClass()
{
	using TClass = UHitscanImpactDefinition;
	if (!Z_Registration_Info_UClass_UHitscanImpactDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HitscanImpactDefinition"),
			Z_Registration_Info_UClass_UHitscanImpactDefinition.InnerSingleton,
			StaticRegisterNativesUHitscanImpactDefinition,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHitscanImpactDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitscanImpactDefinition_NoRegister()
{
	return UHitscanImpactDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitscanImpactDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HitscanImpactDefinition.h" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle system to play on impact\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle system to play on impact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to play on impact\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play on impact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of decal\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of decal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to put on decal\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to put on decal" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UHitscanImpactDefinition constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHitscanImpactDefinition constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanImpactDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHitscanImpactDefinition_Statics

// ********** Begin Class UHitscanImpactDefinition Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanImpactDefinition, ImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactEffect_MetaData), NewProp_ImpactEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanImpactDefinition, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanImpactDefinition, DecalSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanImpactDefinition, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitscanImpactDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::PropPointers) < 2048);
// ********** End Class UHitscanImpactDefinition Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UHitscanImpactDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::ClassParams = {
	&UHitscanImpactDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitscanImpactDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitscanImpactDefinition_Statics::Class_MetaDataParams)
};
void UHitscanImpactDefinition::StaticRegisterNativesUHitscanImpactDefinition()
{
}
UClass* Z_Construct_UClass_UHitscanImpactDefinition()
{
	if (!Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton, Z_Construct_UClass_UHitscanImpactDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton;
}
UHitscanImpactDefinition::UHitscanImpactDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHitscanImpactDefinition);
UHitscanImpactDefinition::~UHitscanImpactDefinition() {}
// ********** End Class UHitscanImpactDefinition ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitscanImpactDefinition, UHitscanImpactDefinition::StaticClass, TEXT("UHitscanImpactDefinition"), &Z_Registration_Info_UClass_UHitscanImpactDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanImpactDefinition), 277760521U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h__Script_ToasterGame_169669283{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
