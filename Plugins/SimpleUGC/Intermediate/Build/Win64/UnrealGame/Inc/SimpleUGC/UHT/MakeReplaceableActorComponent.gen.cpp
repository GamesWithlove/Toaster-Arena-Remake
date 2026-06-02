// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MakeReplaceableActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMakeReplaceableActorComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent();
SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMakeReplaceableActorComponent *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMakeReplaceableActorComponent;
UClass* UMakeReplaceableActorComponent::GetPrivateStaticClass()
{
	using TClass = UMakeReplaceableActorComponent;
	if (!Z_Registration_Info_UClass_UMakeReplaceableActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MakeReplaceableActorComponent"),
			Z_Registration_Info_UClass_UMakeReplaceableActorComponent.InnerSingleton,
			StaticRegisterNativesUMakeReplaceableActorComponent,
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
	return Z_Registration_Info_UClass_UMakeReplaceableActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister()
{
	return UMakeReplaceableActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMakeReplaceableActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MakeReplaceableActorComponent.h" },
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleReplacement_MetaData[] = {
		{ "Category", "SimpleUGC | Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only Classes of these Types can override this Actor. This is typically the type of actor you've places this component on or a safe superclass shared with an Override class.\n" },
#endif
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only Classes of these Types can override this Actor. This is typically the type of actor you've places this component on or a safe superclass shared with an Override class." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMakeReplaceableActorComponent constinit property declarations ***********
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleReplacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMakeReplaceableActorComponent constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMakeReplaceableActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMakeReplaceableActorComponent_Statics

// ********** Begin Class UMakeReplaceableActorComponent Property Definitions **********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement = { "CompatibleReplacement", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMakeReplaceableActorComponent, CompatibleReplacement), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleReplacement_MetaData), NewProp_CompatibleReplacement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers) < 2048);
// ********** End Class UMakeReplaceableActorComponent Property Definitions ************************
UObject* (*const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams)
};
void UMakeReplaceableActorComponent::StaticRegisterNativesUMakeReplaceableActorComponent()
{
}
UClass* Z_Construct_UClass_UMakeReplaceableActorComponent()
{
	if (!Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton, Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMakeReplaceableActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMakeReplaceableActorComponent);
UMakeReplaceableActorComponent::~UMakeReplaceableActorComponent() {}
// ********** End Class UMakeReplaceableActorComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h__Script_SimpleUGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMakeReplaceableActorComponent, UMakeReplaceableActorComponent::StaticClass, TEXT("UMakeReplaceableActorComponent"), &Z_Registration_Info_UClass_UMakeReplaceableActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMakeReplaceableActorComponent), 2001207485U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h__Script_SimpleUGC_1163739206{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_MakeReplaceableActorComponent_h__Script_SimpleUGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
