// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncStream.h"
#include "EasyMultiSave/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncStream() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	DEFINE_FUNCTION(UEMSAsyncStream::execInitStreamingLoadTask)
	{
		P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
		P_GET_OBJECT(ULevel,Z_Param_InLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSAsyncStream::InitStreamingLoadTask(Z_Param_EMSObject,Z_Param_InLevel);
		P_NATIVE_END;
	}
	void UEMSAsyncStream::StaticRegisterNativesUEMSAsyncStream()
	{
		UClass* Class = UEMSAsyncStream::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitStreamingLoadTask", &UEMSAsyncStream::execInitStreamingLoadTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics
	{
		struct EMSAsyncStream_eventInitStreamingLoadTask_Parms
		{
			UEMSObject* EMSObject;
			const ULevel* InLevel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel_MetaData)) };
	void Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSAsyncStream_eventInitStreamingLoadTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSAsyncStream_eventInitStreamingLoadTask_Parms), &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncStream, nullptr, "InitStreamingLoadTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::EMSAsyncStream_eventInitStreamingLoadTask_Parms), Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncStream);
	UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister()
	{
		return UEMSAsyncStream::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncStream_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamActors;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StreamActorsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StreamActorsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamActorsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StreamActorsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrunedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrunedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSAsyncStream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncStream_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask, "InitStreamingLoadTask" }, // 3369187208
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncStream.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncStream, StreamingLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncStream, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors_Inner = { "StreamActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors = { "StreamActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncStream, StreamActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp = { "StreamActorsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncStream, StreamActorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncStream.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData = { "PrunedData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncStream, PrunedData), Z_Construct_UScriptStruct_FMultiLevelStreamingData, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData_MetaData)) }; // 3024221988
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncStream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncStream>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncStream()
	{
		if (!Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton, Z_Construct_UClass_UEMSAsyncStream_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncStream>()
	{
		return UEMSAsyncStream::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncStream);
	UEMSAsyncStream::~UEMSAsyncStream() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncStream, UEMSAsyncStream::StaticClass, TEXT("UEMSAsyncStream"), &Z_Registration_Info_UClass_UEMSAsyncStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncStream), 430178980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncStream_h_381015773(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
