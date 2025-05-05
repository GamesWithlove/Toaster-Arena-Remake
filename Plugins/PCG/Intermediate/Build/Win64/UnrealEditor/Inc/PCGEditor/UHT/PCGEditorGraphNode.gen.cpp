// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphNode() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNode();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNode_NoRegister();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphNode::StaticRegisterNativesUPCGEditorGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphNode);
	UClass* Z_Construct_UClass_UPCGEditorGraphNode_NoRegister()
	{
		return UPCGEditorGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGEditorGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphNode.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphNode_Statics::ClassParams = {
		&UPCGEditorGraphNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphNode()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphNode.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphNode.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphNode>()
	{
		return UPCGEditorGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphNode);
	UPCGEditorGraphNode::~UPCGEditorGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphNode, UPCGEditorGraphNode::StaticClass, TEXT("UPCGEditorGraphNode"), &Z_Registration_Info_UClass_UPCGEditorGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphNode), 3043592819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNode_h_746780827(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
