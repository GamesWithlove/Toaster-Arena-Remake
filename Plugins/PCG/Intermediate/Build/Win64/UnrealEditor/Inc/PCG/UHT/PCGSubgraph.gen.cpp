// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGSubgraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSubgraph() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphNode();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSubgraphNode();
	PCG_API UClass* Z_Construct_UClass_UPCGSubgraphNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSubgraphSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGBaseSubgraphSettings::StaticRegisterNativesUPCGBaseSubgraphSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBaseSubgraphSettings);
	UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister()
	{
		return UPCGBaseSubgraphSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGSubgraph.h" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBaseSubgraphSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::ClassParams = {
		&UPCGBaseSubgraphSettings::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton, Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBaseSubgraphSettings>()
	{
		return UPCGBaseSubgraphSettings::StaticClass();
	}
	UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBaseSubgraphSettings);
	UPCGBaseSubgraphSettings::~UPCGBaseSubgraphSettings() {}
	void UPCGSubgraphSettings::StaticRegisterNativesUPCGSubgraphSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSubgraphSettings);
	UClass* Z_Construct_UClass_UPCGSubgraphSettings_NoRegister()
	{
		return UPCGSubgraphSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSubgraphSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubgraphInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subgraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Subgraph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSubgraphSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseSubgraphSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSubgraphSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGSubgraph.h" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_SubgraphInstance_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_SubgraphInstance = { "SubgraphInstance", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSubgraphSettings, SubgraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_SubgraphInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_SubgraphInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_Subgraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_Subgraph = { "Subgraph", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSubgraphSettings, Subgraph_DEPRECATED), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_Subgraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_Subgraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSubgraphSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_SubgraphInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSubgraphSettings_Statics::NewProp_Subgraph,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSubgraphSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSubgraphSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSubgraphSettings_Statics::ClassParams = {
		&UPCGSubgraphSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSubgraphSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubgraphSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSubgraphSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubgraphSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSubgraphSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton, Z_Construct_UClass_UPCGSubgraphSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSubgraphSettings>()
	{
		return UPCGSubgraphSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSubgraphSettings);
	UPCGSubgraphSettings::~UPCGSubgraphSettings() {}
	void UPCGBaseSubgraphNode::StaticRegisterNativesUPCGBaseSubgraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBaseSubgraphNode);
	UClass* Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister()
	{
		return UPCGBaseSubgraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBaseSubgraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicGraph_MetaData[];
#endif
		static void NewProp_bDynamicGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGSubgraph.h" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph_SetBit(void* Obj)
	{
		((UPCGBaseSubgraphNode*)Obj)->bDynamicGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph = { "bDynamicGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBaseSubgraphNode), &Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::NewProp_bDynamicGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBaseSubgraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::ClassParams = {
		&UPCGBaseSubgraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBaseSubgraphNode()
	{
		if (!Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton, Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBaseSubgraphNode>()
	{
		return UPCGBaseSubgraphNode::StaticClass();
	}
	UPCGBaseSubgraphNode::UPCGBaseSubgraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBaseSubgraphNode);
	UPCGBaseSubgraphNode::~UPCGBaseSubgraphNode() {}
	void UPCGSubgraphNode::StaticRegisterNativesUPCGSubgraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSubgraphNode);
	UClass* Z_Construct_UClass_UPCGSubgraphNode_NoRegister()
	{
		return UPCGSubgraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSubgraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSubgraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseSubgraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSubgraphNode_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGSubgraph.h" },
		{ "ModuleRelativePath", "Public/PCGSubgraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSubgraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSubgraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSubgraphNode_Statics::ClassParams = {
		&UPCGSubgraphNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSubgraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSubgraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSubgraphNode()
	{
		if (!Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton, Z_Construct_UClass_UPCGSubgraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSubgraphNode>()
	{
		return UPCGSubgraphNode::StaticClass();
	}
	UPCGSubgraphNode::UPCGSubgraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSubgraphNode);
	UPCGSubgraphNode::~UPCGSubgraphNode() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBaseSubgraphSettings, UPCGBaseSubgraphSettings::StaticClass, TEXT("UPCGBaseSubgraphSettings"), &Z_Registration_Info_UClass_UPCGBaseSubgraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBaseSubgraphSettings), 633838810U) },
		{ Z_Construct_UClass_UPCGSubgraphSettings, UPCGSubgraphSettings::StaticClass, TEXT("UPCGSubgraphSettings"), &Z_Registration_Info_UClass_UPCGSubgraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSubgraphSettings), 3126243094U) },
		{ Z_Construct_UClass_UPCGBaseSubgraphNode, UPCGBaseSubgraphNode::StaticClass, TEXT("UPCGBaseSubgraphNode"), &Z_Registration_Info_UClass_UPCGBaseSubgraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBaseSubgraphNode), 1878961817U) },
		{ Z_Construct_UClass_UPCGSubgraphNode, UPCGSubgraphNode::StaticClass, TEXT("UPCGSubgraphNode"), &Z_Registration_Info_UClass_UPCGSubgraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSubgraphNode), 3952704799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_3619331894(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
