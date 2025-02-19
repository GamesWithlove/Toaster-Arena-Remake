// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h"
#include "PCG/Public/MatchAndSet/PCGMatchAndSetWeighted.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMatchAndSetWeightedByCategory() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList;
class UScriptStruct* FPCGMatchAndSetWeightedByCategoryEntryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMatchAndSetWeightedByCategoryEntryList"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMatchAndSetWeightedByCategoryEntryList>()
{
	return FPCGMatchAndSetWeightedByCategoryEntryList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightedEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightedEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightedEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMatchAndSetWeightedByCategoryEntryList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_CategoryValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_CategoryValue = { "CategoryValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetWeightedByCategoryEntryList, CategoryValue), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_CategoryValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_CategoryValue_MetaData)) }; // 2434566560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the category is the default, if the input does not match to anything, it will use this category. */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "If the category is the default, if the input does not match to anything, it will use this category." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((FPCGMatchAndSetWeightedByCategoryEntryList*)Obj)->bIsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGMatchAndSetWeightedByCategoryEntryList), &Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries_Inner = { "WeightedEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry, METADATA_PARAMS(nullptr, 0) }; // 2396461834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Values and their weights */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "Values and their weights" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries = { "WeightedEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetWeightedByCategoryEntryList, WeightedEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries_MetaData)) }; // 2396461834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_CategoryValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_bIsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewProp_WeightedEntries,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMatchAndSetWeightedByCategoryEntryList",
		sizeof(FPCGMatchAndSetWeightedByCategoryEntryList),
		alignof(FPCGMatchAndSetWeightedByCategoryEntryList),
		Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.InnerSingleton, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList.InnerSingleton;
	}
	void UPCGMatchAndSetWeightedByCategory::StaticRegisterNativesUPCGMatchAndSetWeightedByCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMatchAndSetWeightedByCategory);
	UClass* Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_NoRegister()
	{
		return UPCGMatchAndSetWeightedByCategory::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CategoryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CategoryType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CategoryStringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryStringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CategoryStringMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMutateSeed_MetaData[];
#endif
		static void NewProp_bShouldMutateSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMutateSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMatchAndSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to match against */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "Attribute to match against" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryAttribute = { "CategoryAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetWeightedByCategory, CategoryAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryAttribute_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of the attribute to match against. */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "Type of the attribute to match against." },
		{ "ValidEnumValues", "Float, Double, Integer32, Integer64, Vector2, Vector, Vector4, Quaternion, Transform, String, Boolean, Rotator, Name" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType = { "CategoryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetWeightedByCategory, CategoryType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType_MetaData)) }; // 168356382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** String subtype of the attribute to match against (if required). */" },
		{ "EditCondition", "CategoryType == EPCGMetadataTypes::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "String subtype of the attribute to match against (if required)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode = { "CategoryStringMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetWeightedByCategory, CategoryStringMode), Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode_MetaData)) }; // 1744614167
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList, METADATA_PARAMS(nullptr, 0) }; // 3272631182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Lookup entries (key -> weighted list) */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "Lookup entries (key -> weighted list)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetWeightedByCategory, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories_MetaData)) }; // 3272631182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether the output data should mutate its seed - prevents issues when doing multiple random processes in a row */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeightedByCategory.h" },
		{ "ToolTip", "Controls whether the output data should mutate its seed - prevents issues when doing multiple random processes in a row" },
	};
#endif
	void Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed_SetBit(void* Obj)
	{
		((UPCGMatchAndSetWeightedByCategory*)Obj)->bShouldMutateSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed = { "bShouldMutateSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMatchAndSetWeightedByCategory), &Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_CategoryStringMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::NewProp_bShouldMutateSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMatchAndSetWeightedByCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::ClassParams = {
		&UPCGMatchAndSetWeightedByCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory()
	{
		if (!Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.OuterSingleton, Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMatchAndSetWeightedByCategory>()
	{
		return UPCGMatchAndSetWeightedByCategory::StaticClass();
	}
	UPCGMatchAndSetWeightedByCategory::UPCGMatchAndSetWeightedByCategory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMatchAndSetWeightedByCategory);
	UPCGMatchAndSetWeightedByCategory::~UPCGMatchAndSetWeightedByCategory() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ScriptStructInfo[] = {
		{ FPCGMatchAndSetWeightedByCategoryEntryList::StaticStruct, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList_Statics::NewStructOps, TEXT("PCGMatchAndSetWeightedByCategoryEntryList"), &Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedByCategoryEntryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMatchAndSetWeightedByCategoryEntryList), 3272631182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMatchAndSetWeightedByCategory, UPCGMatchAndSetWeightedByCategory::StaticClass, TEXT("UPCGMatchAndSetWeightedByCategory"), &Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMatchAndSetWeightedByCategory), 132471258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_2815910160(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeightedByCategory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
