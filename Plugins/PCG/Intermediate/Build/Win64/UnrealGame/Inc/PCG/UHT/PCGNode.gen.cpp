// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PCG_API UClass* Z_Construct_UClass_UPCGEdge_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPin_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGNode::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGNode::execRemoveEdgeTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_FromPinLable);
		P_GET_OBJECT(UPCGNode,Z_Param_To);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEdgeTo(Z_Param_FromPinLable,Z_Param_To,Z_Param_ToPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGNode::execAddEdgeTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_FromPinLabel);
		P_GET_OBJECT(UPCGNode,Z_Param_To);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGNode**)Z_Param__Result=P_THIS->AddEdgeTo(Z_Param_FromPinLabel,Z_Param_To,Z_Param_ToPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGNode::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UPCGNode::execSetNodePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPositionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPositionY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNodePosition(Z_Param_InPositionX,Z_Param_InPositionY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGNode::execGetNodePosition)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPositionX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPositionY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodePosition(Z_Param_Out_OutPositionX,Z_Param_Out_OutPositionY);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UPCGNode::StaticRegisterNativesUPCGNode()
	{
		UClass* Class = UPCGNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEdgeTo", &UPCGNode::execAddEdgeTo },
			{ "GetGraph", &UPCGNode::execGetGraph },
#if WITH_EDITOR
			{ "GetNodePosition", &UPCGNode::execGetNodePosition },
#endif // WITH_EDITOR
			{ "GetSettings", &UPCGNode::execGetSettings },
			{ "RemoveEdgeTo", &UPCGNode::execRemoveEdgeTo },
#if WITH_EDITOR
			{ "SetNodePosition", &UPCGNode::execSetNodePosition },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics
	{
		struct PCGNode_eventAddEdgeTo_Parms
		{
			FName FromPinLabel;
			UPCGNode* To;
			FName ToPinLabel;
			UPCGNode* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromPinLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToPinLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_FromPinLabel = { "FromPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventAddEdgeTo_Parms, FromPinLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventAddEdgeTo_Parms, To), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_ToPinLabel = { "ToPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventAddEdgeTo_Parms, ToPinLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventAddEdgeTo_Parms, ReturnValue), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_FromPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_ToPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Adds an edge in the owning graph to the given \"To\" node. */" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ToolTip", "Adds an edge in the owning graph to the given \"To\" node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "AddEdgeTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::PCGNode_eventAddEdgeTo_Parms), Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_AddEdgeTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGNode_GetGraph_Statics
	{
		struct PCGNode_eventGetGraph_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGNode_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Returns the owning graph */" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ToolTip", "Returns the owning graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_GetGraph_Statics::PCGNode_eventGetGraph_Parms), Z_Construct_UFunction_UPCGNode_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics
	{
		struct PCGNode_eventGetNodePosition_Parms
		{
			int32 OutPositionX;
			int32 OutPositionY;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutPositionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutPositionY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::NewProp_OutPositionX = { "OutPositionX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventGetNodePosition_Parms, OutPositionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::NewProp_OutPositionY = { "OutPositionY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventGetNodePosition_Parms, OutPositionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::NewProp_OutPositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::NewProp_OutPositionY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "GetNodePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::PCGNode_eventGetNodePosition_Parms), Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_GetNodePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_GetNodePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UPCGNode_GetSettings_Statics
	{
		struct PCGNode_eventGetSettings_Parms
		{
			UPCGSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGNode_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Returns the settings this node holds (either directly or through an instance) */" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ToolTip", "Returns the settings this node holds (either directly or through an instance)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "GetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_GetSettings_Statics::PCGNode_eventGetSettings_Parms), Z_Construct_UFunction_UPCGNode_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics
	{
		struct PCGNode_eventRemoveEdgeTo_Parms
		{
			FName FromPinLable;
			UPCGNode* To;
			FName ToPinLabel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromPinLable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToPinLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_FromPinLable = { "FromPinLable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventRemoveEdgeTo_Parms, FromPinLable), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventRemoveEdgeTo_Parms, To), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ToPinLabel = { "ToPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventRemoveEdgeTo_Parms, ToPinLabel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGNode_eventRemoveEdgeTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGNode_eventRemoveEdgeTo_Parms), &Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_FromPinLable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ToPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Removes an edge originating from this node */" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ToolTip", "Removes an edge originating from this node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "RemoveEdgeTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::PCGNode_eventRemoveEdgeTo_Parms), Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_RemoveEdgeTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics
	{
		struct PCGNode_eventSetNodePosition_Parms
		{
			int32 InPositionX;
			int32 InPositionY;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPositionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPositionY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::NewProp_InPositionX = { "InPositionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventSetNodePosition_Parms, InPositionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::NewProp_InPositionY = { "InPositionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGNode_eventSetNodePosition_Parms, InPositionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::NewProp_InPositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::NewProp_InPositionY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGNode, nullptr, "SetNodePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::PCGNode_eventSetNodePosition_Parms), Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGNode_SetNodePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGNode_SetNodePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGNode);
	UClass* Z_Construct_UClass_UPCGNode_NoRegister()
	{
		return UPCGNode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeTitle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeComment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeComment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubblePinned_MetaData[];
#endif
		static void NewProp_bCommentBubblePinned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubblePinned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SettingsInterface;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutboundNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutboundNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutboundNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InboundEdges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InboundEdges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InboundEdges;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutboundEdges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutboundEdges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutboundEdges;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPins;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGNode_AddEdgeTo, "AddEdgeTo" }, // 2066641602
		{ &Z_Construct_UFunction_UPCGNode_GetGraph, "GetGraph" }, // 451331112
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPCGNode_GetNodePosition, "GetNodePosition" }, // 733580806
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UPCGNode_GetSettings, "GetSettings" }, // 4033774072
		{ &Z_Construct_UFunction_UPCGNode_RemoveEdgeTo, "RemoveEdgeTo" }, // 492943408
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPCGNode_SetNodePosition, "SetNodePosition" }, // 2277447193
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGNode.h" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_DefaultSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_DefaultSettings = { "DefaultSettings", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, DefaultSettings_DEPRECATED), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_DefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_DefaultSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, NodeTitle), METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitleColor_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitleColor = { "NodeTitleColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, NodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, PositionX), METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, PositionY), METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeComment_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeComment = { "NodeComment", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, NodeComment), METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeComment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	void Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned_SetBit(void* Obj)
	{
		((UPCGNode*)Obj)->bCommentBubblePinned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned = { "bCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPCGNode), &Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	void Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
	{
		((UPCGNode*)Obj)->bCommentBubbleVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPCGNode), &Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_SettingsInterface_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Note: do not set this property directly from code, use SetSettingsInterface instead */" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
		{ "ToolTip", "Note: do not set this property directly from code, use SetSettingsInterface instead" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_SettingsInterface = { "SettingsInterface", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, SettingsInterface), Z_Construct_UClass_UPCGSettingsInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_SettingsInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_SettingsInterface_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes_Inner = { "OutboundNodes", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes = { "OutboundNodes", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, OutboundNodes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges_Inner = { "InboundEdges", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges = { "InboundEdges", nullptr, (EPropertyFlags)0x0024480020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, InboundEdges_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges_Inner = { "OutboundEdges", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges = { "OutboundEdges", nullptr, (EPropertyFlags)0x0024480020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, OutboundEdges_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/PCGNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_DefaultSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_NodeComment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubblePinned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_bCommentBubbleVisible,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_SettingsInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_InboundEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutboundEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_InputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNode_Statics::NewProp_OutputPins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGNode_Statics::ClassParams = {
		&UPCGNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGNode()
	{
		if (!Z_Registration_Info_UClass_UPCGNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGNode.OuterSingleton, Z_Construct_UClass_UPCGNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGNode.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGNode>()
	{
		return UPCGNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGNode);
	UPCGNode::~UPCGNode() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGNode, UPCGNode::StaticClass, TEXT("UPCGNode"), &Z_Registration_Info_UClass_UPCGNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGNode), 2440094897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_3662732216(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
