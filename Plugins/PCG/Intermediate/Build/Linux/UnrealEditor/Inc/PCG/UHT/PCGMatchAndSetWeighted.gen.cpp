// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MatchAndSet/PCGMatchAndSetWeighted.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMatchAndSetWeighted() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeighted();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry;
class UScriptStruct* FPCGMatchAndSetWeightedEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMatchAndSetWeightedEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMatchAndSetWeightedEntry>()
{
	return FPCGMatchAndSetWeightedEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMatchAndSetWeightedEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetWeightedEntry, Value), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Value_MetaData)) }; // 2434566560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Relative weight of this entry */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ToolTip", "Relative weight of this entry" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMatchAndSetWeightedEntry, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMatchAndSetWeightedEntry",
		sizeof(FPCGMatchAndSetWeightedEntry),
		alignof(FPCGMatchAndSetWeightedEntry),
		Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry.InnerSingleton;
	}
	void UPCGMatchAndSetWeighted::StaticRegisterNativesUPCGMatchAndSetWeighted()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMatchAndSetWeighted);
	UClass* Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister()
	{
		return UPCGMatchAndSetWeighted::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMutateSeed_MetaData[];
#endif
		static void NewProp_bShouldMutateSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMutateSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMatchAndSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* This Match & Set object assigns randomly a value based on weighted ratios,\n* provided in the entries.\n*/" },
		{ "IncludePath", "MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ToolTip", "This Match & Set object assigns randomly a value based on weighted ratios,\nprovided in the entries." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry, METADATA_PARAMS(nullptr, 0) }; // 2396461834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Values and their respective weights */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ToolTip", "Values and their respective weights" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetWeighted, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries_MetaData)) }; // 2396461834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether the output data should mutate its seed - prevents issues when doing multiple random processes in a row */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetWeighted.h" },
		{ "ToolTip", "Controls whether the output data should mutate its seed - prevents issues when doing multiple random processes in a row" },
	};
#endif
	void Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed_SetBit(void* Obj)
	{
		((UPCGMatchAndSetWeighted*)Obj)->bShouldMutateSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed = { "bShouldMutateSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMatchAndSetWeighted), &Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::NewProp_bShouldMutateSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMatchAndSetWeighted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::ClassParams = {
		&UPCGMatchAndSetWeighted::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMatchAndSetWeighted()
	{
		if (!Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.OuterSingleton, Z_Construct_UClass_UPCGMatchAndSetWeighted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMatchAndSetWeighted>()
	{
		return UPCGMatchAndSetWeighted::StaticClass();
	}
	UPCGMatchAndSetWeighted::UPCGMatchAndSetWeighted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMatchAndSetWeighted);
	UPCGMatchAndSetWeighted::~UPCGMatchAndSetWeighted() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ScriptStructInfo[] = {
		{ FPCGMatchAndSetWeightedEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry_Statics::NewStructOps, TEXT("PCGMatchAndSetWeightedEntry"), &Z_Registration_Info_UScriptStruct_PCGMatchAndSetWeightedEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMatchAndSetWeightedEntry), 2396461834U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMatchAndSetWeighted, UPCGMatchAndSetWeighted::StaticClass, TEXT("UPCGMatchAndSetWeighted"), &Z_Registration_Info_UClass_UPCGMatchAndSetWeighted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMatchAndSetWeighted), 4035995855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_2788567842(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetWeighted_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
