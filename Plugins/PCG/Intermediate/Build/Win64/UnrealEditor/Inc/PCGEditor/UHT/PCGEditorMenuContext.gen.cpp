// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorMenuContext();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorMenuContext::StaticRegisterNativesUPCGEditorMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorMenuContext);
	UClass* Z_Construct_UClass_UPCGEditorMenuContext_NoRegister()
	{
		return UPCGEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorMenuContext.h" },
		{ "ModuleRelativePath", "Private/PCGEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorMenuContext_Statics::ClassParams = {
		&UPCGEditorMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorMenuContext.OuterSingleton, Z_Construct_UClass_UPCGEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorMenuContext.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorMenuContext>()
	{
		return UPCGEditorMenuContext::StaticClass();
	}
	UPCGEditorMenuContext::UPCGEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorMenuContext);
	UPCGEditorMenuContext::~UPCGEditorMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorMenuContext, UPCGEditorMenuContext::StaticClass, TEXT("UPCGEditorMenuContext"), &Z_Registration_Info_UClass_UPCGEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorMenuContext), 2083825806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_4287395772(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
