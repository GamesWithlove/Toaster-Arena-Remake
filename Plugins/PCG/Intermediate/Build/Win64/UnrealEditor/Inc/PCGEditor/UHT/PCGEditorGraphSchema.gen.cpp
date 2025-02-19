// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphSchema();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphSchema::StaticRegisterNativesUPCGEditorGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphSchema);
	UClass* Z_Construct_UClass_UPCGEditorGraphSchema_NoRegister()
	{
		return UPCGEditorGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphSchema.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphSchema_Statics::ClassParams = {
		&UPCGEditorGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphSchema.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphSchema.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphSchema>()
	{
		return UPCGEditorGraphSchema::StaticClass();
	}
	UPCGEditorGraphSchema::UPCGEditorGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphSchema);
	UPCGEditorGraphSchema::~UPCGEditorGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphSchema, UPCGEditorGraphSchema::StaticClass, TEXT("UPCGEditorGraphSchema"), &Z_Registration_Info_UClass_UPCGEditorGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphSchema), 3923251758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchema_h_1736649467(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
