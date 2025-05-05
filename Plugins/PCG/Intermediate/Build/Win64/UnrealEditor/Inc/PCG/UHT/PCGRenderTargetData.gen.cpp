// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGRenderTargetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGRenderTargetData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseTextureData();
	PCG_API UClass* Z_Construct_UClass_UPCGRenderTargetData();
	PCG_API UClass* Z_Construct_UClass_UPCGRenderTargetData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGRenderTargetData::execInitialize)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InRenderTarget,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	void UPCGRenderTargetData::StaticRegisterNativesUPCGRenderTargetData()
	{
		UClass* Class = UPCGRenderTargetData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UPCGRenderTargetData::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics
	{
		struct PCGRenderTargetData_eventInitialize_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FTransform InTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGRenderTargetData_eventInitialize_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGRenderTargetData_eventInitialize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RenderTarget" },
		{ "ModuleRelativePath", "Public/Data/PCGRenderTargetData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGRenderTargetData, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::PCGRenderTargetData_eventInitialize_Parms), Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGRenderTargetData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRenderTargetData);
	UClass* Z_Construct_UClass_UPCGRenderTargetData_NoRegister()
	{
		return UPCGRenderTargetData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGRenderTargetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGRenderTargetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseTextureData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGRenderTargetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGRenderTargetData_Initialize, "Initialize" }, // 2656354591
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGRenderTargetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "//TODO: It's possible that caching the result in this class is not as efficient as it could be\n// if we expect to sample in different ways (e.g. channel) in the same render target\n" },
		{ "IncludePath", "Data/PCGRenderTargetData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGRenderTargetData.h" },
		{ "ToolTip", "TODO: It's possible that caching the result in this class is not as efficient as it could be\n if we expect to sample in different ways (e.g. channel) in the same render target" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Data/PCGRenderTargetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGRenderTargetData, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGRenderTargetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGRenderTargetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRenderTargetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRenderTargetData_Statics::ClassParams = {
		&UPCGRenderTargetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGRenderTargetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRenderTargetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGRenderTargetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRenderTargetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGRenderTargetData()
	{
		if (!Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton, Z_Construct_UClass_UPCGRenderTargetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGRenderTargetData>()
	{
		return UPCGRenderTargetData::StaticClass();
	}
	UPCGRenderTargetData::UPCGRenderTargetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRenderTargetData);
	UPCGRenderTargetData::~UPCGRenderTargetData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRenderTargetData, UPCGRenderTargetData::StaticClass, TEXT("UPCGRenderTargetData"), &Z_Registration_Info_UClass_UPCGRenderTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRenderTargetData), 2821502669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_3831305636(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
