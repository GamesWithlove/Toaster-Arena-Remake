// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FixedCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFixedCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_AFixedCharacter();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_AFixedCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFixedCharacter **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFixedCharacter;
UClass* AFixedCharacter::GetPrivateStaticClass()
{
	using TClass = AFixedCharacter;
	if (!Z_Registration_Info_UClass_AFixedCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FixedCharacter"),
			Z_Registration_Info_UClass_AFixedCharacter.InnerSingleton,
			StaticRegisterNativesAFixedCharacter,
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
	return Z_Registration_Info_UClass_AFixedCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFixedCharacter_NoRegister()
{
	return AFixedCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFixedCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FixedCharacter.h" },
		{ "ModuleRelativePath", "Public/FixedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionSocketLocationSocket_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FixedCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFixedCharacter constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AIPerceptionSocketLocationSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFixedCharacter constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFixedCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFixedCharacter_Statics

// ********** Begin Class AFixedCharacter Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket = { "AIPerceptionSocketLocationSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFixedCharacter, AIPerceptionSocketLocationSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionSocketLocationSocket_MetaData), NewProp_AIPerceptionSocketLocationSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFixedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::PropPointers) < 2048);
// ********** End Class AFixedCharacter Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AFixedCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFixedCharacter_Statics::ClassParams = {
	&AFixedCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFixedCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFixedCharacter_Statics::Class_MetaDataParams)
};
void AFixedCharacter::StaticRegisterNativesAFixedCharacter()
{
}
UClass* Z_Construct_UClass_AFixedCharacter()
{
	if (!Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton, Z_Construct_UClass_AFixedCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFixedCharacter);
AFixedCharacter::~AFixedCharacter() {}
// ********** End Class AFixedCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h__Script_ShadowsCodePlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFixedCharacter, AFixedCharacter::StaticClass, TEXT("AFixedCharacter"), &Z_Registration_Info_UClass_AFixedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFixedCharacter), 1055255772U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h__Script_ShadowsCodePlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h__Script_ShadowsCodePlugin_2682559498{
	TEXT("/Script/ShadowsCodePlugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h__Script_ShadowsCodePlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h__Script_ShadowsCodePlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
