// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCSubsystem();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	DEFINE_FUNCTION(UUGCSubsystem::execUgcRegistry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUGCRegistry**)Z_Param__Result=P_THIS->UgcRegistry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCSubsystem::execGetUgcRegistry)
	{
		P_GET_OBJECT_REF(UUGCRegistry,Z_Param_Out_UgcRegistry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUgcRegistry(Z_Param_Out_UgcRegistry);
		P_NATIVE_END;
	}
	void UUGCSubsystem::StaticRegisterNativesUUGCSubsystem()
	{
		UClass* Class = UUGCSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUgcRegistry", &UUGCSubsystem::execGetUgcRegistry },
			{ "UgcRegistry", &UUGCSubsystem::execUgcRegistry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics
	{
		struct UGCSubsystem_eventGetUgcRegistry_Parms
		{
			UUGCRegistry* UgcRegistry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UgcRegistry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::NewProp_UgcRegistry = { "UgcRegistry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCSubsystem_eventGetUgcRegistry_Parms, UgcRegistry), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::NewProp_UgcRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCSubsystem, nullptr, "GetUgcRegistry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::UGCSubsystem_eventGetUgcRegistry_Parms), Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics
	{
		struct UGCSubsystem_eventUgcRegistry_Parms
		{
			UUGCRegistry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCSubsystem_eventUgcRegistry_Parms, ReturnValue), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCSubsystem, nullptr, "UgcRegistry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::UGCSubsystem_eventUgcRegistry_Parms), Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCSubsystem_UgcRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUGCSubsystem);
	UClass* Z_Construct_UClass_UUGCSubsystem_NoRegister()
	{
		return UUGCSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUGCSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UgcRegistryInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UgcRegistryInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry, "GetUgcRegistry" }, // 4091355596
		{ &Z_Construct_UFunction_UUGCSubsystem_UgcRegistry, "UgcRegistry" }, // 1404211384
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UGCSubsystem.h" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance_MetaData[] = {
		{ "Comment", "// The Registry that holds information about UGC and assigned class overrides\n" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
		{ "ToolTip", "The Registry that holds information about UGC and assigned class overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance = { "UgcRegistryInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGCSubsystem, UgcRegistryInstance), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCSubsystem_Statics::ClassParams = {
		&UUGCSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton, Z_Construct_UClass_UUGCSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCSubsystem>()
	{
		return UUGCSubsystem::StaticClass();
	}
	UUGCSubsystem::UUGCSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCSubsystem);
	UUGCSubsystem::~UUGCSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUGCSubsystem, UUGCSubsystem::StaticClass, TEXT("UUGCSubsystem"), &Z_Registration_Info_UClass_UUGCSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCSubsystem), 2514245721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_1686803206(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
