// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGActorSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGActorSelector() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGActorFilter();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGActorSelection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGActorSelection;
	static UEnum* EPCGActorSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGActorSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGActorSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGActorSelection, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGActorSelection"));
		}
		return Z_Registration_Info_UEnum_EPCGActorSelection.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGActorSelection>()
	{
		return EPCGActorSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGActorSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enumerators[] = {
		{ "EPCGActorSelection::ByTag", (int64)EPCGActorSelection::ByTag },
		{ "EPCGActorSelection::ByName", (int64)EPCGActorSelection::ByName },
		{ "EPCGActorSelection::ByClass", (int64)EPCGActorSelection::ByClass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enum_MetaDataParams[] = {
		{ "ByClass.Name", "EPCGActorSelection::ByClass" },
		{ "ByName.Comment", "// Deprecated - actor labels are unavailable in shipping builds\n" },
		{ "ByName.Hidden", "" },
		{ "ByName.Name", "EPCGActorSelection::ByName" },
		{ "ByName.ToolTip", "Deprecated - actor labels are unavailable in shipping builds" },
		{ "ByTag.Name", "EPCGActorSelection::ByTag" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGActorSelection",
		"EPCGActorSelection",
		Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGActorSelection()
	{
		if (!Z_Registration_Info_UEnum_EPCGActorSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGActorSelection.InnerSingleton, Z_Construct_UEnum_PCG_EPCGActorSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGActorSelection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGActorFilter;
	static UEnum* EPCGActorFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGActorFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGActorFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGActorFilter, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGActorFilter"));
		}
		return Z_Registration_Info_UEnum_EPCGActorFilter.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGActorFilter>()
	{
		return EPCGActorFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGActorFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enumerators[] = {
		{ "EPCGActorFilter::Self", (int64)EPCGActorFilter::Self },
		{ "EPCGActorFilter::Parent", (int64)EPCGActorFilter::Parent },
		{ "EPCGActorFilter::Root", (int64)EPCGActorFilter::Root },
		{ "EPCGActorFilter::AllWorldActors", (int64)EPCGActorFilter::AllWorldActors },
		{ "EPCGActorFilter::Original", (int64)EPCGActorFilter::Original },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enum_MetaDataParams[] = {
		{ "AllWorldActors.Comment", "/** All actors in world. */" },
		{ "AllWorldActors.Name", "EPCGActorFilter::AllWorldActors" },
		{ "AllWorldActors.ToolTip", "All actors in world." },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
		{ "Original.Comment", "/** The source PCG actor (rather than the generated partition actor). */" },
		{ "Original.Name", "EPCGActorFilter::Original" },
		{ "Original.ToolTip", "The source PCG actor (rather than the generated partition actor)." },
		{ "Parent.Comment", "/** The parent of this actor in the hierarchy. */" },
		{ "Parent.Name", "EPCGActorFilter::Parent" },
		{ "Parent.ToolTip", "The parent of this actor in the hierarchy." },
		{ "Root.Comment", "/** The top most parent of this actor in the hierarchy. */" },
		{ "Root.Name", "EPCGActorFilter::Root" },
		{ "Root.ToolTip", "The top most parent of this actor in the hierarchy." },
		{ "Self.Comment", "/** This actor (either the original PCG actor or the partition actor if partitioning is enabled). */" },
		{ "Self.Name", "EPCGActorFilter::Self" },
		{ "Self.ToolTip", "This actor (either the original PCG actor or the partition actor if partitioning is enabled)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGActorFilter",
		"EPCGActorFilter",
		Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGActorFilter()
	{
		if (!Z_Registration_Info_UEnum_EPCGActorFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGActorFilter.InnerSingleton, Z_Construct_UEnum_PCG_EPCGActorFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGActorFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings;
class UScriptStruct* FPCGActorSelectorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGActorSelectorSettings, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGActorSelectorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGActorSelectorSettings>()
{
	return FPCGActorSelectorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMustOverlapSelf_MetaData[];
#endif
		static void NewProp_bMustOverlapSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustOverlapSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildren_MetaData[];
#endif
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFilter_MetaData[];
#endif
		static void NewProp_bDisableFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelectionTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorSelectionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelectionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorSelectionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectMultiple_MetaData[];
#endif
		static void NewProp_bSelectMultiple_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectMultiple;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGActorSelectorSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which actors to consider. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
		{ "ToolTip", "Which actors to consider." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorSelectorSettings, ActorFilter), Z_Construct_UEnum_PCG_EPCGActorFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter_MetaData)) }; // 3353737086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ActorFilter==EPCGActorFilter::AllWorldActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf_SetBit(void* Obj)
	{
		((FPCGActorSelectorSettings*)Obj)->bMustOverlapSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf = { "bMustOverlapSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGActorSelectorSettings), &Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to consider child actors. */" },
		{ "EditCondition", "ActorFilter!=EPCGActorFilter::AllWorldActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
		{ "ToolTip", "Whether to consider child actors." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((FPCGActorSelectorSettings*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGActorSelectorSettings), &Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enables/disables fine-grained actor filtering options. */" },
		{ "EditCondition", "ActorFilter!=EPCGActorFilter::AllWorldActors && bIncludeChildren" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
		{ "ToolTip", "Enables/disables fine-grained actor filtering options." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter_SetBit(void* Obj)
	{
		((FPCGActorSelectorSettings*)Obj)->bDisableFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter = { "bDisableFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGActorSelectorSettings), &Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "(ActorFilter==EPCGActorFilter::AllWorldActors || (bIncludeChildren && !bDisableFilter))" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection = { "ActorSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorSelectorSettings, ActorSelection), Z_Construct_UEnum_PCG_EPCGActorSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection_MetaData)) }; // 1108082229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "(ActorFilter==EPCGActorFilter::AllWorldActors || (bIncludeChildren && !bDisableFilter)) && ActorSelection==EPCGActorSelection::ByTag" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionTag = { "ActorSelectionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorSelectorSettings, ActorSelectionTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionClass_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "Settings" },
		{ "EditCondition", "(ActorFilter==EPCGActorFilter::AllWorldActors || (bIncludeChildren && !bDisableFilter)) && ActorSelection==EPCGActorSelection::ByClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionClass = { "ActorSelectionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorSelectorSettings, ActorSelectionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true processes all matching actors, otherwise returns data from first match. */" },
		{ "EditCondition", "ActorFilter==EPCGActorFilter::AllWorldActors && ActorSelection!=EPCGActorSelection::ByName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGActorSelector.h" },
		{ "ToolTip", "If true processes all matching actors, otherwise returns data from first match." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple_SetBit(void* Obj)
	{
		((FPCGActorSelectorSettings*)Obj)->bSelectMultiple = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple = { "bSelectMultiple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGActorSelectorSettings), &Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bMustOverlapSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bDisableFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_ActorSelectionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewProp_bSelectMultiple,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGActorSelectorSettings",
		sizeof(FPCGActorSelectorSettings),
		alignof(FPCGActorSelectorSettings),
		Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::EnumInfo[] = {
		{ EPCGActorSelection_StaticEnum, TEXT("EPCGActorSelection"), &Z_Registration_Info_UEnum_EPCGActorSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1108082229U) },
		{ EPCGActorFilter_StaticEnum, TEXT("EPCGActorFilter"), &Z_Registration_Info_UEnum_EPCGActorFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3353737086U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::ScriptStructInfo[] = {
		{ FPCGActorSelectorSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics::NewStructOps, TEXT("PCGActorSelectorSettings"), &Z_Registration_Info_UScriptStruct_PCGActorSelectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGActorSelectorSettings), 1237266657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_3724484113(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
