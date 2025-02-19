// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEdge() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGEdge();
	PCG_API UClass* Z_Construct_UClass_UPCGEdge_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGEdge::StaticRegisterNativesUPCGEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEdge);
	UClass* Z_Construct_UClass_UPCGEdge_NoRegister()
	{
		return UPCGEdge::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InboundLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InboundLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InboundNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InboundNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutboundLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutboundLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutboundNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutboundNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGEdge.h" },
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundLabel_MetaData[] = {
		{ "Comment", "// ~End UObject interface\n" },
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
		{ "ToolTip", "~End UObject interface" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundLabel = { "InboundLabel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, InboundLabel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundNode = { "InboundNode", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, InboundNode_DEPRECATED), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundLabel = { "OutboundLabel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, OutboundLabel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundNode = { "OutboundNode", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, OutboundNode_DEPRECATED), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_InputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_InputPin = { "InputPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, InputPin), Z_Construct_UClass_UPCGPin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_InputPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEdge, OutputPin), Z_Construct_UClass_UPCGPin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutputPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_InboundNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutboundNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_InputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEdge_Statics::NewProp_OutputPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEdge_Statics::ClassParams = {
		&UPCGEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEdge()
	{
		if (!Z_Registration_Info_UClass_UPCGEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEdge.OuterSingleton, Z_Construct_UClass_UPCGEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEdge.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGEdge>()
	{
		return UPCGEdge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEdge);
	UPCGEdge::~UPCGEdge() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEdge, UPCGEdge::StaticClass, TEXT("UPCGEdge"), &Z_Registration_Info_UClass_UPCGEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEdge), 428638822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEdge_h_2667844327(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
