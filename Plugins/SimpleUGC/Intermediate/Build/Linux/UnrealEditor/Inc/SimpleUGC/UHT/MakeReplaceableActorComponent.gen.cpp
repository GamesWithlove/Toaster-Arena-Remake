// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/MakeReplaceableActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeReplaceableActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	void UMakeReplaceableActorComponent::StaticRegisterNativesUMakeReplaceableActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMakeReplaceableActorComponent);
	UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister()
	{
		return UMakeReplaceableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMakeReplaceableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleReplacement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleReplacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MakeReplaceableActorComponent.h" },
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData[] = {
		{ "Category", "SimpleUGC | Actor Replacement" },
		{ "Comment", "// Only Classes of these Types can override this Actor. This is typically the type of actor you've places this component on or a safe superclass shared with an Override class.\n" },
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
		{ "ToolTip", "Only Classes of these Types can override this Actor. This is typically the type of actor you've places this component on or a safe superclass shared with an Override class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement = { "CompatibleReplacement", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMakeReplaceableActorComponent, CompatibleReplacement), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMakeReplaceableActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::ClassParams = {
		&UMakeReplaceableActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMakeReplaceableActorComponent()
	{
		if (!Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton, Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UMakeReplaceableActorComponent>()
	{
		return UMakeReplaceableActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMakeReplaceableActorComponent);
	UMakeReplaceableActorComponent::~UMakeReplaceableActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMakeReplaceableActorComponent, UMakeReplaceableActorComponent::StaticClass, TEXT("UMakeReplaceableActorComponent"), &Z_Registration_Info_UClass_UMakeReplaceableActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMakeReplaceableActorComponent), 2642988170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h_2876847157(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
