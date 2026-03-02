// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCBaseGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCBaseGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	void UUGCBaseGameInstance::StaticRegisterNativesUUGCBaseGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUGCBaseGameInstance);
	UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister()
	{
		return UUGCBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UUGCBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UGCRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UGCRegistry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UGCBaseGameInstance.h" },
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// The Registry that holds information about UGC and assigned class overrides\n" },
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
		{ "ToolTip", "The Registry that holds information about UGC and assigned class overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry = { "UGCRegistry", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGCBaseGameInstance, UGCRegistry), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBaseGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams = {
		&UUGCBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCBaseGameInstance()
	{
		if (!Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton, Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCBaseGameInstance>()
	{
		return UUGCBaseGameInstance::StaticClass();
	}
	UUGCBaseGameInstance::UUGCBaseGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCBaseGameInstance);
	UUGCBaseGameInstance::~UUGCBaseGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUGCBaseGameInstance, UUGCBaseGameInstance::StaticClass, TEXT("UUGCBaseGameInstance"), &Z_Registration_Info_UClass_UUGCBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCBaseGameInstance), 2072093477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_3358556148(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
