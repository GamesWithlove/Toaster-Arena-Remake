// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/HitscanImpactDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitscanImpactDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanImpactDefinition();
	TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanImpactDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	void UHitscanImpactDefinition::StaticRegisterNativesUHitscanImpactDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitscanImpactDefinition);
	UClass* Z_Construct_UClass_UHitscanImpactDefinition_NoRegister()
	{
		return UHitscanImpactDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UHitscanImpactDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitscanImpactDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanImpactDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HitscanImpactDefinition.h" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
		{ "Comment", "// Particle system to play on impact\n" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
		{ "ToolTip", "Particle system to play on impact" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanImpactDefinition, ImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
		{ "Comment", "// Sound to play on impact\n" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
		{ "ToolTip", "Sound to play on impact" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanImpactDefinition, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
		{ "Comment", "// Size of decal\n" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
		{ "ToolTip", "Size of decal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanImpactDefinition, DecalSize), METADATA_PARAMS(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "HitscanImpactDefinition" },
		{ "Comment", "// Material to put on decal\n" },
		{ "ModuleRelativePath", "Public/HitscanImpactDefinition.h" },
		{ "ToolTip", "Material to put on decal" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanImpactDefinition, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitscanImpactDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanImpactDefinition_Statics::NewProp_DecalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitscanImpactDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanImpactDefinition>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UHitscanImpactDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitscanImpactDefinition()
	{
		if (!Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton, Z_Construct_UClass_UHitscanImpactDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHitscanImpactDefinition.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<UHitscanImpactDefinition>()
	{
		return UHitscanImpactDefinition::StaticClass();
	}
	UHitscanImpactDefinition::UHitscanImpactDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitscanImpactDefinition);
	UHitscanImpactDefinition::~UHitscanImpactDefinition() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHitscanImpactDefinition, UHitscanImpactDefinition::StaticClass, TEXT("UHitscanImpactDefinition"), &Z_Registration_Info_UClass_UHitscanImpactDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanImpactDefinition), 3518466028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h_3824022343(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanImpactDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
