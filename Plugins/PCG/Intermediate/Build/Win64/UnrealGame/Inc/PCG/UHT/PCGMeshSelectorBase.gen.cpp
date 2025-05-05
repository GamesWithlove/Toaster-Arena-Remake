// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorBase.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMeshSelectorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshInstanceList();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMeshInstanceList;
class UScriptStruct* FPCGMeshInstanceList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMeshInstanceList, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMeshInstanceList"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMeshInstanceList>()
{
	return FPCGMeshInstanceList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InstancesMetadataEntry_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesMetadataEntry_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesMetadataEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMeshInstanceList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshInstanceList, Descriptor), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Descriptor_MetaData)) }; // 3422159586
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshInstanceList, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry_Inner = { "InstancesMetadataEntry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry = { "InstancesMetadataEntry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshInstanceList, InstancesMetadataEntry), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewProp_InstancesMetadataEntry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMeshInstanceList",
		sizeof(FPCGMeshInstanceList),
		alignof(FPCGMeshInstanceList),
		Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshInstanceList()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.InnerSingleton, Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMeshInstanceList.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode;
	static UEnum* EPCGMeshSelectorMaterialOverrideMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMeshSelectorMaterialOverrideMode"));
		}
		return Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMeshSelectorMaterialOverrideMode>()
	{
		return EPCGMeshSelectorMaterialOverrideMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enumerators[] = {
		{ "EPCGMeshSelectorMaterialOverrideMode::NoOverride", (int64)EPCGMeshSelectorMaterialOverrideMode::NoOverride },
		{ "EPCGMeshSelectorMaterialOverrideMode::StaticOverride", (int64)EPCGMeshSelectorMaterialOverrideMode::StaticOverride },
		{ "EPCGMeshSelectorMaterialOverrideMode::ByAttributeOverride", (int64)EPCGMeshSelectorMaterialOverrideMode::ByAttributeOverride },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enum_MetaDataParams[] = {
		{ "ByAttributeOverride.Name", "EPCGMeshSelectorMaterialOverrideMode::ByAttributeOverride" },
		{ "ByAttributeOverride.Tooltip", "Applies the materials overrides using the point data attribute(s) specified in the By Attribute Material Overrides array" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
		{ "NoOverride.Name", "EPCGMeshSelectorMaterialOverrideMode::NoOverride" },
		{ "NoOverride.Tooltip", "Does not apply any material overrides to the spawned mesh(es)" },
		{ "StaticOverride.Name", "EPCGMeshSelectorMaterialOverrideMode::StaticOverride" },
		{ "StaticOverride.Tooltip", "Applies the material overrides provided in the Static Material Overrides array" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMeshSelectorMaterialOverrideMode",
		"EPCGMeshSelectorMaterialOverrideMode",
		Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode.InnerSingleton;
	}
	void UPCGMeshSelectorBase::StaticRegisterNativesUPCGMeshSelectorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMeshSelectorBase);
	UClass* Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister()
	{
		return UPCGMeshSelectorBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMeshSelectorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMeshSelectorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "MeshSelectors/PCGMeshSelectorBase.h" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMeshSelectorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMeshSelectorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMeshSelectorBase_Statics::ClassParams = {
		&UPCGMeshSelectorBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMeshSelectorBase()
	{
		if (!Z_Registration_Info_UClass_UPCGMeshSelectorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMeshSelectorBase.OuterSingleton, Z_Construct_UClass_UPCGMeshSelectorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMeshSelectorBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMeshSelectorBase>()
	{
		return UPCGMeshSelectorBase::StaticClass();
	}
	UPCGMeshSelectorBase::UPCGMeshSelectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMeshSelectorBase);
	UPCGMeshSelectorBase::~UPCGMeshSelectorBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::EnumInfo[] = {
		{ EPCGMeshSelectorMaterialOverrideMode_StaticEnum, TEXT("EPCGMeshSelectorMaterialOverrideMode"), &Z_Registration_Info_UEnum_EPCGMeshSelectorMaterialOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3712772696U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ScriptStructInfo[] = {
		{ FPCGMeshInstanceList::StaticStruct, Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics::NewStructOps, TEXT("PCGMeshInstanceList"), &Z_Registration_Info_UScriptStruct_PCGMeshInstanceList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMeshInstanceList), 3800292760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMeshSelectorBase, UPCGMeshSelectorBase::StaticClass, TEXT("UPCGMeshSelectorBase"), &Z_Registration_Info_UClass_UPCGMeshSelectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMeshSelectorBase), 4065662563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_3950885022(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
