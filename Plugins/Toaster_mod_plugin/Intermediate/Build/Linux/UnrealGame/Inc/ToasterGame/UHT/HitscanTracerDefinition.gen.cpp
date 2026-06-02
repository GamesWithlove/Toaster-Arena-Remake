// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/HitscanTracerDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitscanTracerDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanTracerDefinition();
	TOASTERGAME_API UClass* Z_Construct_UClass_UHitscanTracerDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	void UHitscanTracerDefinition::StaticRegisterNativesUHitscanTracerDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitscanTracerDefinition);
	UClass* Z_Construct_UClass_UHitscanTracerDefinition_NoRegister()
	{
		return UHitscanTracerDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UHitscanTracerDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChancePercent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChancePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitscanTracerDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HitscanTracerDefinition.h" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Speed of tracer in cm/s\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Speed of tracer in cm/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Speed), METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Width of tracer particle\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Width of tracer particle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Width), METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Length of tracer particle\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Length of tracer particle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Length), METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Percentage chance of tracer effect dispatching\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Percentage chance of tracer effect dispatching" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent = { "ChancePercent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, ChancePercent), METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Material to map onto tracer particle\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Material to map onto tracer particle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Sound effect this tracer makes as it flies past players\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Sound effect this tracer makes as it flies past players" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer_MetaData[] = {
		{ "Category", "HitscanTracerDefinition" },
		{ "Comment", "// Particle class to use on as tracer\n" },
		{ "ModuleRelativePath", "Public/HitscanTracerDefinition.h" },
		{ "ToolTip", "Particle class to use on as tracer" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer = { "Tracer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitscanTracerDefinition, Tracer), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitscanTracerDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_ChancePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanTracerDefinition_Statics::NewProp_Tracer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitscanTracerDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanTracerDefinition>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UHitscanTracerDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitscanTracerDefinition()
	{
		if (!Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton, Z_Construct_UClass_UHitscanTracerDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHitscanTracerDefinition.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<UHitscanTracerDefinition>()
	{
		return UHitscanTracerDefinition::StaticClass();
	}
	UHitscanTracerDefinition::UHitscanTracerDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitscanTracerDefinition);
	UHitscanTracerDefinition::~UHitscanTracerDefinition() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHitscanTracerDefinition, UHitscanTracerDefinition::StaticClass, TEXT("UHitscanTracerDefinition"), &Z_Registration_Info_UClass_UHitscanTracerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanTracerDefinition), 2965967397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h_4086243231(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_HitscanTracerDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
