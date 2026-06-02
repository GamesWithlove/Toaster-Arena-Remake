// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SpawnPooledActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_SpawnPooledActor() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor();
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGameEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_SpawnPooledActor *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_SpawnPooledActor;
UClass* UK2Node_SpawnPooledActor::GetPrivateStaticClass()
{
	using TClass = UK2Node_SpawnPooledActor;
	if (!Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_SpawnPooledActor"),
			Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.InnerSingleton,
			StaticRegisterNativesUK2Node_SpawnPooledActor,
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
	return Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor_NoRegister()
{
	return UK2Node_SpawnPooledActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SpawnPooledActor.h" },
		{ "ModuleRelativePath", "Private/K2Node_SpawnPooledActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_SpawnPooledActor constinit property declarations *****************
// ********** End Class UK2Node_SpawnPooledActor constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SpawnPooledActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics
UObject* (*const Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGameEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::ClassParams = {
	&UK2Node_SpawnPooledActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::Class_MetaDataParams)
};
void UK2Node_SpawnPooledActor::StaticRegisterNativesUK2Node_SpawnPooledActor()
{
}
UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor()
{
	if (!Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton, Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_SpawnPooledActor);
UK2Node_SpawnPooledActor::~UK2Node_SpawnPooledActor() {}
// ********** End Class UK2Node_SpawnPooledActor ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h__Script_ToasterGameEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SpawnPooledActor, UK2Node_SpawnPooledActor::StaticClass, TEXT("UK2Node_SpawnPooledActor"), &Z_Registration_Info_UClass_UK2Node_SpawnPooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SpawnPooledActor), 1501368244U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h__Script_ToasterGameEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h__Script_ToasterGameEditor_3930001853{
	TEXT("/Script/ToasterGameEditor"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h__Script_ToasterGameEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h__Script_ToasterGameEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
