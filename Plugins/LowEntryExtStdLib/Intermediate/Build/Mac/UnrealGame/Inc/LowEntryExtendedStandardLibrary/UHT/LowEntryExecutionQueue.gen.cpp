// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/LowEntryExecutionQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryExecutionQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryExecutionQueue();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryExecutionQueue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	void ULowEntryExecutionQueue::StaticRegisterNativesULowEntryExecutionQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryExecutionQueue);
	UClass* Z_Construct_UClass_ULowEntryExecutionQueue_NoRegister()
	{
		return ULowEntryExecutionQueue::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryExecutionQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static void NewProp_Next_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Next;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryExecutionQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryExecutionQueue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryExecutionQueue.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULowEntryExecutionQueue, Count), METADATA_PARAMS(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
#endif
	void Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_SetBit(void* Obj)
	{
		((ULowEntryExecutionQueue*)Obj)->Next = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULowEntryExecutionQueue), &Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryExecutionQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryExecutionQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::ClassParams = {
		&ULowEntryExecutionQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryExecutionQueue()
	{
		if (!Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton, Z_Construct_UClass_ULowEntryExecutionQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryExecutionQueue>()
	{
		return ULowEntryExecutionQueue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryExecutionQueue);
	ULowEntryExecutionQueue::~ULowEntryExecutionQueue() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryExecutionQueue, ULowEntryExecutionQueue::StaticClass, TEXT("ULowEntryExecutionQueue"), &Z_Registration_Info_UClass_ULowEntryExecutionQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryExecutionQueue), 356147097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h_4097202553(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
