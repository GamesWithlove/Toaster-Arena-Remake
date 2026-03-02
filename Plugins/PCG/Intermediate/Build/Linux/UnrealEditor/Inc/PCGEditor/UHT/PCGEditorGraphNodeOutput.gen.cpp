// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphNodeOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphNodeOutput() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeOutput();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphNodeOutput::StaticRegisterNativesUPCGEditorGraphNodeOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphNodeOutput);
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeOutput_NoRegister()
	{
		return UPCGEditorGraphNodeOutput::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGEditorGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphNodeOutput.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphNodeOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphNodeOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::ClassParams = {
		&UPCGEditorGraphNodeOutput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeOutput()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphNodeOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphNodeOutput.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphNodeOutput.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphNodeOutput>()
	{
		return UPCGEditorGraphNodeOutput::StaticClass();
	}
	UPCGEditorGraphNodeOutput::UPCGEditorGraphNodeOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphNodeOutput);
	UPCGEditorGraphNodeOutput::~UPCGEditorGraphNodeOutput() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphNodeOutput, UPCGEditorGraphNodeOutput::StaticClass, TEXT("UPCGEditorGraphNodeOutput"), &Z_Registration_Info_UClass_UPCGEditorGraphNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphNodeOutput), 3460480237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeOutput_h_4259167150(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
