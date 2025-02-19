// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MatchAndSet/PCGMatchAndSetByAttribute.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMatchAndSetByAttribute() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetByAttribute();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetByAttribute_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry;
class UScriptStruct* FPCGMatchAndSetByAttributeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMatchAndSetByAttributeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMatchAndSetByAttributeEntry>()
{
	return FPCGMatchAndSetByAttributeEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMatchAndSetByAttributeEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_ValueToMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetByAttributeEntry, ValueToMatch), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_ValueToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_ValueToMatch_MetaData)) }; // 2434566560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetByAttributeEntry, Value), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_Value_MetaData)) }; // 2434566560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_ValueToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMatchAndSetByAttributeEntry",
		sizeof(FPCGMatchAndSetByAttributeEntry),
		alignof(FPCGMatchAndSetByAttributeEntry),
		Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry.InnerSingleton;
	}
	void UPCGMatchAndSetByAttribute::StaticRegisterNativesUPCGMatchAndSetByAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMatchAndSetByAttribute);
	UClass* Z_Construct_UClass_UPCGMatchAndSetByAttribute_NoRegister()
	{
		return UPCGMatchAndSetByAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSourceAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchSourceAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchSourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchSourceType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MatchSourceStringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSourceStringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchSourceStringMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMatchAndSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** \n* This Match & Set object looks up an attribute on a given point,\n* then looks up its entries to find a match; if there is one, then it sets it value. \n*/" },
		{ "IncludePath", "MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ToolTip", "This Match & Set object looks up an attribute on a given point,\nthen looks up its entries to find a match; if there is one, then it sets it value." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to match on the data */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ToolTip", "Attribute to match on the data" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceAttribute = { "MatchSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetByAttribute, MatchSourceAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceAttribute_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of the attribute to match against. */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ToolTip", "Type of the attribute to match against." },
		{ "ValidEnumValues", "Float, Double, Integer32, Integer64, Vector2, Vector, Vector4, Quaternion, Transform, String, Boolean, Rotator, Name" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType = { "MatchSourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetByAttribute, MatchSourceType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType_MetaData)) }; // 168356382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** String type of the attribute to match against (if required). */" },
		{ "EditCondition", "MatchSourceType == EPCGMetadataTypes::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ToolTip", "String type of the attribute to match against (if required)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode = { "MatchSourceStringMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetByAttribute, MatchSourceStringMode), Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode_MetaData)) }; // 1744614167
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry, METADATA_PARAMS(nullptr, 0) }; // 4121710664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Lookup entries (key-value pairs) */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetByAttribute.h" },
		{ "ToolTip", "Lookup entries (key-value pairs)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetByAttribute, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries_MetaData)) }; // 4121710664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_MatchSourceStringMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMatchAndSetByAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::ClassParams = {
		&UPCGMatchAndSetByAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMatchAndSetByAttribute()
	{
		if (!Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.OuterSingleton, Z_Construct_UClass_UPCGMatchAndSetByAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMatchAndSetByAttribute>()
	{
		return UPCGMatchAndSetByAttribute::StaticClass();
	}
	UPCGMatchAndSetByAttribute::UPCGMatchAndSetByAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMatchAndSetByAttribute);
	UPCGMatchAndSetByAttribute::~UPCGMatchAndSetByAttribute() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ScriptStructInfo[] = {
		{ FPCGMatchAndSetByAttributeEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry_Statics::NewStructOps, TEXT("PCGMatchAndSetByAttributeEntry"), &Z_Registration_Info_UScriptStruct_PCGMatchAndSetByAttributeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMatchAndSetByAttributeEntry), 4121710664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMatchAndSetByAttribute, UPCGMatchAndSetByAttribute::StaticClass, TEXT("UPCGMatchAndSetByAttribute"), &Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMatchAndSetByAttribute), 1426004262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_2781660419(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetByAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
