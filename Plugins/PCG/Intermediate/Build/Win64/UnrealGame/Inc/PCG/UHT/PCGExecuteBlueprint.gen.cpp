// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGExecuteBlueprint.h"
#include "PCG/Public/PCGContext.h"
#include "PCG/Public/PCGData.h"
#include "PCG/Public/PCGPin.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGExecuteBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintElement();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSettingsType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetRandomStream)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetSeed)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeed(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execOutputLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->OutputLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execInputLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->InputLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeTypeOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPCGSettingsType*)Z_Param__Result=P_THIS->NodeTypeOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeColorOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->NodeColorOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeTitleOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->NodeTitleOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execIterationLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_PROPERTY(FInt64Property,Z_Param_NumIterations);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_OptionalA);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_OptionalB);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IterationLoop(Z_Param_Out_InContext,Z_Param_NumIterations,Z_Param_Out_OutData,Z_Param_OptionalA,Z_Param_OptionalB,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNestedLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InOuterData);
		P_GET_OBJECT(UPCGPointData,Z_Param_InInnerData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NestedLoop(Z_Param_Out_InContext,Z_Param_InOuterData,Z_Param_InInnerData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execVariableLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VariableLoop(Z_Param_Out_InContext,Z_Param_InData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execPointLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointLoop(Z_Param_Out_InContext,Z_Param_InData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execExecuteWithContext)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_Input);
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteWithContext_Implementation(Z_Param_Out_InContext,Z_Param_Out_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	struct PCGBlueprintElement_eventExecute_Parms
	{
		FPCGDataCollection Input;
		FPCGDataCollection Output;
	};
	struct PCGBlueprintElement_eventExecuteWithContext_Parms
	{
		FPCGContext InContext;
		FPCGDataCollection Input;
		FPCGDataCollection Output;
	};
	struct PCGBlueprintElement_eventIterationLoopBody_Parms
	{
		FPCGContext InContext;
		int64 Iteration;
		const UPCGSpatialData* InA;
		const UPCGSpatialData* InB;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventIterationLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventNestedLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InOuterData;
		const UPCGPointData* InInnerData;
		FPCGPoint InOuterPoint;
		FPCGPoint InInnerPoint;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNestedLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventNodeColorOverride_Parms
	{
		FLinearColor ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNodeColorOverride_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct PCGBlueprintElement_eventNodeTitleOverride_Parms
	{
		FName ReturnValue;
	};
	struct PCGBlueprintElement_eventNodeTypeOverride_Parms
	{
		EPCGSettingsType ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNodeTypeOverride_Parms()
			: ReturnValue((EPCGSettingsType)0)
		{
		}
	};
	struct PCGBlueprintElement_eventPointLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InData;
		FPCGPoint InPoint;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventPointLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventVariableLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InData;
		FPCGPoint InPoint;
		UPCGMetadata* OutMetadata;
		TArray<FPCGPoint> ReturnValue;
	};
	static FName NAME_UPCGBlueprintElement_Execute = FName(TEXT("Execute"));
	void UPCGBlueprintElement::Execute(FPCGDataCollection const& Input, FPCGDataCollection& Output)
	{
		PCGBlueprintElement_eventExecute_Parms Parms;
		Parms.Input=Input;
		Parms.Output=Output;
		ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_Execute),&Parms);
		Output=Parms.Output;
	}
	static FName NAME_UPCGBlueprintElement_ExecuteWithContext = FName(TEXT("ExecuteWithContext"));
	void UPCGBlueprintElement::ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection const& Input, FPCGDataCollection& Output)
	{
		PCGBlueprintElement_eventExecuteWithContext_Parms Parms;
		Parms.InContext=InContext;
		Parms.Input=Input;
		Parms.Output=Output;
		ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_ExecuteWithContext),&Parms);
		InContext=Parms.InContext;
		Output=Parms.Output;
	}
	static FName NAME_UPCGBlueprintElement_IterationLoopBody = FName(TEXT("IterationLoopBody"));
	bool UPCGBlueprintElement::IterationLoopBody(FPCGContext const& InContext, int64 Iteration, const UPCGSpatialData* InA, const UPCGSpatialData* InB, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventIterationLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.Iteration=Iteration;
		Parms.InA=InA;
		Parms.InB=InB;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_IterationLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NestedLoopBody = FName(TEXT("NestedLoopBody"));
	bool UPCGBlueprintElement::NestedLoopBody(FPCGContext const& InContext, const UPCGPointData* InOuterData, const UPCGPointData* InInnerData, FPCGPoint const& InOuterPoint, FPCGPoint const& InInnerPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventNestedLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InOuterData=InOuterData;
		Parms.InInnerData=InInnerData;
		Parms.InOuterPoint=InOuterPoint;
		Parms.InInnerPoint=InInnerPoint;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NestedLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeColorOverride = FName(TEXT("NodeColorOverride"));
	FLinearColor UPCGBlueprintElement::NodeColorOverride() const
	{
		PCGBlueprintElement_eventNodeColorOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeColorOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeTitleOverride = FName(TEXT("NodeTitleOverride"));
	FName UPCGBlueprintElement::NodeTitleOverride() const
	{
		PCGBlueprintElement_eventNodeTitleOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeTitleOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeTypeOverride = FName(TEXT("NodeTypeOverride"));
	EPCGSettingsType UPCGBlueprintElement::NodeTypeOverride() const
	{
		PCGBlueprintElement_eventNodeTypeOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeTypeOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_PointLoopBody = FName(TEXT("PointLoopBody"));
	bool UPCGBlueprintElement::PointLoopBody(FPCGContext const& InContext, const UPCGPointData* InData, FPCGPoint const& InPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventPointLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InData=InData;
		Parms.InPoint=InPoint;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_PointLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_VariableLoopBody = FName(TEXT("VariableLoopBody"));
	TArray<FPCGPoint> UPCGBlueprintElement::VariableLoopBody(FPCGContext const& InContext, const UPCGPointData* InData, FPCGPoint const& InPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventVariableLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InData=InData;
		Parms.InPoint=InPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_VariableLoopBody),&Parms);
		return Parms.ReturnValue;
	}
	void UPCGBlueprintElement::StaticRegisterNativesUPCGBlueprintElement()
	{
		UClass* Class = UPCGBlueprintElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteWithContext", &UPCGBlueprintElement::execExecuteWithContext },
			{ "GetRandomStream", &UPCGBlueprintElement::execGetRandomStream },
			{ "GetSeed", &UPCGBlueprintElement::execGetSeed },
			{ "InputLabels", &UPCGBlueprintElement::execInputLabels },
			{ "IterationLoop", &UPCGBlueprintElement::execIterationLoop },
			{ "NestedLoop", &UPCGBlueprintElement::execNestedLoop },
			{ "NodeColorOverride", &UPCGBlueprintElement::execNodeColorOverride },
			{ "NodeTitleOverride", &UPCGBlueprintElement::execNodeTitleOverride },
			{ "NodeTypeOverride", &UPCGBlueprintElement::execNodeTypeOverride },
			{ "OutputLabels", &UPCGBlueprintElement::execOutputLabels },
			{ "PointLoop", &UPCGBlueprintElement::execPointLoop },
			{ "VariableLoop", &UPCGBlueprintElement::execVariableLoop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventExecute_Parms, Input), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData)) }; // 3581647893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventExecute_Parms, Output), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(nullptr, 0) }; // 3581647893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Execution" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "Execute", nullptr, nullptr, sizeof(PCGBlueprintElement_eventExecute_Parms), Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, Input), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData)) }; // 3581647893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, Output), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(nullptr, 0) }; // 3581647893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Execution" },
		{ "Comment", "// ~End UObject interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "~End UObject interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "ExecuteWithContext", nullptr, nullptr, sizeof(PCGBlueprintElement_eventExecuteWithContext_Parms), Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics
	{
		struct PCGBlueprintElement_eventGetRandomStream_Parms
		{
			FPCGContext InContext;
			FRandomStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventGetRandomStream_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Random" },
		{ "Comment", "/** Creates a random stream from the settings & source component */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Creates a random stream from the settings & source component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetRandomStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PCGBlueprintElement_eventGetRandomStream_Parms), Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics
	{
		struct PCGBlueprintElement_eventGetSeed_Parms
		{
			FPCGContext InContext;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventGetSeed_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Random" },
		{ "Comment", "/** Gets the seed from the associated settings & source component */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Gets the seed from the associated settings & source component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PCGBlueprintElement_eventGetSeed_Parms), Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics
	{
		struct PCGBlueprintElement_eventInputLabels_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventInputLabels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "InputLabels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::PCGBlueprintElement_eventInputLabels_Parms), Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_InputLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_InputLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics
	{
		struct PCGBlueprintElement_eventIterationLoop_Parms
		{
			FPCGContext InContext;
			int64 NumIterations;
			UPCGPointData* OutData;
			const UPCGSpatialData* OptionalA;
			const UPCGSpatialData* OptionalB;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumIterations;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalB;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA = { "OptionalA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB = { "OptionalB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the IterationLoopBody a fixed number of times, optional parameters are used to potentially initialized the Out Data, but otherwise are used to remove the need to have variables */" },
		{ "CPP_Default_OptionalA", "None" },
		{ "CPP_Default_OptionalB", "None" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the IterationLoopBody a fixed number of times, optional parameters are used to potentially initialized the Out Data, but otherwise are used to remove the need to have variables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "IterationLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PCGBlueprintElement_eventIterationLoop_Parms), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Iteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData)) }; // 742208121
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_Iteration = { "Iteration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, Iteration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventIterationLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintElement_eventIterationLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_Iteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "IterationLoopBody", nullptr, nullptr, sizeof(PCGBlueprintElement_eventIterationLoopBody_Parms), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics
	{
		struct PCGBlueprintElement_eventNestedLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InOuterData;
			const UPCGPointData* InInnerData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInnerData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData = { "InOuterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InOuterData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData = { "InInnerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InInnerData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|FLow Control" },
		{ "Comment", "/** Calls the NestedLoopBody function on all nested loop pairs (e.g. (o, i) for all o in Outer, i in Inner) */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the NestedLoopBody function on all nested loop pairs (e.g. (o, i) for all o in Outer, i in Inner)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NestedLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PCGBlueprintElement_eventNestedLoop_Parms), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInnerData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOuterPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InInnerPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData)) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData = { "InOuterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InOuterData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData = { "InInnerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InInnerData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint = { "InOuterPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InOuterPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint = { "InInnerPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InInnerPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventNestedLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintElement_eventNestedLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NestedLoopBody", nullptr, nullptr, sizeof(PCGBlueprintElement_eventNestedLoopBody_Parms), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNodeColorOverride_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeColorOverride", nullptr, nullptr, sizeof(PCGBlueprintElement_eventNodeColorOverride_Parms), Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNodeTitleOverride_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "Comment", "/** Override for the default node name */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Override for the default node name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeTitleOverride", nullptr, nullptr, sizeof(PCGBlueprintElement_eventNodeTitleOverride_Parms), Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventNodeTypeOverride_Parms, ReturnValue), Z_Construct_UEnum_PCG_EPCGSettingsType, METADATA_PARAMS(nullptr, 0) }; // 1436754881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeTypeOverride", nullptr, nullptr, sizeof(PCGBlueprintElement_eventNodeTypeOverride_Parms), Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics
	{
		struct PCGBlueprintElement_eventOutputLabels_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventOutputLabels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "OutputLabels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::PCGBlueprintElement_eventOutputLabels_Parms), Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics
	{
		struct PCGBlueprintElement_eventPointLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the PointLoopBody function on all points */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the PointLoopBody function on all points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "PointLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PCGBlueprintElement_eventPointLoop_Parms), Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_PointLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData)) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventPointLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintElement_eventPointLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "PointLoopBody", nullptr, nullptr, sizeof(PCGBlueprintElement_eventPointLoopBody_Parms), Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics
	{
		struct PCGBlueprintElement_eventVariableLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the VariableLoopBody function on all points, each call can return a variable number of points */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the VariableLoopBody function on all points, each call can return a variable number of points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "VariableLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PCGBlueprintElement_eventVariableLoop_Parms), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData)) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "VariableLoopBody", nullptr, nullptr, sizeof(PCGBlueprintElement_eventVariableLoopBody_Parms), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintElement);
	UClass* Z_Construct_UClass_UPCGBlueprintElement_NoRegister()
	{
		return UPCGBlueprintElement::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatesArtifacts_MetaData[];
#endif
		static void NewProp_bCreatesArtifacts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatesArtifacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheable_MetaData[];
#endif
		static void NewProp_bCacheable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMultithreaded_MetaData[];
#endif
		static void NewProp_bCanBeMultithreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMultithreaded;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputPinLabels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPinLabels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InputPinLabels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPinLabels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinLabels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutputPinLabels;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomInputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomInputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomInputPins;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomOutputPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultInPin_MetaData[];
#endif
		static void NewProp_bHasDefaultInPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultInPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultOutPin_MetaData[];
#endif
		static void NewProp_bHasDefaultOutPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultOutPin;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyParsingDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DependencyParsingDepth;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintElement_Execute, "Execute" }, // 4206941054
		{ &Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext, "ExecuteWithContext" }, // 1440058007
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream, "GetRandomStream" }, // 1863921996
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetSeed, "GetSeed" }, // 2487750740
		{ &Z_Construct_UFunction_UPCGBlueprintElement_InputLabels, "InputLabels" }, // 3843556065
		{ &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop, "IterationLoop" }, // 2173685063
		{ &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody, "IterationLoopBody" }, // 3916410023
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop, "NestedLoop" }, // 260049408
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody, "NestedLoopBody" }, // 2591849168
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride, "NodeColorOverride" }, // 1279438404
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride, "NodeTitleOverride" }, // 3451679873
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride, "NodeTypeOverride" }, // 28916873
		{ &Z_Construct_UFunction_UPCGBlueprintElement_OutputLabels, "OutputLabels" }, // 1181028741
		{ &Z_Construct_UFunction_UPCGBlueprintElement_PointLoop, "PointLoop" }, // 2787987454
		{ &Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody, "PointLoopBody" }, // 483497757
		{ &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop, "VariableLoop" }, // 1322919402
		{ &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody, "VariableLoopBody" }, // 302561464
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Elements/PCGExecuteBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bCreatesArtifacts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts = { "bCreatesArtifacts", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Not yet hooked up, currently work in progress. True if output data can be cached and reused if inputs do not change, false if blueprint should be executed every time. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Not yet hooked up, currently work in progress. True if output data can be cached and reused if inputs do not change, false if blueprint should be executed every time." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bCacheable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable = { "bCacheable", nullptr, (EPropertyFlags)0x0010040000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bCanBeMultithreaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded = { "bCanBeMultithreaded", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_ElementProp = { "InputPinLabels", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData[] = {
		{ "BlueprintGetter", "InputLabels" },
		{ "Category", "Settings|Input & Output" },
		{ "DeprecatedMessage", "Input Pin Labels are deprecated - use Input Labels instead." },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels = { "InputPinLabels", nullptr, (EPropertyFlags)0x0010000820000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, InputPinLabels_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_ElementProp = { "OutputPinLabels", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData[] = {
		{ "BlueprintGetter", "OutputLabels" },
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels = { "OutputPinLabels", nullptr, (EPropertyFlags)0x0010000820000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, OutputPinLabels_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_Inner = { "CustomInputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(nullptr, 0) }; // 570377948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins = { "CustomInputPins", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, CustomInputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData)) }; // 570377948
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_Inner = { "CustomOutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(nullptr, 0) }; // 570377948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins = { "CustomOutputPins", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, CustomOutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData)) }; // 570377948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bHasDefaultInPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin = { "bHasDefaultInPin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bHasDefaultOutPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin = { "bHasDefaultOutPin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bExposeToLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, Category), METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, Description), METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData[] = {
		{ "Category", "Settings|Advanced" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth = { "DependencyParsingDepth", nullptr, (EPropertyFlags)0x0010000800010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintElement, DependencyParsingDepth), METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCreatesArtifacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCacheable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintElement_Statics::ClassParams = {
		&UPCGBlueprintElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBlueprintElement()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton, Z_Construct_UClass_UPCGBlueprintElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintElement>()
	{
		return UPCGBlueprintElement::StaticClass();
	}
	UPCGBlueprintElement::UPCGBlueprintElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintElement);
	UPCGBlueprintElement::~UPCGBlueprintElement() {}
	DEFINE_FUNCTION(UPCGBlueprintSettings::execGetElementType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UPCGBlueprintElement> *)Z_Param__Result=P_THIS->GetElementType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintSettings::execSetElementType)
	{
		P_GET_OBJECT(UClass,Z_Param_InElementType);
		P_GET_OBJECT_REF(UPCGBlueprintElement,Z_Param_Out_ElementInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElementType(Z_Param_InElementType,Z_Param_Out_ElementInstance);
		P_NATIVE_END;
	}
	void UPCGBlueprintSettings::StaticRegisterNativesUPCGBlueprintSettings()
	{
		UClass* Class = UPCGBlueprintSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElementType", &UPCGBlueprintSettings::execGetElementType },
			{ "SetElementType", &UPCGBlueprintSettings::execSetElementType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics
	{
		struct PCGBlueprintSettings_eventGetElementType_Parms
		{
			TSubclassOf<UPCGBlueprintElement>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintSettings_eventGetElementType_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings|Template" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintSettings, nullptr, "GetElementType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PCGBlueprintSettings_eventGetElementType_Parms), Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics
	{
		struct PCGBlueprintSettings_eventSetElementType_Parms
		{
			TSubclassOf<UPCGBlueprintElement>  InElementType;
			UPCGBlueprintElement* ElementInstance;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InElementType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElementInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_InElementType = { "InElementType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintSettings_eventSetElementType_Parms, InElementType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_ElementInstance = { "ElementInstance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintSettings_eventSetElementType_Parms, ElementInstance), Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_InElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_ElementInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings|Template" },
		{ "DeterminesOutputType", "InElementType" },
		{ "DynamicOutputParam", "ElementInstance" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintSettings, nullptr, "SetElementType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PCGBlueprintSettings_eventSetElementType_Parms), Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintSettings);
	UClass* Z_Construct_UClass_UPCGBlueprintSettings_NoRegister()
	{
		return UPCGBlueprintSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintElement;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElementType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElementInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintElementInstance;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedActorTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedActorTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackActorsOnlyWithinBounds_MetaData[];
#endif
		static void NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackActorsOnlyWithinBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatesArtifacts_MetaData[];
#endif
		static void NewProp_bCreatesArtifacts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatesArtifacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMultithreaded_MetaData[];
#endif
		static void NewProp_bCanBeMultithreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMultithreaded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType, "GetElementType" }, // 3135004031
		{ &Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType, "SetElementType" }, // 3607993892
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGExecuteBlueprint.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement = { "BlueprintElement", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElement_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType = { "BlueprintElementType", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElementType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData[] = {
		{ "Category", "Instance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance = { "BlueprintElementInstance", nullptr, (EPropertyFlags)0x00260800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElementInstance), Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_Inner = { "TrackedActorTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags = { "TrackedActorTags", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGBlueprintSettings, TrackedActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj)
	{
		((UPCGBlueprintSettings*)Obj)->bTrackActorsOnlyWithinBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds = { "bTrackActorsOnlyWithinBounds", nullptr, (EPropertyFlags)0x0020080800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintSettings), &Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts_SetBit(void* Obj)
	{
		((UPCGBlueprintSettings*)Obj)->bCreatesArtifacts_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts = { "bCreatesArtifacts", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintSettings), &Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_SetBit(void* Obj)
	{
		((UPCGBlueprintSettings*)Obj)->bCanBeMultithreaded_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded = { "bCanBeMultithreaded", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGBlueprintSettings), &Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCreatesArtifacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::ClassParams = {
		&UPCGBlueprintSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBlueprintSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton, Z_Construct_UClass_UPCGBlueprintSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintSettings>()
	{
		return UPCGBlueprintSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintSettings);
	UPCGBlueprintSettings::~UPCGBlueprintSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBlueprintElement, UPCGBlueprintElement::StaticClass, TEXT("UPCGBlueprintElement"), &Z_Registration_Info_UClass_UPCGBlueprintElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintElement), 1388019138U) },
		{ Z_Construct_UClass_UPCGBlueprintSettings, UPCGBlueprintSettings::StaticClass, TEXT("UPCGBlueprintSettings"), &Z_Registration_Info_UClass_UPCGBlueprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintSettings), 1723051362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_673446190(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
