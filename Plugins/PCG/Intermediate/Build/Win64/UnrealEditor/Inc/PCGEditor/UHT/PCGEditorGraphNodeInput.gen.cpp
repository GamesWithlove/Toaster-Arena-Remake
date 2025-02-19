// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphNodeInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphNodeInput() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeInput();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphNodeInput::StaticRegisterNativesUPCGEditorGraphNodeInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphNodeInput);
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeInput_NoRegister()
	{
		return UPCGEditorGraphNodeInput::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGEditorGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphNodeInput.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphNodeInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphNodeInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::ClassParams = {
		&UPCGEditorGraphNodeInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeInput()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphNodeInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphNodeInput.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphNodeInput.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphNodeInput>()
	{
		return UPCGEditorGraphNodeInput::StaticClass();
	}
	UPCGEditorGraphNodeInput::UPCGEditorGraphNodeInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphNodeInput);
	UPCGEditorGraphNodeInput::~UPCGEditorGraphNodeInput() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphNodeInput, UPCGEditorGraphNodeInput::StaticClass, TEXT("UPCGEditorGraphNodeInput"), &Z_Registration_Info_UClass_UPCGEditorGraphNodeInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphNodeInput), 1811343696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeInput_h_63304756(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
