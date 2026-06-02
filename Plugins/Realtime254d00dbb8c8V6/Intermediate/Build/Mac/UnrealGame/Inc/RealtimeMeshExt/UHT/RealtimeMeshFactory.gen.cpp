// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/RealtimeMeshFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshFactory();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshFactory_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshFactoryParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshFactoryParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PramsName_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_PramsName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshFactoryParams constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshFactoryParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams;
class UScriptStruct* FRealtimeMeshFactoryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshFactoryParams"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::NewProp_PramsName = { "PramsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshFactoryParams, PramsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PramsName_MetaData), NewProp_PramsName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::NewProp_PramsName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshFactoryParams Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshFactoryParams",
	Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::PropPointers),
	sizeof(FRealtimeMeshFactoryParams),
	alignof(FRealtimeMeshFactoryParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshFactoryParams ******************************************

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams3d **************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshFactoryParams3d); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshFactoryParams3d); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams3d constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshFactoryParams3d constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshFactoryParams3d>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics
static_assert(std::is_polymorphic<FRealtimeMeshFactoryParams3d>() == std::is_polymorphic<FRealtimeMeshFactoryParams>(), "USTRUCT FRealtimeMeshFactoryParams3d cannot be polymorphic unless super FRealtimeMeshFactoryParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d;
class UScriptStruct* FRealtimeMeshFactoryParams3d::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshFactoryParams3d"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshFactoryParams3d Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshFactoryParams3d, Dimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::NewProp_Dimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshFactoryParams3d Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams,
	&NewStructOps,
	"RealtimeMeshFactoryParams3d",
	Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::PropPointers),
	sizeof(FRealtimeMeshFactoryParams3d),
	alignof(FRealtimeMeshFactoryParams3d),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshFactoryParams3d ****************************************

// ********** Begin Class URealtimeMeshFactory *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshFactory;
UClass* URealtimeMeshFactory::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshFactory;
	if (!Z_Registration_Info_UClass_URealtimeMeshFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshFactory"),
			Z_Registration_Info_UClass_URealtimeMeshFactory.InnerSingleton,
			StaticRegisterNativesURealtimeMeshFactory,
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
	return Z_Registration_Info_UClass_URealtimeMeshFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshFactory_NoRegister()
{
	return URealtimeMeshFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Factory/RealtimeMeshFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshFactory constinit property declarations *********************
// ********** End Class URealtimeMeshFactory constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshFactory_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshFactory_Statics::ClassParams = {
	&URealtimeMeshFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshFactory_Statics::Class_MetaDataParams)
};
void URealtimeMeshFactory::StaticRegisterNativesURealtimeMeshFactory()
{
}
UClass* Z_Construct_UClass_URealtimeMeshFactory()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshFactory.OuterSingleton, Z_Construct_UClass_URealtimeMeshFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshFactory.OuterSingleton;
}
URealtimeMeshFactory::URealtimeMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshFactory);
URealtimeMeshFactory::~URealtimeMeshFactory() {}
// ********** End Class URealtimeMeshFactory *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshFactoryParams::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams_Statics::NewStructOps, TEXT("RealtimeMeshFactoryParams"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshFactoryParams), 2858872266U) },
		{ FRealtimeMeshFactoryParams3d::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshFactoryParams3d_Statics::NewStructOps, TEXT("RealtimeMeshFactoryParams3d"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryParams3d, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshFactoryParams3d), 1184474536U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshFactory, URealtimeMeshFactory::StaticClass, TEXT("URealtimeMeshFactory"), &Z_Registration_Info_UClass_URealtimeMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshFactory), 2598461787U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_1329338074{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshFactory_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
