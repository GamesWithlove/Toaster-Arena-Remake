// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/ReplacementActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplacementActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	void UReplacementActorComponent::StaticRegisterNativesUReplacementActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplacementActorComponent);
	UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister()
	{
		return UReplacementActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReplacementActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassesToReplace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassesToReplace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClassesToReplace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplacementActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReplacementActorComponent.h" },
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData[] = {
		{ "Category", "SimpleUGC | Actor Replacement" },
		{ "Comment", "// Add Classes you want to override here. Note: Classes added to this list MUST have a UMakeReplaceableActorComponent and This class's type be included in the component's ValidOverrideTypes\n" },
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
		{ "ToolTip", "Add Classes you want to override here. Note: Classes added to this list MUST have a UMakeReplaceableActorComponent and This class's type be included in the component's ValidOverrideTypes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplacementActorComponent, ActorClassesToReplace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplacementActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplacementActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplacementActorComponent_Statics::ClassParams = {
		&UReplacementActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplacementActorComponent()
	{
		if (!Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton, Z_Construct_UClass_UReplacementActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UReplacementActorComponent>()
	{
		return UReplacementActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplacementActorComponent);
	UReplacementActorComponent::~UReplacementActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplacementActorComponent, UReplacementActorComponent::StaticClass, TEXT("UReplacementActorComponent"), &Z_Registration_Info_UClass_UReplacementActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplacementActorComponent), 234411272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h_1690984922(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
