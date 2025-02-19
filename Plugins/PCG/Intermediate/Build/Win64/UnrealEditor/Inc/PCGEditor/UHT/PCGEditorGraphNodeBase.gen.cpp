// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphNodeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGEditorGraphNodeBase::StaticRegisterNativesUPCGEditorGraphNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEditorGraphNodeBase);
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase_NoRegister()
	{
		return UPCGEditorGraphNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCGNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PCGNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEditorGraphNodeBase.h" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphNodeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::NewProp_PCGNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::NewProp_PCGNode = { "PCGNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEditorGraphNodeBase, PCGNode), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::NewProp_PCGNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::NewProp_PCGNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::NewProp_PCGNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEditorGraphNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::ClassParams = {
		&UPCGEditorGraphNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEditorGraphNodeBase()
	{
		if (!Z_Registration_Info_UClass_UPCGEditorGraphNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEditorGraphNodeBase.OuterSingleton, Z_Construct_UClass_UPCGEditorGraphNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEditorGraphNodeBase.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGEditorGraphNodeBase>()
	{
		return UPCGEditorGraphNodeBase::StaticClass();
	}
	UPCGEditorGraphNodeBase::UPCGEditorGraphNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEditorGraphNodeBase);
	UPCGEditorGraphNodeBase::~UPCGEditorGraphNodeBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEditorGraphNodeBase, UPCGEditorGraphNodeBase::StaticClass, TEXT("UPCGEditorGraphNodeBase"), &Z_Registration_Info_UClass_UPCGEditorGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEditorGraphNodeBase), 560400368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeBase_h_811737560(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
