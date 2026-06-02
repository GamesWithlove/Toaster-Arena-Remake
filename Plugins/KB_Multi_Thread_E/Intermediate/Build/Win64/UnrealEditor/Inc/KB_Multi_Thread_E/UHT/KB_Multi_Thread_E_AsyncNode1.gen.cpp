// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KB_Multi_Thread_E_AsyncNode1.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKB_Multi_Thread_E_AsyncNode1() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
KB_MULTI_THREAD_E_API UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1();
KB_MULTI_THREAD_E_API UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister();
KB_MULTI_THREAD_E_API UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_KB_Multi_Thread_E();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FTaskOutput ***********************************************************
struct Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics
{
	struct _Script_KB_Multi_Thread_E_eventTaskOutput_Parms
	{
		float TimeItTook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FTaskOutput constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeItTook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FTaskOutput constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FTaskOutput Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::NewProp_TimeItTook = { "TimeItTook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KB_Multi_Thread_E_eventTaskOutput_Parms, TimeItTook), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::NewProp_TimeItTook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FTaskOutput Property Definitions ****************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_KB_Multi_Thread_E, nullptr, "TaskOutput__DelegateSignature", 	Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::_Script_KB_Multi_Thread_E_eventTaskOutput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::_Script_KB_Multi_Thread_E_eventTaskOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FTaskOutput *************************************************************

// ********** Begin Class UKB_Multi_Thread_E_AsyncNode1 Function BAS_MTE_MultiThreadNode ***********
struct Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics
{
	struct KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms
	{
		UKB_Multi_Thread_E_AsyncNode1* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Multi Thread Extension" },
		{ "DisplayName", "Multi Thread Task" },
		{ "Keywords", "Async Multi Thread" },
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows for multi threading any blueprint code" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BAS_MTE_MultiThreadNode constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BAS_MTE_MultiThreadNode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BAS_MTE_MultiThreadNode Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms, ReturnValue), Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers) < 2048);
// ********** End Function BAS_MTE_MultiThreadNode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1, nullptr, "BAS_MTE_MultiThreadNode", 	Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::KB_Multi_Thread_E_AsyncNode1_eventBAS_MTE_MultiThreadNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKB_Multi_Thread_E_AsyncNode1::execBAS_MTE_MultiThreadNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKB_Multi_Thread_E_AsyncNode1**)Z_Param__Result=UKB_Multi_Thread_E_AsyncNode1::BAS_MTE_MultiThreadNode();
	P_NATIVE_END;
}
// ********** End Class UKB_Multi_Thread_E_AsyncNode1 Function BAS_MTE_MultiThreadNode *************

// ********** Begin Class UKB_Multi_Thread_E_AsyncNode1 ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1;
UClass* UKB_Multi_Thread_E_AsyncNode1::GetPrivateStaticClass()
{
	using TClass = UKB_Multi_Thread_E_AsyncNode1;
	if (!Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KB_Multi_Thread_E_AsyncNode1"),
			Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.InnerSingleton,
			StaticRegisterNativesUKB_Multi_Thread_E_AsyncNode1,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.InnerSingleton;
}
UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_NoRegister()
{
	return UKB_Multi_Thread_E_AsyncNode1::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KB_Multi_Thread_E_AsyncNode1.h" },
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiThreadTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/KB_Multi_Thread_E_AsyncNode1.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKB_Multi_Thread_E_AsyncNode1 constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MultiThreadTask;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKB_Multi_Thread_E_AsyncNode1 constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BAS_MTE_MultiThreadNode"), .Pointer = &UKB_Multi_Thread_E_AsyncNode1::execBAS_MTE_MultiThreadNode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKB_Multi_Thread_E_AsyncNode1_BAS_MTE_MultiThreadNode, "BAS_MTE_MultiThreadNode" }, // 3080676681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKB_Multi_Thread_E_AsyncNode1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics

// ********** Begin Class UKB_Multi_Thread_E_AsyncNode1 Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask = { "MultiThreadTask", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKB_Multi_Thread_E_AsyncNode1, MultiThreadTask), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiThreadTask_MetaData), NewProp_MultiThreadTask_MetaData) }; // 4232307208
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKB_Multi_Thread_E_AsyncNode1, OnFinished), Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 4232307208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_MultiThreadTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::NewProp_OnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::PropPointers) < 2048);
// ********** End Class UKB_Multi_Thread_E_AsyncNode1 Property Definitions *************************
UObject* (*const Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_KB_Multi_Thread_E,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Class_MetaDataParams), Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Class_MetaDataParams)
};
void UKB_Multi_Thread_E_AsyncNode1::StaticRegisterNativesUKB_Multi_Thread_E_AsyncNode1()
{
	UClass* Class = UKB_Multi_Thread_E_AsyncNode1::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1()
{
	if (!Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton, Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1.OuterSingleton;
}
UKB_Multi_Thread_E_AsyncNode1::UKB_Multi_Thread_E_AsyncNode1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKB_Multi_Thread_E_AsyncNode1);
UKB_Multi_Thread_E_AsyncNode1::~UKB_Multi_Thread_E_AsyncNode1() {}
// ********** End Class UKB_Multi_Thread_E_AsyncNode1 **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h__Script_KB_Multi_Thread_E_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKB_Multi_Thread_E_AsyncNode1, UKB_Multi_Thread_E_AsyncNode1::StaticClass, TEXT("UKB_Multi_Thread_E_AsyncNode1"), &Z_Registration_Info_UClass_UKB_Multi_Thread_E_AsyncNode1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKB_Multi_Thread_E_AsyncNode1), 775797839U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h__Script_KB_Multi_Thread_E_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h__Script_KB_Multi_Thread_E_4212937405{
	TEXT("/Script/KB_Multi_Thread_E"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h__Script_KB_Multi_Thread_E_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_KB_Multi_Thread_E_Source_KB_Multi_Thread_E_Public_KB_Multi_Thread_E_AsyncNode1_h__Script_KB_Multi_Thread_E_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
