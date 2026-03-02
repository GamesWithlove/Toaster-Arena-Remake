// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGGraph.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PCG_API UClass* Z_Construct_UClass_UPCGGraph();
	PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag;
class UScriptStruct* FPCGOverrideInstancedPropertyBag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGOverrideInstancedPropertyBag"));
	}
	return Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGOverrideInstancedPropertyBag>()
{
	return FPCGOverrideInstancedPropertyBag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesIDsOverridden_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesIDsOverridden_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PropertiesIDsOverridden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Extended version of FInstancedPropertyBag, to support overrides and have a custom UI for it\n* Must only be used with PCGGraphInstances.\n* TODO: Should be made generic and moved to ScriptUtils.\n*/" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Extended version of FInstancedPropertyBag, to support overrides and have a custom UI for it\nMust only be used with PCGGraphInstances.\nTODO: Should be made generic and moved to ScriptUtils." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGOverrideInstancedPropertyBag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGOverrideInstancedPropertyBag, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_Parameters_MetaData)) }; // 3551882691
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden_ElementProp = { "PropertiesIDsOverridden", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden_MetaData[] = {
		{ "Category", "" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden = { "PropertiesIDsOverridden", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGOverrideInstancedPropertyBag, PropertiesIDsOverridden), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewProp_PropertiesIDsOverridden,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGOverrideInstancedPropertyBag",
		sizeof(FPCGOverrideInstancedPropertyBag),
		alignof(FPCGOverrideInstancedPropertyBag),
		Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.InnerSingleton, Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGGraphInterface::execGetConstPCGGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGGraph**)Z_Param__Result=P_THIS->GetConstPCGGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphInterface::execGetMutablePCGGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGGraph**)Z_Param__Result=P_THIS->GetMutablePCGGraph();
		P_NATIVE_END;
	}
	void UPCGGraphInterface::StaticRegisterNativesUPCGGraphInterface()
	{
		UClass* Class = UPCGGraphInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstPCGGraph", &UPCGGraphInterface::execGetConstPCGGraph },
			{ "GetMutablePCGGraph", &UPCGGraphInterface::execGetMutablePCGGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics
	{
		struct PCGGraphInterface_eventGetConstPCGGraph_Parms
		{
			const UPCGGraph* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraphInterface_eventGetConstPCGGraph_Parms, ReturnValue), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Return the underlying PCG Graph for this interface. */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Return the underlying PCG Graph for this interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphInterface, nullptr, "GetConstPCGGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::PCGGraphInterface_eventGetConstPCGGraph_Parms), Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics
	{
		struct PCGGraphInterface_eventGetMutablePCGGraph_Parms
		{
			UPCGGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraphInterface_eventGetMutablePCGGraph_Parms, ReturnValue), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Return the underlying PCG Graph for this interface. */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Return the underlying PCG Graph for this interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphInterface, nullptr, "GetMutablePCGGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::PCGGraphInterface_eventGetMutablePCGGraph_Parms), Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphInterface);
	UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister()
	{
		return UPCGGraphInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGGraphInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph, "GetConstPCGGraph" }, // 2533667500
		{ &Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph, "GetMutablePCGGraph" }, // 3439304085
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGGraph.h" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphInterface_Statics::ClassParams = {
		&UPCGGraphInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraphInterface()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton, Z_Construct_UClass_UPCGGraphInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraphInterface>()
	{
		return UPCGGraphInterface::StaticClass();
	}
	UPCGGraphInterface::UPCGGraphInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphInterface);
	UPCGGraphInterface::~UPCGGraphInterface() {}
	DEFINE_FUNCTION(UPCGGraph::execGetOutputNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->GetOutputNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execGetInputNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->GetInputNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execRemoveEdge)
	{
		P_GET_OBJECT(UPCGNode,Z_Param_From);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FromLabel);
		P_GET_OBJECT(UPCGNode,Z_Param_To);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ToLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEdge(Z_Param_From,Z_Param_Out_FromLabel,Z_Param_To,Z_Param_Out_ToLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execAddEdge)
	{
		P_GET_OBJECT(UPCGNode,Z_Param_From);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FromPinLabel);
		P_GET_OBJECT(UPCGNode,Z_Param_To);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ToPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->AddEdge(Z_Param_From,Z_Param_Out_FromPinLabel,Z_Param_To,Z_Param_Out_ToPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execRemoveNode)
	{
		P_GET_OBJECT(UPCGNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveNode(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execAddNodeCopy)
	{
		P_GET_OBJECT(UPCGSettings,Z_Param_InSettings);
		P_GET_OBJECT_REF(UPCGSettings,Z_Param_Out_DefaultNodeSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->AddNodeCopy(Z_Param_InSettings,Z_Param_Out_DefaultNodeSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execAddNodeInstance)
	{
		P_GET_OBJECT(UPCGSettings,Z_Param_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->AddNodeInstance(Z_Param_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraph::execAddNodeOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_InSettingsClass);
		P_GET_OBJECT_REF(UPCGSettings,Z_Param_Out_DefaultNodeSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->AddNodeOfType(Z_Param_InSettingsClass,Z_Param_Out_DefaultNodeSettings);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UPCGGraph::execForceNotificationForEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNotificationForEditor();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UPCGGraph::StaticRegisterNativesUPCGGraph()
	{
		UClass* Class = UPCGGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEdge", &UPCGGraph::execAddEdge },
			{ "AddNodeCopy", &UPCGGraph::execAddNodeCopy },
			{ "AddNodeInstance", &UPCGGraph::execAddNodeInstance },
			{ "AddNodeOfType", &UPCGGraph::execAddNodeOfType },
#if WITH_EDITOR
			{ "ForceNotificationForEditor", &UPCGGraph::execForceNotificationForEditor },
#endif // WITH_EDITOR
			{ "GetInputNode", &UPCGGraph::execGetInputNode },
			{ "GetOutputNode", &UPCGGraph::execGetOutputNode },
			{ "RemoveEdge", &UPCGGraph::execRemoveEdge },
			{ "RemoveNode", &UPCGGraph::execRemoveNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGGraph_AddEdge_Statics
	{
		struct PCGGraph_eventAddEdge_Parms
		{
			UPCGNode* From;
			FName FromPinLabel;
			UPCGNode* To;
			FName ToPinLabel;
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromPinLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToPinLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddEdge_Parms, From), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_FromPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_FromPinLabel = { "FromPinLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddEdge_Parms, FromPinLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_FromPinLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_FromPinLabel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddEdge_Parms, To), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ToPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ToPinLabel = { "ToPinLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddEdge_Parms, ToPinLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ToPinLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ToPinLabel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddEdge_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_FromPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ToPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Adds a directed edge in the graph. Returns the \"To\" node for easy chaining */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Adds a directed edge in the graph. Returns the \"To\" node for easy chaining" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "AddEdge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::PCGGraph_eventAddEdge_Parms), Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_AddEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics
	{
		struct PCGGraph_eventAddNodeCopy_Parms
		{
			UPCGSettings* InSettings;
			UPCGSettings* DefaultNodeSettings;
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultNodeSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeCopy_Parms, InSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_DefaultNodeSettings = { "DefaultNodeSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeCopy_Parms, DefaultNodeSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeCopy_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_DefaultNodeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Creates a node and copies the input settings. Returns the created node. */" },
		{ "DeterminesOutputType", "InSettings" },
		{ "DynamicOutputParam", "OutCopiedSettings" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Creates a node and copies the input settings. Returns the created node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "AddNodeCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::PCGGraph_eventAddNodeCopy_Parms), Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_AddNodeCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics
	{
		struct PCGGraph_eventAddNodeInstance_Parms
		{
			UPCGSettings* InSettings;
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeInstance_Parms, InSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeInstance_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Creates a node containing an instance to the given settings. Returns the created node. */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Creates a node containing an instance to the given settings. Returns the created node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "AddNodeInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::PCGGraph_eventAddNodeInstance_Parms), Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_AddNodeInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics
	{
		struct PCGGraph_eventAddNodeOfType_Parms
		{
			TSubclassOf<UPCGSettings>  InSettingsClass;
			UPCGSettings* DefaultNodeSettings;
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InSettingsClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultNodeSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_InSettingsClass = { "InSettingsClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeOfType_Parms, InSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_DefaultNodeSettings = { "DefaultNodeSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeOfType_Parms, DefaultNodeSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventAddNodeOfType_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_InSettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_DefaultNodeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Creates a default node based on the settings class wanted. Returns the newly created node. */" },
		{ "DeterminesOutputType", "InSettingsClass" },
		{ "DynamicOutputParam", "DefaultNodeSettings" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Creates a default node based on the settings class wanted. Returns the newly created node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "AddNodeOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::PCGGraph_eventAddNodeOfType_Parms), Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_AddNodeOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph|Advanded" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "ForceNotificationForEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics
	{
		struct PCGGraph_eventGetInputNode_Parms
		{
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventGetInputNode_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Returns the graph input node */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Returns the graph input node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "GetInputNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::PCGGraph_eventGetInputNode_Parms), Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_GetInputNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics
	{
		struct PCGGraph_eventGetOutputNode_Parms
		{
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventGetOutputNode_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Returns the graph output node */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Returns the graph output node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "GetOutputNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::PCGGraph_eventGetOutputNode_Parms), Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_GetOutputNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics
	{
		struct PCGGraph_eventRemoveEdge_Parms
		{
			UPCGNode* From;
			FName FromLabel;
			UPCGNode* To;
			FName ToLabel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventRemoveEdge_Parms, From), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_FromLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_FromLabel = { "FromLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventRemoveEdge_Parms, FromLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_FromLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_FromLabel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventRemoveEdge_Parms, To), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ToLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ToLabel = { "ToLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventRemoveEdge_Parms, ToLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ToLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ToLabel_MetaData)) };
	void Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGGraph_eventRemoveEdge_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGGraph_eventRemoveEdge_Parms), &Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_FromLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ToLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Removes an edge in the graph. Returns true if an edge was removed. */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Removes an edge in the graph. Returns true if an edge was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "RemoveEdge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::PCGGraph_eventRemoveEdge_Parms), Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_RemoveEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics
	{
		struct PCGGraph_eventRemoveNode_Parms
		{
			UPCGNode* InNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGGraph_eventRemoveNode_Parms, InNode), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::NewProp_InNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Removes a node from the graph. */" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Removes a node from the graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraph, nullptr, "RemoveNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::PCGGraph_eventRemoveNode_Parms), Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGGraph_RemoveNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraph);
	UClass* Z_Construct_UClass_UPCGGraph_NoRegister()
	{
		return UPCGGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUsesMetadata_MetaData[];
#endif
		static void NewProp_bLandscapeUsesMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUsesMetadata;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputNode;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtraEditorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraEditorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraEditorNodes;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGGraphInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGGraph_AddEdge, "AddEdge" }, // 1556837068
		{ &Z_Construct_UFunction_UPCGGraph_AddNodeCopy, "AddNodeCopy" }, // 2960554434
		{ &Z_Construct_UFunction_UPCGGraph_AddNodeInstance, "AddNodeInstance" }, // 3005465018
		{ &Z_Construct_UFunction_UPCGGraph_AddNodeOfType, "AddNodeOfType" }, // 4015596004
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPCGGraph_ForceNotificationForEditor, "ForceNotificationForEditor" }, // 1198902657
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UPCGGraph_GetInputNode, "GetInputNode" }, // 696519666
		{ &Z_Construct_UFunction_UPCGGraph_GetOutputNode, "GetOutputNode" }, // 442137503
		{ &Z_Construct_UFunction_UPCGGraph_RemoveEdge, "RemoveEdge" }, // 2462763364
		{ &Z_Construct_UFunction_UPCGGraph_RemoveNode, "RemoveNode" }, // 2817320856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PCGGraph.h" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	void Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UPCGGraph*)Obj)->bExposeToLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGGraph), &Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, Category), METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, Description), METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	void Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_SetBit(void* Obj)
	{
		((UPCGGraph*)Obj)->bLandscapeUsesMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata = { "bLandscapeUsesMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGGraph), &Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_InputNode_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "// Add input/output nodes\n" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Add input/output nodes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, InputNode), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_InputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_InputNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_OutputNode_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_OutputNode = { "OutputNode", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, OutputNode), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_OutputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_OutputNode_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes_Inner = { "ExtraEditorNodes", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes_MetaData[] = {
		{ "Comment", "// Extra data to hold information that is useful only in editor (like comments)\n" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "ToolTip", "Extra data to hold information that is useful only in editor (like comments)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes = { "ExtraEditorNodes", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, ExtraEditorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraph_Statics::NewProp_UserParameters_MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "// Parameters\n" },
		{ "DisplayName", "Parameters" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGGraph_Statics::NewProp_UserParameters = { "UserParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraph, UserParameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::NewProp_UserParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::NewProp_UserParameters_MetaData)) }; // 3551882691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGGraph_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_InputNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_OutputNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_ExtraEditorNodes,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraph_Statics::NewProp_UserParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraph_Statics::ClassParams = {
		&UPCGGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraph()
	{
		if (!Z_Registration_Info_UClass_UPCGGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraph.OuterSingleton, Z_Construct_UClass_UPCGGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraph.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraph>()
	{
		return UPCGGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraph);
	UPCGGraph::~UPCGGraph() {}
	void UPCGGraphInstance::StaticRegisterNativesUPCGGraphInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphInstance);
	UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister()
	{
		return UPCGGraphInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametersOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParametersOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGGraphInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PCGGraph.h" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraphInstance, Graph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_ParametersOverrides_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Public/PCGGraph.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_ParametersOverrides = { "ParametersOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGGraphInstance, ParametersOverrides), Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_ParametersOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_ParametersOverrides_MetaData)) }; // 2435462383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGGraphInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGGraphInstance_Statics::NewProp_ParametersOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphInstance_Statics::ClassParams = {
		&UPCGGraphInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGGraphInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraphInstance()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton, Z_Construct_UClass_UPCGGraphInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraphInstance>()
	{
		return UPCGGraphInstance::StaticClass();
	}
	UPCGGraphInstance::UPCGGraphInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphInstance);
	UPCGGraphInstance::~UPCGGraphInstance() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ScriptStructInfo[] = {
		{ FPCGOverrideInstancedPropertyBag::StaticStruct, Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewStructOps, TEXT("PCGOverrideInstancedPropertyBag"), &Z_Registration_Info_UScriptStruct_PCGOverrideInstancedPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGOverrideInstancedPropertyBag), 2435462383U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGraphInterface, UPCGGraphInterface::StaticClass, TEXT("UPCGGraphInterface"), &Z_Registration_Info_UClass_UPCGGraphInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphInterface), 2292338495U) },
		{ Z_Construct_UClass_UPCGGraph, UPCGGraph::StaticClass, TEXT("UPCGGraph"), &Z_Registration_Info_UClass_UPCGGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraph), 2916766860U) },
		{ Z_Construct_UClass_UPCGGraphInstance, UPCGGraphInstance::StaticClass, TEXT("UPCGGraphInstance"), &Z_Registration_Info_UClass_UPCGGraphInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphInstance), 2789499667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_4137892101(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
