// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSAsyncStream.h"
#include "EMSData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSAsyncStream() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorByteKey();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEMSAsyncStream Function InitStreamingLoadTask ***************************
struct Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics
{
	struct EMSAsyncStream_eventInitStreamingLoadTask_Parms
	{
		UEMSObject* EMSObject;
		const ULevel* InLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitStreamingLoadTask constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitStreamingLoadTask constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitStreamingLoadTask Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLevel_MetaData), NewProp_InLevel_MetaData) };
void Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSAsyncStream_eventInitStreamingLoadTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSAsyncStream_eventInitStreamingLoadTask_Parms), &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers) < 2048);
// ********** End Function InitStreamingLoadTask Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSAsyncStream, nullptr, "InitStreamingLoadTask", 	Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::EMSAsyncStream_eventInitStreamingLoadTask_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::EMSAsyncStream_eventInitStreamingLoadTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncStream::execInitStreamingLoadTask)
{
	P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
	P_GET_OBJECT(ULevel,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSAsyncStream::InitStreamingLoadTask(Z_Param_EMSObject,Z_Param_InLevel);
	P_NATIVE_END;
}
// ********** End Class UEMSAsyncStream Function InitStreamingLoadTask *****************************

// ********** Begin Class UEMSAsyncStream **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSAsyncStream;
UClass* UEMSAsyncStream::GetPrivateStaticClass()
{
	using TClass = UEMSAsyncStream;
	if (!Z_Registration_Info_UClass_UEMSAsyncStream.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSAsyncStream"),
			Z_Registration_Info_UClass_UEMSAsyncStream.InnerSingleton,
			StaticRegisterNativesUEMSAsyncStream,
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
	return Z_Registration_Info_UClass_UEMSAsyncStream.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister()
{
	return UEMSAsyncStream::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSAsyncStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/Public/EMSAsyncStream.h" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamActorsMap_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrunedActorData_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSAsyncStream constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StreamActorsMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamActorsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StreamActorsMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrunedActorData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrunedActorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSAsyncStream constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitStreamingLoadTask"), .Pointer = &UEMSAsyncStream::execInitStreamingLoadTask },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask, "InitStreamingLoadTask" }, // 867702416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSAsyncStream_Statics

// ********** Begin Class UEMSAsyncStream Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, StreamingLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingLevel_MetaData), NewProp_StreamingLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMS_MetaData), NewProp_EMS_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp = { "StreamActorsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorByteKey, METADATA_PARAMS(0, nullptr) }; // 768632040
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, StreamActorsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamActorsMap_MetaData), NewProp_StreamActorsMap_MetaData) }; // 768632040
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedActorData_Inner = { "PrunedActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedActorData = { "PrunedActorData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, PrunedActorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrunedActorData_MetaData), NewProp_PrunedActorData_MetaData) }; // 711273474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedActorData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedActorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers) < 2048);
// ********** End Class UEMSAsyncStream Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UEMSAsyncStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncStream_Statics::ClassParams = {
	&UEMSAsyncStream::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams)
};
void UEMSAsyncStream::StaticRegisterNativesUEMSAsyncStream()
{
	UClass* Class = UEMSAsyncStream::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSAsyncStream_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSAsyncStream()
{
	if (!Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton, Z_Construct_UClass_UEMSAsyncStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSAsyncStream);
UEMSAsyncStream::~UEMSAsyncStream() {}
// ********** End Class UEMSAsyncStream ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncStream, UEMSAsyncStream::StaticClass, TEXT("UEMSAsyncStream"), &Z_Registration_Info_UClass_UEMSAsyncStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncStream), 2651462153U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h__Script_EasyMultiSave_3233852080{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
