// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Tests/Determinism/PCGDeterminismTestBlueprintBase.h"
#include "PCG/Public/Tests/Determinism/PCGDeterminismTestsCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDeterminismTestBlueprintBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase();
	PCG_API UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FDeterminismTestResult();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGDeterminismTestBlueprintBase::execExecuteTest)
	{
		P_GET_OBJECT(UPCGNode,Z_Param_InPCGNode);
		P_GET_STRUCT_REF(FDeterminismTestResult,Z_Param_Out_InOutTestResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteTest_Implementation(Z_Param_InPCGNode,Z_Param_Out_InOutTestResult);
		P_NATIVE_END;
	}
	struct PCGDeterminismTestBlueprintBase_eventExecuteTest_Parms
	{
		const UPCGNode* InPCGNode;
		FDeterminismTestResult InOutTestResult;
	};
	static FName NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest = FName(TEXT("ExecuteTest"));
	void UPCGDeterminismTestBlueprintBase::ExecuteTest(const UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult)
	{
		PCGDeterminismTestBlueprintBase_eventExecuteTest_Parms Parms;
		Parms.InPCGNode=InPCGNode;
		Parms.InOutTestResult=InOutTestResult;
		ProcessEvent(FindFunctionChecked(NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest),&Parms);
		InOutTestResult=Parms.InOutTestResult;
	}
	void UPCGDeterminismTestBlueprintBase::StaticRegisterNativesUPCGDeterminismTestBlueprintBase()
	{
		UClass* Class = UPCGDeterminismTestBlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTest", &UPCGDeterminismTestBlueprintBase::execExecuteTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPCGNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPCGNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutTestResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InPCGNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InPCGNode = { "InPCGNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDeterminismTestBlueprintBase_eventExecuteTest_Parms, InPCGNode), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InPCGNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InPCGNode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InOutTestResult = { "InOutTestResult", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDeterminismTestBlueprintBase_eventExecuteTest_Parms, InOutTestResult), Z_Construct_UScriptStruct_FDeterminismTestResult, METADATA_PARAMS(nullptr, 0) }; // 4278178366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InPCGNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::NewProp_InOutTestResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Determinism" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDeterminismTestBlueprintBase, nullptr, "ExecuteTest", nullptr, nullptr, sizeof(PCGDeterminismTestBlueprintBase_eventExecuteTest_Parms), Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDeterminismTestBlueprintBase);
	UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister()
	{
		return UPCGDeterminismTestBlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest, "ExecuteTest" }, // 4212947590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Tests/Determinism/PCGDeterminismTestBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestBlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDeterminismTestBlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::ClassParams = {
		&UPCGDeterminismTestBlueprintBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton, Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDeterminismTestBlueprintBase>()
	{
		return UPCGDeterminismTestBlueprintBase::StaticClass();
	}
	UPCGDeterminismTestBlueprintBase::UPCGDeterminismTestBlueprintBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDeterminismTestBlueprintBase);
	UPCGDeterminismTestBlueprintBase::~UPCGDeterminismTestBlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDeterminismTestBlueprintBase, UPCGDeterminismTestBlueprintBase::StaticClass, TEXT("UPCGDeterminismTestBlueprintBase"), &Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDeterminismTestBlueprintBase), 3811849056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_1682101527(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
