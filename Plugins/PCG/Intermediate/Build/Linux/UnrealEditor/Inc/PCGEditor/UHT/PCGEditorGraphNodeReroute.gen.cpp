// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphNodeReroute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphNodeReroute() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNode();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeReroute();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeReroute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphNodeReroute::StaticRegisterNativesUPCGEditorGraphNodeReroute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphNodeReroute);
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeReroute_NoRegister()
	{
		return UPCGEditorGraphNodeReroute::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGEditorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphNodeReroute.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphNodeReroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphNodeReroute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::ClassParams = {
		&UPCGEditorGraphNodeReroute::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeReroute()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphNodeReroute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphNodeReroute.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphNodeReroute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphNodeReroute.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphNodeReroute>()
	{
		return UPCGEditorGraphNodeReroute::StaticClass();
	}
	UPCGEditorGraphNodeReroute::UPCGEditorGraphNodeReroute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphNodeReroute);
	UPCGEditorGraphNodeReroute::~UPCGEditorGraphNodeReroute() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeReroute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeReroute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphNodeReroute, UPCGEditorGraphNodeReroute::StaticClass, TEXT("UPCGEditorGraphNodeReroute"), &Z_Registration_Info_UClass_UPCGEditorGraphNodeReroute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphNodeReroute), 1321193039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeReroute_h_3294146697(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeReroute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeReroute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
