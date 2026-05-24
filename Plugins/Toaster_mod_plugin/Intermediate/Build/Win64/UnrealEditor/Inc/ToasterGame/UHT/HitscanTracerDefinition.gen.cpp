// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitscanTracerDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHitscanTracerDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanTracerDefinition();
TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanTracerDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitscanTracerDefinition *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHitscanTracerDefinition;
UClass* UHitscanTracerDefinition::GetPrivateStaticClass()
{
	using TClass = UHitscanTracerDefinition;
	if (!Z_Registration_Info_UClass_UHitscanTracerDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HitscanTracerDefinition"),
			Z_Registration_Info_UClass_UHitscanTracerDefinition.InnerSingleton,
			StaticRegisterNativesUHitscanTracerDefinition,
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
	return Z_Registration_Info_UClass_UHitscanTracerDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitscanTracerDefinition_NoRegister()
{
	return UHitscanTracerDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitscanTracerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HitscanTracerDefinition.h" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed of tracer in cm/s\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of tracer in cm/s" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Width of tracer particle\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of tracer particle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Length of tracer particle\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of tracer particle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChancePercent_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Percentage chance of tracer effect dispatching\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage chance of tracer effect dispatching" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to map onto tracer particle\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to map onto tracer particle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound effect this tracer makes as it flies past players\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound effect this tracer makes as it flies past players" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracer_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle class to use on as tracer\n" },
#endif
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle class to use on as tracer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UHitscanTracerDefinition constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChancePercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHitscanTracerDefinition constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanTracerDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHitscanTracerDefinition_Statics

// ********** Begin Class UHitscanTracerDefinition Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent = { "ChancePercent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, ChancePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChancePercent_MetaData), NewProp_ChancePercent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer = { "Tracer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitscanTracerDefinition, Tracer), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracer_MetaData), NewProp_Tracer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitscanTracerDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::PropPointers) < 2048);
// ********** End Class UHitscanTracerDefinition Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UHitscanTracerDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::ClassParams = {
	&UHitscanTracerDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitscanTracerDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitscanTracerDefinition_Statics::Class_MetaDataParams)
};
void UHitscanTracerDefinition::StaticRegisterNativesUHitscanTracerDefinition()
{
}
UClass* Z_Construct_UClass_UHitscanTracerDefinition()
{
	if (!Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton, Z_Construct_UClass_UHitscanTracerDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton;
}
UHitscanTracerDefinition::UHitscanTracerDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHitscanTracerDefinition);
UHitscanTracerDefinition::~UHitscanTracerDefinition() {}
// ********** End Class UHitscanTracerDefinition ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitscanTracerDefinition, UHitscanTracerDefinition::StaticClass, TEXT("UHitscanTracerDefinition"), &Z_Registration_Info_UClass_UHitscanTracerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanTracerDefinition), 1716699780U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h__Script_ToasterGame_3593525538{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
