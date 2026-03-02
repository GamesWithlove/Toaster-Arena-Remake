// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncWait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncWait() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncWait();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncWait_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncWait.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncWaitOutputPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncWaitOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitOutputPin)
{
	AsyncWaitOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UEMSAsyncWait::execAsyncWaitForOperation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EAsyncCheckType,Z_Param_CheckType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSAsyncWait**)Z_Param__Result=UEMSAsyncWait::AsyncWaitForOperation(Z_Param_WorldContextObject,EAsyncCheckType(Z_Param_CheckType));
		P_NATIVE_END;
	}
	void UEMSAsyncWait::StaticRegisterNativesUEMSAsyncWait()
	{
		UClass* Class = UEMSAsyncWait::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncWaitForOperation", &UEMSAsyncWait::execAsyncWaitForOperation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics
	{
		struct EMSAsyncWait_eventAsyncWaitForOperation_Parms
		{
			UObject* WorldContextObject;
			EAsyncCheckType CheckType;
			UEMSAsyncWait* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, CheckType), Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType, METADATA_PARAMS(nullptr, 0) }; // 1259784642
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncWait_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Wait until SaveGameActors or LoadGameActors have been completed.\n\x09* For example, this is useful if you want access loaded variables in a BeginPlay event instead of ActorLoaded.\n\x09* \n\x09* @param CheckType - The type of Async operation to wait for.\n\x09*/" },
		{ "CPP_Default_CheckType", "CT_Load" },
		{ "DisplayName", "Wait For Save or Load Completed" },
		{ "ModuleRelativePath", "Public/EMSAsyncWait.h" },
		{ "ToolTip", "Wait until SaveGameActors or LoadGameActors have been completed.\nFor example, this is useful if you want access loaded variables in a BeginPlay event instead of ActorLoaded.\n\n@param CheckType - The type of Async operation to wait for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncWait, nullptr, "AsyncWaitForOperation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::EMSAsyncWait_eventAsyncWaitForOperation_Parms), Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncWait);
	UClass* Z_Construct_UClass_UEMSAsyncWait_NoRegister()
	{
		return UEMSAsyncWait::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSAsyncWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncWait_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation, "AsyncWaitForOperation" }, // 3769756728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncWait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncWait.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncWait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncWait.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncWait, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted_MetaData)) }; // 598397612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncWait.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncWait, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncWait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncWait_Statics::ClassParams = {
		&UEMSAsyncWait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncWait()
	{
		if (!Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton, Z_Construct_UClass_UEMSAsyncWait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncWait>()
	{
		return UEMSAsyncWait::StaticClass();
	}
	UEMSAsyncWait::UEMSAsyncWait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncWait);
	UEMSAsyncWait::~UEMSAsyncWait() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncWait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncWait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncWait, UEMSAsyncWait::StaticClass, TEXT("UEMSAsyncWait"), &Z_Registration_Info_UClass_UEMSAsyncWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncWait), 3037433601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncWait_h_14386471(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncWait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
