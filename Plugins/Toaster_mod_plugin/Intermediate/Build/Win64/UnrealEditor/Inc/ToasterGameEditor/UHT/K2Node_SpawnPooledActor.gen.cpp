// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGameEditor/Private/K2Node_SpawnPooledActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SpawnPooledActor() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
	TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor();
	TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGameEditor();
// End Cross Module References
	void UK2Node_SpawnPooledActor::StaticRegisterNativesUK2Node_SpawnPooledActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SpawnPooledActor);
	UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor_NoRegister()
	{
		return UK2Node_SpawnPooledActor::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGameEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SpawnPooledActor.h" },
		{ "ModuleRelativePath", "Private/K2Node_SpawnPooledActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SpawnPooledActor>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SpawnPooledActor()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton, Z_Construct_UClass_UK2Node_SpawnPooledActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SpawnPooledActor.OuterSingleton;
	}
	template<> TOASTERGAMEEDITOR_API UClass* StaticClass<UK2Node_SpawnPooledActor>()
	{
		return UK2Node_SpawnPooledActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SpawnPooledActor);
	UK2Node_SpawnPooledActor::~UK2Node_SpawnPooledActor() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SpawnPooledActor, UK2Node_SpawnPooledActor::StaticClass, TEXT("UK2Node_SpawnPooledActor"), &Z_Registration_Info_UClass_UK2Node_SpawnPooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SpawnPooledActor), 2765641640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h_2363608137(TEXT("/Script/ToasterGameEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_K2Node_SpawnPooledActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
