// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplacementActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplacementActorComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent();
SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReplacementActorComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReplacementActorComponent;
UClass* UReplacementActorComponent::GetPrivateStaticClass()
{
	using TClass = UReplacementActorComponent;
	if (!Z_Registration_Info_UClass_UReplacementActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplacementActorComponent"),
			Z_Registration_Info_UClass_UReplacementActorComponent.InnerSingleton,
			StaticRegisterNativesUReplacementActorComponent,
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
	return Z_Registration_Info_UClass_UReplacementActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister()
{
	return UReplacementActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReplacementActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReplacementActorComponent.h" },
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassesToReplace_MetaData[] = {
		{ "Category", "SimpleUGC | Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add Classes you want to override here. Note: Classes added to this list MUST have a UMakeReplaceableActorComponent and This class's type be included in the component's ValidOverrideTypes\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Classes you want to override here. Note: Classes added to this list MUST have a UMakeReplaceableActorComponent and This class's type be included in the component's ValidOverrideTypes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UReplacementActorComponent constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassesToReplace_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClassesToReplace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UReplacementActorComponent constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplacementActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReplacementActorComponent_Statics

// ********** Begin Class UReplacementActorComponent Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplacementActorComponent, ActorClassesToReplace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClassesToReplace_MetaData), NewProp_ActorClassesToReplace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers) < 2048);
// ********** End Class UReplacementActorComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UReplacementActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams)
};
void UReplacementActorComponent::StaticRegisterNativesUReplacementActorComponent()
{
}
UClass* Z_Construct_UClass_UReplacementActorComponent()
{
	if (!Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton, Z_Construct_UClass_UReplacementActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplacementActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReplacementActorComponent);
UReplacementActorComponent::~UReplacementActorComponent() {}
// ********** End Class UReplacementActorComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h__Script_SimpleUGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplacementActorComponent, UReplacementActorComponent::StaticClass, TEXT("UReplacementActorComponent"), &Z_Registration_Info_UClass_UReplacementActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplacementActorComponent), 769685157U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h__Script_SimpleUGC_1492276574{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_ReplacementActorComponent_h__Script_SimpleUGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
