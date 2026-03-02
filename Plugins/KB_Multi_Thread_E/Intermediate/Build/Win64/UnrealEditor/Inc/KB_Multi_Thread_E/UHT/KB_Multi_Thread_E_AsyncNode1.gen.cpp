// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KB_Multi_Thread_E/Public/KB_Multi_Thread_E_AsyncNode1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKB_Multi_Thread_E_AsyncNode1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	KB_MULTI_THREAD_E_API UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1();
	KB_MULTI_THREAD_E_API UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister();
	KB_MULTI_THREAD_E_API UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KB_Multi_Thread_E();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics
	{
		struct _Script_KB_Multi_Thread_E_eventTaskOutput_Parms
		{
			float TimeItTook;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeItTook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::NewProp_TimeItTook = { "TimeItTook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_KB_Multi_Thread_E_eventTaskOutput_Parms, TimeItTook), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::NewProp_TimeItTook,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KB_Multi_Thread_E, nullptr, "TaskOutput__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::_Script_KB_Multi_Thread_E_eventTaskOutput_Parms), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTaskOutput_DelegateWrapper(const FMulticastScriptDelegate& TaskOutput, float TimeItTook)
{
	struct _Script_KB_Multi_Thread_E_eventTaskOutput_Parms
	{
		float TimeItTook;
	};
	_Script_KB_Multi_Thread_E_eventTaskOutput_Parms Parms;
	Parms.TimeItTook=TimeItTook;
	TaskOutput.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UKB_Multi_Thread_E_AsyncNode1::execBAS_MTE_MultiThreadNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UKB_Multi_Thread_E_AsyncNode1**)Z_Param__Result=UKB_Multi_Thread_E_AsyncNode1::BAS_MTE_MultiThreadNode();
		P_NATIVE_END;
	}
	void UKB_Multi_Thread_E_AsyncNode1::StaticRegisterNativesUKB_Multi_Thread_E_AsyncNode1()
	{
		UClass* Class = UKB_Multi_Thread_E_AsyncNode1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BAS_MTE_MultiThreadNode", &UKB_Multi_Thread_E_AsyncNode1::execBAS_MTE_MultiThreadNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics
	{
		struct KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms
		{
			UKB_Multi_Thread_E_AsyncNode1* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms, ReturnValue), Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Multi Thread Extension" },
		{ "DisplayName", "Multi Thread Task" },
		{ "Keywords", "Async Multi Thread" },
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
		{ "ToolTip", "Allows for multi threading any blueprint code" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1, nullptr, "BAS_MTE_MultiThreadNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms), Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKB_Multi_Thread_E_AsyncNode1);
	UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister()
	{
		return UKB_Multi_Thread_E_AsyncNode1::StaticClass();
	}
	struct Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiThreadTask_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MultiThreadTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KB_Multi_Thread_E,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode, "BAS_MTE_MultiThreadNode" }, // 2608584997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KB_Multi_Thread_E_AsyncNode1.h" },
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask = { "MultiThreadTask", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKB_Multi_Thread_E_AsyncNode1, MultiThreadTask), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask_MetaData)) }; // 370425512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKB_Multi_Thread_E_AsyncNode1, OnFinished), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished_MetaData)) }; // 370425512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKB_Multi_Thread_E_AsyncNode1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::ClassParams = {
		&UKB_Multi_Thread_E_AsyncNode1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1()
	{
		if (!Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton, Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton;
	}
	template<> KB_MULTI_THREAD_E_API UClass* StaticClass<UKB_Multi_Thread_E_AsyncNode1>()
	{
		return UKB_Multi_Thread_E_AsyncNode1::StaticClass();
	}
	UKB_Multi_Thread_E_AsyncNode1::UKB_Multi_Thread_E_AsyncNode1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKB_Multi_Thread_E_AsyncNode1);
	UKB_Multi_Thread_E_AsyncNode1::~UKB_Multi_Thread_E_AsyncNode1() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1, UKB_Multi_Thread_E_AsyncNode1::StaticClass, TEXT("UKB_Multi_Thread_E_AsyncNode1"), &Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKB_Multi_Thread_E_AsyncNode1), 258418158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h_3303879232(TEXT("/Script/KB_Multi_Thread_E"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
