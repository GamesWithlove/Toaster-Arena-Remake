// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorWeighted.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMeshSelectorWeightedByCategory() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList;
class UScriptStruct* FPCGWeightedByCategoryEntryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGWeightedByCategoryEntryList"));
	}
	return Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGWeightedByCategoryEntryList>()
{
	return FPCGWeightedByCategoryEntryList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryEntry_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDefault_MetaData[];
#endif
		static void NewProp_IsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDefault;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightedMeshEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightedMeshEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightedMeshEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGWeightedByCategoryEntryList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_CategoryEntry_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_CategoryEntry = { "CategoryEntry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWeightedByCategoryEntryList, CategoryEntry), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_CategoryEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_CategoryEntry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault_SetBit(void* Obj)
	{
		((FPCGWeightedByCategoryEntryList*)Obj)->IsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault = { "IsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWeightedByCategoryEntryList), &Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries_Inner = { "WeightedMeshEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry, METADATA_PARAMS(nullptr, 0) }; // 1393175173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries = { "WeightedMeshEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWeightedByCategoryEntryList, WeightedMeshEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries_MetaData)) }; // 1393175173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_CategoryEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_IsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewProp_WeightedMeshEntries,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGWeightedByCategoryEntryList",
		sizeof(FPCGWeightedByCategoryEntryList),
		alignof(FPCGWeightedByCategoryEntryList),
		Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.InnerSingleton, Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList.InnerSingleton;
	}
	void UPCGMeshSelectorWeightedByCategory::StaticRegisterNativesUPCGMeshSelectorWeightedByCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMeshSelectorWeightedByCategory);
	UClass* Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister()
	{
		return UPCGMeshSelectorWeightedByCategory::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryAttribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttributeMaterialOverrides_MetaData[];
#endif
		static void NewProp_bUseAttributeMaterialOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttributeMaterialOverrides;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialOverrideAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrideAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrideAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMeshSelectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_CategoryAttribute = { "CategoryAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorWeightedByCategory, CategoryAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList, METADATA_PARAMS(nullptr, 0) }; // 2916050025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorWeightedByCategory, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries_MetaData)) }; // 2916050025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit(void* Obj)
	{
		((UPCGMeshSelectorWeightedByCategory*)Obj)->bUseAttributeMaterialOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides = { "bUseAttributeMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSelectorWeightedByCategory), &Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes_Inner = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "By Attribute Material Overrides" },
		{ "EditCondition", "bUseAttributeMaterialOverrides" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeightedByCategory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorWeightedByCategory, MaterialOverrideAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_CategoryAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_bUseAttributeMaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::NewProp_MaterialOverrideAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMeshSelectorWeightedByCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::ClassParams = {
		&UPCGMeshSelectorWeightedByCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory()
	{
		if (!Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.OuterSingleton, Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMeshSelectorWeightedByCategory>()
	{
		return UPCGMeshSelectorWeightedByCategory::StaticClass();
	}
	UPCGMeshSelectorWeightedByCategory::UPCGMeshSelectorWeightedByCategory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMeshSelectorWeightedByCategory);
	UPCGMeshSelectorWeightedByCategory::~UPCGMeshSelectorWeightedByCategory() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ScriptStructInfo[] = {
		{ FPCGWeightedByCategoryEntryList::StaticStruct, Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics::NewStructOps, TEXT("PCGWeightedByCategoryEntryList"), &Z_Registration_Info_UScriptStruct_PCGWeightedByCategoryEntryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGWeightedByCategoryEntryList), 2916050025U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory, UPCGMeshSelectorWeightedByCategory::StaticClass, TEXT("UPCGMeshSelectorWeightedByCategory"), &Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMeshSelectorWeightedByCategory), 4139530601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_155361587(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
